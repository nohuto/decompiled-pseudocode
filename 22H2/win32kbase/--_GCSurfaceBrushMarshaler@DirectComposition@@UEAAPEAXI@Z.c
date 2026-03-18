/*
 * XREFs of ??_GCSurfaceBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0032190
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSurfaceBrushMarshaler *__fastcall DirectComposition::CSurfaceBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CSurfaceBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
