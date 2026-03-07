char __fastcall NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2)
{
  int v4; // eax
  char v5; // di
  const void **v6; // rax

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v4 = *((_DWORD *)this + 7);
  v5 = 0;
  while ( v4 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v4 = *((_DWORD *)this + 7);
  }
  v6 = NSInstrumentation::CPointerHashTable::LookupCommon(this, a2);
  if ( v6 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)v6 + 1);
    v5 = 1;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
