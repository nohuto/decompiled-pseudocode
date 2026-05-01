/*
 * XREFs of __local_stdio_printf_options @ 0x18003B514
 * Callers:
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x180039B34 (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180039C90 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18003B460 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     initialize_printf_standard_rounding @ 0x18008F610 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x18008F630 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18008F670 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180090298 (__scrt_initialize_default_local_stdio_options.c)
 *     vswprintf @ 0x180090970 (vswprintf.c)
 *     vswprintf_s @ 0x1800909D4 (vswprintf_s.c)
 *     _vscwprintf @ 0x180090A38 (_vscwprintf.c)
 *     swprintf_s @ 0x180090A88 (swprintf_s.c)
 *     _scwprintf @ 0x180090AE0 (_scwprintf.c)
 *     _vsnprintf_s @ 0x180090BE0 (_vsnprintf_s.c)
 *     _vsnwprintf_l @ 0x1804D722C (_vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
