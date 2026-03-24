/*
 * XREFs of ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x18019BDD8
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180039818 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18004226C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180077744 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

_DWORD *__fastcall CSecondaryD2DBitmap::GetPrefilteredRect(__int64 a1, _DWORD *a2, int *a3)
{
  int v3; // eax
  float v4; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm1_4
  int v12; // edx
  int v13; // eax
  float v14; // xmm0_4
  int v15; // r9d
  int v16; // r8d
  int v17; // edx
  _OWORD v19[4]; // [rsp+20h] [rbp-29h] BYREF
  __int16 v20; // [rsp+60h] [rbp+17h]
  __int128 v21; // [rsp+70h] [rbp+27h] BYREF
  _DWORD v22[4]; // [rsp+80h] [rbp+37h] BYREF

  v3 = *a3;
  v4 = *(float *)(a1 + 212) / 96.0;
  v20 = 32085;
  v6 = (float)v3;
  v7 = (float)a3[1];
  v8 = a3[2];
  *(float *)v22 = v6;
  v9 = (float)v8;
  v10 = a3[3];
  *(float *)&v22[1] = v7;
  *(float *)&v22[2] = v9;
  *(float *)&v22[3] = (float)v10;
  v19[1] = _xmm;
  v19[3] = _xmm;
  v11 = *(float *)(a1 + 208);
  v19[0] = _xmm;
  v19[2] = _xmm;
  CMILMatrix::Scale((CMILMatrix *)v19, v11 / 96.0, v4, 1.0);
  v21 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v19, (__int64)v22, (float *)&v21);
  PixelAlign(*(float *)&v21, 0);
  PixelAlign(*((float *)&v21 + 1), v12);
  v13 = PixelAlign(*((float *)&v21 + 2), 1);
  v14 = *((float *)&v21 + 3);
  *a2 = v15;
  a2[1] = v16;
  a2[2] = v13;
  a2[3] = PixelAlign(v14, v17);
  return a2;
}
