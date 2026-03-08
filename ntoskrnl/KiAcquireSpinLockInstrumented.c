/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x140457E30
 * Callers:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     KiCallInterruptServiceRoutine @ 0x1402B7620 (KiCallInterruptServiceRoutine.c)
 *     PsGetThreadProperty @ 0x1402C83E0 (PsGetThreadProperty.c)
 *     IopDequeueIrpFromThread @ 0x14030F160 (IopDequeueIrpFromThread.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030F360 (IopCancelIrpsInFileObjectList.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IopQueueIrpToFileObject @ 0x140315880 (IopQueueIrpToFileObject.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14024F7D0 (KxWaitForSpinLockAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x1405FE910 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // ebp
  int v4; // r14d
  int v5; // r9d
  int v6; // edi
  char v7; // si
  unsigned __int64 v8; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v4 = 0;
  v5 = 0;
  v6 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v7 = 1;
    result = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = result;
  }
  else
  {
    v7 = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    result = KxWaitForSpinLockAndAcquire(a1);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v5 = result;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v7 )
  {
    v8 = __rdtsc();
    return PerfLogSpinLockAcquire(v6, v8, (int)v8 - v4, v5, InterruptCount, 0);
  }
  return result;
}
