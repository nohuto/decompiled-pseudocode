/*
 * XREFs of ?Create@CBackTraceStoreEx@NSInstrumentation@@SAPEAV12@XZ @ 0x1C019CB14
 * Callers:
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreEx@2@@Z @ 0x1C019B328 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreE.c)
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C019BA80 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 * Callees:
 *     ?Initialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NI@Z @ 0x1C019CB74 (-Initialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@.c)
 */

struct NSInstrumentation::CBackTraceStoreEx *NSInstrumentation::CBackTraceStoreEx::Create(void)
{
  __int64 Pool2; // rax
  void *v1; // rbx

  Pool2 = ExAllocatePool2(262LL, 56LL, 860451669LL);
  v1 = (void *)Pool2;
  if ( !Pool2 )
    return 0LL;
  if ( !(unsigned __int8)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Initialize(Pool2) )
  {
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return (struct NSInstrumentation::CBackTraceStoreEx *)v1;
}
