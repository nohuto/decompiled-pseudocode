/*
 * XREFs of UsbhPdoQueryWmiRegInfo @ 0x1C0049A80
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     memmove @ 0x1C0023580 (memmove.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoQueryWmiRegInfo(
        PDEVICE_OBJECT DeviceObject,
        _DWORD *a2,
        __int64 a3,
        _QWORD *a4,
        int a5,
        _QWORD *a6)
{
  _DWORD *v9; // rax
  _QWORD *v10; // rdx
  _DWORD *v11; // rsi
  ULONG v13; // edi
  void *Pool2; // rbx
  ULONG BufferLength; // [rsp+70h] [rbp+8h] BYREF

  BufferLength = 0;
  v9 = PdoExt((__int64)DeviceObject);
  v10 = a6;
  v11 = v9;
  *a2 = 32;
  *a4 = &UsbhRegistryPath;
  *v10 = DeviceObject;
  if ( (v9[355] & 0x400) == 0 )
  {
    UsbhException(*((_QWORD *)v9 + 148), 0, 99, 0, 0, -1073741436, 0, usbfile_wmi_c, 1624, 0);
    return 3221225860LL;
  }
  v13 = 80;
  if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0x50u, (char *)v9 + 2442, &BufferLength) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, BufferLength, 1112885333LL);
    if ( !Pool2 )
      return 3221225626LL;
    if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, BufferLength, Pool2, &BufferLength) >= 0 )
    {
      if ( BufferLength < 0x50 )
        v13 = BufferLength;
      memmove((char *)v11 + 2442, Pool2, v13);
      *((_WORD *)v11 + 1260) = 0;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  return 0LL;
}
