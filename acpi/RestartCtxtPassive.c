/*
 * XREFs of RestartCtxtPassive @ 0x1C0051490
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x1C00057E4 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(__int64 a1)
{
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue((char *)a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
