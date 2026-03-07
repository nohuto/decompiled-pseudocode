void __fastcall MULTIDEVLOCKOBJ::~MULTIDEVLOCKOBJ(MULTIDEVLOCKOBJ *this)
{
  void *v2; // rdx

  MULTIDEVLOCKOBJ::vUnlock(this);
  if ( (*(_DWORD *)this & 2) != 0 )
  {
    v2 = (void *)*((_QWORD *)this + 1);
    if ( v2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
  }
}
