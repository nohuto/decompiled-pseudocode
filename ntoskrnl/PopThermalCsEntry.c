char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C3C450) = 0;
  if ( a1 )
  {
    byte_140C3C45D = 1;
    LOBYTE(v2) = byte_140C3C45C;
    qword_140C3C460 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v2);
  }
  if ( !dword_140C3C454 )
    PopThermalStandbyEndTracking(0LL);
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C3C508, DelayedWorkQueue);
}
