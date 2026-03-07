__int64 anonymous_namespace_::UpdateKeyStateFlag()
{
  __int64 result; // rax
  _QWORD *i; // rcx
  __m128i si128; // xmm0

  result = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
    {
      result = *(i - 39);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *(_DWORD *)(result + 396) |= 1u;
      *(__m128i *)(result + 204) = si128;
      *(__m128i *)(result + 220) = si128;
    }
  }
  return result;
}
