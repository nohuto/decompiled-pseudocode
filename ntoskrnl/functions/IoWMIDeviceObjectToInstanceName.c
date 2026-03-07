NTSTATUS __stdcall IoWMIDeviceObjectToInstanceName(
        PVOID DataBlockObject,
        PDEVICE_OBJECT DeviceObject,
        PUNICODE_STRING InstanceName)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbp
  NTSTATUS GuidObjectInstanceInfo; // ebx
  __int64 v7; // rdx
  wchar_t *Pool2; // rax
  __int64 v9; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0;
  UnicodeString = 0LL;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  GuidObjectInstanceInfo = WmipGetGuidObjectInstanceInfo(DataBlockObject, DeviceAttachmentBaseRef, &UnicodeString, &v12);
  if ( GuidObjectInstanceInfo >= 0 )
  {
    v7 = (unsigned __int16)(UnicodeString.Length + 32);
    InstanceName->MaximumLength = v7;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v7, 1231646039LL);
    InstanceName->Buffer = Pool2;
    if ( Pool2 )
    {
      RtlStringCbPrintfW(Pool2, InstanceName->MaximumLength, L"%ws_%d", UnicodeString.Buffer, v12);
      v9 = -1LL;
      do
        ++v9;
      while ( InstanceName->Buffer[v9] );
      GuidObjectInstanceInfo = 0;
      InstanceName->Length = 2 * v9;
    }
    else
    {
      GuidObjectInstanceInfo = -1073741670;
    }
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
  }
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  return GuidObjectInstanceInfo;
}
