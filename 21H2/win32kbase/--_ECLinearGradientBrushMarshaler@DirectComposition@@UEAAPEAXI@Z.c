/*
 * XREFs of ??_ECLinearGradientBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C02144D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CLinearGradientBrushMarshaler *__fastcall DirectComposition::CLinearGradientBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
