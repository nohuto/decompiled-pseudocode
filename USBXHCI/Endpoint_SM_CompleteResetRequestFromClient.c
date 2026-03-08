/*
 * XREFs of Endpoint_SM_CompleteResetRequestFromClient @ 0x1C003B958
 * Callers:
 *     Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x1C003BA04 (Endpoint_SM_OkToCompleteEndpointResetRequest.c)
 *     ESM_CompletingResetRequestWhenEndpointNotHalted @ 0x1C00516F0 (ESM_CompletingResetRequestWhenEndpointNotHalted.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddqd @ 0x1C003D8E0 (WPP_RECORDER_SF_ddqd.c)
 */

__int64 __fastcall Endpoint_SM_CompleteResetRequestFromClient(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi

  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFF7F);
  v3 = *(_DWORD *)(a1 + 288);
  v4 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 259;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqd(*(_QWORD *)(a1 + 80), 4, a3, 115);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v4,
           v3);
}
