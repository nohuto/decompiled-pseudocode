/*
 * XREFs of RIMFreeDev @ 0x1C0170F70
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C00063E0 (RIMAddInjectionDeviceOfType.c)
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00752D4 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1C00BC9DC (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0175C80 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01763A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0178FE8 (RIMIDERemoveInjectionDevice.c)
 *     RIMRemoveInjectionDevice @ 0x1C017A810 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C017ABDC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BF8 (RIMDoOnPnpNotification.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A2238 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01A3610 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C0078B5C (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     RIMFreeSpecificDev @ 0x1C00C8F08 (RIMFreeSpecificDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMFreeDev(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *i; // rdi
  __int64 v7; // rax

  RimTelemetry::ReportRimDevice(0, -__CFSHR__(*(_DWORD *)(a2 + 200), 8), (struct RIMDEV *const)a2);
  for ( i = (__int64 *)(a1 + 424); ; i = (__int64 *)(v7 + 40) )
  {
    v7 = *i;
    if ( !*i )
      break;
    if ( v7 == a2 )
    {
      if ( *(_QWORD *)(a2 + 248) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 907);
      *i = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = 0LL;
      RIMFreeSpecificDev(a1, a2, v4, v5);
      return 0LL;
    }
  }
  return 0LL;
}
