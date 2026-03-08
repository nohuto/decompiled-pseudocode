/*
 * XREFs of ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A1FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00A216C (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CInteractionMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionMarshaler *this,
        char a2)
{
  DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
