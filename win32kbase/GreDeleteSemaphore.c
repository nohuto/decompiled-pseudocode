void __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  ULONG *p_NumberOfSharedWaiters; // rdi

  if ( Resource )
  {
    p_NumberOfSharedWaiters = &Resource[-1].NumberOfSharedWaiters;
    MultiUserGreTrackRemoveEngResource(&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    if ( p_NumberOfSharedWaiters )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, p_NumberOfSharedWaiters);
  }
}
