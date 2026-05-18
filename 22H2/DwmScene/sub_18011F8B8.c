/*
 * XREFs of sub_18011F8B8 @ 0x18011F8B8
 * Callers:
 *     sub_18000E874 @ 0x18000E874 (sub_18000E874.c)
 *     sub_18003BF08 @ 0x18003BF08 (sub_18003BF08.c)
 *     sub_1801160F8 @ 0x1801160F8 (sub_1801160F8.c)
 * Callees:
 *     sub_18011DF90 @ 0x18011DF90 (sub_18011DF90.c)
 *     _o___stdio_common_vsnprintf_s @ 0x18011DFE1 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_18011F8B8()
{
  __int64 result; // rax

  sub_18011DF90();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
