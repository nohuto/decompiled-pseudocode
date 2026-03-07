void __fastcall FxPoolInsertPagedAllocateTracker(
        FX_POOL *Pool,
        FX_POOL_TRACKER *Tracker,
        unsigned __int64 Size,
        unsigned int Tag,
        void *Caller)
{
  _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax

  Tracker->Pool = Pool;
  Tracker->CallersAddress = Caller;
  Tracker->Tag = Tag;
  Tracker->PoolType = PagedPool;
  Tracker->Size = Size;
  ExAcquireFastMutex(&Pool->PagedLock.m_Lock);
  Blink = Pool->PagedHead.Blink;
  if ( Blink->Flink != &Pool->PagedHead )
    __fastfail(3u);
  Tracker->Link.Flink = &Pool->PagedHead;
  Tracker->Link.Blink = Blink;
  Blink->Flink = &Tracker->Link;
  Pool->PagedHead.Blink = &Tracker->Link;
  v9 = Size + Pool->PagedBytes;
  v10 = Pool->PagedAllocations + 1;
  Pool->PagedBytes = v9;
  Pool->PagedAllocations = v10;
  if ( v9 > Pool->PeakPagedBytes )
    Pool->PeakPagedBytes = v9;
  if ( v10 > Pool->PeakPagedAllocations )
    Pool->PeakPagedAllocations = v10;
  ExReleaseFastMutex(&Pool->PagedLock.m_Lock);
}
