/*
 * XREFs of ?GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802540E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802193F0 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

char __fastcall CAffineTransform2DEffect::GetBoundsFromInputs(float *a1, _DWORD *a2, float *a3)
{
  float *v3; // rax
  float v4; // xmm1_4
  float v5; // xmm5_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm8_4
  float v9; // xmm12_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm11_4
  float v13; // xmm3_4
  float v14; // xmm13_4
  float v15; // xmm0_4
  float v16; // xmm12_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm11_4
  __int64 v23; // rcx
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v27; // [rsp+28h] [rbp-70h]
  _DWORD v28[5]; // [rsp+2Ch] [rbp-6Ch] BYREF

  if ( a2[6] == 1 )
  {
    v4 = a1[48];
    v5 = a1[49];
    v6 = *(float *)(*(_QWORD *)a2 + 4LL) * a1[46];
    v7 = *(float *)(*(_QWORD *)a2 + 16LL) * v4;
    v8 = *(float *)(*(_QWORD *)a2 + 8LL) * v4;
    v9 = *(float *)(*(_QWORD *)a2 + 4LL) * a1[47];
    v10 = *(float *)(*(_QWORD *)a2 + 16LL) * v5;
    v11 = v7 + v6;
    v12 = *(float *)(*(_QWORD *)a2 + 8LL) * v5;
    v13 = *(float *)(*(_QWORD *)a2 + 12LL);
    v3 = (float *)v28;
    v14 = (float)(v6 + v8) + a1[50];
    v15 = (float)(v10 + v9) + a1[51];
    v16 = (float)(v9 + v12) + a1[51];
    v27 = v11 + a1[50];
    v17 = v13 * a1[46];
    v18 = v13 * a1[47];
    *(float *)v28 = v15;
    v19 = (float)(v17 + v7) + a1[50];
    v20 = (float)(v17 + v8) + a1[50];
    v21 = (float)(v10 + v18) + a1[51];
    v22 = (float)(v12 + v18) + a1[51];
    v23 = 3LL;
    *(float *)&v28[1] = v19;
    v24 = v14;
    *(float *)&v28[3] = v20;
    v25 = v16;
    *(float *)&v28[2] = v21;
    *(float *)&v28[4] = v22;
    do
    {
      v14 = fminf(v14, *(v3 - 1));
      v16 = fminf(v16, *v3);
      v24 = fmaxf(v24, *(v3 - 1));
      v25 = fmaxf(v25, *v3);
      v3 += 2;
      *a3 = v14;
      --v23;
    }
    while ( v23 );
    a3[1] = v16;
    a3[2] = v24;
    a3[3] = v25;
  }
  else
  {
    LOBYTE(v3) = CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  }
  return (char)v3;
}
