/*
 * XREFs of ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000CBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D094 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18005B0A0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsDrawListCacheDirty(
        CCompositionSurfaceBitmap *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        struct D2D_SIZE_F *a4)
{
  char v8; // al
  _BYTE v10[64]; // [rsp+30h] [rbp-98h] BYREF
  int v11; // [rsp+70h] [rbp-58h]
  __int128 v12; // [rsp+80h] [rbp-48h]

  v11 = 0;
  v12 = 0LL;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, a4, (CMILMatrix *)v10);
  return CContent::IsDrawListCacheDirty(
           this,
           a2,
           a3,
           a4,
           (const struct CMILMatrix *)((unsigned __int64)v10 & -(__int64)(v8 != 0)));
}
