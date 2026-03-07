void __fastcall RIMFreeQDCActivePathsData(__int64 a1)
{
  void *v1; // rdx

  if ( a1 )
  {
    v1 = *(void **)(a1 + 8);
    if ( v1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *(_OWORD *)a1 = 0LL;
  }
}
