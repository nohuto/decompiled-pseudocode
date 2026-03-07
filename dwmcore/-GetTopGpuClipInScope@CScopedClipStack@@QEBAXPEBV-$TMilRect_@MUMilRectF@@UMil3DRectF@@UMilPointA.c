char __fastcall CScopedClipStack::GetTopGpuClipInScope(CScopedClipStack *a1, __int64 a2, char a3)
{
  char result; // al
  __int64 v5; // rcx
  _OWORD *v6; // r9
  CScopedClipStack *v7; // r10
  __int128 *v8; // r11
  __int64 v9; // r10
  float *v10; // r9
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  __int128 v19; // xmm0
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF

  result = CScopedClipStack::HasGpuClipsInScope(a1);
  if ( result )
  {
    result = CBaseClipStack::Top(v5 + 2288, v6);
  }
  else
  {
    if ( v8 )
      v19 = *v8;
    else
      v19 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *v6 = v19;
  }
  if ( a3 )
  {
    result = CScopedClipStack::HasClipBoundsInScope(v7);
    if ( result )
    {
      v20 = 0LL;
      result = CBaseClipStack::Top(v9 + 2320, &v20);
      v11 = *v10;
      v12 = *(float *)&v20;
      if ( *(float *)&v20 > *v10 )
      {
        *(_DWORD *)v10 = v20;
        v11 = v12;
      }
      v13 = v10[1];
      v14 = *((float *)&v20 + 1);
      if ( *((float *)&v20 + 1) > v13 )
      {
        v10[1] = *((float *)&v20 + 1);
        v13 = v14;
      }
      v15 = v10[2];
      v16 = *((float *)&v20 + 2);
      if ( v15 > *((float *)&v20 + 2) )
      {
        v10[2] = *((float *)&v20 + 2);
        v15 = v16;
      }
      v17 = v10[3];
      v18 = *((float *)&v20 + 3);
      if ( v17 > *((float *)&v20 + 3) )
      {
        v10[3] = *((float *)&v20 + 3);
        v17 = v18;
      }
      if ( v15 <= v11 || v17 <= v13 )
      {
        v10[3] = 0.0;
        v10[2] = 0.0;
        v10[1] = 0.0;
        *v10 = 0.0;
      }
    }
  }
  return result;
}
