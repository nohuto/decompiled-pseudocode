/*
 * XREFs of sub_180047DDC @ 0x180047DDC
 * Callers:
 *     sub_180047E7C @ 0x180047E7C (sub_180047E7C.c)
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 *     sub_180119090 @ 0x180119090 (sub_180119090.c)
 * Callees:
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 */

__int64 __fastcall sub_180047DDC(_QWORD *a1, char a2, unsigned __int8 a3, __int32 a4, LPVOID *a5)
{
  __m256i v10; // [rsp+30h] [rbp-48h] BYREF
  __m256i v11; // [rsp+50h] [rbp-28h]

  sub_180022AC0(a1, (__int128 *)v10.m256i_i8, a4, 1);
  *(_OWORD *)((char *)&v11.m256i_u64[1] + 4) = *(_OWORD *)v10.m256i_i8;
  v11.m256i_i64[0] = (__int64)a1;
  v11.m256i_i32[2] = a4;
  v10 = v11;
  return sub_18001F9C0((__int64)a1, a2, a3, a4, (__int128 *)v10.m256i_i8, a5);
}
