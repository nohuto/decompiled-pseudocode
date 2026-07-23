/*
 * XREFs of RtlTryAcquirePebLock @ 0x18007C590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL RtlTryAcquirePebLock(void)
{
  return RtlTryEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
