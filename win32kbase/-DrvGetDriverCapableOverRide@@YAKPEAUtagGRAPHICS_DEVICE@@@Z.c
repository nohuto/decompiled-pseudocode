__int64 __fastcall DrvGetDriverCapableOverRide(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v2; // ebx
  HANDLE RegistryHandleFromDeviceMap; // rdi
  ULONG ResultLength; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+50h] [rbp-29h] BYREF
  WCHAR SourceString[20]; // [rsp+A0h] [rbp+27h] BYREF

  memset(KeyValueInformation, 0, 0x48uLL);
  v2 = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  wcscpy(SourceString, L"CapabilityOverride");
  if ( a1 == (struct tagGRAPHICS_DEVICE *)-4LL )
    return 0LL;
  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL);
  if ( RegistryHandleFromDeviceMap )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( ZwQueryValueKey(
           RegistryHandleFromDeviceMap,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x42u,
           &ResultLength) >= 0 )
      v2 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
    ZwClose(RegistryHandleFromDeviceMap);
  }
  return v2;
}
