DirectComposition::CNineGridBrushMarshaler *__fastcall DirectComposition::CNineGridBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CNineGridBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CNineGridBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
