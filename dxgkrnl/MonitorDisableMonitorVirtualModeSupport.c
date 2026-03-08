/*
 * XREFs of MonitorDisableMonitorVirtualModeSupport @ 0x1C03BF560
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0001E2C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C0180454 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F84CC (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C01FB908 (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x1C03C4C70 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSupport(
        __int64 a1,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rdi
  DXGMONITOR *v8; // rbx
  unsigned int v9; // edi
  DXGMONITOR *v11; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v12[14]; // [rsp+30h] [rbp-A8h] BYREF
  int v13; // [rsp+A0h] [rbp-38h]

  v4 = a2;
  if ( a1 && a2 != -1 )
  {
    v12[0] = &MonitorEventDeferral::`vftable';
    memset(&v12[1], 0, 0x68uLL);
    v13 = 0;
    MONITOR_MGR::AcquireMonitorExclusive(&v11, a1, v4, 1u);
    v8 = v11;
    if ( v11 )
    {
      v12[1] = (*((_QWORD *)v11 + 21) + 8LL) & -(__int64)(*((_QWORD *)v11 + 21) != 0LL);
      if ( *((_DWORD *)v11 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      if ( (*((_BYTE *)v8 + 176) & 2) == 0 )
      {
        if ( DXGMONITOR::_IsVirtualModeSupportDisabled(v8) != (a3 != 0) )
          DXGMONITOR::_DisableVirtualModeSupport(v8, a3 != 0, (struct DxgMonitor::IMonitorDeferredEventSource *)v12);
        ExReleaseResourceLite((PERESOURCE)((char *)v8 + 24));
        KeLeaveCriticalRegion();
        MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)v12, a4);
        v9 = 0;
        goto LABEL_14;
      }
      WdLogSingleEntry1(2LL, v4);
      v9 = -1073741790;
    }
    else
    {
      v9 = -1073741632;
      WdLogSingleEntry1(2LL, -1073741632LL);
    }
    if ( v8 )
    {
      ExReleaseResourceLite((PERESOURCE)((char *)v8 + 24));
      KeLeaveCriticalRegion();
    }
LABEL_14:
    MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v12);
    return v9;
  }
  return 3221225485LL;
}
