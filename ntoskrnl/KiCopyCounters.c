/*
 * XREFs of KiCopyCounters @ 0x140571D30
 * Callers:
 *     NtContinueEx @ 0x140416740 (NtContinueEx.c)
 *     NtRaiseException @ 0x140416BC0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1404172F0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x140417850 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140418220 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140418660 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140418AA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140418EE0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140419310 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x14041B4E0 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x14041BCF0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x14041D590 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14041D9E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14041E8C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14041EFD0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1404212A0 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x140423B80 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x140424800 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140424F00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140426F00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140427E80 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1404285C0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140429040 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140429740 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14042B100 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14042BF40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x14042C440 (KiFastFailDispatch.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140458820 (KiUpdateStibpPairing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCopyCountersWorker @ 0x140972238 (KiCopyCountersWorker.c)
 */

struct _KPRCB *__fastcall KiCopyCounters(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  int v9; // eax
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  struct _KPRCB *result; // rax

  v1 = *(_QWORD *)(a1 + 360);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  do
  {
    v4 = *(_QWORD *)(a1 + 72);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v7 = *SchedulerAssist;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v9 = KiCopyCountersWorker(a1, v1);
    _disable();
  }
  while ( !v9 && v4 != *(_QWORD *)(a1 + 72) );
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
  }
  __writecr8(CurrentIrql);
  result = KeGetCurrentPrcb();
  if ( (result->PairRegister & 2) != 0 )
    return (struct _KPRCB *)KiUpdateStibpPairing(0LL);
  return result;
}
