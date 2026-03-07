NTSTATUS __fastcall USBD_InstallExtPropDescSections(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
  NTSTATUS result; // eax
  const WCHAR *v6; // rdi
  unsigned int i; // esi
  __int64 v8; // rbx
  NTSTATUS v9; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp+10h] BYREF

  DeviceRegKey = 0LL;
  if ( !a2 || !a1 )
    return -1073741811;
  v4 = *(unsigned __int16 *)(a2 + 8);
  *(_QWORD *)&DestinationString.Length = *(_QWORD *)a2;
  if ( !(_WORD)v4 )
    return 0;
  if ( *(_DWORD *)&DestinationString.Length < 0xAu || *(_DWORD *)&DestinationString.Length > a3 )
    return -1073741811;
  result = IoOpenDeviceRegistryKey(a1, 1u, 0x1F0000u, &DeviceRegKey);
  if ( result >= 0 )
  {
    v6 = (const WCHAR *)(a2 + 10);
    for ( i = 0; i < v4; ++i )
    {
      DestinationString = 0LL;
      v8 = v6[4];
      RtlInitUnicodeString(&DestinationString, v6 + 5);
      v9 = ZwSetValueKey(
             DeviceRegKey,
             &DestinationString,
             0,
             *((_DWORD *)v6 + 1),
             (char *)v6 + v8 + 14,
             *(_DWORD *)((char *)v6 + v8 + 10));
      if ( v9 < 0 )
        break;
      v6 = (const WCHAR *)((char *)v6 + *(unsigned int *)v6);
    }
    ZwClose(DeviceRegKey);
    return v9;
  }
  return result;
}
