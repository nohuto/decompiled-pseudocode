/*
 * XREFs of MonitorGetContainerIDFromDescriptor @ 0x1C02011E8
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0200E78 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0009184 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MonitorGetContainerIDFromDescriptor(__int64 a1, unsigned int a2, __int64 a3)
{
  struct DXGMONITOR *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  struct DXGMONITOR *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 == -1 )
    {
      return -1073741275LL;
    }
    else
    {
      MONITOR_MGR::AcquireMonitorShared(&v8, a1, a2);
      v4 = v8;
      if ( v8 )
      {
        v5 = *(_QWORD *)(*((_QWORD *)v8 + 27) + 160LL);
        if ( v5 && (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 216LL))(v5, a3) >= 0 )
          v6 = 0;
        else
          v6 = -1073741275;
      }
      else
      {
        v6 = -1073741275;
        WdLogSingleEntry1(2LL, -1073741275LL);
      }
      if ( v4 )
      {
        ExReleaseResourceLite((PERESOURCE)((char *)v4 + 24));
        KeLeaveCriticalRegion();
      }
      return v6;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
