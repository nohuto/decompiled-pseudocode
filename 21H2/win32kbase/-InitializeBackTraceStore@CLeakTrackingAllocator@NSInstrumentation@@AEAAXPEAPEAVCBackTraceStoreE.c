/*
 * XREFs of ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreEx@2@@Z @ 0x1C017A1D0
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 * Callees:
 *     ?Create@CBackTraceStoreEx@NSInstrumentation@@SAPEAV12@XZ @ 0x1C017B5C8 (-Create@CBackTraceStoreEx@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C017BB94 (-Uninitialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@.c)
 */

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
