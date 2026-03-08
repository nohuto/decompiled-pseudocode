/*
 * XREFs of KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402DE844
 * Callers:
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1402DE81C (MiTryToAcquireExpansionLockAtDpc.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1402DE86C (KxTryToAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  a2[1] = a1;
  return KxTryToAcquireQueuedSpinLock(a2, a1);
}
