/*
 * XREFs of ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18000E098
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DF00 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801173EC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800620E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800B0E5C (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

char __fastcall CBitmapRealization::CalcImageTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  CMILMatrix *v3; // rcx
  __int64 v4; // r8
  char v5; // bl

  CMILMatrix::SetToIdentity(a2);
  v5 = 0;
  if ( *(_BYTE *)(v4 + 313) )
  {
    CMILMatrix::Set2DAffineMatrix(
      v3,
      *(float *)(v4 + 168),
      *(float *)(v4 + 172),
      *(float *)(v4 + 176),
      *(float *)(v4 + 180),
      *(float *)(v4 + 184),
      *(float *)(v4 + 188));
    return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
  }
  return v5;
}
