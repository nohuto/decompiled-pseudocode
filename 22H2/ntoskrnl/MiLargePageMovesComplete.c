/*
 * XREFs of MiLargePageMovesComplete @ 0x1403F63A0
 * Callers:
 *     MiGetLargePage @ 0x1402840B4 (MiGetLargePage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14022C490 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWakeLargePageWaiters @ 0x140557CBC (MiWakeLargePageWaiters.c)
 */

void __fastcall MiLargePageMovesComplete(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16) + 4544LL * a2;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 4328), &LockHandle);
  v3 = *(_QWORD *)(v2 + 4288);
  --*(_DWORD *)(v2 + 4284);
  *(_QWORD *)(v2 + 4288) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v3 )
    MiWakeLargePageWaiters(v3);
}
