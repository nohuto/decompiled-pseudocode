/*
 * XREFs of MonitorGetCCDMonitorID @ 0x1C01834A8
 * Callers:
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x1C017BE84 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C0183104 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C018330C (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C01844BC (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01A0250 (DxgkGetMonitorInternalInfo.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01ABA70 (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 * Callees:
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x1C0183560 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 */

__int64 __fastcall MonitorGetCCDMonitorID(DXGMONITOR **this, unsigned int a2, unsigned __int16 *a3)
{
  DXGMONITOR *v5; // rbx
  unsigned int CCDMonitorID; // edi

  v5 = (DXGMONITOR *)this;
  if ( !this || !a2 || !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 78) != 1 && this[40] )
    v5 = this[40];
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v5 + 24), 1u);
  CCDMonitorID = DXGMONITOR::GetCCDMonitorID(v5, 1, a2, a3);
  if ( v5 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 24));
    KeLeaveCriticalRegion();
  }
  return CCDMonitorID;
}
