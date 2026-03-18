/*
 * XREFs of ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009443C
 * Callers:
 *     ?ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0009920 (-ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00941A0 (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00942D0 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CAnimationTriggerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0225A20 (-ReleaseAllReferences@CAnimationTriggerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel.c)
 *     ?ReleaseAllReferences@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0225BE0 (-ReleaseAllReferences@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationCh.c)
 *     ?ReleaseAllReferences@CSceneNodeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0225E30 (-ReleaseAllReferences@CSceneNodeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CTextVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0225FB0 (-ReleaseAllReferences@CTextVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CResourceMarshalerArrayBase::Clear(
        DirectComposition::CResourceMarshalerArrayBase *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned __int64 i; // rdi
  char *v5; // rdx

  for ( i = 0LL; i < *((_QWORD *)this + 2); ++i )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 1) + 8 * i));
  v5 = (char *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *(_QWORD *)this = 0LL;
  }
}
