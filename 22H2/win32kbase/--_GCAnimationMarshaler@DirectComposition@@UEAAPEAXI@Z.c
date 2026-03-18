/*
 * XREFs of ??_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A7DF4
 * Callers:
 *     ??_ECAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00D8590 (--_ECAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00A7E38 (--1CAnimationMarshaler@DirectComposition@@UEAA@XZ.c)
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
