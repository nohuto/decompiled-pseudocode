/*
 * XREFs of sub_18006AC00 @ 0x18006AC00
 * Callers:
 *     sub_18001B4A0 @ 0x18001B4A0 (sub_18001B4A0.c)
 * Callees:
 *     sub_18006954C @ 0x18006954C (sub_18006954C.c)
 *     _o___stdio_common_vswprintf_s @ 0x18006AABA (_o___stdio_common_vswprintf_s.c)
 */

__int64 sub_18006AC00()
{
  __int64 result; // rax

  sub_18006954C();
  result = o___stdio_common_vswprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
