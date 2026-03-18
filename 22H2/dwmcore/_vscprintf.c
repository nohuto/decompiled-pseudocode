/*
 * XREFs of _vscprintf @ 0x18011028C
 * Callers:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x180088A0C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x18027273C (-Print@DwmDbg@@YAXQEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18010EEC4 (__local_stdio_printf_options.c)
 *     __stdio_common_vsprintf_0 @ 0x180110F18 (__stdio_common_vsprintf_0.c)
 */

int __cdecl vscprintf(const char *const Format, va_list ArgList)
{
  unsigned __int64 *v4; // rax
  int result; // eax

  v4 = _local_stdio_printf_options();
  result = _stdio_common_vsprintf_0(*v4 | 2, 0LL, 0LL, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
