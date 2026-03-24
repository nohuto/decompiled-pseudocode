/*
 * XREFs of ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180009560
 * Callers:
 *     ?Draw@CProjectedShadow@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F61A0 (-Draw@CProjectedShadow@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x180009E34 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@AEBQEBVCVisualTree@@@Z @ 0x18000A434 (-find@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$le.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000C524 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x18000C700 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180093D90 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::Draw(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // r15
  __int64 v6; // r14
  char *v10; // rbx
  __m128 v11; // xmm1
  int v12; // eax
  int updated; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // ecx
  void (__fastcall *v19)(char *, __int64, char *); // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-28h] BYREF
  struct _D3DCOLORVALUE v24; // [rsp+38h] [rbp-20h] BYREF

  v4 = *((_QWORD *)a2 + 741);
  v6 = *((_QWORD *)this - 43);
  v23 = v4;
  if ( *(_QWORD *)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::find(
                    v6 + 72,
                    &v24,
                    &v23) == *(_QWORD *)(v6 + 72) )
    return 0LL;
  v23 = v4;
  v10 = (char *)this - 416;
  v11 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::find(
                                                               v6 + 72,
                                                               &v24,
                                                               &v23)
                                                + 60LL));
  *((float *)this - 8) = fminf(
                           _mm_shuffle_ps(v11, v11, 170).m128_f32[0] - v11.m128_f32[0],
                           _mm_shuffle_ps(v11, v11, 255).m128_f32[0] - _mm_shuffle_ps(v11, v11, 85).m128_f32[0]);
  v12 = CProjectedShadow::ComputeShadowPath((char *)this - 416, a2);
  if ( *((_DWORD *)this - 24) != v12 )
  {
    *((_DWORD *)this - 24) = v12;
    (*(void (__fastcall **)(char *, _QWORD, char *))(*(_QWORD *)v10 + 72LL))(
      (char *)this - 416,
      0LL,
      (char *)this - 416);
    v20 = *((_QWORD *)this - 6);
    if ( v20 )
    {
      *(_DWORD *)(v20 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v20 + 16, 24LL);
      *(_BYTE *)(v20 + 200) = 1;
      v22 = *((_QWORD *)this - 6);
      *((_QWORD *)this - 6) = 0LL;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    }
    v21 = *((_QWORD *)this - 5);
    *((_QWORD *)this - 5) = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  }
  CProjectedShadow::ComputeShadowColor((CProjectedShadow *)((char *)this - 416), &v24, a2);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 15) - v24.a) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 18) - v24.r) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 17) - v24.g) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 16) - v24.b) & _xmm) > 0.0000011920929 )
  {
    v19 = *(void (__fastcall **)(char *, __int64, char *))(*(_QWORD *)v10 + 72LL);
    *(struct _D3DCOLORVALUE *)((char *)this - 72) = *(struct _D3DCOLORVALUE *)&v24.r;
    v19((char *)this - 416, 5LL, (char *)this - 416);
  }
  if ( *(_DWORD *)(*((_QWORD *)this - 50) + 960LL)
    || (updated = CProjectedShadow::UpdateShadowIntermediates((CProjectedShadow *)((char *)this - 416), a2),
        v15 = updated,
        updated >= 0) )
  {
    v16 = CContent::Draw((CProjectedShadow *)((char *)this - 328), a2, a3, a4);
    v15 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x168u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, updated, 0x164u, 0LL);
  }
  return v15;
}
