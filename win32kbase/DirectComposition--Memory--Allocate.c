__int64 __fastcall DirectComposition::Memory::Allocate(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned int a2,
        char a3)
{
  if ( a3 )
    return NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(a1, 260LL, (unsigned __int64)a1, a2);
  else
    return NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, (unsigned __int64)a1, a2);
}
