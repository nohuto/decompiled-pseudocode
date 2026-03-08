/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_9_dll @ 0x180110066
 * Callers:
 *     __imp_load_ReportInertia @ 0x18011005A (__imp_load_ReportInertia.c)
 *     __imp_load_GetPointerDeviceOrientation @ 0x180110170 (__imp_load_GetPointerDeviceOrientation.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180100EB0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_9_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_private_l1_1_9_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
