__int64 __fastcall GetRegEDID(struct _DEVICE_OBJECT *a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  NTSTATUS v6; // esi
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  KeyHandle = 0LL;
  if ( IoOpenDeviceRegistryKey(a1, 1u, 0x20019u, &KeyHandle) < 0 )
    return 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"EDID");
  v6 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, a2, 0x190u, &ResultLength);
  if ( v6 >= 0 )
  {
    if ( a2[3] >= 0x80 )
      *a3 = (char *)a2 + a2[2];
    else
      v6 = -1073741823;
  }
  ZwClose(KeyHandle);
  LOBYTE(v3) = v6 >= 0;
  return v3;
}
