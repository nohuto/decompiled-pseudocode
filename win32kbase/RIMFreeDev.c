/*
 * XREFs of RIMFreeDev @ 0x1C019DE20
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004D20 (RIMAddInjectionDeviceOfType.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C0037820 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C003A13C (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1C00BC0DC (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01A3530 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01A3C50 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01A64F8 (RIMIDERemoveInjectionDevice.c)
 *     RIMRemoveInjectionDevice @ 0x1C01A7750 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01A7B1C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01D032C (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01D1704 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C00875D8 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     RIMFreeSpecificDev @ 0x1C00BBF88 (RIMFreeSpecificDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMFreeDev(__int64 a1, __int64 a2)
{
  __int64 *i; // rdi
  __int64 v5; // rax

  RimTelemetry::ReportRimDevice(0, -__CFSHR__(*(_DWORD *)(a2 + 200), 8), (struct RIMDEV *const)a2);
  for ( i = (__int64 *)(a1 + 424); ; i = (__int64 *)(v5 + 40) )
  {
    v5 = *i;
    if ( !*i )
      break;
    if ( v5 == a2 )
    {
      if ( *(_QWORD *)(a2 + 248) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 935);
      *i = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = 0LL;
      RIMFreeSpecificDev(a1, a2);
      return 0LL;
    }
  }
  return 0LL;
}
