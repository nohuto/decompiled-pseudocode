/*
 * XREFs of rimDoRimDevChange @ 0x1C00A1F28
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00454B0 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0048DA8 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMFreeSpecificDev @ 0x1C00A0F40 (RIMFreeSpecificDev.c)
 *     RIMDoOnPnpNotification @ 0x1C00A1E80 (RIMDoOnPnpNotification.c)
 *     RIMRemoveDevOfInputType @ 0x1C00B713C (RIMRemoveDevOfInputType.c)
 *     RIMVirtCreateDev @ 0x1C017C948 (RIMVirtCreateDev.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0182000 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01846E4 (RIMIDERemoveInjectionDevice.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimDoRimDevChangeCallback @ 0x1C00A1FD8 (rimDoRimDevChangeCallback.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00A2060 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C00A20A0 (RIMHandlePowerDeviceArrival.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C01B8270 (RIMHandleTTMDeviceRemoval.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  char v10; // r9
  int v11; // eax
  PDEVICE_OBJECT v12; // r10
  __int16 v13; // cx

  v3 = a3;
  if ( (_DWORD)a3 == 1 )
    goto LABEL_7;
  if ( (_DWORD)a3 == 2 )
  {
    *(_DWORD *)(a2 + 184) |= 0x40000000u;
    LOBYTE(v6) = 1;
    v7 = RIMHandlePowerDeviceArrival((struct RIMDEV *)a2);
    v10 = v7;
    if ( v7 >= 0 )
      goto LABEL_8;
    v12 = WPP_GLOBAL_Control;
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v13 = 14;
    goto LABEL_33;
  }
  if ( (_DWORD)a3 != 3 )
  {
    if ( (unsigned int)(a3 - 4) > 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      LOBYTE(v6) = 0;
      goto LABEL_8;
    }
LABEL_7:
    LOBYTE(v6) = 1;
    goto LABEL_8;
  }
  v6 = (*(_DWORD *)(a2 + 184) & 0x40000000u) >> 30;
  if ( isChildPartition() )
    goto LABEL_8;
  if ( !gbTtmEnabled )
    goto LABEL_8;
  v11 = RIMHandleTTMDeviceRemoval(a2);
  v10 = v11;
  if ( v11 >= 0 )
    goto LABEL_8;
  v12 = WPP_GLOBAL_Control;
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_8;
  v13 = 15;
LABEL_33:
  WPP_RECORDER_AND_TRACE_SF_D(
    v12->AttachedDevice,
    v8,
    v9,
    (_DWORD)gRimLog,
    4,
    1,
    v13,
    (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
    v10);
LABEL_8:
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, v3);
  if ( (_BYTE)v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a2 + 32) + 80LL))(*(_QWORD *)(a2 + 32), v3);
    rimDoRimDevChangeCallback(a1, a2, v3);
  }
  if ( v3 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x40000000u;
}
