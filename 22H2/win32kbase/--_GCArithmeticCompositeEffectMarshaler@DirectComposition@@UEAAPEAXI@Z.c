/*
 * XREFs of ??_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C020EA4C (--1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CArithmeticCompositeEffectMarshaler *__fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::`scalar deleting destructor'(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        char a2)
{
  DirectComposition::CFilterEffectMarshaler::~CFilterEffectMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
