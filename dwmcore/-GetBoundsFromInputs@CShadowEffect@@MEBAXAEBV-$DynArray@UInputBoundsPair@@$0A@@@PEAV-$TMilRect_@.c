void __fastcall CShadowEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, float *a3)
{
  __int64 v3; // r10
  __int64 v5; // r11
  float i; // xmm6_4
  int v7; // r10d
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v5 = a2;
  *(_OWORD *)a3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  for ( i = *(float *)(a1 + 176) * 3.0; (unsigned int)v3 < *(_DWORD *)(v5 + 24); v3 = (unsigned int)(v7 + 1) )
  {
    v8 = *(_OWORD *)(*(_QWORD *)v5 + 20 * v3 + 4);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v8) )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v8, i, i);
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)&v8);
  }
}
