/*
 * XREFs of ??_GCProjectedShadowReceiverMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C000D610
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CProjectedShadowReceiverMarshaler *__fastcall DirectComposition::CProjectedShadowReceiverMarshaler::`scalar deleting destructor'(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
