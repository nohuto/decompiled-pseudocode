void *__fastcall Win32AllocPoolNonPaged(unsigned __int64 a1, unsigned int a2)
{
  return NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x44uLL, a1, a2);
}
