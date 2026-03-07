_BOOL8 __fastcall MiInitializeForkMaps(__int64 a1, _QWORD *a2)
{
  __m128i si128; // xmm0
  ULONG_PTR v5; // rax

  memset(a2, 0, 0x48uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(__m128i *)(a2 + 1) = si128;
  a2[3] = si128.m128i_i64[0];
  *a2 = a1;
  v5 = MiMapSinglePage(0LL, 0LL, 1073741856, 2);
  a2[7] = v5;
  return v5 != 0;
}
