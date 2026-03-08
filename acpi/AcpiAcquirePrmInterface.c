/*
 * XREFs of AcpiAcquirePrmInterface @ 0x1C008CAB8
 * Callers:
 *     AcpiPrmNotifyInterfaceChange @ 0x1C008CC20 (AcpiPrmNotifyInterfaceChange.c)
 *     AcpiPrmTargetDeviceChangeCallback @ 0x1C008CD10 (AcpiPrmTargetDeviceChangeCallback.c)
 * Callees:
 *     AcpiQueryPrmInterface @ 0x1C008CE38 (AcpiQueryPrmInterface.c)
 */

__int64 __fastcall AcpiAcquirePrmInterface(UNICODE_STRING *SourceString, char a2, void *a3)
{
  NTSTATUS DeviceObjectPointer; // ebx
  unsigned __int16 v7; // bx
  PDEVICE_OBJECT v9; // [rsp+40h] [rbp-28h] BYREF
  PVOID EventCategoryData; // [rsp+88h] [rbp+20h] BYREF

  EventCategoryData = 0LL;
  v9 = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(SourceString, 0x1F0000u, (PFILE_OBJECT *)&EventCategoryData, &v9);
  if ( DeviceObjectPointer >= 0 )
  {
    if ( a2 )
    {
      v7 = SourceString->Length + 2;
      stru_1C006FED8.Buffer = (wchar_t *)ExAllocatePool2(64LL, v7, 1181770561LL);
      if ( !stru_1C006FED8.Buffer )
        return 3221225626LL;
      stru_1C006FED8.Length = 0;
      stru_1C006FED8.MaximumLength = v7;
      RtlCopyUnicodeString(&stru_1C006FED8, SourceString);
    }
    DeviceObjectPointer = IoRegisterPlugPlayNotification(
                            EventCategoryTargetDeviceChange,
                            0,
                            EventCategoryData,
                            DriverObject,
                            AcpiPrmTargetDeviceChangeCallback,
                            0LL,
                            &qword_1C006FE90);
    if ( DeviceObjectPointer >= 0 )
      DeviceObjectPointer = AcpiQueryPrmInterface(*((PDEVICE_OBJECT *)EventCategoryData + 1), a3);
  }
  if ( EventCategoryData )
    ObfDereferenceObject(EventCategoryData);
  if ( DeviceObjectPointer < 0 )
  {
    if ( stru_1C006FED8.Buffer )
    {
      RtlFreeUnicodeString(&stru_1C006FED8);
      stru_1C006FED8.Buffer = 0LL;
      *(_DWORD *)&stru_1C006FED8.Length = 0;
    }
  }
  return (unsigned int)DeviceObjectPointer;
}
