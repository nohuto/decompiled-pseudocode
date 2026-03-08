/*
 * XREFs of ??_GCHolographicExclusiveViewMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A830
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CHolographicExclusiveViewMarshaler *__fastcall DirectComposition::CHolographicExclusiveViewMarshaler::`scalar deleting destructor'(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
