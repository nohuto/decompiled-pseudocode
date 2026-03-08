/*
 * XREFs of ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18022796C
 * Callers:
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180226258 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x180010254 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x18004AFA4 (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800C5170 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x1800F7FC8 (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x180225D3C (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CD.c)
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x180225EE8 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1802274AC (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 */

__int64 __fastcall CDropShadow::UpdateShadowIntermediates(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  char v3; // si
  CVisual *v7; // rax
  CDropShadow::ShadowIntermediates *v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  CComposition *v12; // rcx
  float Radius; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm0_4
  int updated; // eax
  __int64 v17; // rcx
  _BYTE v19[56]; // [rsp+30h] [rbp-38h] BYREF
  struct CBrush *v20; // [rsp+70h] [rbp+8h] BYREF
  CVisual *v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = 1;
  if ( *((_DWORD *)this + 31) == 1 )
  {
    v7 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
    v20 = 0LL;
    v21 = v7;
    CVisual::GetContentAsBrushNoRef(v7, &v20);
    v8 = (CDropShadow::ShadowIntermediates *)(*(_QWORD *)std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Try_emplace<CVisual * const &,>(
                                                           (float *)this + 50,
                                                           (__int64)v19,
                                                           (unsigned __int8 *)&v21)
                                            + 24LL);
    v9 = CDropShadow::ShadowIntermediates::SetMask(v8, this, v20);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x234u, 0LL);
      return v11;
    }
  }
  else
  {
    v8 = (CDropShadow *)((char *)this + 128);
  }
  v12 = (CComposition *)*((_QWORD *)this + 2);
  if ( !*((_DWORD *)v12 + 278)
    || !CComposition::IsOverdrawHeatMapEnabled(v12)
    || (Radius = CDropShadow::GetRadius(this), CDropShadow::ShadowIntermediates::CanUseFastShadow(v8, a3, Radius)) )
  {
    v3 = 0;
  }
  v14 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 264) = v3;
  if ( *(_DWORD *)(v14 + 1112) )
    return 0;
  v15 = CDropShadow::GetRadius(this);
  updated = CDropShadow::ShadowIntermediates::UpdateIntermediates(v8, a2, a3, v15);
  v11 = updated;
  if ( updated >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, updated, 0x247u, 0LL);
  return v11;
}
