/*
 * XREFs of ??_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00B9954
 * Callers:
 *     ??_ECAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00E3530 (--_ECAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00B9998 (--1CAnimationMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CAnimationMarshaler *__fastcall DirectComposition::CAnimationMarshaler::`scalar deleting destructor'(
        DirectComposition::CAnimationMarshaler *this,
        char a2)
{
  DirectComposition::CAnimationMarshaler::~CAnimationMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
