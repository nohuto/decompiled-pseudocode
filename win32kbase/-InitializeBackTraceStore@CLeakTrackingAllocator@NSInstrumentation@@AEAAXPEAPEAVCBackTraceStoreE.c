void __fastcall NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(
        NSInstrumentation::CLeakTrackingAllocator *this,
        struct NSInstrumentation::CBackTraceStoreEx **a2)
{
  struct NSInstrumentation::CBackTraceStoreEx *v3; // rax
  struct NSInstrumentation::CBackTraceStoreEx *v4; // rbx

  v3 = NSInstrumentation::CBackTraceStoreEx::Create();
  v4 = v3;
  if ( v3 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2, (signed __int64)v3, 0LL) )
    {
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(v3);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
