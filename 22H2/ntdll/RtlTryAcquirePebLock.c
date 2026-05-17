/*
 * XREFs of RtlTryAcquirePebLock @ 0x18007C590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlTryAcquirePebLock()
{
  return RtlTryEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
