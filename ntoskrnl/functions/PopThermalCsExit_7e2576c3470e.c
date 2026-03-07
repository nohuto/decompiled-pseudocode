char PopThermalCsExit()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL);
  LOBYTE(word_140C3C450) = 1;
  if ( dword_140C3C454 )
  {
    LOBYTE(v0) = 1;
    PopThermalStandbyNotify(v0);
    word_140C3C450 = 256;
  }
  else if ( HIBYTE(word_140C3C450) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C3C450) = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C3C508, DelayedWorkQueue);
}
