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
