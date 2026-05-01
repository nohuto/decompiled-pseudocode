/*
 * XREFs of __local_stdio_scanf_options @ 0x18008F674
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18008F650 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18008F690 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800902B8 (__scrt_initialize_default_local_stdio_options.c)
 *     swscanf @ 0x180090B5C (swscanf.c)
 *     swscanf_s @ 0x180090BAC (swscanf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
