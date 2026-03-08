/*
 * XREFs of ??_ECVisualTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A1550
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CVisualTargetMarshaler *__fastcall DirectComposition::CVisualTargetMarshaler::`vector deleting destructor'(
        DirectComposition::CVisualTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
