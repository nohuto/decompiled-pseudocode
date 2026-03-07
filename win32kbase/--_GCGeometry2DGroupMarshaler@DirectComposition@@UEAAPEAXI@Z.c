DirectComposition::CGeometry2DGroupMarshaler *__fastcall DirectComposition::CGeometry2DGroupMarshaler::`scalar deleting destructor'(
        DirectComposition::CGeometry2DGroupMarshaler *this,
        char a2)
{
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CGeometry2DGroupMarshaler *)((char *)this + 56));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
