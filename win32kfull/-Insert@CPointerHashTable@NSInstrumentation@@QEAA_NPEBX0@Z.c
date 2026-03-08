/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00C46E0
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00C3FAC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C0308230 (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C00C3D5C (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1C00C47D4 (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00D7674 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C0307DAC (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

bool __fastcall NSInstrumentation::CPointerHashTable::Insert(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        const void *a3)
{
  int i; // eax
  int inserted; // edi
  bool v8; // zf
  __int64 v10; // r8
  char v11; // al
  __int64 v12; // r8

  if ( a2 != (const void *)-1LL )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
    {
      NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(this, 0LL);
      ExReleasePushLockSharedEx(this, 0LL, v10);
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
      goto LABEL_10;
    }
    v8 = inserted == 1;
    if ( inserted != 1 )
      return !v8;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this, 0LL);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 7);
    if ( *((_DWORD *)this + 6) )
      NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
    v11 = NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedDecrement((volatile signed __int32 *)this + 7);
    if ( v11 )
    {
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
        ExReleasePushLockSharedEx(this, 0LL, v12);
      }
      inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
      NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
LABEL_10:
      v8 = inserted == 1;
      return !v8;
    }
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0;
}
