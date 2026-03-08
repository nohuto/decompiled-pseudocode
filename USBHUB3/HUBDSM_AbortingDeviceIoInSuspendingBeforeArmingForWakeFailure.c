/*
 * XREFs of HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure @ 0x1C00241A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00263DC (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  int v3; // eax
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 960);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         v1[54],
         0LL);
  *(_OWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_DWORD *)v2 = 24;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(*v1 + 248LL);
  *(_QWORD *)(v2 + 16) = v1[3];
  v3 = HUBUCX_SubmitUcxIoctl(v1, 4788311LL);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1[1] + 1432LL),
      2u,
      5u,
      0x42u,
      (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
      v5);
  }
  return 1000LL;
}
