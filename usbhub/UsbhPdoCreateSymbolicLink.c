__int64 __fastcall UsbhPdoCreateSymbolicLink(PDEVICE_OBJECT DeviceObject, const GUID *InterfaceClassGuid)
{
  _DWORD *v4; // rsi
  struct _UNICODE_STRING *v5; // rbp
  NTSTATUS v6; // edi
  int *v7; // rbx
  int v8; // eax
  void *v9; // rcx

  v4 = PdoExt((__int64)DeviceObject);
  v5 = (struct _UNICODE_STRING *)(v4 + 300);
  v6 = IoRegisterDeviceInterface(DeviceObject, InterfaceClassGuid, 0LL, (PUNICODE_STRING)v4 + 75);
  if ( v6 < 0 )
  {
LABEL_10:
    UsbhException(*((_QWORD *)v4 + 148), *((_WORD *)v4 + 714), 0x65u, 0LL, 0, v6, -1, usbfile_pdo_c, 359, 0);
    goto LABEL_11;
  }
  v7 = v4 + 355;
  v6 = IoSetDeviceInterfaceState(v5, 1u);
  if ( v6 >= 0 )
  {
    *v7 |= 0x10u;
    v6 = UsbhSetPdoRegistryParameter(
           DeviceObject,
           L"SymbolicName",
           1u,
           *((PVOID *)v4 + 151),
           *((unsigned __int16 *)v4 + 600));
  }
  v8 = *v7;
  if ( v6 < 0 )
  {
    if ( (v8 & 0x10) != 0 )
    {
      *v7 = v8 & 0xFFFFFFEF;
      IoSetDeviceInterfaceState(v5, 0);
    }
    *v7 &= ~8u;
    v9 = (void *)*((_QWORD *)v4 + 151);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *((_QWORD *)v4 + 151) = 0LL;
    }
    goto LABEL_10;
  }
  *v7 = v8 | 8;
LABEL_11:
  Log(*((_QWORD *)v4 + 148), 256, 1937337676, v6, (__int64)DeviceObject);
  return (unsigned int)v6;
}
