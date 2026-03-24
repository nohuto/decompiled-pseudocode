/*
 * XREFs of ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0121828
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C0121020 (IsLegacyTouchPadDevice.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1C01214E0 (IsMouseDeviceOnIgnoreList.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C0121950 (GetPointerDevicePDO.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall IsHIDMouse(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int v2; // ebx
  __int128 *v3; // rdi
  __int64 v4; // rcx
  ULONG BufferLength; // [rsp+30h] [rbp-40h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-30h]
  GUID v9; // [rsp+50h] [rbp-20h]

  v2 = 0;
  DeviceObject = 0LL;
  if ( (int)GetPointerDevicePDO(a2) >= 0 )
  {
    BufferLength = 0;
    if ( IoGetDeviceProperty(DeviceObject, DevicePropertyBusTypeGuid, 0, 0LL, &BufferLength) == -1073741789 )
    {
      v3 = (__int128 *)Win32AllocPool(BufferLength, 1886417749LL);
      if ( v3 )
      {
        if ( IoGetDeviceProperty(DeviceObject, DevicePropertyBusTypeGuid, BufferLength, v3, &BufferLength) >= 0 )
        {
          v8 = *v3;
          v9 = GUID_BUS_TYPE_HID;
          v4 = v8 - *(_QWORD *)&GUID_BUS_TYPE_HID.Data1;
          if ( (_QWORD)v8 == *(_QWORD *)&GUID_BUS_TYPE_HID.Data1 )
            v4 = *((_QWORD *)&v8 + 1) - *(_QWORD *)v9.Data4;
          if ( !v4 )
            v2 = 1;
        }
        Win32FreePool(v3);
      }
    }
    ObfDereferenceObject(DeviceObject);
  }
  return v2;
}
