__int64 __fastcall Win32AllocPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned int a2,
        unsigned int a3,
        USHORT a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(a1, (SIZE_T)a1, a2, a3, a4);
}
