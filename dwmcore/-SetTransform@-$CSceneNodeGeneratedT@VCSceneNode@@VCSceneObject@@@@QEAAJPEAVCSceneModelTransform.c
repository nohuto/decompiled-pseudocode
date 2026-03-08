/*
 * XREFs of ?SetTransform@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform@@@Z @ 0x1801C7038
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x18024D71C (-ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ.c)
 */

__int64 __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetTransform(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rcx
  bool v7; // zf

  v2 = 0;
  if ( a2 != this[8] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x13D3u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
      v7 = this[17] == 0LL;
      this[8] = a2;
      if ( !v7 )
      {
        CSceneNode::ApplyTransformToSpectreResources((CSceneNode *)this);
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*this + 9))(this, 0LL, 0LL);
      }
    }
  }
  return v2;
}
