/*
 * XREFs of PopGetTransitionsToOnCount @ 0x140592D20
 * Callers:
 *     PopSetSleepMarker @ 0x14097E4A0 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C3C068;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
