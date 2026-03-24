/*
 * XREFs of rimDoRimDevChange @ 0x1C00533E4
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C0005FFC (RIMRemoveDevOfInputType.c)
 *     RIMFreeSpecificDev @ 0x1C0006104 (RIMFreeSpecificDev.c)
 *     RIMDeviceClassNotify @ 0x1C0053EC0 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00549C0 (RIMOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C0055530 (RIMCreateDev.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0056E04 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDoOnPnpNotification @ 0x1C00B3D38 (RIMDoOnPnpNotification.c)
 *     RIMVirtCreateDev @ 0x1C014FC98 (RIMVirtCreateDev.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01551B0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0156DF4 (RIMIDERemoveInjectionDevice.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C954 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     rimDoRimDevChangeCallback @ 0x1C00534C8 (rimDoRimDevChangeCallback.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C005686C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C00AD30C (RIMHandlePowerDeviceArrival.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C0182274 (RIMHandleTTMDeviceRemoval.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // r9d

  switch ( a3 )
  {
    case 1u:
      goto LABEL_5;
    case 2u:
      *(_DWORD *)(a2 + 184) |= 0x10000000u;
      LOBYTE(v6) = 1;
      v7 = RIMHandlePowerDeviceArrival(a2);
      LOBYTE(v9) = v7;
      if ( v7 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v10 = 14;
LABEL_24:
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v8, 1, v10, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, v9);
      goto LABEL_6;
    case 3u:
      v6 = (*(_DWORD *)(a2 + 184) & 0x10000000u) >> 28;
      if ( !isChildPartition() && gbTtmEnabled )
        v9 = RIMHandleTTMDeviceRemoval(a2);
      else
        v9 = 0;
      if ( v9 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v10 = 15;
      goto LABEL_24;
  }
  if ( a3 - 4 <= 1 )
  {
LABEL_5:
    LOBYTE(v6) = 1;
    goto LABEL_6;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 139LL);
  LOBYTE(v6) = 0;
LABEL_6:
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, a3);
  if ( (_BYTE)v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a2 + 32) + 80LL))(*(_QWORD *)(a2 + 32), a3);
    rimDoRimDevChangeCallback(a1, a2, a3);
  }
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x10000000u;
}
