void __fastcall CCursorClip::~CCursorClip(CCursorClip *this)
{
  void *v1; // rdx

  v1 = (void *)*((_QWORD *)this + 33);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  CCursorClip::DeadzoneJumping::Cleanup((CCursorClip *)((char *)this + 280));
}
