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
