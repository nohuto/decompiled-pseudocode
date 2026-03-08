/*
 * XREFs of KdExitDebugger @ 0x140AAD2D0
 * Callers:
 *     KdpReport @ 0x140361A88 (KdpReport.c)
 *     KdRefreshDebuggerNotPresent @ 0x1403ACAF0 (KdRefreshDebuggerNotPresent.c)
 *     KiTpWriteMemory @ 0x14057CAEC (KiTpWriteMemory.c)
 *     KdpSymbol @ 0x140AAD56C (KdpSymbol.c)
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 *     KdpCreateRemoteFile @ 0x140AADE64 (KdpCreateRemoteFile.c)
 *     KdSendTraceData @ 0x140AAE9F8 (KdSendTraceData.c)
 *     KdpCloseRemoteFile @ 0x140AB0A58 (KdpCloseRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140AB0CC0 (KdpReadRemoteFile.c)
 *     KdpCommandString @ 0x140AB228C (KdpCommandString.c)
 *     KdpPrint @ 0x140AB2368 (KdpPrint.c)
 *     KdpPrompt @ 0x140AB24E8 (KdpPrompt.c)
 *     KdpSetOwedBreakpoints @ 0x140AB2B80 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140230290 (KeInsertQueueDpc.c)
 *     KeRestoreSupervisorState @ 0x14036A0E0 (KeRestoreSupervisorState.c)
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 *     ExQueueDebuggerWorker @ 0x14036B1C0 (ExQueueDebuggerWorker.c)
 *     KeThawExecution @ 0x14036B200 (KeThawExecution.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfNotifyVerifierOfEvent @ 0x140ABF120 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(char a1)
{
  __int64 v1; // rax
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = (_DWORD *)KdLogBuffer[v1];
  if ( v3 )
  {
    v4 = (unsigned int)*v3;
    v5 = __rdtsc();
    *(_QWORD *)&v3[4 * v4 + 6] = v3[4 * v4 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u | ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - *(_QWORD *)&v3[4 * v4 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v4 == 254 )
      *v3 = 0;
    else
      *v3 = v4 + 1;
  }
  off_140C01CC8[0]();
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140C646D0);
    qword_140C646D0 = 0LL;
  }
  KeThawExecution(a1);
  if ( KdTimerStop )
    KdTimerStart = __rdtsc();
  else
    KdTimerStart = 0LL;
  if ( !PoHiberInProgress && (KiBugCheckActive & 3) == 0 )
  {
    if ( !_InterlockedExchange(&KdpTimeSlipPending, 2) )
      KeInsertQueueDpc(&KdpTimeSlipDpc, 0LL, 0LL);
    ExQueueDebuggerWorker();
  }
  result = VfIsVerifierEnabled();
  if ( (_DWORD)result )
    return VfNotifyVerifierOfEvent(4LL);
  return result;
}
