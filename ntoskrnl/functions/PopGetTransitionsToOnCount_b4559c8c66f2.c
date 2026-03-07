__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C3C068;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
