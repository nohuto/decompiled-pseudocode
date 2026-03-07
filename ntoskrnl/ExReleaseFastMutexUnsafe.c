void __stdcall ExReleaseFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  signed __int32 v2; // eax

  FastMutex->Owner = 0LL;
  v2 = _InterlockedCompareExchange(&FastMutex->Count, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended(&FastMutex->Count, v2);
  KeAbPostRelease((ULONG_PTR)FastMutex);
}
