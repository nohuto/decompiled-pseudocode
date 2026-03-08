/*
 * XREFs of ?HitTest@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180220508
 * Callers:
 *     ?HitTest@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1802690C0 (-HitTest@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1800F6154 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022048C (-GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 */

__int64 __fastcall CCompositionGlyphRun::HitTest(
        CCompositionGlyphRun *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int Bounds; // eax
  unsigned int v7; // ebx
  struct D2D_RECT_F v9; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_RECT_F v10; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *a4 = 0;
  v10 = 0LL;
  Bounds = CCompositionGlyphRun::GetBounds((__int64)this, (__int64)a2, &v10);
  v7 = Bounds;
  if ( Bounds >= 0 )
  {
    v9 = v10;
    *a4 = Contains(&v9, a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
      (const char *)(unsigned int)Bounds);
    return v7;
  }
}
