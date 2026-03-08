/*
 * XREFs of ?HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180268B68
 * Callers:
 *     ?HitTest@CShapeTree@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18011A1B0 (-HitTest@CShapeTree@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800DF030 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E3F58 (-GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CShapeTree::HitTest(
        CShapeTree *this,
        struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int Bounds; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF

  v10 = 0LL;
  Bounds = CShapeTree::GetBounds((__int64)this, (float *)a2, (float *)&v10);
  v8 = Bounds;
  if ( Bounds < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bounds, 0x50u, 0LL);
  else
    *a4 = IsPointInRect(a3, (const struct MilRectF *)&v10);
  return v8;
}
