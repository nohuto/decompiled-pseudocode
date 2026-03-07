__int64 __fastcall Win32AllocPoolWithQuota(NSInstrumentation::CLeakTrackingAllocator *a1, unsigned int a2)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(a1, 260LL, (unsigned __int64)a1, a2);
}
