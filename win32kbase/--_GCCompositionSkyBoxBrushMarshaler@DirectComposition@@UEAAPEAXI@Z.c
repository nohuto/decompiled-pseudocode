DirectComposition::CCompositionSkyBoxBrushMarshaler *__fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompositionSkyBoxBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
