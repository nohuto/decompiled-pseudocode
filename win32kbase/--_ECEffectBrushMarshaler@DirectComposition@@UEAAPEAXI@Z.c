/*
 * XREFs of ??_ECEffectBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00BD200
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CEffectBrushMarshaler *__fastcall DirectComposition::CEffectBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CEffectBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CEffectBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
