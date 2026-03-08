/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C019C06C
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C019B9AC (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00EF470 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C019A6D0 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1C019C284 (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C019C728 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 */

bool __fastcall NSInstrumentation::CPointerHashTable::Insert(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        const void *a3)
{
  int i; // eax
  int inserted; // edi
  bool v9; // zf
  bool v10; // al

  if ( a2 == (const void *)-1LL )
    return 0;
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
  inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  if ( inserted == 2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this, 0LL);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 7);
    if ( *((_DWORD *)this + 6) )
      NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
    NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedDecrement((volatile signed __int32 *)this + 7);
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
LABEL_19:
    v9 = inserted == 1;
    return !v9;
  }
  v9 = inserted == 1;
  if ( inserted == 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this, 0LL);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 7);
    if ( *((_DWORD *)this + 6) )
      NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
    v10 = NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedDecrement((volatile signed __int32 *)this + 7);
    if ( !v10 )
    {
      ExReleasePushLockExclusiveEx(this, 0LL);
      KeLeaveCriticalRegion();
      return 0;
    }
    ExReleasePushLockExclusiveEx(this, 0LL);
    while ( 1 )
    {
      KeLeaveCriticalRegion();
      _InterlockedIncrement((volatile signed __int32 *)this + 6);
      if ( !*((_DWORD *)this + 7) )
        break;
      NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(this, 0LL);
      ExReleasePushLockSharedEx(this, 0LL);
    }
    inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    goto LABEL_19;
  }
  return !v9;
}
