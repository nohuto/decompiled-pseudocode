/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_draw_l1_1_0_dll @ 0x180092D2A
 * Callers:
 *     __imp_load_SetWindowRgn @ 0x180092D1E (__imp_load_SetWindowRgn.c)
 *     __imp_load_BeginPaint @ 0x180092DA9 (__imp_load_BeginPaint.c)
 *     __imp_load_EndPaint @ 0x180092DBB (__imp_load_EndPaint.c)
 *     __imp_load_InvalidateRect @ 0x180092DCD (__imp_load_InvalidateRect.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18008B610 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_draw_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_draw_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
