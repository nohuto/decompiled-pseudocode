/*
 * XREFs of ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x1803DAAE8
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x1803DA6E0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1803CD6BC (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 */

char __fastcall KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(
        KeyboardHosting::ViewRectProvider *this,
        RECT *a2,
        struct Windows::Foundation::Rect *a3)
{
  char v3; // bl
  RECT *v4; // r8
  const __m128i *v5; // rdx
  const __m128i *v6; // r8
  __m128 v7; // xmm2
  float v8; // xmm1_4
  LONG v9; // eax
  __m128 v10; // xmm2
  float v11; // xmm1_4
  LONG v12; // edx
  LONG v13; // ecx
  RECT rcSrc1; // [rsp+20h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  rcSrc1 = *a2;
  if ( !KeyboardHosting::IsRectNull((float *)&rcSrc1.left) )
  {
    rcSrc1 = *v4;
    if ( !KeyboardHosting::IsRectNull((float *)&rcSrc1.left) )
    {
      v7 = (__m128)_mm_loadu_si128(v5);
      v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
      rcSrc1.left = (int)v7.m128_f32[0];
      rcSrc1.top = (int)v8;
      rcSrc1.right = (int)(float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] + v7.m128_f32[0]);
      v9 = (int)(float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] + v8);
      v10 = (__m128)_mm_loadu_si128(v6);
      rcSrc1.bottom = v9;
      v11 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
      rcSrc2.left = (int)v10.m128_f32[0];
      v12 = (int)(float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] + v10.m128_f32[0]);
      rcSrc2.top = (int)v11;
      v13 = (int)(float)(_mm_shuffle_ps(v10, v10, 255).m128_f32[0] + v11);
      rcSrc2.right = v12;
      rcSrc2.bottom = v13;
      if ( (int)v10.m128_f32[0] == v12 )
        rcSrc2.right = v12 + 1;
      if ( (int)v11 == v13 )
        rcSrc2.bottom = v13 + 1;
      rcDst = 0LL;
      return IntersectRect(&rcDst, &rcSrc1, &rcSrc2);
    }
  }
  return v3;
}
