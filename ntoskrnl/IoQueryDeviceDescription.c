/*
 * XREFs of IoQueryDeviceDescription @ 0x14077F960
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     pIoQueryBusDescription @ 0x14077FF18 (pIoQueryBusDescription.c)
 *     IopOpenRegistryKey @ 0x1407803E0 (IopOpenRegistryKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoQueryDeviceDescription(
        PINTERFACE_TYPE BusType,
        PULONG BusNumber,
        PCONFIGURATION_TYPE ControllerType,
        PULONG ControllerNumber,
        PCONFIGURATION_TYPE PeripheralType,
        PULONG PeripheralNumber,
        PIO_QUERY_DEVICE_ROUTINE CalloutRoutine,
        PVOID Context)
{
  NTSTATUS BusDescription; // ebx
  HANDLE Handle[2]; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING v12; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v13[8]; // [rsp+60h] [rbp-9h] BYREF
  int v14; // [rsp+B0h] [rbp+47h] BYREF

  Handle[0] = 0LL;
  v14 = -1;
  Destination = 0LL;
  if ( !BusType )
    return -1073741822;
  v13[4] = PeripheralType;
  v13[5] = PeripheralNumber;
  v13[6] = CalloutRoutine;
  v13[1] = BusNumber;
  v13[0] = BusType;
  v13[2] = ControllerType;
  v13[7] = Context;
  v13[3] = ControllerNumber;
  Destination.MaximumLength = 2048;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, 2048LL, 1314025289LL);
  if ( !Destination.Buffer )
    return -1073741670;
  RtlAppendUnicodeStringToString(&Destination, &CmRegistryMachineHardwareDescriptionSystemName);
  BusDescription = IopOpenRegistryKey(Handle, 0LL, &Destination, 131097LL, 0);
  if ( BusDescription >= 0 )
  {
    v12 = Destination;
    BusDescription = pIoQueryBusDescription((unsigned int)v13, (unsigned int)&v12, Handle[0], (unsigned int)&v14, 1);
    ZwClose(Handle[0]);
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( BusDescription == -2147483622 )
    return -1073741772;
  return BusDescription;
}
