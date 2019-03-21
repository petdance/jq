#ifndef JV_UNICODE_H
#define JV_UNICODE_H

#ifndef FNPURE
#  define FNPURE  __attribute__((pure))
#endif

#ifndef FNCONST
#  define FNCONST __attribute__((pure,const))
#endif

const char* jvp_utf8_backtrack(const char* start, const char* min, int *missing_bytes);
const char* jvp_utf8_next(const char* in, const char* end, int* codepoint);
int jvp_utf8_is_valid(const char* in, const char* end);

FNCONST int jvp_utf8_decode_length(char startchar);

FNCONST int jvp_utf8_encode_length(int codepoint);
int jvp_utf8_encode(int codepoint, char* out);
#endif
