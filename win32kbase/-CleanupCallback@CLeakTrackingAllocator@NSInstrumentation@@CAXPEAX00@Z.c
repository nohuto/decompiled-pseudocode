void __fastcall NSInstrumentation::CLeakTrackingAllocator::CleanupCallback(
        PVOID P,
        unsigned __int64 a2,
        NSInstrumentation::CPrioritizedWriterLock **a3)
{
  NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
    a3[13],
    (struct NSInstrumentation::CBackTraceStorageUnit *)(a2 & 0xFFFFFFFFFFFFFFF8uLL));
  ExFreePoolWithTag(P, 0);
}
