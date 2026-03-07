bool __fastcall IntersectTwoLines(__int64 *a1, __int64 *a2, float a3, float *a4)
{
  float v4; // xmm15_4
  float v5; // xmm9_4
  float v6; // xmm13_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm10_4
  float v10; // xmm11_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm7_4
  __int64 v17; // [rsp+28h] [rbp-69h]
  float v18; // [rsp+30h] [rbp-61h]
  __int64 v19; // [rsp+38h] [rbp-59h]
  float v20; // [rsp+40h] [rbp-51h]
  __int64 v21; // [rsp+48h] [rbp-49h]
  float v22; // [rsp+50h] [rbp-41h]
  __int64 v23; // [rsp+58h] [rbp-39h]
  float v24; // [rsp+60h] [rbp-31h]

  v19 = *a1;
  v17 = *(__int64 *)((char *)a1 + 12);
  v21 = *a2;
  v23 = *(__int64 *)((char *)a2 + 12);
  v20 = *((float *)a1 + 2);
  v18 = *((float *)a1 + 5);
  v22 = *((float *)a2 + 2);
  v24 = *((float *)a2 + 5);
  v4 = (float)(v24 * *((float *)&v17 + 1)) - (float)(v18 * *((float *)&v23 + 1));
  v5 = (float)(v18 * *(float *)&v23) - (float)(v24 * *(float *)&v17);
  v6 = (float)(*(float *)&v17 * *((float *)&v23 + 1)) - (float)(*((float *)&v17 + 1) * *(float *)&v23);
  v7 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  v8 = (float)((float)((float)((float)((float)((float)(v20 - v22) * *((float *)&v23 + 1))
                                     - (float)((float)(*((float *)&v19 + 1) - *((float *)&v21 + 1)) * v24))
                             * v4)
                     + (float)((float)((float)((float)(*(float *)&v19 - *(float *)&v21) * v24)
                                     - (float)((float)(v20 - v22) * *(float *)&v23))
                             * v5))
             + (float)((float)((float)((float)(*((float *)&v19 + 1) - *((float *)&v21 + 1)) * *(float *)&v23)
                             - (float)((float)(*(float *)&v19 - *(float *)&v21) * *((float *)&v23 + 1)))
                     * v6))
     / v7;
  v9 = (float)(*((float *)&v17 + 1) * v8) + COERCE_FLOAT(HIDWORD(*a1));
  v10 = (float)(*(float *)&v17 * v8) + COERCE_FLOAT(*a1);
  v11 = (float)(v18 * v8) + v20;
  v12 = (float)((float)((float)((float)((float)((float)(*(float *)&v19 - *(float *)&v21) * v18)
                                      - (float)((float)(v20 - v22) * *(float *)&v17))
                              * v5)
                      + (float)((float)((float)((float)(v20 - v22) * *((float *)&v17 + 1))
                                      - (float)((float)(*((float *)&v19 + 1) - *((float *)&v21 + 1)) * v18))
                              * v4))
              + (float)((float)((float)((float)(*((float *)&v19 + 1) - *((float *)&v21 + 1)) * *(float *)&v17)
                              - (float)((float)(COERCE_FLOAT(*a1) - COERCE_FLOAT(*a2)) * *((float *)&v17 + 1)))
                      * v6))
      / v7;
  v13 = (float)(*(float *)&v23 * v12) + COERCE_FLOAT(*a2);
  v14 = (float)(*((float *)&v23 + 1) * v12) + COERCE_FLOAT(HIDWORD(*a2));
  v15 = (float)(v24 * v12) + v22;
  *a4 = (float)(v13 + v10) * 0.5;
  a4[1] = (float)(v14 + v9) * 0.5;
  a4[2] = (float)(v15 + v11) * 0.5;
  return a3 > sqrtf_0(
                (float)((float)((float)(v9 - v14) * (float)(v9 - v14)) + (float)((float)(v10 - v13) * (float)(v10 - v13)))
              + (float)((float)(v11 - v15) * (float)(v11 - v15)));
}
