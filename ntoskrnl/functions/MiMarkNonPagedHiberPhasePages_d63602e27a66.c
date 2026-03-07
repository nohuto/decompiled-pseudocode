__int64 __fastcall MiMarkNonPagedHiberPhasePages(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __m128i v4; // rdi
  __m128i v6[11]; // [rsp+20h] [rbp-D8h] BYREF

  v4.m128i_i64[1] = a2;
  v4.m128i_i64[0] = a1;
  memset(v6, 0, sizeof(v6));
  v6[0].m128i_i32[0] = a3 | 0x901;
  v6[9].m128i_i64[1] = (__int64)MiMarkNonPagedHiberPhasePte;
  v6[1].m128i_i64[1] = (__int64)MiGetAnyMultiplexedVm(3);
  v6[0].m128i_i8[7] = 17;
  v6[2] = v4;
  return MiWalkPageTables(v6);
}
