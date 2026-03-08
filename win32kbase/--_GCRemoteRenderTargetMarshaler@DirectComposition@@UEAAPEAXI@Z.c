/*
 * XREFs of ??_GCRemoteRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D8860
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CRemoteRenderTargetMarshaler *__fastcall DirectComposition::CRemoteRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CRemoteRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CRemoteRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
