/*
 * XREFs of ??_ECLegacyStereoRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CLegacyStereoRenderTargetMarshaler *__fastcall DirectComposition::CLegacyStereoRenderTargetMarshaler::`vector deleting destructor'(
        DirectComposition::CLegacyStereoRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
