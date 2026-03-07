DirectComposition::CBatchDeferralMarshaler *__fastcall DirectComposition::CBatchDeferralMarshaler::`vector deleting destructor'(
        DirectComposition::CBatchDeferralMarshaler *this,
        char a2)
{
  DirectComposition::CBatchDeferralMarshaler::~CBatchDeferralMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
