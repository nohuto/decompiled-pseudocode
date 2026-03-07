__int64 __fastcall UsbDevice_RemoveEndpointFromDeviceEndpointList(__int64 a1, __int64 a2, _QWORD *a3)
{
  KIRQL v6; // al
  __int64 v7; // r9
  _QWORD *v8; // r8

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v7 = *a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v8 = (_QWORD *)a3[1], (_QWORD *)*v8 != a3) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  --*(_DWORD *)(a1 + 112);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v6);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void (__fastcall *)(__int64, __int64, _QWORD *), __int64, const char *))(WdfFunctions_01023 + 1648))(
    WdfDriverGlobals,
    a2,
    UsbDevice_AddEndpointToDeviceEndpointList,
    7016LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c");
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void (__fastcall *)(__int64, __int64, _QWORD *), __int64, const char *))(WdfFunctions_01023 + 1648))(
           WdfDriverGlobals,
           *(_QWORD *)a1,
           UsbDevice_AddEndpointToDeviceEndpointList,
           7024LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c");
}
