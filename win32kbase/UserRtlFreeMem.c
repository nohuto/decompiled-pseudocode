void __fastcall UserRtlFreeMem(char *a1)
{
  if ( a1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
}
