/*
 * XREFs of FsRtlAcquireHeaderMutex @ 0x140240F70
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140240CC0 (FsRtlpWaitForIoAtEof.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1402410FC (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

volatile signed __int32 *__fastcall FsRtlAcquireHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 *result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v3 = KeAbPreAcquire(v2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v2, 0) )
    ExpAcquireFastMutexContended(v2, v3);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 48) = CurrentIrql;
  result = a2;
  if ( a2 )
  {
    result = a2;
    _InterlockedIncrement(a2);
  }
  return result;
}
