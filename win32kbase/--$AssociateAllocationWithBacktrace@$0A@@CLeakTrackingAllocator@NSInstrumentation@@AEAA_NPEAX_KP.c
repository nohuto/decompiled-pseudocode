char __fastcall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct NSInstrumentation::CBackTrace *a4)
{
  NSInstrumentation::CPrioritizedWriterLock **v4; // rdi
  NSInstrumentation::CBackTraceStoreEx *v6; // rcx
  __int64 v9; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v4 = (NSInstrumentation::CPrioritizedWriterLock **)(a1 + 104);
  v6 = *(NSInstrumentation::CBackTraceStoreEx **)(a1 + 104);
  if ( v6 || (NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(0LL, v4), (v6 = *v4) != 0LL) )
  {
    v10 = (struct NSInstrumentation::CBackTraceStorageUnit *)NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(
                                                               v6,
                                                               a4,
                                                               0LL);
    if ( v10 )
    {
      if ( !*(_QWORD *)(a1 + 96) )
        NSInstrumentation::CLeakTrackingAllocator::InitializeSortedVector(v9, a1 + 96);
      v11 = *(_QWORD *)(a1 + 96);
      if ( v11 )
      {
        v13 = a3 | (unsigned __int64)v10;
        if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::Insert(v11, &v14, &v13) )
          return 1;
      }
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *v4,
        v10);
    }
  }
  return 0;
}
