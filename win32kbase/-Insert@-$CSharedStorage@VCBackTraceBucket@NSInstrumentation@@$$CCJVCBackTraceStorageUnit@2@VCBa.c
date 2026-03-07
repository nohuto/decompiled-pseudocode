struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
        NSInstrumentation::CPrioritizedWriterLock *this,
        const __m128i *a2)
{
  int v4; // eax
  struct NSInstrumentation::CBackTraceStorageUnit *v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  NSInstrumentation::CBackTraceBucket *Pool2; // rax
  __int64 v9; // rbp

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
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  Pool2 = *(NSInstrumentation::CBackTraceBucket **)(v7 + 8);
  if ( Pool2 )
    goto LABEL_7;
  v9 = *((_QWORD *)this + 5);
  Pool2 = (NSInstrumentation::CBackTraceBucket *)ExAllocatePool2(262LL, 16LL, 826897237LL);
  if ( Pool2 )
  {
    ++*((_DWORD *)this + 9);
    *(_QWORD *)(v7 + 8) = Pool2;
    *(_QWORD *)Pool2 = 0LL;
    *((_QWORD *)Pool2 + 1) = v9;
LABEL_7:
    v5 = NSInstrumentation::CBackTraceBucket::Insert(Pool2, v6, (const struct NSInstrumentation::CBackTrace *const)a2);
  }
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
