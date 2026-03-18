/*
 * XREFs of __local_stdio_printf_options @ 0x18010EEC4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18010EEA0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18010EEF0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18010FF88 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180110100 (_vsnwprintf.c)
 *     swprintf_s @ 0x180110168 (swprintf_s.c)
 *     _vsnprintf @ 0x1801101C0 (_vsnprintf.c)
 *     vsprintf_s @ 0x180110228 (vsprintf_s.c)
 *     _vscprintf @ 0x18011028C (_vscprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
