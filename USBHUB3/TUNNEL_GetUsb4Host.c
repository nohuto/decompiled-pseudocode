/*
 * XREFs of TUNNEL_GetUsb4Host @ 0x1C008D2F4
 * Callers:
 *     TUNNEL_RegisterUsb4HostForPort @ 0x1C008D404 (TUNNEL_RegisterUsb4HostForPort.c)
 *     TUNNEL_EvtInterfaceChange @ 0x1C008DCF0 (TUNNEL_EvtInterfaceChange.c)
 *     TUNNEL_AcquireUsb4HostPowerReferenceForPort @ 0x1C008F214 (TUNNEL_AcquireUsb4HostPowerReferenceForPort.c)
 *     TUNNEL_ReleaseUsb4HostPowerReferenceForPort @ 0x1C008F2DC (TUNNEL_ReleaseUsb4HostPowerReferenceForPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall TUNNEL_GetUsb4Host(__int64 a1, const UNICODE_STRING *a2)
{
  __int64 v3; // rdx
  _QWORD *v5; // rdi
  unsigned int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // rdx
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 2736);
  v5 = 0LL;
  String1 = 0LL;
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 112))(WdfDriverGlobals, v3);
  if ( !v7 )
    return 0LL;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 144))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 2736),
           v6);
    if ( !v8 )
      break;
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                     WdfDriverGlobals,
                     v8,
                     0LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      *v5,
      &String1);
    if ( !RtlCompareUnicodeString(&String1, a2, 1u) )
      break;
    if ( ++v6 >= v7 )
      return 0LL;
  }
  return v5;
}
