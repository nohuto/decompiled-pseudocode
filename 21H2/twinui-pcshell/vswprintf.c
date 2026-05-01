/*
 * XREFs of vswprintf @ 0x180090990
 * Callers:
 *     ?swprintf@@YAHQEAGQEBGZZ @ 0x1800BA2A4 (-swprintf@@YAHQEAGQEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18003B514 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180090842 (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vswprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v8, Buffer, BufferCount, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
