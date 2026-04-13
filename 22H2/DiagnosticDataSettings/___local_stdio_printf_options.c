/*
 * XREFs of ___local_stdio_printf_options @ 0x10003ED1
 * Callers:
 *     initialize_printf_standard_rounding @ 0x10003EC0 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x10003EE0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x10003F10 (initialize_msvcrt_compatibility.c)
 *     ___scrt_initialize_default_local_stdio_options @ 0x10004343 (___scrt_initialize_default_local_stdio_options.c)
 *     __vsnwprintf_l @ 0x10004BF7 (__vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl __local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
