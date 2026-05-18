/*
 * XREFs of sub_18011F858 @ 0x18011F858
 * Callers:
 *     sub_1801157F4 @ 0x1801157F4 (sub_1801157F4.c)
 *     sub_180115820 @ 0x180115820 (sub_180115820.c)
 * Callees:
 *     sub_18011DF90 @ 0x18011DF90 (sub_18011DF90.c)
 *     _o___stdio_common_vsprintf_s @ 0x18011DFED (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_18011F858()
{
  __int64 result; // rax

  sub_18011DF90();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
