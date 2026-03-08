/*
 * XREFs of ??_GCDDisplayRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A750
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CDDisplayRenderTargetMarshaler *__fastcall DirectComposition::CDDisplayRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CDDisplayRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
