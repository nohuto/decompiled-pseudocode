void __fastcall ACPICreateRootSymbolicLink(PDEVICE_OBJECT DeviceObject)
{
  WCHAR *Pool2; // rbx
  ULONG v3; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  if ( IoGetDeviceProperty(DeviceObject, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &ResultLength) == -1073741789 )
  {
    Pool2 = (WCHAR *)ExAllocatePool2(64LL, ResultLength + 2LL, 1399874369LL);
    if ( Pool2 )
    {
      v3 = (unsigned __int16)(ResultLength + 2);
      ResultLength = v3;
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyPhysicalDeviceObjectName, v3, Pool2, &ResultLength) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, Pool2);
        IoCreateSymbolicLink(&ACPISymbolicLinkName, &DestinationString);
      }
      ExFreePoolWithTag(Pool2, 0);
    }
  }
}
