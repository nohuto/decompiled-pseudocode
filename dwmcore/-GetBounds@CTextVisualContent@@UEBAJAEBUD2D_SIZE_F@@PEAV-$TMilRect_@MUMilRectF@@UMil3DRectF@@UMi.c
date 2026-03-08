/*
 * XREFs of ?GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180268EC4
 * Callers:
 *     ?GetBounds@CTextVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011A310 (-GetBounds@CTextVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022048C (-GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?GetBounds@CCompositionTextLine@@QEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180223B64 (-GetBounds@CCompositionTextLine@@QEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 */

__int64 __fastcall CTextVisualContent::GetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rcx
  int Bounds; // edi
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // rbp
  __int64 v14; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 *v19; // rbp
  __int64 v20; // rcx
  int v21[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  v6 = *(_QWORD *)(a1 - 32);
  v7 = *(__int64 **)(v6 + 704);
  v8 = *(__int64 **)(v6 + 712);
  while ( v7 != v8 )
  {
    v9 = *v7;
    *(_OWORD *)v21 = 0LL;
    Bounds = CCompositionGlyphRun::GetBounds(v9, a2, v21);
    if ( Bounds < 0 )
    {
      v14 = 102LL;
      goto LABEL_7;
    }
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v21);
    ++v7;
  }
  v11 = *(_QWORD *)(a1 - 32);
  v12 = *(__int64 **)(v11 + 752);
  v13 = *(__int64 **)(v11 + 760);
  while ( v12 != v13 )
  {
    v16 = *v12;
    *(_OWORD *)v21 = 0LL;
    Bounds = CCompositionTextLine::GetBounds(v16, a2, v21);
    if ( Bounds < 0 )
    {
      v14 = 110LL;
      goto LABEL_7;
    }
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v21);
    ++v12;
  }
  v17 = *(_QWORD *)(a1 - 32);
  v18 = *(__int64 **)(v17 + 728);
  v19 = *(__int64 **)(v17 + 736);
  while ( 1 )
  {
    if ( v18 == v19 )
      return 0LL;
    v20 = *v18;
    *(_OWORD *)v21 = 0LL;
    Bounds = CCompositionTextLine::GetBounds(v20, a2, v21);
    if ( Bounds < 0 )
      break;
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v21);
    ++v18;
  }
  v14 = 118LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
    (const char *)(unsigned int)Bounds);
  return (unsigned int)Bounds;
}
