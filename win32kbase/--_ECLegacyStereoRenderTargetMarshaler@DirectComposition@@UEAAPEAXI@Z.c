DirectComposition::CLegacyStereoRenderTargetMarshaler *__fastcall DirectComposition::CLegacyStereoRenderTargetMarshaler::`vector deleting destructor'(
        DirectComposition::CLegacyStereoRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
