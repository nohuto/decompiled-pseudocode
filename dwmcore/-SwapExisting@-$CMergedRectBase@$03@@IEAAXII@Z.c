char __fastcall CMergedRectBase<4>::SwapExisting(__int64 a1, unsigned int a2, unsigned int a3)
{
  __m128i v3; // xmm1
  __int64 v4; // r10
  char v5; // r11
  char result; // al

  v3 = 0LL;
  v4 = a2 + a1;
  v5 = *(_BYTE *)(v4 + 72);
  if ( v5 )
    v3 = _mm_loadu_si128((const __m128i *)(a1 + 16LL * a2 + 8));
  result = 1;
  *(_OWORD *)(a1 + 16LL * a2 + 8) = *(_OWORD *)(a1 + 16LL * a3 + 8);
  *(_BYTE *)(v4 + 72) = 1;
  if ( v5 )
    *(__m128i *)(a1 + 16LL * a3 + 8) = v3;
  else
    result = 0;
  *(_BYTE *)(a3 + a1 + 72) = result;
  return result;
}
