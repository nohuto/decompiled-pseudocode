bool __fastcall CAnimationInterpolator::EnsureHandoffCachedData(CAnimationInterpolator *this, float a2, __int64 a3)
{
  bool InterpolatedValue; // di
  float v6; // xmm2_4
  float v7; // xmm3_4
  char v8; // al
  float v9; // xmm6_4
  float v11; // xmm2_4
  float v12; // [rsp+40h] [rbp+8h] BYREF

  InterpolatedValue = 1;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    v12 = 0.0;
    InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, 0LL, &v12, 0LL);
    if ( InterpolatedValue )
    {
      InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, a3, (float *)this + 4, 0LL);
      if ( InterpolatedValue )
      {
        v6 = *((float *)this + 4);
        v7 = v6 - v12;
        v8 = *((_BYTE *)this + 24);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - v12) & _xmm) >= 0.0000011920929 )
        {
          *((_BYTE *)this + 24) = v8 | 1;
          v11 = (float)(v6 - a2) / v7;
          *((float *)this + 5) = v11;
          if ( !_finite(v11) )
            return 0;
        }
        else
        {
          *((_BYTE *)this + 24) = v8 & 0xFE;
        }
        v9 = a2 - v12;
        *((_BYTE *)this + 24) |= 2u;
        *((float *)this + 3) = v9;
      }
    }
  }
  return InterpolatedValue;
}
