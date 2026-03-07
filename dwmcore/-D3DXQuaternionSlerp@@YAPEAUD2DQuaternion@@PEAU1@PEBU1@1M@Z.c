struct D2DQuaternion *__fastcall D3DXQuaternionSlerp(
        struct D2DQuaternion *a1,
        const struct D2DQuaternion *a2,
        const struct D2DQuaternion *a3,
        float a4)
{
  float *v4; // rbx
  float v7; // xmm8_4
  float v8; // xmm11_4
  float v9; // xmm7_4
  float v10; // xmm10_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm7_4
  char *v15; // rdi
  float v16; // xmm8_4
  __int64 v17; // rcx
  char *v18; // rax

  v4 = (float *)a3;
  v7 = a4;
  v8 = 1.0 - a4;
  v9 = (float)((float)((float)(*((float *)a2 + 1) * *((float *)a3 + 1)) + (float)(*(float *)a2 * *(float *)a3))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 2)))
     + (float)(*((float *)a2 + 3) * *((float *)a3 + 3));
  if ( v9 < 0.0 )
    v10 = FLOAT_N1_0;
  else
    v10 = *(float *)&FLOAT_1_0;
  v11 = v9 * v10;
  if ( (float)(1.0 - v11) > 0.00000011920929 )
  {
    v12 = sqrtf_0(1.0 - (float)(v11 * v11));
    v13 = atan2f_0(v12, v11);
    v14 = v13 * a4;
    v8 = sinf_0(v13 * v8) * (float)(1.0 / v12);
    v7 = sinf_0(v14) * (float)(1.0 / v12);
  }
  v15 = (char *)(a2 - (const struct D2DQuaternion *)v4);
  v16 = v7 * v10;
  v17 = 4LL;
  v18 = (char *)(a1 - (struct D2DQuaternion *)v4);
  do
  {
    *(float *)((char *)v4 + (_QWORD)v18) = (float)(v8 * *(float *)((char *)v4 + (_QWORD)v15)) + (float)(v16 * *v4);
    ++v4;
    --v17;
  }
  while ( v17 );
  return a1;
}
