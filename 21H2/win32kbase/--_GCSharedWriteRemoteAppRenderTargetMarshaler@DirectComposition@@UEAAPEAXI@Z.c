/*
 * XREFs of ??_GCSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C023A200
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *__fastcall DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
