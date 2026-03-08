/*
 * XREFs of ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C540
 * Callers:
 *     Win32AllocateFromPagedLookasideList @ 0x1C00535E0 (Win32AllocateFromPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C009D8BC (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00EF470 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1C019C414 (-LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
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
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 1);
    v5 = 1;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
