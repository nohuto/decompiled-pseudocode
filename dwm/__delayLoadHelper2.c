/*
 * XREFs of __delayLoadHelper2 @ 0x140005040
 * Callers:
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x140006488 (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll @ 0x140006568 (__tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1400065F3 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_wer_reporting_l1_1_0_dll @ 0x1400066B4 (__tailMerge_ext_ms_win_wer_reporting_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll @ 0x140006830 (__tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_imm_l1_1_0_dll @ 0x140006948 (__tailMerge_ext_ms_win_imm_l1_1_0_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
