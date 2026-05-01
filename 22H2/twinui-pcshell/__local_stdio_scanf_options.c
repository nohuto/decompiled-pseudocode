/*
 * XREFs of __local_stdio_scanf_options @ 0x18008F654
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18008F630 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18008F670 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180090298 (__scrt_initialize_default_local_stdio_options.c)
 *     swscanf @ 0x180090B3C (swscanf.c)
 *     swscanf_s @ 0x180090B8C (swscanf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
