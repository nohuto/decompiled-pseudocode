DirectComposition::CLinearGradientBrushMarshaler *__fastcall DirectComposition::CLinearGradientBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
