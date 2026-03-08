/*
 * XREFs of MonitorQueryDmmSourceModeSetInterface @ 0x1C03BFD88
 * Callers:
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C03AF680 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorQueryDmmSourceModeSetInterface(DXGADAPTER *this, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = this;
  *(_QWORD *)(v6 + 32) = a2;
  if ( this && a2 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      WdLogSingleEntry0(1LL);
    if ( *((_QWORD *)this + 365) )
    {
      *a2 = &DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DmmMonitorSourceModeSetInterfaceV1;
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      return 3221225659LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
