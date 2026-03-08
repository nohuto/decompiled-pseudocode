/*
 * XREFs of ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x180008554
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180007CCC (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800C5170 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5)
{
  __int128 *v5; // rdx
  char IsEmpty; // al
  _OWORD *v7; // r8
  float *v8; // r9
  __int64 v9; // rdx
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm4_4
  __int64 result; // rax
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF

  CDropShadow::GetRadius(*(CDropShadow **)(a1 + 704));
  v20 = *v5;
  IsEmpty = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v20);
  v9 = 0LL;
  if ( !IsEmpty )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v20);
  *(_OWORD *)v8 = *v7;
  v10 = *v8;
  v11 = *(float *)&v20;
  if ( *(float *)&v20 > *v8 )
  {
    *(_DWORD *)v8 = v20;
    v10 = v11;
  }
  v12 = v8[1];
  v13 = *((float *)&v20 + 1);
  if ( *((float *)&v20 + 1) > v12 )
  {
    v8[1] = *((float *)&v20 + 1);
    v12 = v13;
  }
  v14 = v8[2];
  v15 = *((float *)&v20 + 2);
  if ( v14 > *((float *)&v20 + 2) )
  {
    v8[2] = *((float *)&v20 + 2);
    v14 = v15;
  }
  v16 = v8[3];
  v17 = *((float *)&v20 + 3);
  if ( v16 > *((float *)&v20 + 3) )
  {
    v8[3] = *((float *)&v20 + 3);
    v16 = v17;
  }
  if ( v14 <= v10 || v16 <= v12 )
  {
    *((_QWORD *)v8 + 1) = v9;
    *(_QWORD *)v8 = v9;
  }
  *a5 = *(_OWORD *)v8;
  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a5);
  if ( !(_BYTE)result )
    return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v19);
  return result;
}
