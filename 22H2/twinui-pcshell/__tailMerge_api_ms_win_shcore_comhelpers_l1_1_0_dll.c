/*
 * XREFs of __tailMerge_api_ms_win_shcore_comhelpers_l1_1_0_dll @ 0x180091397
 * Callers:
 *     __imp_load_IUnknown_QueryService @ 0x18009138B (__imp_load_IUnknown_QueryService.c)
 *     __imp_load_IUnknown_SetSite @ 0x180091446 (__imp_load_IUnknown_SetSite.c)
 *     __imp_load_IUnknown_GetSite @ 0x180091458 (__imp_load_IUnknown_GetSite.c)
 *     __imp_load_IUnknown_Set @ 0x180091951 (__imp_load_IUnknown_Set.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18008B610 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shcore_comhelpers_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shcore_comhelpers_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
