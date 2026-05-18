/*
 * XREFs of snprintf @ 0x18011F920
 * Callers:
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 * Callees:
 *     sub_18011DF90 @ 0x18011DF90 (sub_18011DF90.c)
 *     _o___stdio_common_vsprintf @ 0x18011DFE7 (_o___stdio_common_vsprintf.c)
 */

int snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  sub_18011DF90();
  result = o___stdio_common_vsprintf();
  if ( result < 0 )
    return -1;
  return result;
}
