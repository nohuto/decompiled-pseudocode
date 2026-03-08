/*
 * XREFs of MonitorSetPhysicalSizeOverride @ 0x1C03C0800
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0001E2C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 */

__int64 __fastcall MonitorSetPhysicalSizeOverride(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  int v6; // ebp
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = a4;
  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v12, a1, v5, 0);
  v9 = v12;
  if ( v12 )
  {
    *(_DWORD *)(v12 + 472) = v6;
    v10 = 0;
    *(_DWORD *)(v9 + 476) = v4;
  }
  else
  {
    v10 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  if ( v9 )
  {
    ExReleaseResourceLite((PERESOURCE)(v9 + 24));
    KeLeaveCriticalRegion();
  }
  return v10;
}
