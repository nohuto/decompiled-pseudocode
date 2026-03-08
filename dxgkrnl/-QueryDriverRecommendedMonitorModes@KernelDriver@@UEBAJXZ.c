/*
 * XREFs of ?QueryDriverRecommendedMonitorModes@KernelDriver@@UEBAJXZ @ 0x1C0217620
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1C0217684 (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall KernelDriver::QueryDriverRecommendedMonitorModes(KernelDriver *this)
{
  ADAPTER_DISPLAY *v2; // rcx
  D3DDDI_VIDEO_PRESENT_TARGET_ID v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  struct _DXGKARG_RECOMMENDMONITORMODES v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 8);
    *(&v7.VideoPresentTargetId + 1) = 0;
    v7.VideoPresentTargetId = v3;
    v7.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)*((_QWORD *)this + 1);
    v7.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
    v4 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(v2, &v7);
    v5 = v4;
    if ( v4 < 0 )
      WdLogSingleEntry4(2LL, this, *((unsigned int *)this + 8), *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v4);
    return v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741632LL);
    return 3221225664LL;
  }
}
