/*
 * XREFs of ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C01BC43C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BC060 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkGetMaximumAdapterCountInSession@@YAKXZ @ 0x1C01DD920 (-DxgkGetMaximumAdapterCountInSession@@YAKXZ.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C02C9980 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C03B6674 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCountInSession(DXGGLOBAL *this)
{
  unsigned int v2; // ecx

  if ( !*((_DWORD *)this + 341) )
  {
    WdLogSingleEntry1(1LL, 2749LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2749LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = 1024;
  if ( (unsigned int)(*((_DWORD *)this + 341) + 2) < 0x400 )
    return (unsigned int)(*((_DWORD *)this + 341) + 2);
  return v2;
}
