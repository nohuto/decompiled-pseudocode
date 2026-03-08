/*
 * XREFs of HUBFDO_EvtDeviceDestroyCallback @ 0x1C000DE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceDestroyCallback(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C006A198);
  v3 = result;
  v4 = *(_QWORD *)(result + 2304);
  if ( v4 )
  {
    LOBYTE(v2) = 1;
    result = ExDeleteTimer(v4, v2, 0LL, 0LL);
    *(_QWORD *)(v3 + 2304) = 0LL;
  }
  return result;
}
