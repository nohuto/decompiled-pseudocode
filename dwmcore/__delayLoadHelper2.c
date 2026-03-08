/*
 * XREFs of __delayLoadHelper2 @ 0x180100EB0
 * Callers:
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x18010F7A5 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x18010F830 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_cabinet_dll @ 0x18010F8BB (__tailMerge_cabinet_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll @ 0x18010FA68 (__tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_3_0_dll @ 0x18010FAF3 (__tailMerge_ext_ms_win_compositor_hosting_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_2_1_dll @ 0x18010FB90 (__tailMerge_ext_ms_win_compositor_hosting_l1_2_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x18010FC3F (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x18010FCEE (__tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_0_dll @ 0x18010FD9D (__tailMerge_ext_ms_win_ntuser_private_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x18010FE28 (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll @ 0x18010FEC5 (__tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x18010FF50 (__tailMerge_ext_ms_win_gdi_private_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x18010FFDB (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_9_dll @ 0x180110066 (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_9_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_4_dll @ 0x1801100F1 (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_4_dll.c)
 *     __tailMerge_ext_ms_win_mininput_systeminputhost_l1_2_0_dll @ 0x18011018E (__tailMerge_ext_ms_win_mininput_systeminputhost_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x180110219 (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_d3d12_dll @ 0x1801102A4 (__tailMerge_d3d12_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x18011032F (__tailMerge_wuceffects_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll @ 0x180110408 (__tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x180110493 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1801105AE (__tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_composition_holographic_l1_1_0_dll @ 0x1801106C4 (__tailMerge_ext_ms_win_composition_holographic_l1_1_0_dll.c)
 *     __tailMerge_ninput_dll @ 0x18011074F (__tailMerge_ninput_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           _ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
