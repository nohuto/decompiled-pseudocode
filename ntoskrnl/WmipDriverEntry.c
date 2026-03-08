/*
 * XREFs of WmipDriverEntry @ 0x140B53F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     KiInitializeMutant @ 0x1402D981C (KiInitializeMutant.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     IoCreateDevice @ 0x1407F0460 (IoCreateDevice.c)
 *     IoRegisterShutdownNotification @ 0x1408198A0 (IoRegisterShutdownNotification.c)
 *     IoWMIRegistrationControl @ 0x140869750 (IoWMIRegistrationControl.c)
 *     IoCreateSymbolicLink @ 0x14086DC10 (IoCreateSymbolicLink.c)
 *     WmipInitializeDataStructs @ 0x140B540A4 (WmipInitializeDataStructs.c)
 *     WmipInitializeSecurity @ 0x140B54220 (WmipInitializeSecurity.c)
 *     WmipInitializeRegistration @ 0x140B544A8 (WmipInitializeRegistration.c)
 */

NTSTATUS __fastcall WmipDriverEntry(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  UNICODE_STRING DeviceName; // [rsp+40h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+60h] [rbp-18h] BYREF

  DeviceName = 0LL;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  KiInitializeMutant((__int64)&WmipSMMutex, 0, 1, 0);
  WmipInitializeRegistration(0LL);
  WmipEventWorkQueueItem.Parameter = 0LL;
  WmipEventWorkQueueItem.List.Flink = 0LL;
  WmipNPNotificationSpinlock = 0LL;
  WmipEventWorkQueueItem.WorkerRoutine = (void (__fastcall *)(void *))WmipEventNotification;
  result = WmipInitializeDataStructs();
  if ( result >= 0 )
  {
    RtlInitAnsiString(&DestinationString, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\WMI");
    RtlAnsiStringToUnicodeString(&WmipRegistryPath, &DestinationString, 1u);
    result = WmipInitializeSecurity();
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DeviceName, L"\\Device\\WMIDataDevice");
      result = IoCreateDevice(DriverObject, 0, &DeviceName, 0x22u, 0x100u, 0, &WmipServiceDeviceObject);
      if ( result >= 0 )
      {
        RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\WMIDataDevice");
        v3 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
        if ( v3 < 0 )
        {
          IoDeleteDevice(WmipServiceDeviceObject);
        }
        else
        {
          WmipServiceDeviceObject->StackSize = 2;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)WmipIoControl;
          DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmipSystemControl;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          WmipServiceDeviceObject->Flags &= ~0x80u;
          IoWMIRegistrationControl(WmipServiceDeviceObject, 1u);
          IoRegisterShutdownNotification(WmipServiceDeviceObject);
        }
        return v3;
      }
    }
  }
  return result;
}
