/*
 * XREFs of ??_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0238430
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00A2724 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

DirectComposition::CParticleVector4BehaviorMarshaler *__fastcall DirectComposition::CParticleVector4BehaviorMarshaler::`scalar deleting destructor'(
        DirectComposition::CParticleVector4BehaviorMarshaler *this,
        char a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CParticleVector4BehaviorMarshaler *)((char *)this + 64));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
