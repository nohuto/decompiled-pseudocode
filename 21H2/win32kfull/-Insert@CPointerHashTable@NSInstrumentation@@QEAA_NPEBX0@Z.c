/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00DDDA0
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00DDA68 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02DBF8C (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C00DD608 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1C00DDE8C (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00FA4B8 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02DBC10 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

bool __fastcall NSInstrumentation::CPointerHashTable::Insert(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        const void *a3)
{
  volatile signed __int32 *v3; // rbx
  int inserted; // edi
  bool v7; // zf
  char v9; // al

  v3 = (volatile signed __int32 *)UmfdAllocation::s_allocationLookup;
  _InterlockedIncrement((volatile signed __int32 *)UmfdAllocation::s_allocationLookup + 6);
  while ( *((_DWORD *)v3 + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v3, 0LL);
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement(v3 + 6);
  }
  inserted = NSInstrumentation::CPointerHashTable::InsertInternal(v3, a2, a3);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
  if ( inserted == 2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0LL);
    _InterlockedCompareExchange(v3 + 4, 0, 1);
    _InterlockedIncrement(v3 + 7);
    if ( *((_DWORD *)v3 + 6) )
      NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(v3 + 2));
    NSInstrumentation::CPointerHashTable::Resize((NSInstrumentation::CPointerHashTable *)v3);
    _InterlockedDecrement(v3 + 7);
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_9;
  }
  v7 = inserted == 1;
  if ( inserted != 1 )
    return !v7;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  _InterlockedCompareExchange(v3 + 4, 0, 1);
  _InterlockedIncrement(v3 + 7);
  if ( *((_DWORD *)v3 + 6) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(v3 + 2));
  v9 = NSInstrumentation::CPointerHashTable::Resize((NSInstrumentation::CPointerHashTable *)v3);
  _InterlockedDecrement(v3 + 7);
  if ( v9 )
  {
    ExReleasePushLockExclusiveEx(v3, 0LL);
    while ( 1 )
    {
      KeLeaveCriticalRegion();
      _InterlockedIncrement(v3 + 6);
      if ( !*((_DWORD *)v3 + 7) )
        break;
      NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v3, 0LL);
      ExReleasePushLockSharedEx(v3, 0LL);
    }
    inserted = NSInstrumentation::CPointerHashTable::InsertInternal(v3, a2, a3);
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
LABEL_9:
    v7 = inserted == 1;
    return !v7;
  }
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return 0;
}
