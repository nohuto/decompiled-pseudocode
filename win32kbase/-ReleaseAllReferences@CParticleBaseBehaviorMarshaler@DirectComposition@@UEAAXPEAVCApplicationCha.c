void __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::ReleaseAllReferences(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CParticleBaseBehaviorMarshaler *)((char *)this + 56));
}
