/*
 * XREFs of HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C0029078
 * Callers:
 *     HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake @ 0x1C001FAA0 (HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake.c)
 *     HUBDSM_PurgingDeviceIoOnPrepareForHibernate @ 0x1C001FAD0 (HUBDSM_PurgingDeviceIoOnPrepareForHibernate.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00263DC (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl(__int64 *a1)
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
  *(_DWORD *)v2 = 32;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(*a1 + 248);
  *(_QWORD *)(v2 + 16) = a1[3];
  *(_BYTE *)(v2 + 24) = 1;
  result = HUBUCX_SubmitUcxIoctl(a1, 0x49102Fu);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432),
             2u,
             5u,
             0x44u,
             (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
             v4);
  }
  return result;
}
