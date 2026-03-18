/*
 * XREFs of KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140348C20
 * Callers:
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x140348BF8 (MiTryToAcquireExpansionLockAtDpc.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x140348C48 (KxTryToAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  a2[1] = a1;
  return KxTryToAcquireQueuedSpinLock(a2, a1);
}
