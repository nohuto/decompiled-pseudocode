/*
 * XREFs of RIMIsHIDMouse @ 0x1C0031360
 * Callers:
 *     RIMLoadDeviceLegacyInfo @ 0x1C00305E4 (RIMLoadDeviceLegacyInfo.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1C0031278 (IsMouseDeviceOnIgnoreList.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C0031414 (RIMGetPointerDevicePDO.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall RIMIsHIDMouse(struct _DEVICE_OBJECT *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-30h]
  __int128 PropertyBuffer; // [rsp+40h] [rbp-28h] BYREF

  v1 = 0;
  DeviceObject = 0LL;
  if ( (int)RIMGetPointerDevicePDO(a1) >= 0 )
  {
    ResultLength = 0;
    PropertyBuffer = 0LL;
    if ( IoGetDeviceProperty(DeviceObject, DevicePropertyBusTypeGuid, 0x10u, &PropertyBuffer, &ResultLength) >= 0 )
    {
      v2 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_HID.Data1;
      if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_HID.Data1 )
        v2 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_HID.Data4;
      if ( !v2 )
        v1 = 1;
    }
    ObfDereferenceObject(DeviceObject);
  }
  return v1;
}
