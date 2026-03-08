/*
 * XREFs of ACPIQueryPhysicalDeviceLocation @ 0x1C0081D08
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C007E480 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIInitialize @ 0x1C00A8F78 (ACPIInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1C0097DF4 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098134 (ACPIProcessPhysicalDeviceLocation.c)
 */

__int64 __fastcall ACPIQueryPhysicalDeviceLocation(__int64 a1)
{
  NTSTATUS v2; // esi
  __int64 v3; // rbx
  struct _DEVICE_OBJECT *v4; // rcx
  _BYTE *Data; // rbx
  const GUID *i; // rbx
  _QWORD *v7; // rbx
  struct _DEVICE_OBJECT *v8; // rcx
  struct _DEVICE_OBJECT *v9; // rcx
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v12[10]; // [rsp+58h] [rbp-49h] BYREF
  DEVPROPKEY v13; // [rsp+A8h] [rbp+7h] BYREF
  DEVPROPKEY PropertyKey; // [rsp+C0h] [rbp+1Fh] BYREF

  memset(v12, 0, 0x48uLL);
  SymbolicLinkName = 0LL;
  v2 = ACPIProcessPhysicalDeviceLocation(a1, 0LL, v12);
  if ( v2 >= 0 )
  {
    v3 = v12[2];
    if ( v12[2] )
    {
      v2 = IoSetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 784),
             &DEVPKEY_Device_PhysicalDeviceLocation,
             0,
             0,
             0x1003u,
             0x14u,
             (PVOID)(v12[2] + 16LL));
      if ( v2 >= 0 )
      {
        v4 = *(struct _DEVICE_OBJECT **)(a1 + 784);
        Data = (_BYTE *)(v3 + 52);
        if ( (*Data & 0x1F) != 0 )
          IoSetDevicePropertyData(v4, &DEVPKEY_Device_PhysicalDeviceLocationSpatial, 0, 0, 0x1003u, 0x10u, Data);
        else
          IoSetDevicePropertyData(v4, &DEVPKEY_Device_PhysicalDeviceLocationSpatial, 0, 0, 0, 0, 0LL);
      }
    }
    for ( i = (const GUID *)v12[5]; i != (const GUID *)&v12[5]; i = *(const GUID **)&i->Data1 )
    {
      v2 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 784),
             i + 1,
             (PUNICODE_STRING)((unsigned __int64)&i[2] & -(__int64)(*(_QWORD *)i[2].Data4 != 0LL)),
             &SymbolicLinkName);
      if ( v2 >= 0 )
      {
        v2 = IoSetDeviceInterfacePropertyData(
               &SymbolicLinkName,
               &DEVPKEY_Device_PhysicalDeviceLocation,
               0LL,
               0LL,
               4099,
               20,
               i[-5].Data4);
        if ( v2 >= 0 )
        {
          if ( (i[-3].Data4[4] & 0x1F) != 0 )
            IoSetDeviceInterfacePropertyData(
              &SymbolicLinkName,
              &DEVPKEY_Device_PhysicalDeviceLocationSpatial,
              0LL,
              0LL,
              4099,
              16,
              &i[-3].Data4[4]);
          else
            IoSetDeviceInterfacePropertyData(
              &SymbolicLinkName,
              &DEVPKEY_Device_PhysicalDeviceLocationSpatial,
              0LL,
              0LL,
              0,
              0,
              0LL);
        }
        RtlFreeUnicodeString(&SymbolicLinkName);
      }
    }
    v7 = (_QWORD *)v12[3];
    PropertyKey.fmtid = (DEVPROPGUID)DEVPKEY_Device_PhysicalDeviceLocationPanel;
    PropertyKey.pid = 2;
    v13.pid = 2;
    v13.fmtid = (DEVPROPGUID)DEVPKEY_Device_PhysicalDeviceLocationJoint;
    while ( 1 )
    {
      v9 = *(struct _DEVICE_OBJECT **)(a1 + 784);
      if ( v7 == &v12[3] )
        break;
      v2 = IoSetDevicePropertyData(v9, &PropertyKey, 0, 0, 0x1003u, 0x14u, v7 - 7);
      if ( v2 >= 0 )
      {
        v8 = *(struct _DEVICE_OBJECT **)(a1 + 784);
        if ( (*((_BYTE *)v7 - 36) & 0x1F) != 0 )
          IoSetDevicePropertyData(v8, &v13, 0, 0, 0x1003u, 0x10u, (char *)v7 - 36);
        else
          IoSetDevicePropertyData(v8, &v13, 0, 0, 0, 0, 0LL);
      }
      ++PropertyKey.pid;
      ++v13.pid;
      v7 = (_QWORD *)*v7;
    }
    while ( !IoSetDevicePropertyData(v9, &PropertyKey, 0, 0, 0, 0, 0LL) )
    {
      IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 784), &v13, 0, 0, 0, 0, 0LL);
      ++PropertyKey.pid;
      ++v13.pid;
      v9 = *(struct _DEVICE_OBJECT **)(a1 + 784);
    }
    ACPIFreePhysicalDeviceLocationDescriptors(v12);
  }
  return (unsigned int)v2;
}
