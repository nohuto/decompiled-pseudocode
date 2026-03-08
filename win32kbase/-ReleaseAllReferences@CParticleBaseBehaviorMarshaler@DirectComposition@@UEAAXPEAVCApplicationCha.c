/*
 * XREFs of ?ReleaseAllReferences@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::ReleaseAllReferences(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CParticleBaseBehaviorMarshaler *)((char *)this + 56));
}
