/*
 * XREFs of __local_stdio_printf_options @ 0x18010E384
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18010E360 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18010E3B0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18010F448 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18010F5C0 (_vsnwprintf.c)
 *     swprintf_s @ 0x18010F628 (swprintf_s.c)
 *     _vsnprintf @ 0x18010F680 (_vsnprintf.c)
 *     vsprintf_s @ 0x18010F6E8 (vsprintf_s.c)
 *     _vscprintf @ 0x18010F74C (_vscprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
