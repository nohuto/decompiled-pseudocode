/*
 * XREFs of TUNNEL_ReleaseUsb4HostPowerReferenceForPort @ 0x1C008F2DC
 * Callers:
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C007DFC0 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_GetUsb4Host @ 0x1C008D2F4 (TUNNEL_GetUsb4Host.c)
 *     TUNNEL_ReleaseUsb4HostPowerReference @ 0x1C008F058 (TUNNEL_ReleaseUsb4HostPowerReference.c)
 */

void __fastcall TUNNEL_ReleaseUsb4HostPowerReferenceForPort(_QWORD **a1)
{
  _QWORD *v2; // rdx
  _QWORD *Usb4Host; // rdi
  UNICODE_STRING v4; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 51) & 0x800) != 0 )
  {
    v2 = a1[183];
    v4 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v2,
      &v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      (*a1)[343],
      0LL);
    Usb4Host = TUNNEL_GetUsb4Host((__int64)*a1, &v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, (*a1)[343]);
    if ( Usb4Host )
      TUNNEL_ReleaseUsb4HostPowerReference(*a1, (__int64)Usb4Host);
  }
}
