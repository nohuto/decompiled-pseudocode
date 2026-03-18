/*
 * XREFs of ??_GCRemoteRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D4190
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CRemoteRenderTargetMarshaler *__fastcall DirectComposition::CRemoteRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CRemoteRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CRemoteRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
