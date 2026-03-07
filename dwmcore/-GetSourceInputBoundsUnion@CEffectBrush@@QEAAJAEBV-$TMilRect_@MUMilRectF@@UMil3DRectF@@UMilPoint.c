__int64 __fastcall CEffectBrush::GetSourceInputBoundsUnion(__int64 a1, _OWORD *a2, __int64 a3, float *a4)
{
  unsigned int v4; // ebx
  int SourceInputBounds; // eax
  __int64 v7; // rcx
  float *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r10
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+44h] [rbp-24h]
  int v15; // [rsp+48h] [rbp-20h]

  v4 = 0;
  *(_OWORD *)a4 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( *(_QWORD *)(a1 + 112) )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v12 = 0LL;
    SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, (__int64)&v12);
    v4 = SourceInputBounds;
    if ( SourceInputBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, SourceInputBounds, 0x29Cu, 0LL);
    }
    else if ( v15 )
    {
      v8 = (float *)v12;
      do
      {
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a4, v8);
        v8 = (float *)(v9 + 16);
      }
      while ( v10 != 1 );
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v12);
  }
  return v4;
}
