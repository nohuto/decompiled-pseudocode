void __fastcall CitpProgramIdCleanup(void **a1)
{
  void *v2; // rdx

  if ( *a1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *a1);
  *a1 = 0LL;
  v2 = a1[1];
  if ( v2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
  a1[1] = 0LL;
}
