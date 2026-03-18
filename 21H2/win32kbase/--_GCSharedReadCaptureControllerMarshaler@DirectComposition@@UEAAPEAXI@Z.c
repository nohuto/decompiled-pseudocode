/*
 * XREFs of ??_GCSharedReadCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C023AB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedReadCaptureControllerMarshaler *__fastcall DirectComposition::CSharedReadCaptureControllerMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedReadCaptureControllerMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedReadCaptureControllerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
