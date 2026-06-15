/*
 * XREFs of __local_stdio_printf_options @ 0x14001CC6C
 * Callers:
 *     initialize_printf_standard_rounding @ 0x14001CC50 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x14001CCE0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x14001CD20 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x14001D700 (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x14001D85C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x14001DF84 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x14001DFEC (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
