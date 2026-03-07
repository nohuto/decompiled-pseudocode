void __fastcall CMergedRectBase<4>::Add(__int64 a1, float *a2)
{
  unsigned int v4; // r15d
  unsigned int v5; // r14d
  unsigned int v6; // r10d
  _BYTE *v7; // r11
  _OWORD *v8; // rbp
  __int64 v9; // rsi
  float *v10; // rdx
  float *v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  unsigned int v15; // r10d
  float v16; // xmm4_4
  __int64 v17; // r11
  char v18; // bp
  float v19; // xmm2_4
  float *v20; // rcx
  unsigned int v21; // r10d
  float v22; // xmm0_4
  unsigned int v23; // eax
  unsigned int v24; // r8d
  _BYTE *v25; // r9
  __int64 v26; // rsi
  float *v27; // rdx
  unsigned int v28; // eax
  _BYTE *v29; // rax
  float v30[10]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return;
  v4 = -1;
  v5 = -1;
  if ( (*(_BYTE *)(a1 + 76) & 0xF) == 0 )
  {
    v15 = 0;
    *(_DWORD *)(a1 + 76) = 1;
    if ( *(_DWORD *)(a1 + 80) <= 1u )
    {
      if ( *(_DWORD *)(a1 + 80) != 1 )
        goto LABEL_4;
      v29 = (_BYTE *)(a1 + 72);
      while ( !*v29 )
      {
        ++v15;
        ++v29;
        if ( v15 >= 4 )
          goto LABEL_4;
      }
    }
    else
    {
      v16 = 0.0;
      v17 = 0LL;
      do
      {
        v18 = 0;
        v19 = v16;
        if ( *(_BYTE *)(v17 + a1 + 72) )
        {
          v22 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(16LL * (unsigned int)v17 + a1 + 8);
          if ( v22 > v16 )
            v16 = v22;
          v23 = v17;
          v24 = v17 + 1;
          if ( v22 <= v19 )
            v23 = v21;
          v15 = v23;
          if ( v24 < 4 )
          {
            v25 = (_BYTE *)(v24 + a1 + 72);
            while ( 1 )
            {
              if ( *v25 )
              {
                v26 = v24;
                if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                        v20,
                                        16LL * v24 + a1 + 8) )
                  break;
              }
              ++v24;
              ++v25;
              if ( v24 >= 4 )
                goto LABEL_29;
            }
            TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v20, v27);
            *(_BYTE *)(v26 + a1 + 72) = 0;
            v18 = 1;
            --*(_DWORD *)(a1 + 80);
          }
        }
LABEL_29:
        v28 = v17 + 1;
        v17 = 0LL;
        if ( !v18 )
          v17 = v28;
      }
      while ( (unsigned int)v17 < 4 );
    }
    if ( v15 )
      CMergedRectBase<4>::SwapExisting(a1, 0, v15);
  }
LABEL_4:
  v6 = 0;
  v7 = (_BYTE *)(a1 + 72);
  v8 = (_OWORD *)(a1 + 8);
  do
  {
    if ( *v7 )
    {
      v9 = 16LL * v6 + a1 + 8;
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v9, a2) )
        goto LABEL_12;
      if ( *(_DWORD *)(a1 + 80) == 4 )
      {
        *(_OWORD *)v30 = *v8;
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v30, v10);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v30);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v9);
        v12 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a2);
        if ( v14 > (float)(v13 - v12) )
          v4 = v6;
      }
    }
    else
    {
      v5 = v6;
    }
    ++v6;
    ++v7;
    ++v8;
  }
  while ( v6 < 4 );
  if ( v5 != -1 )
  {
    *(_OWORD *)(a1 + 16LL * v5 + 8) = *(_OWORD *)a2;
    *(_BYTE *)(v5 + a1 + 72) = 1;
    ++*(_DWORD *)(a1 + 76);
    ++*(_DWORD *)(a1 + 80);
    return;
  }
  v10 = a2;
  v11 = (float *)(16LL * v4 + a1 + 8);
LABEL_12:
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v11, v10);
  ++*(_DWORD *)(a1 + 76);
}
