/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1402F63F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeGetCurrentThread();
  result = KeAbPreAcquire(a1, 0LL, 0);
  v5 = result;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)a1, 0) )
    result = ExpAcquireFastMutexContended(a1, result);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
