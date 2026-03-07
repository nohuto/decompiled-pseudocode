__int64 __fastcall CreateMegaRectVertex(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r10
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r11
  float *v10; // rcx
  __int64 result; // rax
  float v13; // xmm5_4
  float v14; // xmm6_4
  float *v15; // r8
  __int64 v16; // r10
  __int64 v17; // r11
  char *v18; // rcx
  __int64 v19; // r9
  float v20; // xmm8_4
  __int64 v21; // rdx
  float v22; // xmm7_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm1_4

  v5 = *a2;
  v7 = *((int *)a2 + 2);
  *(_QWORD *)a4 = a1;
  v8 = v5 + v7;
  v9 = v5 + 3 * (int)v7;
  v10 = (float *)(v5 + 2 * (int)v7);
  *(_DWORD *)(a4 + 8) = 1065353216;
  *(_DWORD *)(a4 + 12) = *(_DWORD *)(v5 + 12);
  result = a5;
  *(_DWORD *)(a5 + 8) = 0;
  *(_QWORD *)a5 = a1;
  *(_DWORD *)(a5 + 12) = 1065353216;
  v13 = (float)(*(float *)&a1 - *(float *)v5) / (float)(*v10 - *(float *)v5);
  v14 = (float)(*((float *)&a1 + 1) - *(float *)(v5 + 4)) / (float)(v10[1] - *(float *)(v5 + 4));
  if ( a3 )
  {
    v15 = (float *)(v8 + 20);
    v16 = v5 - v8;
    v17 = v9 - v8;
    v18 = (char *)v10 - v8;
    v19 = a4 - v8;
    result = a5 - v8;
    v20 = 1.0 - v13;
    v21 = a3;
    v22 = 1.0 - v14;
    do
    {
      v23 = *v15 * v13;
      v24 = (float)((float)((float)(v20 * *(float *)((char *)v15 + v17 - 4))
                          + (float)(*(float *)((char *)v15 + (_QWORD)v18 - 4) * v13))
                  * v14)
          + (float)((float)((float)(v20 * *(float *)((char *)v15 + v16 - 4)) + (float)(*(v15 - 1) * v13)) * v22);
      v25 = v20 * *(float *)((char *)v15 + v16);
      v26 = (float)((float)(v20 * *(float *)((char *)v15 + v17)) + (float)(*(float *)((char *)v15 + (_QWORD)v18) * v13))
          * v14;
      *(float *)((char *)v15 + v19 - 4) = v24;
      v27 = v26 + (float)((float)(v25 + v23) * v22);
      *(float *)((char *)v15 + v19) = v27;
      *(float *)((char *)v15 + result - 4) = v24;
      *(float *)((char *)v15 + result) = v27;
      v15 += 2;
      --v21;
    }
    while ( v21 );
  }
  return result;
}
