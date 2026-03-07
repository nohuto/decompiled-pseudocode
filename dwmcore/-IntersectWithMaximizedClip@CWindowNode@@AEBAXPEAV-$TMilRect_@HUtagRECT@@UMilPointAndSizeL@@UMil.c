char __fastcall CWindowNode::IntersectWithMaximizedClip(__int64 a1, int *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  _DWORD *v5; // rcx
  RECT v6; // xmm0
  RECT rcSrc1; // [rsp+20h] [rbp-30h] BYREF
  RECT rcSrc2; // [rsp+30h] [rbp-20h] BYREF

  LOBYTE(v3) = AreAllMarginsZero((const struct _MARGINS *)(a1 + 856));
  if ( !(_BYTE)v3 )
  {
    v6 = *(RECT *)(v4 + 728);
    rcSrc2.left = 0;
    rcSrc2.top = 0;
    rcSrc1 = v6;
    rcSrc1.left = *v5 + _mm_cvtsi128_si32((__m128i)v6);
    rcSrc1.right = v6.right - *(_DWORD *)(v4 + 860);
    rcSrc1.top = *(_DWORD *)(v4 + 864) + v6.top;
    rcSrc1.bottom = v6.bottom - *(_DWORD *)(v4 + 868);
    rcSrc2.right = *(_DWORD *)(v4 + 768) - *(_DWORD *)(v4 + 760);
    rcSrc2.bottom = *(_DWORD *)(v4 + 772) - *(_DWORD *)(v4 + 764);
    IntersectRect(&rcSrc1, &rcSrc1, &rcSrc2);
    v3 = EqualRect(&rcSrc1, &rcSrc2);
    if ( !v3 )
      LOBYTE(v3) = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a2, &rcSrc1.left);
  }
  return v3;
}
