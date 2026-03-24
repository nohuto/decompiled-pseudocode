/*
 * XREFs of ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C02F9CA8
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0185280 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2604 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C02F9460 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_UnregisterPnPTargetDeviceNotification(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  LODWORD(v3) = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( *((_QWORD *)this + 12) )
  {
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 88), 0);
    v3 = v4;
    if ( v4 < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v7 + 24) = *((unsigned int *)this + 11);
      *(_QWORD *)(v7 + 32) = v3;
      WdLogEvent5_WdError(v7);
    }
  }
  v8 = (void *)*((_QWORD *)this + 8);
  if ( v8 )
  {
    IoUnregisterPlugPlayNotification(v8);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 12) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 88));
    *((_QWORD *)this + 12) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 9);
  if ( v9 )
  {
    ObfDereferenceObject(v9);
    *((_QWORD *)this + 9) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 10);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    *((_QWORD *)this + 10) = 0LL;
  }
  return (unsigned int)v3;
}
