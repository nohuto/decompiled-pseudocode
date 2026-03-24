/*
 * XREFs of KdExitDebugger @ 0x1409B7190
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1403CF810 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x140511924 (KdpReport.c)
 *     KiTpWriteMemory @ 0x14051D43C (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x1409B6970 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x1409B6BD0 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x1409B6DFC (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x1409B72D0 (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x1409B84F4 (KdpSendWaitContinue.c)
 *     KdpCommandString @ 0x1409B9600 (KdpCommandString.c)
 *     KdpPrint @ 0x1409B96C8 (KdpPrint.c)
 *     KdpPrompt @ 0x1409B9848 (KdpPrompt.c)
 *     KdpSymbol @ 0x1409B99C0 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x1409BA5E0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD00 (KeInsertQueueDpc.c)
 *     VfIsVerifierEnabled @ 0x14032D0E0 (VfIsVerifierEnabled.c)
 *     ExQueueDebuggerWorker @ 0x1403C661C (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KeRestoreSupervisorState @ 0x140519DA0 (KeRestoreSupervisorState.c)
 *     KeThawExecution @ 0x14051DB20 (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C6060 (VfNotifyVerifierOfEvent.c)
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
  off_140C008B8[0]();
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140CF6890);
    qword_140CF6890 = 0LL;
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
