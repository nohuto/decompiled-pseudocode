__int64 __fastcall CProjectedShadow::Draw(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v11; // rax
  char *v12; // rdi
  __m128 v13; // xmm1
  int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // rax
  int updated; // eax
  __int64 v18; // rcx
  unsigned int v19; // edi
  int v20; // eax
  __int64 v21; // rcx
  struct _D3DCOLORVALUE v22; // [rsp+30h] [rbp-48h] BYREF

  v4 = *((_QWORD *)a2 + 1007);
  v6 = *((_QWORD *)this - 43);
  *(_QWORD *)&v22.r = v4;
  if ( std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
         v6 + 80,
         (__int64)&v22) == *(_QWORD *)(v6 + 80) )
    return 0LL;
  *(_QWORD *)&v22.r = v4;
  v11 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
          v6 + 80,
          (__int64)&v22);
  v12 = (char *)this - 424;
  v13 = (__m128)_mm_loadu_si128((const __m128i *)(v11 + 60));
  *((float *)this - 8) = fminf(
                           _mm_shuffle_ps(v13, v13, 170).m128_f32[0] - v13.m128_f32[0],
                           _mm_shuffle_ps(v13, v13, 255).m128_f32[0] - _mm_shuffle_ps(v13, v13, 85).m128_f32[0]);
  v14 = CProjectedShadow::ComputeShadowPath((__int64)this - 424, (__int64)a2);
  if ( *((_DWORD *)this - 24) != v14 )
  {
    *((_DWORD *)this - 24) = v14;
    (*(void (__fastcall **)(char *, _QWORD, char *))(*(_QWORD *)v12 + 72LL))(
      (char *)this - 424,
      0LL,
      (char *)this - 424);
    v15 = *((_QWORD *)this - 6);
    if ( v15 )
    {
      *(_DWORD *)(v15 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v15 + 16, 0x18u);
      *(_BYTE *)(v15 + 200) = 1;
      wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this - 6);
    }
    wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this - 5);
  }
  CProjectedShadow::ComputeShadowColor((CProjectedShadowCaster **)this - 53, &v22, a2);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 15) - v22.a) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 18) - v22.r) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 17) - v22.g) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 16) - v22.b) & _xmm) > 0.0000011920929 )
  {
    v16 = *(_QWORD *)v12;
    *(struct _D3DCOLORVALUE *)((char *)this - 72) = *(struct _D3DCOLORVALUE *)&v22.r;
    (*(void (__fastcall **)(char *, __int64, char *))(v16 + 72))((char *)this - 424, 5LL, (char *)this - 424);
  }
  if ( *(_DWORD *)(*((_QWORD *)this - 51) + 1112LL)
    || (updated = CProjectedShadow::UpdateShadowIntermediates((CProjectedShadow *)((char *)this - 424), a2),
        v19 = updated,
        updated >= 0) )
  {
    v20 = CContent::Draw((CProjectedShadow *)((char *)this - 328), a2, a3, a4);
    v19 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x168u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, updated, 0x164u, 0LL);
  }
  return v19;
}
