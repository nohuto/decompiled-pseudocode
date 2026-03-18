/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14038B454
 * Callers:
 *     PopSetSleepMarker @ 0x1407FD9E0 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C22008;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
