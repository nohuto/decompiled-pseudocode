/*
 * XREFs of ??_GCSharedManipulationTransformMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A8840
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedManipulationTransformMarshaler *__fastcall DirectComposition::CSharedManipulationTransformMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedManipulationTransformMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedManipulationTransformMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
