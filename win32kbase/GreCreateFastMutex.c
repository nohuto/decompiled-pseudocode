/*
 * XREFs of GreCreateFastMutex @ 0x1C002D2A8
 * Callers:
 *     HmgCreate @ 0x1C002CDD0 (HmgCreate.c)
 *     EngCreateFastMutex @ 0x1C0196BA0 (EngCreateFastMutex.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

struct _FAST_MUTEX *GreCreateFastMutex()
{
  struct _FAST_MUTEX *v0; // rax
  struct _FAST_MUTEX *v1; // rbx

  v0 = (struct _FAST_MUTEX *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                               gpLeakTrackingAllocator,
                               0x44uLL,
                               0x38uLL,
                               0x6D736647u);
  v1 = v0;
  if ( v0 )
    KeInitializeGuardedMutex(v0);
  return v1;
}
