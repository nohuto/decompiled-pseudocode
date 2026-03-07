struct D2DMatrix *__fastcall D2DMatrixInverse(struct D2DMatrix *a1, float *a2, const struct D2DMatrix *a3)
{
  float v4; // xmm3_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm11_4
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm14_4
  float v13; // xmm15_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm11_4
  float v22; // xmm3_4
  float v23; // xmm5_4
  float v24; // xmm12_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm1_4
  float v29; // xmm15_4
  float v30; // xmm0_4
  float v31; // xmm5_4
  float v32; // xmm9_4
  float v33; // xmm10_4
  float v34; // xmm13_4
  float v35; // xmm1_4
  float v36; // xmm14_4
  float v37; // xmm15_4
  float v38; // xmm2_4
  float v39; // xmm6_4
  struct D2DMatrix *result; // rax
  float v41; // [rsp+20h] [rbp-C8h]
  float v42; // [rsp+24h] [rbp-C4h]
  float v43; // [rsp+28h] [rbp-C0h]
  float v44; // [rsp+2Ch] [rbp-BCh]
  float v45; // [rsp+30h] [rbp-B8h]
  float v46; // [rsp+34h] [rbp-B4h]
  float v47; // [rsp+F8h] [rbp+10h]
  float v48; // [rsp+F8h] [rbp+10h]
  float v49; // [rsp+100h] [rbp+18h]
  float v50; // [rsp+100h] [rbp+18h]
  float v51; // [rsp+108h] [rbp+20h]
  float v52; // [rsp+108h] [rbp+20h]

  v4 = *((float *)a3 + 3);
  v5 = *((float *)a3 + 7);
  v6 = *((float *)a3 + 15);
  v7 = *((float *)a3 + 11);
  v8 = *((float *)a3 + 14);
  v9 = *((float *)a3 + 2);
  v10 = *((float *)a3 + 10);
  v11 = *((float *)a3 + 9);
  v12 = *((float *)a3 + 13);
  v13 = *((float *)a3 + 1);
  v14 = (float)(*((float *)a3 + 5) * *(float *)a3) - (float)(*((float *)a3 + 4) * v13);
  v15 = (float)(v11 * *(float *)a3) - (float)(*((float *)a3 + 8) * v13);
  v47 = (float)(v12 * *(float *)a3) - (float)(*((float *)a3 + 12) * v13);
  v16 = (float)(v11 * *((float *)a3 + 4)) - (float)(*((float *)a3 + 8) * *((float *)a3 + 5));
  v17 = (float)(v12 * *((float *)a3 + 4)) - (float)(*((float *)a3 + 12) * *((float *)a3 + 5));
  v49 = *((float *)a3 + 6);
  v51 = (float)(v12 * *((float *)a3 + 8)) - (float)(*((float *)a3 + 12) * v11);
  v46 = (float)((float)(v9 * v16) - (float)(v49 * v15)) + (float)(v10 * v14);
  v45 = (float)((float)(v49 * v47) - (float)(v8 * v14)) - (float)(v9 * v17);
  v44 = (float)((float)(v9 * v51) - (float)(v10 * v47)) + (float)(v8 * v15);
  v43 = (float)((float)(v10 * v17) - (float)(v8 * v16)) - (float)(v49 * v51);
  v42 = (float)((float)(v15 * v5) - (float)(v14 * v7)) - (float)(v16 * v4);
  v41 = (float)((float)(v17 * v4) - (float)(v47 * v5)) + (float)(v14 * v6);
  v18 = (float)((float)(v47 * v7) - (float)(v15 * v6)) - (float)(v51 * v4);
  v52 = (float)((float)(v51 * v5) - (float)(v17 * v7)) + (float)(v16 * v6);
  v19 = (float)(v9 * v5) - (float)(v49 * v4);
  v48 = v18;
  v20 = (float)(v9 * v7) - (float)(v10 * v4);
  v21 = (float)(v9 * v6) - (float)(v8 * v4);
  v22 = (float)(v49 * v7) - (float)(v10 * v5);
  v23 = (float)(v49 * v6) - (float)(v8 * v5);
  v24 = (float)(v10 * v6) - (float)(v8 * v7);
  v25 = *((float *)a3 + 4);
  v26 = (float)((float)(v20 * *((float *)a3 + 5)) - (float)(v19 * v11)) - (float)(v22 * v13);
  v27 = (float)((float)(v23 * v13) - (float)(v21 * *((float *)a3 + 5))) + (float)(v19 * v12);
  v28 = v24 * v13;
  v29 = v23;
  v30 = v23;
  v31 = *((float *)a3 + 8);
  v32 = (float)((float)(v21 * v11) - (float)(v20 * v12)) - v28;
  v33 = (float)((float)(v24 * *((float *)a3 + 5)) - (float)(v30 * v11)) + (float)(v22 * v12);
  v34 = (float)((float)(v22 * *(float *)a3) - (float)(v20 * v25)) + (float)(v19 * v31);
  v35 = *((float *)a3 + 12);
  v36 = (float)((float)(v21 * v25) - (float)(v19 * v35)) - (float)(v29 * *(float *)a3);
  v37 = (float)((float)(v29 * v31) - (float)(v22 * v35)) - (float)(v24 * v25);
  v50 = (float)((float)(v24 * *(float *)a3) - (float)(v21 * v31)) + (float)(v20 * v35);
  v38 = (float)((float)((float)(v26 * v35) + (float)(v27 * v31)) + (float)(v32 * v25)) + (float)(v33 * *(float *)a3);
  if ( a2 )
    *a2 = v38;
  if ( v38 == 0.0 )
    return 0LL;
  v39 = 1.0 / v38;
  if ( !_finite((float)(1.0 / v38)) )
    return 0LL;
  result = a1;
  *((float *)a1 + 4) = v39 * v37;
  *((float *)a1 + 5) = v39 * v50;
  *((float *)a1 + 6) = v39 * v36;
  *((float *)a1 + 8) = v52 * v39;
  *((float *)a1 + 9) = v48 * v39;
  *((float *)a1 + 10) = v41 * v39;
  *(float *)a1 = v33 * v39;
  *((float *)a1 + 1) = v32 * v39;
  *((float *)a1 + 11) = v42 * v39;
  *((float *)a1 + 2) = v27 * v39;
  *((float *)a1 + 3) = v26 * v39;
  *((float *)a1 + 12) = v43 * v39;
  *((float *)a1 + 7) = v39 * v34;
  *((float *)a1 + 13) = v44 * v39;
  *((float *)a1 + 14) = v45 * v39;
  *((float *)a1 + 15) = v46 * v39;
  return result;
}
