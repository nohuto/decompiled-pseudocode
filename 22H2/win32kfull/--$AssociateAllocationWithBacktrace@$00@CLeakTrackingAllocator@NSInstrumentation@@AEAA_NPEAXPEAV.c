/*
 * XREFs of ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02DCE74
 * Callers:
 *     Win32AllocPoolImpl @ 0x1C00D32B0 (Win32AllocPoolImpl.c)
 *     Win32AllocateFromPagedLookasideListImpl @ 0x1C00D55E0 (Win32AllocateFromPagedLookasideListImpl.c)
 *     Win32AllocPoolWithQuotaImpl @ 0x1C00D57E0 (Win32AllocPoolWithQuotaImpl.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C01279A4 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_5a5c26db124383813a4ad6aa9f2996d5___lambda_f46a24200fa13ebf3509176f7b31ac85___ @ 0x1C02DCC00 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_5a5c26db124383813a4ad6aa9f2996.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_d3bf7150635fe7f290e2f1d66af772bb___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___ @ 0x1C02DCD34 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_d3bf7150635fe7f290e2f1d66af772.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C02DCFBC (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00D20AC (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreEx@2@@Z @ 0x1C02DD470 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreE.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1C02DD4E0 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTa.c)
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1C02DD978 (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02DDEC8 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
        __int64 a1,
        const void *a2,
        struct NSInstrumentation::CBackTrace *a3)
{
  NSInstrumentation::CPrioritizedWriterLock **v3; // rdi
  NSInstrumentation::CBackTraceStoreEx *v5; // rcx
  void *v8; // rsi
  bool v9; // r8
  NSInstrumentation::CPointerHashTable *v10; // rcx

  v3 = (NSInstrumentation::CPrioritizedWriterLock **)(a1 + 64);
  v5 = *(NSInstrumentation::CBackTraceStoreEx **)(a1 + 64);
  if ( v5 || (NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(0LL, v3), (v5 = *v3) != 0LL) )
  {
    v8 = NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(v5, a3, (unsigned int *)a3);
    if ( v8 )
    {
      v10 = *(NSInstrumentation::CPointerHashTable **)(a1 + 48);
      if ( v10
        || (NSInstrumentation::CLeakTrackingAllocator::InitializePointerHashTable(
              0LL,
              (struct NSInstrumentation::CPointerHashTable **)(a1 + 48),
              v9),
            (v10 = *(NSInstrumentation::CPointerHashTable **)(a1 + 48)) != 0LL) )
      {
        if ( NSInstrumentation::CPointerHashTable::Insert(v10, a2, v8) )
          return 1;
      }
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *v3,
        (struct NSInstrumentation::CBackTraceStorageUnit *)v8);
    }
  }
  return 0;
}
