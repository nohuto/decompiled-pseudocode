/*
 * XREFs of PopGetTransitionsToOnCount @ 0x140382830
 * Callers:
 *     PopSetSleepMarker @ 0x140773F34 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C22DC8;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
