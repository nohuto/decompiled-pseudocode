/*
 * XREFs of PopGetTransitionsToOnCount @ 0x1403829E0
 * Callers:
 *     PopSetSleepMarker @ 0x1407740F4 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C22E48;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
