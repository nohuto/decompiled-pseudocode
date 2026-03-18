/*
 * XREFs of ??_GCProjectedShadowSceneMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00087A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CProjectedShadowSceneMarshaler *__fastcall DirectComposition::CProjectedShadowSceneMarshaler::`scalar deleting destructor'(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CProjectedShadowSceneMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      this);
  return this;
}
