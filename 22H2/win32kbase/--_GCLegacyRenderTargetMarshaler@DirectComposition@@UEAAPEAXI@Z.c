/*
 * XREFs of ??_GCLegacyRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00C3EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CLegacyRenderTargetMarshaler *__fastcall DirectComposition::CLegacyRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
