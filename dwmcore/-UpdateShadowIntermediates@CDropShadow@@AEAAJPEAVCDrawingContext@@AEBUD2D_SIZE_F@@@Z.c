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
