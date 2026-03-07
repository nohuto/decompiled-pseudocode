char __fastcall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        struct NSInstrumentation::CBackTrace *a4)
{
  NSInstrumentation::CPrioritizedWriterLock **v4; // rdi
  NSInstrumentation::CBackTraceStoreEx *v6; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v11; // rsi
  bool v12; // r8
  NSInstrumentation::CPointerHashTable *v13; // rcx

  v4 = (NSInstrumentation::CPrioritizedWriterLock **)(a1 + 104);
  v6 = *(NSInstrumentation::CBackTraceStoreEx **)(a1 + 104);
  if ( v6 || (NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(0LL, v4), (v6 = *v4) != 0LL) )
  {
    v11 = (struct NSInstrumentation::CBackTraceStorageUnit *)NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(
                                                               v6,
                                                               a4,
                                                               0LL);
    if ( v11 )
    {
      if ( !*(_QWORD *)(a1 + 88) )
        NSInstrumentation::CLeakTrackingAllocator::InitializePointerHashTable(
          v10,
          (struct NSInstrumentation::CPointerHashTable **)(a1 + 88),
          v12);
      v13 = *(NSInstrumentation::CPointerHashTable **)(a1 + 88);
      if ( v13 && NSInstrumentation::CPointerHashTable::Insert(v13, a2, (const void *)(a3 | (unsigned __int64)v11)) )
        return 1;
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *v4,
        v11);
    }
  }
  return 0;
}
