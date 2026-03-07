__int64 __fastcall DrvpGetDeviceInterfaceName(PDEVICE_OBJECT PhysicalDeviceObject, __int64 a2, __int64 a3, wchar_t *a4)
{
  NTSTATUS DeviceInterfaces; // ebx
  wchar_t *v7; // rcx
  wchar_t *Src; // [rsp+38h] [rbp+10h] BYREF

  Src = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, PhysicalDeviceObject, 0, &Src);
  if ( DeviceInterfaces < 0 )
  {
    WdLogSingleEntry2(3LL, PhysicalDeviceObject);
  }
  else
  {
    wcsncpy_s(a4, 0x80uLL, Src, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = Src;
    a4[1] = 92;
    ExFreePoolWithTag(v7, 0);
  }
  return (unsigned int)DeviceInterfaces;
}
