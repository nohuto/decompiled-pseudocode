char __fastcall CMILMatrix::Transform3DRectToPerspective(float *a1, float *a2, float *a3)
{
  float v3; // xmm9_4
  float *v4; // rbx
  float v5; // xmm8_4
  float v8; // xmm3_4
  float v9; // xmm15_4
  float v10; // xmm13_4
  float v11; // xmm4_4
  float v12; // xmm14_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm4_4
  float v22; // xmm1_4
  float *v23; // rax
  _DWORD *v24; // r11
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float v30; // xmm8_4
  float v31; // xmm5_4
  float v32; // xmm6_4
  float v33; // xmm1_4
  float v34; // xmm7_4
  float v35; // xmm4_4
  float v36; // xmm8_4
  float v37; // xmm12_4
  float v38; // xmm9_4
  float v39; // xmm10_4
  float v40; // xmm11_4
  float v41; // xmm7_4
  float v42; // xmm8_4
  float v43; // xmm5_4
  float v44; // xmm6_4
  __int64 v45; // rcx
  float v46; // xmm1_4
  float v47; // xmm0_4
  int v48; // xmm1_4
  float v50; // [rsp+20h] [rbp-F8h]
  float v51; // [rsp+20h] [rbp-F8h]
  float v52; // [rsp+24h] [rbp-F4h]
  float v53; // [rsp+28h] [rbp-F0h]
  float v54; // [rsp+2Ch] [rbp-ECh]
  float v55; // [rsp+30h] [rbp-E8h]
  float v56; // [rsp+34h] [rbp-E4h]
  float v57; // [rsp+38h] [rbp-E0h]
  float v58; // [rsp+3Ch] [rbp-DCh]
  float v59; // [rsp+40h] [rbp-D8h]
  float v60[8]; // [rsp+48h] [rbp-D0h] BYREF

  v3 = a2[2];
  v4 = a3 + 2;
  v5 = a2[3];
  v8 = *a2 * *a1;
  v9 = a2[1] * a1[4];
  v10 = a2[4] * a1[8];
  v11 = a1[1] * *a2;
  v12 = a1[9] * a2[4];
  v13 = (float)(a1[5] * a2[1]) + v11;
  v14 = a1[2] * *a2;
  v15 = v5 * a1[4];
  v16 = v5 * a1[5];
  v17 = v5 * a1[6];
  v52 = v3 * *a1;
  v53 = v3 * a1[1];
  v56 = a1[6] * a2[1];
  v50 = v3 * a1[2];
  v18 = a2[5];
  v55 = a1[5] * a2[1];
  v54 = a1[10] * a2[4];
  v19 = v16 + v11;
  v57 = v18 * a1[8];
  v58 = v18 * a1[9];
  v59 = v18 * a1[10];
  v20 = v15 + v8;
  *a3 = (float)((float)(v9 + v8) + v10) + a1[12];
  a3[1] = (float)(v13 + v12) + a1[13];
  a3[2] = (float)((float)(v56 + v14) + v54) + a1[14];
  a3[3] = (float)((float)(v15 + v8) + v10) + a1[12];
  a3[4] = (float)((float)(v16 + v11) + v12) + a1[13];
  v21 = v52 + v15;
  v22 = v50 + v17;
  a3[5] = (float)((float)(v17 + v14) + v54) + a1[14];
  v51 = v50 + v56;
  a3[6] = (float)(v21 + v10) + a1[12];
  a3[7] = (float)((float)(v53 + v16) + v12) + a1[13];
  a3[8] = (float)(v22 + v54) + a1[14];
  a3[9] = (float)((float)(v52 + v9) + v10) + a1[12];
  a3[10] = (float)((float)(v53 + v55) + v12) + a1[13];
  a3[11] = (float)(v54 + v51) + a1[14];
  a3[12] = (float)((float)(v9 + v8) + v57) + a1[12];
  a3[13] = (float)(v13 + v58) + a1[13];
  a3[14] = (float)((float)(v56 + v14) + v59) + a1[14];
  a3[15] = (float)(v20 + v57) + a1[12];
  a3[16] = (float)(v19 + v58) + a1[13];
  a3[17] = (float)((float)(v17 + v14) + v59) + a1[14];
  a3[18] = (float)(v21 + v57) + a1[12];
  a3[19] = (float)((float)(v53 + v16) + v58) + a1[13];
  a3[20] = (float)(v22 + v59) + a1[14];
  a3[21] = (float)((float)(v52 + v9) + v57) + a1[12];
  a3[22] = (float)((float)(v53 + v55) + v58) + a1[13];
  a3[23] = (float)(v59 + v51) + a1[14];
  LOBYTE(v23) = CMILMatrix::IsAffine<1>((__int64)a1, 0);
  if ( !(_BYTE)v23 )
  {
    v25 = a1[15];
    v26 = a1[3];
    v27 = v26 * a2[2];
    v28 = a1[7] * a2[1];
    v29 = v26 * *a2;
    v30 = a1[7] * a2[3];
    v31 = v30 + v27;
    v32 = v28 + v27;
    v33 = a1[11] * a2[4];
    v34 = v28 + v29;
    v35 = a1[11] * a2[5];
    v36 = v30 + v29;
    v37 = (float)(v34 + v33) + v25;
    v38 = (float)(v36 + v33) + v25;
    v39 = (float)(v31 + v33) + v25;
    v40 = (float)(v32 + v33) + v25;
    v60[0] = v37;
    v41 = (float)(v34 + v35) + v25;
    v60[1] = v38;
    v42 = (float)(v36 + v35) + v25;
    v60[2] = v39;
    v43 = (float)(v31 + v35) + v25;
    v44 = (float)(v32 + v35) + v25;
    v60[3] = v40;
    v60[4] = v41;
    v60[5] = v42;
    v60[6] = v43;
    v60[7] = v44;
    if ( v37 < 0.000081380211
      || v38 < 0.000081380211
      || v39 < 0.000081380211
      || v40 < 0.000081380211
      || v41 < 0.000081380211
      || v42 < 0.000081380211
      || v43 < 0.000081380211
      || v44 < 0.000081380211 )
    {
      if ( v37 >= -0.000081380211
        || v38 >= -0.000081380211
        || v39 >= -0.000081380211
        || v40 >= -0.000081380211
        || v41 >= -0.000081380211
        || v42 >= -0.000081380211
        || v43 >= -0.000081380211
        || v44 >= -0.000081380211 )
      {
        v24[15] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v24[12] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v24[3] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *v24 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v24[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[11] = qword_1803E1FC8;
        v24[8] = qword_1803E1FC8;
        v24[5] = qword_1803E1FC8;
        *(_DWORD *)v4 = qword_1803E1FC8;
        v24[23] = HIDWORD(qword_1803E1FC8);
        v24[20] = HIDWORD(qword_1803E1FC8);
        v24[17] = HIDWORD(qword_1803E1FC8);
        v48 = HIDWORD(qword_1803E1FC8);
      }
      else
      {
        v24[15] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v24[12] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v24[3] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *v24 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v24[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[11] = qword_1803E1FB0;
        v24[8] = qword_1803E1FB0;
        v24[5] = qword_1803E1FB0;
        *(_DWORD *)v4 = qword_1803E1FB0;
        v24[23] = HIDWORD(qword_1803E1FB0);
        v24[20] = HIDWORD(qword_1803E1FB0);
        v24[17] = HIDWORD(qword_1803E1FB0);
        v48 = HIDWORD(qword_1803E1FB0);
      }
      v24[14] = v48;
    }
    else
    {
      v23 = v60;
      v45 = 8LL;
      do
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*v23 - 1.0) & _xmm) >= 0.000081380211 )
        {
          v46 = *(v4 - 1) / *v23;
          *(v4 - 2) = *(v4 - 2) / *v23;
          v47 = *v4 / *v23;
          *(v4 - 1) = v46;
          *v4 = v47;
        }
        ++v23;
        v4 += 3;
        --v45;
      }
      while ( v45 );
    }
  }
  return (char)v23;
}
