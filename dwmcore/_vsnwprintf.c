/*
 * XREFs of _vsnwprintf @ 0x18010F5C0
 * Callers:
 *     StringVPrintfWorkerW @ 0x1800AE294 (StringVPrintfWorkerW.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18027907C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18010E384 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_0 @ 0x1801103C0 (__stdio_common_vswprintf_0.c)
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
