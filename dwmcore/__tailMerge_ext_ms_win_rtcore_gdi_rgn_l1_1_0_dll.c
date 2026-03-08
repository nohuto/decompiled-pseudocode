/*
 * XREFs of __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1801105AE
 * Callers:
 *     __imp_load_CreateRectRgnIndirect @ 0x1801105A2 (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_ExtCreateRegion @ 0x18011062D (__imp_load_ExtCreateRegion.c)
 *     __imp_load_GetRegionData @ 0x18011063F (__imp_load_GetRegionData.c)
 *     __imp_load_OffsetRgn @ 0x180110651 (__imp_load_OffsetRgn.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180100EB0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
