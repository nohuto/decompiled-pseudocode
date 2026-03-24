/*
 * XREFs of ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180014B98
 * Callers:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A77A0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A8340 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800826E0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180088808 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform3DRectToPerspective(float *a1, float *a2, float *a3)
{
  float v3; // xmm9_4
  float v4; // xmm8_4
  float v7; // xmm2_4
  float v8; // xmm15_4
  float v9; // xmm13_4
  float v10; // xmm4_4
  float v11; // xmm12_4
  float v12; // xmm14_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm15_4
  char result; // al
  _DWORD *v21; // r10
  _DWORD *v22; // r11
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm8_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  float v31; // xmm1_4
  float v32; // xmm7_4
  float v33; // xmm4_4
  float v34; // xmm8_4
  float v35; // xmm12_4
  float v36; // xmm9_4
  float v37; // xmm10_4
  float v38; // xmm11_4
  float v39; // xmm7_4
  float v40; // xmm8_4
  float v41; // xmm5_4
  float v42; // xmm6_4
  float *v43; // rcx
  __int64 v44; // rdx
  float *v45; // rcx
  float *v46; // r11
  float v47; // xmm1_4
  float v48; // xmm0_4
  int v49; // xmm1_4
  float v50; // [rsp+20h] [rbp-F8h]
  float v51; // [rsp+24h] [rbp-F4h]
  float v52; // [rsp+28h] [rbp-F0h]
  float v53; // [rsp+2Ch] [rbp-ECh]
  float v54; // [rsp+30h] [rbp-E8h]
  float v55; // [rsp+34h] [rbp-E4h]
  float v56; // [rsp+38h] [rbp-E0h]
  float v57; // [rsp+3Ch] [rbp-DCh]
  float v58; // [rsp+40h] [rbp-D8h]
  float v59[8]; // [rsp+48h] [rbp-D0h] BYREF

  v3 = a2[2];
  v4 = a2[3];
  v7 = *a2 * *a1;
  v8 = a2[1] * a1[4];
  v9 = a2[4] * a1[8];
  v10 = a1[1] * *a2;
  v11 = v8 + v7;
  v12 = a1[9] * a2[4];
  v13 = (float)(a1[5] * a2[1]) + v10;
  v14 = a1[2] * *a2;
  v15 = v4 * a1[4];
  v16 = v4 * a1[5];
  v17 = v4 * a1[6];
  v50 = v3 * *a1;
  v51 = v3 * a1[1];
  v55 = a1[6] * a2[1];
  v52 = v3 * a1[2];
  v18 = a2[5];
  v54 = a1[5] * a2[1];
  v53 = a1[10] * a2[4];
  v56 = v18 * a1[8];
  v57 = v18 * a1[9];
  v58 = v18 * a1[10];
  *a3 = (float)((float)(v8 + v7) + v9) + a1[12];
  a3[1] = (float)(v13 + v12) + a1[13];
  a3[2] = (float)((float)(v55 + v14) + v53) + a1[14];
  a3[3] = (float)((float)(v15 + v7) + v9) + a1[12];
  a3[4] = (float)((float)(v16 + v10) + v12) + a1[13];
  a3[5] = (float)((float)(v17 + v14) + v53) + a1[14];
  a3[6] = (float)((float)(v50 + v15) + v9) + a1[12];
  a3[7] = (float)((float)(v51 + v16) + v12) + a1[13];
  a3[8] = (float)((float)(v52 + v17) + v53) + a1[14];
  v19 = v50 + v8;
  a3[9] = (float)(v19 + v9) + a1[12];
  a3[10] = (float)((float)(v51 + v54) + v12) + a1[13];
  a3[11] = (float)((float)(v52 + v55) + v53) + a1[14];
  a3[12] = (float)(v11 + v56) + a1[12];
  a3[13] = (float)(v13 + v57) + a1[13];
  a3[14] = (float)((float)(v55 + v14) + v58) + a1[14];
  a3[15] = (float)((float)(v15 + v7) + v56) + a1[12];
  a3[16] = (float)((float)(v16 + v10) + v57) + a1[13];
  a3[17] = (float)((float)(v17 + v14) + v58) + a1[14];
  a3[18] = (float)((float)(v50 + v15) + v56) + a1[12];
  a3[19] = (float)((float)(v51 + v16) + v57) + a1[13];
  a3[20] = (float)((float)(v52 + v17) + v58) + a1[14];
  a3[21] = (float)(v19 + v56) + a1[12];
  a3[22] = (float)((float)(v51 + v54) + v57) + a1[13];
  a3[23] = (float)((float)(v52 + v55) + v58) + a1[14];
  result = CMILMatrix::Is2DAffine<1>(a1, 0LL);
  if ( !result )
  {
    v23 = a1[15];
    v24 = a1[3];
    v25 = v24 * a2[2];
    v26 = a1[7] * a2[1];
    v27 = v24 * *a2;
    v28 = a1[7] * a2[3];
    v29 = v28 + v25;
    v30 = v26 + v25;
    v31 = a1[11] * a2[4];
    v32 = v26 + v27;
    v33 = a1[11] * a2[5];
    v34 = v28 + v27;
    v35 = (float)(v32 + v31) + v23;
    v36 = (float)(v34 + v31) + v23;
    v37 = (float)(v29 + v31) + v23;
    v38 = (float)(v30 + v31) + v23;
    v59[0] = v35;
    v39 = (float)(v32 + v33) + v23;
    v59[1] = v36;
    v40 = (float)(v34 + v33) + v23;
    v59[2] = v37;
    v41 = (float)(v29 + v33) + v23;
    v42 = (float)(v30 + v33) + v23;
    v59[3] = v38;
    v59[4] = v39;
    v59[5] = v40;
    v59[6] = v41;
    v59[7] = v42;
    if ( v35 < 0.000081380211
      || v36 < 0.000081380211
      || v37 < 0.000081380211
      || v38 < 0.000081380211
      || v39 < 0.000081380211
      || v40 < 0.000081380211
      || v41 < 0.000081380211
      || v42 < 0.000081380211 )
    {
      if ( v35 >= -0.000081380211
        || v36 >= -0.000081380211
        || v37 >= -0.000081380211
        || v38 >= -0.000081380211
        || v39 >= -0.000081380211
        || v40 >= -0.000081380211
        || v41 >= -0.000081380211
        || v42 >= -0.000081380211 )
      {
        v21[15] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v21[12] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v21[3] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *v21 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v21[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[11] = qword_1803467E8;
        v21[8] = qword_1803467E8;
        v21[5] = qword_1803467E8;
        *v22 = qword_1803467E8;
        v21[23] = HIDWORD(qword_1803467E8);
        v21[20] = HIDWORD(qword_1803467E8);
        v21[17] = HIDWORD(qword_1803467E8);
        v49 = HIDWORD(qword_1803467E8);
      }
      else
      {
        v21[15] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v21[12] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v21[3] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *v21 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v21[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[11] = qword_1803467D0;
        v21[8] = qword_1803467D0;
        v21[5] = qword_1803467D0;
        *v22 = qword_1803467D0;
        v21[23] = HIDWORD(qword_1803467D0);
        v21[20] = HIDWORD(qword_1803467D0);
        v21[17] = HIDWORD(qword_1803467D0);
        v49 = HIDWORD(qword_1803467D0);
      }
      v21[14] = v49;
    }
    else
    {
      v43 = v59;
      do
      {
        result = IsCloseRealOne(*v43, 0.000081380211);
        if ( !result )
        {
          v47 = *(v46 - 1) / *v45;
          *(v46 - 2) = *(v46 - 2) / *v45;
          v48 = *v46 / *v45;
          *(v46 - 1) = v47;
          *v46 = v48;
        }
        v43 = v45 + 1;
      }
      while ( v44 != 1 );
    }
  }
  return result;
}
