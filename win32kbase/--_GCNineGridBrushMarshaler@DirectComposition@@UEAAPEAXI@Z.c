/*
 * XREFs of ??_GCNineGridBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00BB620
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CNineGridBrushMarshaler *__fastcall DirectComposition::CNineGridBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CNineGridBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CNineGridBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
