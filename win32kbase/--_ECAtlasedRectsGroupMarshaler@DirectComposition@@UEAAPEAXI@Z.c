DirectComposition::CAtlasedRectsGroupMarshaler *__fastcall DirectComposition::CAtlasedRectsGroupMarshaler::`vector deleting destructor'(
        DirectComposition::CAtlasedRectsGroupMarshaler *this,
        char a2)
{
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CAtlasedRectsGroupMarshaler *)((char *)this + 64));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
