/*
 * XREFs of ??_ECBatchDeferralMarshaler@DirectComposition@@MEAAPEAXI@Z @ 0x1C024A470
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CBatchDeferralMarshaler@DirectComposition@@MEAA@XZ @ 0x1C026EFF8 (--1CBatchDeferralMarshaler@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CBatchDeferralMarshaler *__fastcall DirectComposition::CBatchDeferralMarshaler::`vector deleting destructor'(
        DirectComposition::CBatchDeferralMarshaler *this,
        char a2)
{
  DirectComposition::CBatchDeferralMarshaler::~CBatchDeferralMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
