DirectComposition::CLineGeometryMarshaler *__fastcall DirectComposition::CLineGeometryMarshaler::`vector deleting destructor'(
        DirectComposition::CLineGeometryMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CGeometryMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
