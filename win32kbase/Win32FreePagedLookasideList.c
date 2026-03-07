void __fastcall Win32FreePagedLookasideList(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, (char *)a1);
}
