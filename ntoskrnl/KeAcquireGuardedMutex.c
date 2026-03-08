/*
 * XREFs of KeAcquireGuardedMutex @ 0x140241010
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1402410FC (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si

  v2 = KeAbPreAcquire(Mutex, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    ExpAcquireFastMutexContended(Mutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
