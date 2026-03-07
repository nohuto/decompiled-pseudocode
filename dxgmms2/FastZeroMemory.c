__int64 __fastcall FastZeroMemory(__m128i *a1, size_t Size)
{
  size_t v2; // rdi
  __m128i *v3; // rbx
  bool v4; // si
  unsigned int v5; // edi
  __int64 result; // rax

  v2 = (unsigned int)Size;
  v3 = a1;
  v4 = (Size & 0x3F) == 0;
  if ( ((unsigned __int8)a1 & 0x3F) != 0 || !ExIsProcessorFeaturePresent(0xAu) || !v4 )
    return (__int64)memset(v3, 0, v2);
  v5 = (unsigned int)v2 >> 6;
  for ( result = 0LL; (unsigned int)result < v5; result = (unsigned int)(result + 1) )
  {
    _mm_stream_si128(v3, (__m128i)0LL);
    _mm_stream_si128(v3 + 1, (__m128i)0LL);
    _mm_stream_si128(v3 + 2, (__m128i)0LL);
    _mm_stream_si128(v3 + 3, (__m128i)0LL);
    v3 += 4;
  }
  _mm_mfence();
  return result;
}
