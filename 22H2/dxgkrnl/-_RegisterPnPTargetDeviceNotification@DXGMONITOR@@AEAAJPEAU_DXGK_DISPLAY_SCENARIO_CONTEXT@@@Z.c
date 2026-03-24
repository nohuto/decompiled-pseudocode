/*
 * XREFs of ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017F74C
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EF60 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C017F66C (-_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0182398 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall DXGMONITOR::_RegisterPnPTargetDeviceNotification(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  PVOID *v6; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct _DEVICE_OBJECT *v11; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DRIVER_OBJECT *v13; // r9
  PVOID v14; // r8
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  int updated; // eax
  NTSTATUS v23; // eax
  DXGMONITOR *v24; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_QWORD *)((char *)this + 64);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !*v4 )
  {
    DeviceObject = 0LL;
    v6 = (PVOID *)((char *)this + 80);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            (PUNICODE_STRING)((char *)this + 104),
                            0x80000000,
                            (PFILE_OBJECT *)this + 10,
                            &DeviceObject);
    v10 = DeviceObjectPointer;
    if ( DeviceObjectPointer == -1073741772 )
    {
      v27 = WdLogNewEntry5_WdDmmEvent(v9);
      *(_QWORD *)(v27 + 24) = *((_QWORD *)this + 14);
      WdLogEvent5_WdDmmEvent(v27);
    }
    else
    {
      if ( DeviceObjectPointer < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v9, v8);
        *(_QWORD *)(v28 + 24) = *((_QWORD *)this + 14);
        *(_QWORD *)(v28 + 32) = v10;
        WdLogEvent5_WdError(v28);
      }
      else
      {
        if ( !*v6 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v9, v8);
          WdLogEvent5_WdAssertion(v29);
        }
        v11 = DeviceObject;
        if ( !DeviceObject )
        {
          v30 = WdLogNewEntry5_WdAssertion(0LL, v8);
          WdLogEvent5_WdAssertion(v30);
          v11 = DeviceObject;
        }
        AttachedDeviceReference = IoGetAttachedDeviceReference(v11);
        v13 = g_pDriverObject;
        v14 = *v6;
        *((_QWORD *)this + 9) = AttachedDeviceReference;
        v15 = IoRegisterPlugPlayNotification(
                EventCategoryTargetDeviceChange,
                0,
                v14,
                v13,
                DXGMONITOR::_PnPTargetDeviceChangeNotification,
                DeviceObject,
                (PVOID *)this + 8);
        v10 = v15;
        if ( v15 < 0 )
        {
          v31 = WdLogNewEntry5_WdError(v17, v16);
          *(_QWORD *)(v31 + 24) = *((unsigned int *)this + 11);
          *(_QWORD *)(v31 + 32) = v10;
          WdLogEvent5_WdError(v31);
          ObfDereferenceObject(*v6);
          *v6 = 0LL;
        }
        else
        {
          v18 = IoRegisterDeviceInterface(
                  *((PDEVICE_OBJECT *)this + 7),
                  &GUID_DEVINTERFACE_MONITOR,
                  0LL,
                  (PUNICODE_STRING)((char *)this + 88));
          v21 = v18;
          if ( v18 < 0
            || (updated = DXGMONITOR::_UpdatePnPDeviceInterfaceProperties(this), v21 = updated, updated < 0)
            || (v23 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 88), 1u), v21 = v23, v23 < 0) )
          {
            v32 = WdLogNewEntry5_WdError(v20, v19);
            *(_QWORD *)(v32 + 24) = *((unsigned int *)this + 11);
            *(_QWORD *)(v32 + 32) = v21;
            WdLogEvent5_WdError(v32);
          }
          v24 = this;
          if ( *((_DWORD *)this + 108) != 1 && *((_QWORD *)this + 55) )
            v24 = (DXGMONITOR *)*((_QWORD *)this + 55);
          if ( !v24 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v20, v19);
            WdLogEvent5_WdAssertion(v33);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v24 + 296), 1u);
          DXGMONITOR::_MonitorTelemetry(v24, (*((_DWORD *)this + 10) & 0x40) == 0, a2);
          ExReleaseResourceLite((PERESOURCE)((char *)v24 + 296));
          KeLeaveCriticalRegion();
          LODWORD(v10) = 0;
        }
      }
      if ( (int)v10 >= 0 )
        return (unsigned int)v10;
    }
    if ( *((_QWORD *)this + 12) )
    {
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 88));
      *((_QWORD *)this + 12) = 0LL;
    }
    return (unsigned int)v10;
  }
  v26 = WdLogNewEntry5_WdDmmEvent(v5);
  *(_QWORD *)(v26 + 24) = this;
  WdLogEvent5_WdDmmEvent(v26);
  return 0LL;
}
