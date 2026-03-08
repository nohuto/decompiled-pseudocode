/*
 * XREFs of ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802B2014
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003D844 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DAF28 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

float *__fastcall CSecondaryD2DBitmap::GetPrefilteredRect(__int64 a1, float *a2, int *a3)
{
  float v4; // xmm1_4
  int v5; // eax
  float v6; // xmm0_4
  int v7; // eax
  __int64 v8; // rdx
  float *result; // rax
  _BYTE v10[80]; // [rsp+20h] [rbp-29h] BYREF
  float v11; // [rsp+70h] [rbp+27h] BYREF
  float v12; // [rsp+74h] [rbp+2Bh]
  float v13; // [rsp+78h] [rbp+2Fh]
  float v14; // [rsp+7Ch] [rbp+33h]
  __int128 v15; // [rsp+80h] [rbp+37h] BYREF

  v4 = (float)a3[1];
  v5 = a3[2];
  v11 = (float)*a3;
  v6 = (float)v5;
  v7 = a3[3];
  v12 = v4;
  v13 = v6;
  v14 = (float)v7;
  CMILMatrix::SetToIdentity((CMILMatrix *)v10);
  CMILMatrix::Scale((CMILMatrix *)v10, *(float *)(v8 + 208) / 96.0, *(float *)(v8 + 212) / 96.0, 1.0);
  v15 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v10, (struct MilRectF *)&v11, (float *)&v15);
  PixelAlign((int *)&v11, (float *)&v15);
  result = a2;
  *a2 = v11;
  a2[1] = v12;
  a2[2] = v13;
  a2[3] = v14;
  return result;
}
