/*
 * XREFs of _vsnwprintf @ 0x180110100
 * Callers:
 *     StringVPrintfWorkerW @ 0x1800AE9F4 (StringVPrintfWorkerW.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18027C7BC (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18010EEC4 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_0 @ 0x180110F00 (__stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
