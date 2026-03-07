__int64 __fastcall CBaseClipStack::Push(CBaseClipStack *this, const struct MilRectF *a2)
{
  float *v2; // r9
  __int64 v3; // r10
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF

  v16 = 0LL;
  CBaseClipStack::Top(this, &v16);
  v4 = *v2;
  v5 = *(float *)&v16;
  v6 = v2[1];
  v7 = v2[2];
  v8 = v2[3];
  if ( *v2 > *(float *)&v16 )
  {
    *(float *)&v16 = *v2;
    v5 = v4;
  }
  v9 = *((float *)&v16 + 1);
  if ( v6 > *((float *)&v16 + 1) )
  {
    *((float *)&v16 + 1) = v6;
    v9 = v6;
  }
  v10 = *((float *)&v16 + 2);
  if ( *((float *)&v16 + 2) > v7 )
  {
    *((float *)&v16 + 2) = v7;
    v10 = v7;
  }
  v11 = *((float *)&v16 + 3);
  if ( *((float *)&v16 + 3) > v8 )
  {
    *((float *)&v16 + 3) = v8;
    v11 = v8;
  }
  if ( v10 <= v5 || v11 <= v9 )
    v16 = 0uLL;
  v12 = CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
          v3,
          &v16);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x31u, 0LL);
  return v14;
}
