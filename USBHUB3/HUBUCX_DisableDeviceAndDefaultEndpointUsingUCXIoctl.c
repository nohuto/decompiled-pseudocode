/*
 * XREFs of HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C0026B64
 * Callers:
 *     HUBDSM_DisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership @ 0x1C001F820 (HUBDSM_DisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015204 (WPP_RECORDER_SF_q.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00263DC (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         a1[54],
         0LL);
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_DWORD *)v2 = 40;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(*a1 + 248);
  *(_QWORD *)(v2 + 16) = a1[3];
  *(_QWORD *)(v2 + 24) = a1[11];
  if ( (*((_DWORD *)a1 + 411) & 0x4000000) != 0 )
  {
    v3 = a1[2];
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 4) == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
          WPP_RECORDER_SF_q(
            *(_QWORD *)(a1[1] + 1432),
            4u,
            5u,
            0x1Bu,
            (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
            v4);
        }
        *(_DWORD *)(v2 + 32) = 2;
      }
    }
  }
  result = HUBUCX_SubmitUcxIoctl(a1, 0x49102Bu);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432),
             2u,
             5u,
             0x1Cu,
             (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
             v6);
  }
  return result;
}
