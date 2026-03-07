__m128i *__fastcall CVisual::GetTouchTargetBounds(__int64 a1, __m128i *a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx

  v2 = *(_QWORD *)(a1 + 224);
  if ( (*(_DWORD *)(v2 + 4) & 0x100000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0xC000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *a2 = _mm_loadu_si128((const __m128i *)(i + 4));
  }
  else
  {
    *a2 = (__m128i)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  return a2;
}
