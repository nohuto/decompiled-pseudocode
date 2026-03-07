DirectComposition::CAtlasedRectsMeshMarshaler *__fastcall DirectComposition::CAtlasedRectsMeshMarshaler::`vector deleting destructor'(
        DirectComposition::CAtlasedRectsMeshMarshaler *this,
        char a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 88));
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 64));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
