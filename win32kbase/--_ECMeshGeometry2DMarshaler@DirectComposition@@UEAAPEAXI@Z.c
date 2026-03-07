DirectComposition::CMeshGeometry2DMarshaler *__fastcall DirectComposition::CMeshGeometry2DMarshaler::`vector deleting destructor'(
        DirectComposition::CMeshGeometry2DMarshaler *this,
        char a2)
{
  DirectComposition::CMeshGeometry2DMarshaler::~CMeshGeometry2DMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
