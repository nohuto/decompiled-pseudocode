/*
 * XREFs of ??_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C780
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

DirectComposition::CParticleVector4BehaviorMarshaler *__fastcall DirectComposition::CParticleVector4BehaviorMarshaler::`scalar deleting destructor'(
        DirectComposition::CParticleVector4BehaviorMarshaler *this,
        char a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CParticleVector4BehaviorMarshaler *)((char *)this + 56));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
