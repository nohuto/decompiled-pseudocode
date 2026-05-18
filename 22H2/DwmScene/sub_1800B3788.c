/*
 * XREFs of sub_1800B3788 @ 0x1800B3788
 * Callers:
 *     sub_1800B3A70 @ 0x1800B3A70 (sub_1800B3A70.c)
 *     sub_1800B3B2C @ 0x1800B3B2C (sub_1800B3B2C.c)
 * Callees:
 *     sub_18008A608 @ 0x18008A608 (sub_18008A608.c)
 *     sub_180099F7C @ 0x180099F7C (sub_180099F7C.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     j_??2@YAPEAX_K@Z @ 0x18011EB80 (j_--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B3788(__m128 *a1, __m128 *a2)
{
  __int32 v4; // eax
  _DWORD *v5; // rbx
  unsigned int v6; // edx
  int *v7; // r9
  unsigned int v8; // r8d
  int v9; // r11d
  size_t Size; // [rsp+40h] [rbp-38h]
  _DWORD v12[6]; // [rsp+50h] [rbp-28h] BYREF
  _DWORD *v13; // [rsp+68h] [rbp-10h] BYREF

  if ( !*(_QWORD *)(a1[28].m128_u64[0] + 128) || (LOBYTE(v4) = sub_18008A608(a2, a1 + 31), (_BYTE)v4) )
  {
    v12[0] = *sub_180099F7C(a2, &v13);
    v12[1] = v12[0];
    v12[2] = v12[0];
    v12[3] = v12[0];
    v12[4] = v12[0];
    v12[5] = v12[0];
    v5 = operator new(0x6000uLL);
    v13 = v5;
    v6 = 0;
    v7 = v12;
    do
    {
      v8 = 0;
      v9 = *v7;
      do
        v5[1024 * v6 + v8++] = v9;
      while ( v8 < 0x400 );
      ++v6;
      ++v7;
    }
    while ( v6 < 6 );
    LODWORD(Size) = 24576;
    sub_18009A1D4(a1[28].m128_i64[0], 32, 32, 0, 16, 0, 17, v5, Size, 0LL);
    a1[31].m128_i32[0] = a2->m128_i32[0];
    a1[31].m128_i32[1] = a2->m128_i32[1];
    a1[31].m128_i32[2] = a2->m128_i32[2];
    v4 = a2->m128_i32[3];
    a1[31].m128_i32[3] = v4;
    if ( v5 )
      LOBYTE(v4) = j_j__o_free(v5);
  }
  a1[33].m128_i32[0] = 1065353216;
  return v4;
}
