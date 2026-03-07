__int64 __fastcall CRadialGradientEffect::GetBounds(__int64 a1, float *a2, int a3, float *a4)
{
  float *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // r10

  v4 = a4;
  *(_OWORD *)a4 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( a3 )
  {
    do
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v4, a2);
      a2 = (float *)(v5 + 16);
    }
    while ( v6 != 1 );
  }
  return 0LL;
}
