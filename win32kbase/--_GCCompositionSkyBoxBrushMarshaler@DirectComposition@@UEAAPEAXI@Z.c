/*
 * XREFs of ??_GCCompositionSkyBoxBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A670
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CCompositionSkyBoxBrushMarshaler *__fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompositionSkyBoxBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
