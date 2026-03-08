/*
 * XREFs of ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0064E68
 * Callers:
 *     ?ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000DC40 (-ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00AA160 (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 *     ?ReleaseAllReferences@CAnimationTriggerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D3D00 (-ReleaseAllReferences@CAnimationTriggerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel.c)
 *     ?ReleaseAllReferences@CAtlasedRectsGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B620 (-ReleaseAllReferences@CAtlasedRectsGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChanne.c)
 *     ?ReleaseAllReferences@CVisualGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B6E0 (-ReleaseAllReferences@CVisualGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B9A0 (-ReleaseAllReferences@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationCh.c)
 *     ?ReleaseAllReferences@CSceneNodeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025BBE0 (-ReleaseAllReferences@CSceneNodeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CTextVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025BD80 (-ReleaseAllReferences@CTextVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CTransform3DGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025BDE0 (-ReleaseAllReferences@CTransform3DGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CResourceMarshalerArrayBase::Clear(
        DirectComposition::CResourceMarshalerArrayBase *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned __int64 i; // rdi

  for ( i = 0LL; i < *((_QWORD *)this + 2); ++i )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 1) + 8 * i));
  DirectComposition::CMarshaledArrayBase::Clear(this);
}
