/*
 * XREFs of UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C000B7C0
 * Callers:
 *     Endpoint_Create @ 0x1C006D624 (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbDevice_AddEndpointToDeviceEndpointList(__int64 a1, __int64 a2, _QWORD *a3)
{
  KIRQL v6; // al
  _QWORD *v7; // rdx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1640))(
    WdfDriverGlobals,
    *(_QWORD *)a1,
    UsbDevice_AddEndpointToDeviceEndpointList,
    6960LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c");
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1640))(
    WdfDriverGlobals,
    a2,
    UsbDevice_AddEndpointToDeviceEndpointList,
    6968LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c");
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v7 = *(_QWORD **)(a1 + 104);
  if ( *v7 != a1 + 96 )
    __fastfail(3u);
  *a3 = a1 + 96;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a1 + 104) = a3;
  ++*(_DWORD *)(a1 + 112);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v6);
}
