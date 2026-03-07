__int64 __fastcall CD2DClipStack::Push(CD2DClipStack *this, const struct MilRectF *a2, enum D2D1_ANTIALIAS_MODE a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( a3 == D2D1_ANTIALIAS_MODE_ALIASED )
    RoundWithHalvesDown(a2, &v5);
  else
    v5 = *(_OWORD *)a2;
  return CBaseClipStack::Push(this, (const struct MilRectF *)&v5);
}
