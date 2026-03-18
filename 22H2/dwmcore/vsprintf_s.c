/*
 * XREFs of vsprintf_s @ 0x180110228
 * Callers:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x180088A0C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x18027273C (-Print@DwmDbg@@YAXQEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18010EEC4 (__local_stdio_printf_options.c)
 *     __stdio_common_vsprintf_s_0 @ 0x180110F24 (__stdio_common_vsprintf_s_0.c)
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
