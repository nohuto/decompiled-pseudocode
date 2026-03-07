DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CVisualMarshaler *)((char *)this + 344));
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CVisualMarshaler *)((char *)this + 320));
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
