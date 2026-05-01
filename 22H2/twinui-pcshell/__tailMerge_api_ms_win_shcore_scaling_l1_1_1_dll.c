/*
 * XREFs of __tailMerge_api_ms_win_shcore_scaling_l1_1_1_dll @ 0x180091525
 * Callers:
 *     __imp_load_GetScaleFactorForWindow @ 0x180091519 (__imp_load_GetScaleFactorForWindow.c)
 *     __imp_load_GetScaleFactorForMonitor @ 0x1800915C8 (__imp_load_GetScaleFactorForMonitor.c)
 *     __imp_load_GetDpiForMonitor @ 0x1800915F2 (__imp_load_GetDpiForMonitor.c)
 *     __imp_load_UnregisterScaleChangeEvent @ 0x18009196F (__imp_load_UnregisterScaleChangeEvent.c)
 *     __imp_load_RegisterScaleChangeEvent @ 0x180091981 (__imp_load_RegisterScaleChangeEvent.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18008B610 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shcore_scaling_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shcore_scaling_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
