/*
 * XREFs of ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800C312C
 * Callers:
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEFFECT@@@Z @ 0x1800C30DC (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEFFECT@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180053828 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800C31F4 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x1800C3254 (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800E41D0 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CVisual::SetEffect(CVisual *this, struct CEffect *a2)
{
  unsigned int v3; // esi
  struct CResource *EffectInternal; // rbp
  bool v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  char v9; // bl

  v3 = 0;
  EffectInternal = CVisual::GetEffectInternal(this);
  if ( a2 != EffectInternal )
  {
    v6 = CVisual::GetTransform3DEffectNoRef(this) != 0LL;
    v7 = CResource::RegisterNotifier(this, a2);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xA53u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, EffectInternal);
      CVisual::SetEffectInternal(this, a2);
      v9 = v6;
      if ( CVisual::GetTransform3DEffectNoRef(this) )
        v9 = 1;
      CVisual::PropagateFlags((__int64)this, 5u);
      if ( v9 )
        CVisual::OnInnerTransformChanged(this);
    }
  }
  return v3;
}
