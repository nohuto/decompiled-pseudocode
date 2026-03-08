/*
 * XREFs of ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV?$CSortedVector@PEAXPEAX@2@@Z @ 0x1C019B3AC
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 * Callees:
 *     ?Create@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAPEAV12@XZ @ 0x1C019AF24 (-Create@-$CSortedVector@PEAXPEAX@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C019B05C (-Destroy@-$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::InitializeSortedVector(
        __int64 a1,
        volatile signed __int64 *a2)
{
  PVOID *v3; // rax

  v3 = (PVOID *)NSInstrumentation::CSortedVector<void *,void *>::Create();
  if ( v3 )
  {
    if ( _InterlockedCompareExchange64(a2, (signed __int64)v3, 0LL) )
      NSInstrumentation::CSortedVector<void *,void *>::Destroy(v3);
  }
}
