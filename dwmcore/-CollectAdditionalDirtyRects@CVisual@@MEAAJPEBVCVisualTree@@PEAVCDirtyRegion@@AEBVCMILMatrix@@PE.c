__int64 __fastcall CVisual::CollectAdditionalDirtyRects(
        CVisual *this,
        __int64 a2,
        __int64 a3,
        CMILMatrix *a4,
        float *a5)
{
  unsigned int v8; // esi
  struct CMergedDirtyRect *AdditionalDirtyRects; // rax
  struct CMergedDirtyRect *v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // ecx
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float v23; // xmm1_4
  unsigned int v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  __int128 v26; // [rsp+40h] [rbp-30h] BYREF
  __int128 v27; // [rsp+50h] [rbp-20h] BYREF

  v8 = 0;
  AdditionalDirtyRects = CVisual::GetAdditionalDirtyRects(this);
  v10 = AdditionalDirtyRects;
  if ( AdditionalDirtyRects )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CMergedDirtyRect *))(*(_QWORD *)AdditionalDirtyRects + 32LL))(AdditionalDirtyRects) )
    {
      (*(void (__fastcall **)(struct CMergedDirtyRect *, unsigned int *, __int64 *))(*(_QWORD *)v10 + 24LL))(
        v10,
        &v24,
        &v25);
      v11 = 0;
      if ( v24 )
      {
        while ( 1 )
        {
          v26 = 0LL;
          v27 = *(_OWORD *)(v25 + 16LL * v11);
          CMILMatrix::Transform2DBoundsHelper<1>(a4, (struct MilRectF *)&v27);
          if ( (unsigned __int8)CVisual::AdjustContentWorldBounds(this) )
          {
            if ( a5 )
            {
              v16 = *a5;
              v17 = *(float *)&v26;
              if ( *a5 > *(float *)&v26 )
              {
                *(float *)&v26 = *a5;
                v17 = v16;
              }
              v18 = a5[1];
              v19 = *((float *)&v26 + 1);
              if ( v18 > *((float *)&v26 + 1) )
              {
                *((float *)&v26 + 1) = a5[1];
                v19 = v18;
              }
              v20 = a5[2];
              v21 = *((float *)&v26 + 2);
              if ( *((float *)&v26 + 2) > v20 )
              {
                *((float *)&v26 + 2) = a5[2];
                v21 = v20;
              }
              v22 = a5[3];
              v23 = *((float *)&v26 + 3);
              if ( *((float *)&v26 + 3) > v22 )
              {
                *((float *)&v26 + 3) = a5[3];
                v23 = v22;
              }
              if ( v21 <= v17 || v23 <= v19 )
                v26 = 0uLL;
            }
            if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v26) )
            {
              LOBYTE(v12) = 1;
              v13 = CDirtyRegion::Add(a3, this, v12, &v26);
              v8 = v13;
              if ( v13 < 0 )
                break;
            }
          }
          if ( ++v11 >= v24 )
            return v8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xE66u, 0LL);
      }
    }
  }
  return v8;
}
