/*
 * XREFs of ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x180008F54
 * Callers:
 *     ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088A84 (-UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@AEBQEBVCVisualTree@@@Z @ 0x1800057B4 (--$_Try_emplace@AEBQEBVCVisualTree@@$$V@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedSha.c)
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800090E8 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x18000941C (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800094F0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18000973C (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800FE6F4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowCaster::UpdateVisualProperty(
        CProjectedShadowCaster *this,
        const struct CVisualTree *a2)
{
  __int64 v3; // rbx
  unsigned __int64 CurrentFrameId; // rax
  float v5; // xmm0_4
  char v6; // al
  char v7; // si
  bool v8; // cl
  __int128 v9; // xmm0
  bool v10[8]; // [rsp+20h] [rbp-50h] BYREF
  struct CVisualTree *v11; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF

  v11 = a2;
  v3 = *(_QWORD *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::_Try_emplace<CVisualTree const * const &,>(
                    (__int64 *)this + 10,
                    (__int64)v12,
                    &v11);
  CurrentFrameId = GetCurrentFrameId();
  if ( *(_QWORD *)(v3 + 48) != CurrentFrameId )
  {
    *(_QWORD *)(v3 + 48) = CurrentFrameId;
    v5 = CProjectedShadowCaster::ComputeEffectiveAlpha(this, v11, v10);
    v6 = CVisualTree::_IsInTree(v11, *((_QWORD *)this + 8), 1LL);
    v7 = 0;
    v8 = v10[0];
    if ( *(float *)(v3 + 40) != v5 || *(_BYTE *)(v3 + 56) != v10[0] || *(_BYTE *)(v3 + 57) != v6 )
    {
      *(float *)(v3 + 40) = v5;
      v7 = 1;
      *(_BYTE *)(v3 + 56) = v8;
      *(_BYTE *)(v3 + 57) = v6;
    }
    CProjectedShadowCaster::CalculateCasterBounds(this, &v13, v11, v10);
    if ( *(_BYTE *)(v3 + 76) == v10[0]
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 60) - *(float *)&v13) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 64) - *((float *)&v13 + 1)) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 68) - *((float *)&v13 + 2)) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 72) - *((float *)&v13 + 3)) & _xmm) <= 0.0000011920929 )
    {
      if ( !v7 )
        return;
    }
    else
    {
      v9 = v13;
      *(_BYTE *)(v3 + 76) = v10[0];
      *(_OWORD *)(v3 + 60) = v9;
      Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(v3 + 80);
    }
    (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, CProjectedShadowCaster *))(*(_QWORD *)this + 72LL))(
      this,
      0LL,
      this);
    CProjectedShadowCaster::RequestRedraw(this);
  }
}
