/*
 * XREFs of GreCreateFastMutex @ 0x1C0056738
 * Callers:
 *     HmgCreate @ 0x1C0055348 (HmgCreate.c)
 *     EngCreateFastMutex @ 0x1C01771E0 (EngCreateFastMutex.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

struct _FAST_MUTEX *GreCreateFastMutex()
{
  struct _FAST_MUTEX *v0; // rax
  struct _FAST_MUTEX *v1; // rbx

  v0 = (struct _FAST_MUTEX *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                               (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                               68LL,
                               0x38uLL,
                               1836279367);
  v1 = v0;
  if ( v0 )
    KeInitializeGuardedMutex(v0);
  return v1;
}
