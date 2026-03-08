/*
 * XREFs of __tailMerge_ext_ms_win_compositor_hosting_l1_2_1_dll @ 0x18010FB90
 * Callers:
 *     __imp_load_NotifyInputSinkRemoved @ 0x18010FB84 (__imp_load_NotifyInputSinkRemoved.c)
 *     __imp_load_NotifyInputSinkParented @ 0x18010FC0F (__imp_load_NotifyInputSinkParented.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180100EB0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_compositor_hosting_l1_2_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_compositor_hosting_l1_2_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
