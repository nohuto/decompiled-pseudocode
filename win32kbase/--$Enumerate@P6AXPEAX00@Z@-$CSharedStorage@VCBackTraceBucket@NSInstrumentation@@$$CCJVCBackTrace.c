/*
 * XREFs of ??$Enumerate@P6AXPEAX00@Z@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C019C828
 * Callers:
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1C019B098 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00EF470 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?WriteBackTraceDumpBufferCallback@NSInstrumentation@@YAXPEAX00@Z @ 0x1C019D1E0 (-WriteBackTraceDumpBufferCallback@NSInstrumentation@@YAXPEAX00@Z.c)
 */

void __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Enumerate<void (*)(void *,void *,void *)>(
        NSInstrumentation::CPrioritizedWriterLock *this,
        __int64 a2,
        void *a3)
{
  int i; // eax
  unsigned int j; // ebp
  __int64 v7; // rsi
  void *v8; // r9
  __int64 *v9; // rdi

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
  }
  for ( j = 0; j < *((_DWORD *)this + 8); ++j )
  {
    v7 = *((_QWORD *)this + 6) + 16LL * j;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v7, 0LL);
    v9 = *(__int64 **)(v7 + 8);
    if ( v9 )
    {
      while ( 1 )
      {
        v9 = (__int64 *)*v9;
        if ( !v9 )
          break;
        NSInstrumentation::WriteBackTraceDumpBufferCallback((NSInstrumentation *)v9, v9 + 2, a3, v8);
      }
    }
    ExReleasePushLockSharedEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
}
