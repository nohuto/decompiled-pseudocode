/*
 * XREFs of ??_ECColorBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C006B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CColorBrushMarshaler *__fastcall DirectComposition::CColorBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CColorBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CColorBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
