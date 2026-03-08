/*
 * XREFs of ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C003E134
 * Callers:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00042E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C000E636 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003D8A8 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolInsertNonPagedAllocateTracker(
        FX_POOL *Pool,
        FX_POOL_TRACKER *Tracker,
        unsigned __int64 Size,
        unsigned int Tag,
        void *Caller)
{
  KIRQL v8; // r9
  _LIST_ENTRY *Blink; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax

  Tracker->PoolType = ExDefaultNonPagedPoolType;
  Tracker->Pool = Pool;
  Tracker->CallersAddress = Caller;
  Tracker->Tag = Tag;
  Tracker->Size = Size;
  v8 = KeAcquireSpinLockRaiseToDpc(&Pool->NonPagedLock.m_Lock);
  Blink = Pool->NonPagedHead.Blink;
  if ( Blink->Flink != &Pool->NonPagedHead )
    __fastfail(3u);
  Tracker->Link.Blink = Blink;
  Tracker->Link.Flink = &Pool->NonPagedHead;
  Blink->Flink = &Tracker->Link;
  Pool->NonPagedHead.Blink = &Tracker->Link;
  v10 = Size + Pool->NonPagedBytes;
  v11 = Pool->NonPagedAllocations + 1;
  Pool->NonPagedBytes = v10;
  Pool->NonPagedAllocations = v11;
  if ( v10 > Pool->PeakNonPagedBytes )
    Pool->PeakNonPagedBytes = v10;
  if ( v11 > Pool->PeakNonPagedAllocations )
    Pool->PeakNonPagedAllocations = v11;
  KeReleaseSpinLock(&Pool->NonPagedLock.m_Lock, v8);
}
