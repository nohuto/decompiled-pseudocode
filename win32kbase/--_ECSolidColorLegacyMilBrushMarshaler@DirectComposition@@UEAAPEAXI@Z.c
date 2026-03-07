DirectComposition::CSolidColorLegacyMilBrushMarshaler *__fastcall DirectComposition::CSolidColorLegacyMilBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CSolidColorLegacyMilBrushMarshaler *this,
        char a2)
{
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
