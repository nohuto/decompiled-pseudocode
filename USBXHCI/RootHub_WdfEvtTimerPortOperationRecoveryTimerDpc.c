/*
 * XREFs of RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C00409F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc(__int64 a1)
{
  __int64 **v1; // rax
  __int64 *v2; // rdx
  __int64 v3; // rbx
  int v5; // [rsp+28h] [rbp-20h]

  v1 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0063400);
  v2 = *v1;
  v3 = **v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *((_DWORD *)v2 + 2);
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      (_DWORD)v2,
      11,
      214,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      v5);
  }
  return Controller_ReportFatalErrorEx(*(_QWORD *)(v3 + 8), 2u, 4133, 0LL, 0LL, 0LL, 0LL, 0LL);
}
