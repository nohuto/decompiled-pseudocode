/*
 * XREFs of ??_GCSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0238B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedVisualReferenceControllerMarshaler *__fastcall DirectComposition::CSharedVisualReferenceControllerMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedVisualReferenceControllerMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedVisualReferenceControllerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
