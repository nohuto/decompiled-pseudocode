__int64 __fastcall bCvtPts(__int64 a1, int *a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  int *v6; // rsi
  signed __int64 v8; // rsi
  int v9; // eax
  int v10; // eax
  float v11; // xmm1_4
  unsigned int v12; // r8d
  float v13; // xmm2_4
  float v14; // xmm3_4
  unsigned int v15; // r8d
  int v17[6]; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0;
  v4 = a4;
  v17[0] = 0;
  v5 = a3;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0 )
  {
LABEL_17:
    if ( a4 )
    {
      do
      {
        v13 = (float)*v6;
        v14 = (float)v6[1];
        bFToL((float)(v14 * *(float *)(a1 + 8)) + (float)(v13 * *(float *)a1), &v18, 6u);
        bFToL((float)(v14 * *(float *)(a1 + 12)) + (float)(v13 * *(float *)(a1 + 4)), v17, v15);
        v6 += 2;
        *v5 = *(_DWORD *)(a1 + 24) + v18;
        v5[1] = v17[0] + *(_DWORD *)(a1 + 28);
        v5 += 2;
        --v4;
      }
      while ( v4 );
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) == 1 )
  {
LABEL_14:
    if ( a4 )
    {
      do
      {
        v11 = (float)v6[1] * *(float *)(a1 + 12);
        bFToL((float)*v6 * *(float *)a1, &v18, 6u);
        bFToL(v11, v17, v12);
        v6 += 2;
        *v5 = *(_DWORD *)(a1 + 24) + v18;
        v5 += 2;
        *(v5 - 1) = v17[0] + *(_DWORD *)(a1 + 28);
        --v4;
      }
      while ( v4 );
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 3 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0xB) != 8 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0xB) != 9 )
      {
        if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0xB && a4 )
        {
          v8 = (char *)a2 - (char *)a3;
          do
          {
            *v5 = *(_DWORD *)(a1 + 24) + 16 * *(_DWORD *)((char *)v5 + v8);
            v9 = *(_DWORD *)((char *)v5 + v8 + 4);
            v5 += 2;
            *(v5 - 1) = *(_DWORD *)(a1 + 28) + 16 * v9;
            --v4;
          }
          while ( v4 );
        }
        return 1LL;
      }
      goto LABEL_14;
    }
    goto LABEL_17;
  }
  if ( a4 )
  {
    do
    {
      v10 = *v6;
      v6 += 2;
      *v5 = *(_DWORD *)(a1 + 24) + (((v10 >> 3) + 1) >> 1);
      v5 += 2;
      *(v5 - 1) = *(_DWORD *)(a1 + 28) + (((*(v6 - 1) >> 3) + 1) >> 1);
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
