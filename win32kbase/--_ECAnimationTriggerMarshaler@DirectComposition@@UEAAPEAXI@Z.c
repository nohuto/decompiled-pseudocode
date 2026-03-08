/*
 * XREFs of ??_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D27A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C0068D5C (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CAnimationTriggerMarshaler *__fastcall DirectComposition::CAnimationTriggerMarshaler::`vector deleting destructor'(
        DirectComposition::CAnimationTriggerMarshaler *this,
        char a2)
{
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CAnimationTriggerMarshaler *)((char *)this + 80));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
