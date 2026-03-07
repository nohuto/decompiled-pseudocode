void __fastcall Win32UAFMFreePagedLookasideList(NSInstrumentation::CLeakTrackingAllocator *a1, unsigned int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx

  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, *(char **)a1);
  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a1, a2);
  v4 = gpLeakTrackingAllocator;
  *((_DWORD *)a1 - 1) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(v4, (char *)a1 - 16);
}
