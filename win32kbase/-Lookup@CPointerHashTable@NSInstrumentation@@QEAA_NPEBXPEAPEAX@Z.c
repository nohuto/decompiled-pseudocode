char __fastcall NSInstrumentation::CPointerHashTable::Lookup(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        void **a3)
{
  int v6; // eax
  char v7; // di
  struct NSInstrumentation::CPointerHashTable::ENTRY *v8; // rax

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v6 = *((_DWORD *)this + 7);
  v7 = 0;
  while ( v6 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v6 = *((_DWORD *)this + 7);
  }
  v8 = NSInstrumentation::CPointerHashTable::LookupCommon(this, a2);
  if ( v8 )
  {
    v7 = 1;
    *a3 = (void *)*((_QWORD *)v8 + 1);
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v7;
}
