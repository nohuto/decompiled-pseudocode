void __fastcall RestartCtxtPassive(__int64 a1)
{
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue((char *)a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
