/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14059523C
 * Callers:
 *     PopSetSleepMarker @ 0x140981550 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C3C448;
  PopReleaseRwLock(&PopTelemetryOsState);
  return v0;
}
