__int64 __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  float v4; // xmm1_4
  _DWORD *v5; // r10
  unsigned int v6; // r8d
  float v8; // xmm1_4
  __int64 v9; // rcx
  float v10; // xmm1_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rdx

  v4 = *((float *)a1 + 1);
  v5 = a1 + 2;
  v6 = 0;
  if ( *(float *)(a2 + 4) > v4 )
  {
    *(float *)(a4 + 4) = v4;
    v6 = 1;
    *(_DWORD *)(a4 + 12) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)a4 = *a1;
    *(_DWORD *)(a4 + 8) = *v5;
  }
  v8 = *(float *)a1;
  if ( *(float *)a2 > *(float *)a1 )
  {
    v9 = 2LL * v6++;
    *(float *)(a4 + 8 * v9) = v8;
    *(_DWORD *)(a4 + 8 * v9 + 8) = *(_DWORD *)a2;
    *(_DWORD *)(a4 + 8 * v9 + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a4 + 8 * v9 + 12) = *(_DWORD *)(a2 + 12);
  }
  v10 = *(float *)(a2 + 8);
  if ( *(float *)v5 > v10 )
  {
    v11 = 2LL * v6++;
    *(float *)(a4 + 8 * v11) = v10;
    *(_DWORD *)(a4 + 8 * v11 + 8) = *v5;
    *(_DWORD *)(a4 + 8 * v11 + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a4 + 8 * v11 + 12) = *(_DWORD *)(a2 + 12);
  }
  v12 = *(float *)(a2 + 12);
  if ( *((float *)a1 + 3) > v12 )
  {
    if ( v6 < 4 )
    {
      v13 = 2LL * v6;
      *(float *)(a4 + 8 * v13 + 4) = v12;
      *(_DWORD *)(a4 + 8 * v13 + 12) = a1[3];
      *(_DWORD *)(a4 + 8 * v13) = *a1;
      *(_DWORD *)(a4 + 8 * v13 + 8) = *v5;
    }
    ++v6;
  }
  return v6;
}
