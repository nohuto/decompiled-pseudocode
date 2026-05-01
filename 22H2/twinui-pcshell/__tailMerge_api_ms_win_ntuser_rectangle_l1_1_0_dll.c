/*
 * XREFs of __tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll @ 0x180091F9C
 * Callers:
 *     __imp_load_OffsetRect @ 0x180091F90 (__imp_load_OffsetRect.c)
 *     __imp_load_SetRectEmpty @ 0x180092063 (__imp_load_SetRectEmpty.c)
 *     __imp_load_CopyRect @ 0x180092075 (__imp_load_CopyRect.c)
 *     __imp_load_EqualRect @ 0x180092087 (__imp_load_EqualRect.c)
 *     __imp_load_IsRectEmpty @ 0x1800920BD (__imp_load_IsRectEmpty.c)
 *     __imp_load_InflateRect @ 0x1800920F3 (__imp_load_InflateRect.c)
 *     __imp_load_IntersectRect @ 0x180092105 (__imp_load_IntersectRect.c)
 *     __imp_load_PtInRect @ 0x1800922AB (__imp_load_PtInRect.c)
 *     __imp_load_UnionRect @ 0x18009257D (__imp_load_UnionRect.c)
 *     __imp_load_SetRect @ 0x1800925A1 (__imp_load_SetRect.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18008B610 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_ntuser_rectangle_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
