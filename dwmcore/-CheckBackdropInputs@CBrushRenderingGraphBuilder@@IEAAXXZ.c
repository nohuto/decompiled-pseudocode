/*
 * XREFs of ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x180029E64
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180029B10 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x180267230 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x18002AA88 (-GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18002AE5C (-HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18002AF10 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1800FA464 (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 */

void __fastcall CBrushRenderingGraphBuilder::CheckBackdropInputs(CBrushRenderingGraphBuilder *this)
{
  bool IsIntermediateUsedInBlur; // r14
  bool v3; // cl
  bool HasWindowBackdropInput; // bp
  const struct CBackdropBrush *v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // r15
  __int64 v8; // r13
  CRenderingTechnique *v9; // r12
  bool HasBlurredWallpaperBackdropInput; // [rsp+60h] [rbp+8h]
  unsigned int v11; // [rsp+68h] [rbp+10h]
  const struct CBackdropBrush *BackdropBrushNoRef; // [rsp+70h] [rbp+18h]

  IsIntermediateUsedInBlur = 0;
  v3 = 0;
  HasWindowBackdropInput = 0;
  v5 = 0LL;
  HasBlurredWallpaperBackdropInput = 0;
  v6 = 0;
  v7 = *(_QWORD *)this;
  v11 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  if ( v11 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(CRenderingTechnique **)(*(_QWORD *)(v7 + 144) + v8);
      BackdropBrushNoRef = CRenderingTechnique::GetBackdropBrushNoRef(v9);
      if ( !HasBlurredWallpaperBackdropInput )
        HasBlurredWallpaperBackdropInput = CRenderingTechnique::HasBlurredWallpaperBackdropInput(v9);
      if ( !HasWindowBackdropInput )
        HasWindowBackdropInput = CRenderingTechnique::HasWindowBackdropInput(v9);
      if ( !v5 && BackdropBrushNoRef )
        v5 = BackdropBrushNoRef;
      if ( (IsIntermediateUsedInBlur
         || BackdropBrushNoRef
         && (IsIntermediateUsedInBlur = CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(this, v6)))
        && HasWindowBackdropInput )
      {
        break;
      }
      ++v6;
      v8 += 8LL;
    }
    while ( v6 < v11 );
    v3 = HasBlurredWallpaperBackdropInput;
  }
  *(_BYTE *)(*(_QWORD *)this + 196LL) = IsIntermediateUsedInBlur;
  *(_BYTE *)(*(_QWORD *)this + 197LL) = v3;
  *(_BYTE *)(*(_QWORD *)this + 198LL) = HasWindowBackdropInput;
  *(_QWORD *)(*(_QWORD *)this + 208LL) = v5;
}
