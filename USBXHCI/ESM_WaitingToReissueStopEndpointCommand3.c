/*
 * XREFs of ESM_WaitingToReissueStopEndpointCommand3 @ 0x1C0051F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_WaitingToReissueStopEndpointCommand3(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  bool v3; // cc
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = -100000LL;
  v3 = *(_DWORD *)(v1 + 156) <= 0xAu;
  v4 = *(_QWORD *)(v1 + 1304);
  if ( !v3 )
    v2 = -1000000LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2552))(WdfDriverGlobals, v4, v2);
  return 1000LL;
}
