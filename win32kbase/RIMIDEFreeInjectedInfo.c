void __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v1; // rdx
  void *v3; // rdx
  void *v4; // rdx

  v1 = *(_QWORD *)(a1 + 384);
  if ( v1 )
  {
    v3 = *(void **)(v1 + 72);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    v4 = *(void **)(a1 + 384);
    if ( v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    *(_QWORD *)(a1 + 384) = 0LL;
  }
}
