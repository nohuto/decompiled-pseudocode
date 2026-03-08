/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x18010FFDB
 * Callers:
 *     __imp_load_GetPointerDeviceRects @ 0x18010FFCF (__imp_load_GetPointerDeviceRects.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180100EB0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
