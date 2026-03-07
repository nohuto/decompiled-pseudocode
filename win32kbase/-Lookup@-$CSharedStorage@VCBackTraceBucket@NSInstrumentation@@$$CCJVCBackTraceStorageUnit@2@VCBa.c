struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
        NSInstrumentation::CPrioritizedWriterLock *this,
        const __m128i *a2)
{
  int v4; // eax
  struct NSInstrumentation::CBackTraceStorageUnit *v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  NSInstrumentation::CBackTraceBucket *v8; // rcx

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v4 = *((_DWORD *)this + 7);
  v5 = 0LL;
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
  v6 = NSInstrumentation::CBackTrace::ComputeHash(a2);
  v7 = *((_QWORD *)this + 6) + 16 * (v6 % *((unsigned int *)this + 8));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v7, 0LL);
  v8 = *(NSInstrumentation::CBackTraceBucket **)(v7 + 8);
  if ( v8 )
    v5 = NSInstrumentation::CBackTraceBucket::Lookup(v8, (const struct NSInstrumentation::CBackTrace *const)a2, v6);
  ExReleasePushLockSharedEx(v7, 0LL);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
