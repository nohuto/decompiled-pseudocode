/*
 * XREFs of KeSynchronizeExecution @ 0x1404177D0
 * Callers:
 *     DifKeSynchronizeExecutionWrapper @ 0x1405E3910 (DifKeSynchronizeExecutionWrapper.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x1402C5C00 (KeReleaseSpinLockFromDpcLevel.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140577D20 (KiSynchronizePassiveInterruptExecution.c)
 */

BOOLEAN __stdcall KeSynchronizeExecution(
        PKINTERRUPT Interrupt,
        PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext)
{
  unsigned __int64 *ActualLock; // rsi
  unsigned __int64 SynchronizeIrql; // rcx
  unsigned int CurrentIrql; // eax
  BOOLEAN v6; // al
  KSPIN_LOCK *v7; // rcx
  BOOLEAN v8; // si
  unsigned int v10; // [rsp+20h] [rbp-18h]

  ActualLock = Interrupt->ActualLock;
  SynchronizeIrql = Interrupt->SynchronizeIrql;
  if ( !(_BYTE)SynchronizeIrql )
    return KiSynchronizePassiveInterruptExecution(Interrupt, SynchronizeRoutine, SynchronizeContext);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  v10 = CurrentIrql;
  KxAcquireSpinLock(ActualLock);
  v6 = ((__int64 (__fastcall *)(PVOID))SynchronizeRoutine)(SynchronizeContext);
  v7 = ActualLock;
  v8 = v6;
  KeReleaseSpinLockFromDpcLevel(v7);
  __writecr8(v10);
  return v8;
}
