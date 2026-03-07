char __fastcall NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
        NSInstrumentation::CLeakTrackingAllocator *this,
        unsigned int a2)
{
  unsigned __int64 v3; // rsi

  v3 = a2;
  if ( !NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
          *((NSInstrumentation::CPointerHashTable **)this + 1),
          (const void *)a2) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 16, 0LL);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 8, 0, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 11);
    if ( *((_DWORD *)this + 10) )
      NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CLeakTrackingAllocator *)((char *)this + 24));
    if ( !NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
            *((NSInstrumentation::CPointerHashTable **)this + 1),
            (const void *)v3)
      && !NSInstrumentation::CPointerHashTable::Insert(
            *((NSInstrumentation::CPointerHashTable **)this + 1),
            (const void *)v3,
            (const void *)1) )
    {
      _InterlockedDecrement((volatile signed __int32 *)this + 11);
      ExReleasePushLockExclusiveEx((char *)this + 16, 0LL);
      KeLeaveCriticalRegion();
      return 0;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 11);
    ExReleasePushLockExclusiveEx((char *)this + 16, 0LL);
    KeLeaveCriticalRegion();
  }
  return 1;
}
