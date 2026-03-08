/*
 * XREFs of ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180219ABC
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1802186A0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180253EB0 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180219B30 (-InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMil3DRect@MV-$TMilRect_.c)
 */

__int64 __fastcall CFilterEffect::InvertTransformToCalc2DBounds(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+30h] [rbp-30h]
  int v8; // [rsp+34h] [rbp-2Ch]
  __int128 v9; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+4Ch] [rbp-14h]

  v3 = *a2;
  v10 = 0;
  v11 = 0;
  v7 = 0;
  v8 = 0;
  v6 = v3;
  v9 = 0LL;
  result = CFilterEffect::InvertTransformToCalc3DBounds(a1, &v6, &v9);
  if ( (_BYTE)result )
    *a3 = v9;
  return result;
}
