/*
 * XREFs of ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180008650
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180007CCC (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180008844 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C35E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        float *a4,
        float *a5,
        __int64 a6)
{
  __int128 v6; // xmm1
  int v8; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 result; // rax
  _OWORD *v14; // r11
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm0_4
  float v25; // xmm6_4
  float v26[4]; // [rsp+28h] [rbp-79h]
  _OWORD v27[4]; // [rsp+38h] [rbp-69h] BYREF
  int v28; // [rsp+78h] [rbp-29h]
  __int128 v29; // [rsp+88h] [rbp-19h] BYREF

  v6 = a2[1];
  v8 = *((_DWORD *)a2 + 16);
  *(_QWORD *)v26 = *(_QWORD *)(*(_QWORD *)(a1 + 704) + 96LL);
  v29 = 0LL;
  v28 = v8;
  v10 = *a2;
  v27[1] = v6;
  v11 = a2[3];
  v27[0] = v10;
  v12 = a2[2];
  v27[3] = v11;
  v27[2] = v12;
  result = CMILMatrix::Get2DBoundsUsing2DInverse(v27, a3, &v29);
  if ( (_BYTE)result )
  {
    *((float *)&v29 + 1) = *((float *)&v29 + 1) + COERCE_FLOAT(LODWORD(v26[1]) ^ _xmm);
    *(float *)&v29 = *(float *)&v29 + COERCE_FLOAT(LODWORD(v26[0]) ^ _xmm);
    *((float *)&v29 + 3) = *((float *)&v29 + 3) + COERCE_FLOAT(LODWORD(v26[1]) ^ _xmm);
    *((float *)&v29 + 2) = *((float *)&v29 + 2) + COERCE_FLOAT(LODWORD(v26[0]) ^ _xmm);
    result = CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)a2, (struct MilRectF *)&v29);
    v15 = *a4;
    v16 = *a5;
    if ( *a4 > *a5 )
    {
      *a5 = v15;
      v16 = v15;
    }
    v17 = a4[1];
    v18 = a5[1];
    if ( v17 > v18 )
    {
      a5[1] = v17;
      v18 = v17;
    }
    v19 = a4[2];
    v20 = a5[2];
    if ( v20 > v19 )
    {
      a5[2] = v19;
      v20 = v19;
    }
    v21 = a4[3];
    v22 = a5[3];
    if ( v22 > v21 )
    {
      a5[3] = v21;
      v22 = v21;
    }
    if ( v20 <= v16 || v22 <= v18 )
    {
      a5[3] = 0.0;
      a5[2] = 0.0;
      a5[1] = 0.0;
      *a5 = 0.0;
    }
    *(_OWORD *)a6 = *(_OWORD *)a5;
    v23 = v26[0] + *(float *)(a6 + 8);
    v24 = v26[1] + *(float *)(a6 + 4);
    v25 = v26[1] + *(float *)(a6 + 12);
    *(float *)a6 = v26[0] + *(float *)a6;
    *(float *)(a6 + 8) = v23;
    *(float *)(a6 + 4) = v24;
    *(float *)(a6 + 12) = v25;
  }
  else
  {
    *(_OWORD *)a5 = *v14;
    *(_OWORD *)a6 = *v14;
  }
  return result;
}
