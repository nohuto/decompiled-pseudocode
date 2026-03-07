__m128i *__fastcall CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
        __int64 a1,
        _QWORD *a2,
        int **a3)
{
  int *v3; // r10
  int *i; // r9
  __int64 v5; // rcx
  __m128i *result; // rax
  __m128i v7; // xmm1

  v3 = a3[1];
  for ( i = *a3; i != v3; ++i )
  {
    v5 = a2[1];
    result = (__m128i *)(*a2 + 16LL * *i);
    v7 = _mm_loadu_si128(result);
    *result = *(__m128i *)(v5 - 16);
    *(__m128i *)(v5 - 16) = v7;
    a2[1] -= 16LL;
  }
  return result;
}
