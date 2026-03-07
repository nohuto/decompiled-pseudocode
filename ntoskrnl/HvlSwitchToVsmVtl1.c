__int64 __fastcall HvlSwitchToVsmVtl1(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __m128i v4; // xmm10
  __m128i v5; // xmm11
  __m128i v6; // xmm12
  __m128i v7; // xmm13
  __m128i v8; // xmm14
  __m128i v9; // xmm15
  __int64 result; // rax
  __int64 v11; // [rsp+8h] [rbp-130h]

  v3 = *a2;
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 5));
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 7));
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 9));
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 11));
  result = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64))&HvlpVsmVtlCallVa)(
             a1,
             a2,
             KeGetCurrentIrql(),
             a3);
  *(_QWORD *)v11 = v3;
  *(__m128i *)(v11 + 8) = v4;
  *(__m128i *)(v11 + 24) = v5;
  *(__m128i *)(v11 + 40) = v6;
  *(__m128i *)(v11 + 56) = v7;
  *(__m128i *)(v11 + 72) = v8;
  *(__m128i *)(v11 + 88) = v9;
  return result;
}
