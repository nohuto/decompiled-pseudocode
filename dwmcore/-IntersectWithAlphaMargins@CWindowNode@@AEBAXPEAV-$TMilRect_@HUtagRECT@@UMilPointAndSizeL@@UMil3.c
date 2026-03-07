__int64 __fastcall CWindowNode::IntersectWithAlphaMargins(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  int v4; // r9d
  int v5; // r11d
  int v6; // ecx
  int v7; // eax
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(__m128i *)(a1 + 744);
  v9 = v2;
  v4 = v2.m128i_i32[2] - *(_DWORD *)(a1 + 840);
  v5 = *(_DWORD *)(a1 + 836) + _mm_cvtsi128_si32(v2);
  v6 = v2.m128i_i32[1] + *(_DWORD *)(a1 + 844);
  v9.m128i_i64[0] = __PAIR64__(v6, v5);
  v7 = v2.m128i_i32[3] - *(_DWORD *)(a1 + 848);
  if ( v4 <= v5 )
    v4 = v5;
  v9.m128i_i32[2] = v4;
  if ( v7 <= v6 )
    v7 = v6;
  v9.m128i_i32[3] = v7;
  return TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a2, &v9);
}
