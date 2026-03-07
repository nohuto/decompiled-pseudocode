__int64 MiFillPfnGaps()
{
  __int64 result; // rax
  __m128i v1[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v1, 0, sizeof(v1));
  v1[0].m128i_i32[0] = 67584;
  v1[10].m128i_i64[1] = (__int64)&qword_140C693D8;
  v1[2].m128i_i64[0] = 0xFFFFDE0000000000uLL;
  v1[2].m128i_i64[1] = 48 * qword_140C65820 - 0x21FFFFFFFFD1LL;
  v1[9].m128i_i64[1] = (__int64)MiFillGapPtes;
  result = MiWalkPageTables(v1);
  LODWORD(MiFlags) = MiFlags | 0x20000000;
  return result;
}
