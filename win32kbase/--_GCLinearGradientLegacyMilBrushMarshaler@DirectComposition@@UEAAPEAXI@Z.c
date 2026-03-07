DirectComposition::CLinearGradientLegacyMilBrushMarshaler *__fastcall DirectComposition::CLinearGradientLegacyMilBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CLinearGradientLegacyMilBrushMarshaler *this,
        char a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CLinearGradientLegacyMilBrushMarshaler *)((char *)this + 104));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
