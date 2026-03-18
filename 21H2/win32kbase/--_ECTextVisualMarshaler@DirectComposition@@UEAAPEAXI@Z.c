/*
 * XREFs of ??_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0238530
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0238398 (--1CTextVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CTextVisualMarshaler *__fastcall DirectComposition::CTextVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CTextVisualMarshaler *this,
        char a2)
{
  DirectComposition::CTextVisualMarshaler::~CTextVisualMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
