/*
 * XREFs of HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C0026CB0
 * Callers:
 *     HUBDSM_EnablingDeviceInUCXFor30 @ 0x1C0020BF0 (HUBDSM_EnablingDeviceInUCXFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00263DC (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl(__int64 *a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

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
  result = HUBUCX_SubmitUcxIoctl(a1, 0x491017u);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432),
             2u,
             5u,
             0x1Du,
             (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
             v4);
  }
  return result;
}
