char __fastcall CArrayBasedCoverageSet::IsCovered(__int64 *a1, float *a2, int a3)
{
  unsigned int v4; // r10d
  __int128 v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // r8
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15[6]; // [rsp+0h] [rbp-18h]

  v4 = *((_DWORD *)a1 + 6);
  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return 1;
  v5 = *(_OWORD *)a2;
  v6 = 0LL;
  *(_OWORD *)v15 = v5;
  if ( v4 )
  {
    v7 = *a1;
    v8 = *((float *)&v5 + 3);
    v9 = *((float *)&v5 + 1);
    while ( *(_DWORD *)(v7 + 36 * v6 + 16) < a3 )
    {
      v11 = *(float *)(v7 + 36 * v6 + 8);
      v12 = *(float *)(v7 + 36 * v6);
      if ( v11 > v12 )
      {
        v13 = *(float *)(v7 + 36 * v6 + 12);
        if ( v13 > *(float *)(v7 + 36 * v6 + 4) && v15[0] >= v12 && v11 >= v15[2] )
        {
          v14 = *(float *)(v7 + 36 * v6 + 4);
          if ( v9 < v14 )
          {
            if ( v13 >= v8 && v8 > v14 )
              v8 = *(float *)(v7 + 36 * v6 + 4);
          }
          else
          {
            if ( v13 >= v8 )
              return 1;
            if ( v13 > v9 )
              v9 = *(float *)(v7 + 36 * v6 + 12);
          }
        }
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v4 )
        return 0;
    }
  }
  return 0;
}
