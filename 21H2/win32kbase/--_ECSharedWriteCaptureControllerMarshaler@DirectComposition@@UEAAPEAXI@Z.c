/*
 * XREFs of ??_ECSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C023AE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedWriteCaptureControllerMarshaler *__fastcall DirectComposition::CSharedWriteCaptureControllerMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWriteCaptureControllerMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteCaptureControllerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
