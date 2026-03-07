__int64 MiCountBootDriverRegions()
{
  __int64 v1; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v2[11]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  v1 = 0LL;
  v2[10].m128i_i64[1] = (__int64)&v1;
  v2[2].m128i_i64[0] = qword_140C6A238;
  v2[2].m128i_i64[1] = qword_140C6A238 + 0x7FFFFFFFFFLL;
  v2[0].m128i_i32[0] = 67584;
  v2[9].m128i_i64[1] = (__int64)MiCountBootDriverRegionPtes;
  MiWalkPageTables(v2);
  return v1;
}
