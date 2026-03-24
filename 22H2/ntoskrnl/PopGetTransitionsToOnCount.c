/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14038292C
 * Callers:
 *     PopSetSleepMarker @ 0x140774988 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C22E48;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
