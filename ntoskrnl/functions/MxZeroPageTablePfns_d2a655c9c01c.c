__int64 MxZeroPageTablePfns()
{
  __m128i v1[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v1, 0, sizeof(v1));
  v1[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
  v1[9].m128i_i64[1] = (__int64)MxInitializePageTablePfns;
  v1[0].m128i_i32[0] = 67584;
  MxInitializePageTablePfns(v1, 0xFFFFF6FB7DBEDF68uLL, 3LL);
  return MiWalkPageTables(v1);
}
