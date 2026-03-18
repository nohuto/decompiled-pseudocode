/*
 * XREFs of ??_GCProjectedShadowCasterMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C000EE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CProjectedShadowCasterMarshaler *__fastcall DirectComposition::CProjectedShadowCasterMarshaler::`scalar deleting destructor'(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
