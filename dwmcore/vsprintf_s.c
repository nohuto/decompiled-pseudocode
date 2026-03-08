/*
 * XREFs of vsprintf_s @ 0x18010F6E8
 * Callers:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x18026F00C (-Print@DwmDbg@@YAXQEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18010E384 (__local_stdio_printf_options.c)
 *     __stdio_common_vsprintf_s_0 @ 0x1801103E4 (__stdio_common_vsprintf_s_0.c)
 */

int __cdecl vsprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = _stdio_common_vsprintf_s_0(*v8, Buffer, BufferCount, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
