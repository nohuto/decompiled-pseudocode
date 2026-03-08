/*
 * XREFs of Controller_AddControllerToGlobalControllerList @ 0x1C001A530
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_AddControllerToGlobalControllerList(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1640))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 8),
    Controller_AddControllerToGlobalControllerList,
    7653LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16));
  v3 = g_WdfDriverUsbXhciContext;
  v4 = (_QWORD *)(a1 + 24);
  v5 = *(_QWORD **)(g_WdfDriverUsbXhciContext + 8);
  if ( *v5 != g_WdfDriverUsbXhciContext )
    __fastfail(3u);
  *v4 = g_WdfDriverUsbXhciContext;
  v4[1] = v5;
  *v5 = v4;
  *(_QWORD *)(v3 + 8) = v4;
  ++*(_DWORD *)(v3 + 24);
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 16), v2);
}
