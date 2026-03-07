void __fastcall Win32UAFMFreePool(__int64 a1, __int64 a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rcx

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a1, a2);
  v3 = gpLeakTrackingAllocator;
  *(_DWORD *)(a1 - 4) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(v3, (char *)(a1 - 16));
}
