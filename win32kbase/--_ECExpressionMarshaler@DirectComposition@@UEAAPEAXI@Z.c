DirectComposition::CExpressionMarshaler *__fastcall DirectComposition::CExpressionMarshaler::`vector deleting destructor'(
        DirectComposition::CExpressionMarshaler *this,
        char a2)
{
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
