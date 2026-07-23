/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x1800DF204
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180082DC4 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180080710 (RtlpInvalidatePathCache.c)
 */

void RtlpSignalSystemDirsModification()
{
  void *v0; // rsi
  void *v1; // rdi
  void *v2; // rbx

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v0 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v1 = (void *)RtlpInvalidatePathCache((__int64 *)&RtlpExeSearchPath);
  v2 = (void *)RtlpInvalidatePathCache(&RtlpSearchPath);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
