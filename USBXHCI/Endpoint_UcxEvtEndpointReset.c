/*
 * XREFs of Endpoint_UcxEvtEndpointReset @ 0x1C003C830
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_ddqd @ 0x1C003D8E0 (WPP_RECORDER_SF_ddqd.c)
 */

void __fastcall Endpoint_UcxEvtEndpointReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rbx
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r8
  __int64 *v11; // rdi
  int v12; // edx
  int v13; // r8d
  signed __int32 v14; // eax
  signed __int32 v15; // ett

  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C00631A8);
  if ( *(_DWORD *)(v5 + 1360) == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, v6, v7);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_ddqd(*(_QWORD *)(v5 + 80), v8, v9, 57);
    }
    v10 = 3221225485LL;
LABEL_15:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
      WdfDriverGlobals,
      a3,
      v10);
    return;
  }
  v11 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a3,
                     off_1C0063090);
  memset(v11, 0, 0x70uLL);
  _m_prefetchw((const void *)(v5 + 32));
  v14 = *(_DWORD *)(v5 + 32);
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 32), v14 ^ 0x80, v14);
  }
  while ( v15 != v14 );
  if ( (v14 & 0x80u) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_ddqd(*(_QWORD *)(v5 + 80), v12, v13, 58);
    }
    v10 = 0LL;
    goto LABEL_15;
  }
  *v11 = v5;
  *(_QWORD *)(v5 + 280) = a3;
  *(_DWORD *)(v5 + 288) = 259;
  ESM_AddEvent((KSPIN_LOCK *)(v5 + 296), 23);
}
