/*
 * XREFs of UsbhPdoCreateSymbolicLink @ 0x1C0054170
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0055CA0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0046494 (UsbhSetPdoRegistryParameter.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoCreateSymbolicLink(PDEVICE_OBJECT DeviceObject, const GUID *InterfaceClassGuid)
{
  _DWORD *v4; // rdi
  struct _UNICODE_STRING *v5; // rsi
  NTSTATUS v6; // ebx
  int v7; // eax
  void *v8; // rcx

  v4 = PdoExt((__int64)DeviceObject);
  v5 = (struct _UNICODE_STRING *)(v4 + 300);
  v6 = IoRegisterDeviceInterface(DeviceObject, InterfaceClassGuid, 0LL, (PUNICODE_STRING)v4 + 75);
  if ( v6 < 0 )
  {
LABEL_10:
    UsbhException(*((_QWORD *)v4 + 148), *((_WORD *)v4 + 714), 0x65u, 0LL, 0, v6, -1, usbfile_pdo_c, 359, 0);
    goto LABEL_11;
  }
  v6 = IoSetDeviceInterfaceState(v5, 1u);
  if ( v6 >= 0 )
  {
    v4[355] |= 0x10u;
    v6 = UsbhSetPdoRegistryParameter(
           DeviceObject,
           L"SymbolicName",
           1u,
           *((PVOID *)v4 + 151),
           *((unsigned __int16 *)v4 + 600));
  }
  v7 = v4[355];
  if ( v6 < 0 )
  {
    if ( (v7 & 0x10) != 0 )
    {
      v4[355] = v7 & 0xFFFFFFEF;
      IoSetDeviceInterfaceState(v5, 0);
      v7 = v4[355];
    }
    v8 = (void *)*((_QWORD *)v4 + 151);
    v4[355] = v7 & 0xFFFFFFF7;
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *((_QWORD *)v4 + 151) = 0LL;
    }
    goto LABEL_10;
  }
  v4[355] = v7 | 8;
LABEL_11:
  Log(*((_QWORD *)v4 + 148), 256, 1937337676, v6, (__int64)DeviceObject);
  return (unsigned int)v6;
}
