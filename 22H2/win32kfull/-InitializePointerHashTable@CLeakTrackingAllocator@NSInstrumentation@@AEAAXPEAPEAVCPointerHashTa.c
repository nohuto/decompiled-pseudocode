/*
 * XREFs of ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1C02DD4E0
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02DCE74 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 * Callees:
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C00F4020 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C01324A0 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
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
