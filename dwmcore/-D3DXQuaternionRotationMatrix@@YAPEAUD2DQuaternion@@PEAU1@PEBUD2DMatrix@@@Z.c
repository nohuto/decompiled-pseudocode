struct D2DQuaternion *__fastcall D3DXQuaternionRotationMatrix(struct D2DQuaternion *a1, const struct D2DMatrix *a2)
{
  float v2; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  float v13; // xmm0_4
  __int64 v14; // r8
  float v15; // [rsp+20h] [rbp-38h]
  float v16; // [rsp+24h] [rbp-34h]
  float v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+34h] [rbp-24h]

  v2 = *(float *)a2;
  v4 = *((float *)a2 + 5);
  v5 = *((float *)a2 + 10);
  v7 = (float)(*(float *)a2 + v4) + v5;
  if ( v7 <= 0.0 )
  {
    v18 = 1;
    v19 = 2LL;
    v16 = (float)(v4 - v2) - v5;
    v15 = (float)(v2 - v4) - v5;
    v17 = (float)(COERCE_FLOAT(LODWORD(v2) ^ _xmm) - v4) + v5;
    v10 = v15 < v16;
    if ( *(&v15 + v10) < v17 )
      v10 = 2LL;
    v11 = (unsigned int)v10;
    v12 = (unsigned int)*(&v18 + v10);
    v13 = sqrtf_0(*(&v15 + v10) + 1.0) * 0.5;
    v14 = (unsigned int)*(&v18 + v12);
    *((float *)a1 + v11) = v13;
    *((float *)a1 + v12) = (float)(*((float *)a2 + 4 * v12 + v11) + *((float *)a2 + 4 * v11 + v12))
                         * (float)(0.25 / v13);
    *((float *)a1 + v14) = (float)(*((float *)a2 + 4 * v14 + v11) + *((float *)a2 + 4 * v11 + v14))
                         * (float)(0.25 / v13);
    *((float *)a1 + 3) = (float)(*((float *)a2 + 4 * v12 + v14) - *((float *)a2 + 4 * v14 + v12)) * (float)(0.25 / v13);
  }
  else
  {
    v8 = sqrtf_0(v7 + 1.0) * 0.5;
    *((float *)a1 + 3) = v8;
    *(float *)a1 = (float)(*((float *)a2 + 6) - *((float *)a2 + 9)) * (float)(0.25 / v8);
    *((float *)a1 + 1) = (float)(*((float *)a2 + 8) - *((float *)a2 + 2)) * (float)(0.25 / v8);
    *((float *)a1 + 2) = (float)(*((float *)a2 + 1) - *((float *)a2 + 4)) * (float)(0.25 / v8);
  }
  return a1;
}
