/*
 * XREFs of KdEnterDebugger @ 0x140AB1144
 * Callers:
 *     KdpReport @ 0x14030E694 (KdpReport.c)
 *     KdRefreshDebuggerNotPresent @ 0x1403B1840 (KdRefreshDebuggerNotPresent.c)
 *     KiTpWriteMemory @ 0x14057EFFC (KiTpWriteMemory.c)
 *     KdpSymbol @ 0x140AB1510 (KdpSymbol.c)
 *     KdpCreateRemoteFile @ 0x140AB1E04 (KdpCreateRemoteFile.c)
 *     KdSendTraceData @ 0x140AB2960 (KdSendTraceData.c)
 *     KdpCloseRemoteFile @ 0x140AB4A48 (KdpCloseRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140AB4CB0 (KdpReadRemoteFile.c)
 *     KdpCommandString @ 0x140AB627C (KdpCommandString.c)
 *     KdpPrint @ 0x140AB6358 (KdpPrint.c)
 *     KdpPrompt @ 0x140AB64D8 (KdpPrompt.c)
 *     KdpSetOwedBreakpoints @ 0x140AB6B70 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeFreezeExecution @ 0x14020D560 (KeFreezeExecution.c)
 *     KeSaveSupervisorState @ 0x14020E4AC (KeSaveSupervisorState.c)
 *     VfIsVerifierEnabled @ 0x140293860 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     VfNotifyVerifierOfEvent @ 0x140AC3120 (VfNotifyVerifierOfEvent.c)
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
    qword_140C64B40 = ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100);
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
