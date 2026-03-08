/*
 * XREFs of ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1C019B378
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 * Callees:
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C019BEDC (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C019BFAC (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::InitializePointerHashTable(
        NSInstrumentation::CLeakTrackingAllocator *this,
        struct NSInstrumentation::CPointerHashTable **a2)
{
  struct NSInstrumentation::CPointerHashTable *v3; // rax

  v3 = NSInstrumentation::CPointerHashTable::Create(1);
  if ( v3 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2, (signed __int64)v3, 0LL) )
      NSInstrumentation::CPointerHashTable::Destroy(v3);
  }
}
