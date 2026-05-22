/*
 * XREFs of __delayLoadHelper2 @ 0x1800114E0
 * Callers:
 *     __tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll @ 0x18003CB45 (__tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll @ 0x18003CBD0 (__tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll @ 0x18003CCCD (__tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_session_l1_1_1_dll @ 0x18003CD7C (__tailMerge_api_ms_win_rtcore_session_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll @ 0x18003CE5C (__tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll @ 0x18003D2A6 (__tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x18003D354 (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x18003D3F1 (__tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x18003D4AC (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x18003D537 (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll @ 0x18003D61C (__tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_3_dll @ 0x18003D6B9 (__tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_3_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x18003D798 (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x18003D835 (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x18003D8C0 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
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
