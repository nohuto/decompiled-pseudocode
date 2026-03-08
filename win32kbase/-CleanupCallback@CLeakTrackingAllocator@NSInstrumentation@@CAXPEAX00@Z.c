/*
 * XREFs of ?CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAX00@Z @ 0x1C019AEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C019CF8C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

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
