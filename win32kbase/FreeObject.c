void __fastcall FreeObject(void *a1, unsigned int a2)
{
  __int64 v2; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx

  v2 = a2;
  v4 = *(NSInstrumentation::CLeakTrackingAllocator **)(SGDGetSessionState(a1) + 24);
  if ( *((__int16 *)a1 + 7) >= 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  else
    NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v4, *((void **)v4 + v2 + 244), a1);
}
