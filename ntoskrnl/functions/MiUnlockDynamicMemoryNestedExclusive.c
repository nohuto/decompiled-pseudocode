signed __int32 MiUnlockDynamicMemoryNestedExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6B198, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6B198);
  return KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
}
