/*
 * XREFs of ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00AA160
 * Callers:
 *     ?SetReferenceArrayProperty@CTransformGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C000C940 (-SetReferenceArrayProperty@CTransformGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetReferenceArrayProperty@CAnimationControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00BA590 (-SetReferenceArrayProperty@CAnimationControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicatio.c)
 *     ?SetReferenceArrayProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00D2CC0 (-SetReferenceArrayProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0252C70 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceArrayProperty@CAtlasedRectsGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C025CE50 (-SetReferenceArrayProperty@CAtlasedRectsGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 *     ?SetReferenceArrayProperty@CGeometry2DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C025CEB0 (-SetReferenceArrayProperty@CGeometry2DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C025CF10 (-SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicat.c)
 *     ?SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C025CF90 (-SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C025D020 (-SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetReferenceArrayProperty@CTransform3DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C025D0F0 (-SetReferenceArrayProperty@CTransform3DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetReferenceArrayProperty@CVisualGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C025D150 (-SetReferenceArrayProperty@CVisualGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0064E68 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshalerArrayBase::Set(
        DirectComposition::CResourceMarshalerArrayBase *a1,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned int v6; // ebx
  struct DirectComposition::CApplicationChannel *v8; // r10
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx

  v6 = 0;
  v8 = a2;
  v10 = 0LL;
  if ( a4 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(a3 + 8 * v10);
      if ( !v11 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*(_DWORD *)(v11 + 36), a5) )
        return (unsigned int)-1073741811;
      v10 = v12 + 1;
      if ( v10 >= a4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    DirectComposition::CResourceMarshalerArrayBase::Clear(a1, v8);
    DirectComposition::CMarshaledArrayBase::Clear(a1);
    *((_QWORD *)a1 + 1) = a3;
    v13 = 0LL;
    for ( *((_QWORD *)a1 + 2) = a4; v13 < *((_QWORD *)a1 + 2); ++v13 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v13);
      if ( (*(_QWORD *)(v14 + 24))++ == -1LL )
        KeBugCheck(0xC01E0103);
    }
  }
  return v6;
}
