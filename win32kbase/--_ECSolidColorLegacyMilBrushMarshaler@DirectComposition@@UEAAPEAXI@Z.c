/*
 * XREFs of ??_ECSolidColorLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A4C0
 * Callers:
 *     ??_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00E3540 (--_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSolidColorLegacyMilBrushMarshaler *__fastcall DirectComposition::CSolidColorLegacyMilBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CSolidColorLegacyMilBrushMarshaler *this,
        char a2)
{
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
