/*
 * XREFs of vsnprintf @ 0x18006AB98
 * Callers:
 *     sub_1800042D4 @ 0x1800042D4 (sub_1800042D4.c)
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     sub_1800B5CE8 @ 0x1800B5CE8 (sub_1800B5CE8.c)
 *     sub_1800BA84C @ 0x1800BA84C (sub_1800BA84C.c)
 * Callees:
 *     sub_18006954C @ 0x18006954C (sub_18006954C.c)
 *     _o___stdio_common_vswprintf @ 0x18006AAAE (_o___stdio_common_vswprintf.c)
 */

int __cdecl vsnprintf(char *DstBuf, size_t MaxCount, const char *Format, va_list ArgList)
{
  int result; // eax

  sub_18006954C();
  result = o___stdio_common_vswprintf();
  if ( result < 0 )
    return -1;
  return result;
}
