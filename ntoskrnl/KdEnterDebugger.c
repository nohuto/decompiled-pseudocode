/*
 * XREFs of KdEnterDebugger @ 0x140AAD40C
 * Callers:
 *     KdpReport @ 0x140361A88 (KdpReport.c)
 *     KdRefreshDebuggerNotPresent @ 0x1403ACAF0 (KdRefreshDebuggerNotPresent.c)
 *     KiTpWriteMemory @ 0x14057CAEC (KiTpWriteMemory.c)
 *     KdpSymbol @ 0x140AAD56C (KdpSymbol.c)
 *     KdpCreateRemoteFile @ 0x140AADE64 (KdpCreateRemoteFile.c)
 *     KdSendTraceData @ 0x140AAE9F8 (KdSendTraceData.c)
 *     KdpCloseRemoteFile @ 0x140AB0A58 (KdpCloseRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140AB0CC0 (KdpReadRemoteFile.c)
 *     KdpCommandString @ 0x140AB228C (KdpCommandString.c)
 *     KdpPrint @ 0x140AB2368 (KdpPrint.c)
 *     KdpPrompt @ 0x140AB24E8 (KdpPrompt.c)
 *     KdpSetOwedBreakpoints @ 0x140AB2B80 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeSaveSupervisorState @ 0x14036A078 (KeSaveSupervisorState.c)
 *     KeFreezeExecution @ 0x14036ADA0 (KeFreezeExecution.c)
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfNotifyVerifierOfEvent @ 0x140ABF120 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  bool v4; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rsi
  __int64 ExtendedSupervisorState; // rcx
  unsigned int *v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  bool result; // al

  v2 = 0;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(3LL);
  if ( a1 )
  {
    KdTimerStop = __rdtsc();
    KdTimerDifference = KdTimerStop - KdTimerStart;
  }
  else
  {
    KdTimerStop = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v4 = KeFreezeExecution();
  off_140C01CD8[0]();
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
    qword_140C646D0 = ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100);
    KeSaveSupervisorState(
      ExtendedSupervisorState,
      ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100));
  }
  if ( (KiBugCheckActive & 3) == 0 || (unsigned int)KiBugCheckActive >> 4 != (_DWORD)Number )
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  v8 = (unsigned int *)KdLogBuffer[Number];
  if ( v8 )
  {
    v9 = (unsigned __int64 *)&v8[4 * *v8 + 4];
    v10 = __rdtsc();
    *v9 = ((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10;
    v9[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdDebuggerEnteredWithoutLock += v2;
  KdEnteredDebugger = 1;
  return result;
}
