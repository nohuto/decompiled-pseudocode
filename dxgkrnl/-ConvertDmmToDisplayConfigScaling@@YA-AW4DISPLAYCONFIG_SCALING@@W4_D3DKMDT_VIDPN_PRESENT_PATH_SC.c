/*
 * XREFs of ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C01BA474
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1C01B9FC8 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C4888 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ConvertDmmToDisplayConfigScaling(unsigned int a1)
{
  if ( a1 == 1 || a1 == 2 || a1 == 3 || a1 == 4 || a1 == 5 )
    return a1;
  if ( a1 == 253 )
  {
    WdLogSingleEntry1(1LL, 946LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Scaling != D3DKMDT_VPPS_PREFERRED",
      946LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 128LL;
}
