/*
 * XREFs of ??_GCCompositionSpotLightMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A10D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CCompositionSpotLightMarshaler *__fastcall DirectComposition::CCompositionSpotLightMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompositionLightMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
