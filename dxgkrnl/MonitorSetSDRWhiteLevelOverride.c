/*
 * XREFs of MonitorSetSDRWhiteLevelOverride @ 0x1C03C0994
 * Callers:
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0001E2C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01B0374 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     TriggerSDRWhiteLevelChangedWnf @ 0x1C02F86C0 (TriggerSDRWhiteLevelChangedWnf.c)
 *     ?HasDescriptor@DXGMONITOR@@UEBA_NXZ @ 0x1C03C4810 (-HasDescriptor@DXGMONITOR@@UEBA_NXZ.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03C987C (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 */

__int64 __fastcall MonitorSetSDRWhiteLevelOverride(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v7; // rax
  DXGMONITOR *v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DXGMONITOR *v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v16, a1, v5, 0);
  v8 = v16;
  if ( v16 )
  {
    if ( DxgMonitor::MonitorColorState::EdidSupportsHDR(*((DxgMonitor::MonitorColorState **)v16 + 28))
      || (*((_BYTE *)v8 + 177) & 0x40) != 0 && !DXGMONITOR::HasDescriptor(v8) )
    {
      v10 = DxgMonitor::MonitorColorState::SetSDRWhiteLevel(
              *((DxgMonitor::MonitorColorState **)v8 + 28),
              1000 * v4 / 0x50u);
      v9 = v10;
      if ( v10 >= 0 )
      {
        TriggerSDRWhiteLevelChangedWnf(v12, v11, v13, v14);
        LODWORD(v9) = 0;
        goto LABEL_12;
      }
    }
    else
    {
      v9 = -1073741637LL;
    }
  }
  else
  {
    v9 = -1073741811LL;
  }
  WdLogSingleEntry1(2LL, v9);
LABEL_12:
  if ( v8 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v8 + 24));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}
