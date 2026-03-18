/*
 * XREFs of ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C001626C
 * Callers:
 *     ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0007E10 (--_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0016234 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0238370 (--1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0238398 (--1CTextVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C02383E0 (--_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0238480 (--_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00A2724 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 *     ?Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD46C (-Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

void __fastcall DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase(
        DirectComposition::CResourceMarshalerArrayBase *this)
{
  unsigned __int64 i; // rdi

  for ( i = 0LL; i < *((_QWORD *)this + 2); ++i )
    DirectComposition::CResourceMarshaler::Release(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 1)
                                                                                             + 8 * i));
  DirectComposition::CMarshaledArrayBase::Clear(this);
}
