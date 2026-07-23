/*
 * XREFs of sub_1405E5224 @ 0x1405E5224
 * Callers:
 *     sub_1405E51D8 @ 0x1405E51D8 (sub_1405E51D8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     sub_1405DE690 @ 0x1405DE690 (sub_1405DE690.c)
 *     sub_1405E2CD0 @ 0x1405E2CD0 (sub_1405E2CD0.c)
 *     sub_1405E2D90 @ 0x1405E2D90 (sub_1405E2D90.c)
 *     sub_1405E3C10 @ 0x1405E3C10 (sub_1405E3C10.c)
 *     sub_1405E3C90 @ 0x1405E3C90 (sub_1405E3C90.c)
 *     sub_1405E53D0 @ 0x1405E53D0 (sub_1405E53D0.c)
 *     sub_1405E5440 @ 0x1405E5440 (sub_1405E5440.c)
 *     sub_1405E5730 @ 0x1405E5730 (sub_1405E5730.c)
 *     sub_1405E7580 @ 0x1405E7580 (sub_1405E7580.c)
 *     sub_1405E75F0 @ 0x1405E75F0 (sub_1405E75F0.c)
 *     sub_1405E97F0 @ 0x1405E97F0 (sub_1405E97F0.c)
 *     sub_1405E98A0 @ 0x1405E98A0 (sub_1405E98A0.c)
 *     sub_1405E9D00 @ 0x1405E9D00 (sub_1405E9D00.c)
 *     sub_1405E9D30 @ 0x1405E9D30 (sub_1405E9D30.c)
 *     sub_1405E9D60 @ 0x1405E9D60 (sub_1405E9D60.c)
 *     sub_1405E9D90 @ 0x1405E9D90 (sub_1405E9D90.c)
 *     sub_1405EA080 @ 0x1405EA080 (sub_1405EA080.c)
 *     sub_1405EA1E0 @ 0x1405EA1E0 (sub_1405EA1E0.c)
 *     sub_1405EAF00 @ 0x1405EAF00 (sub_1405EAF00.c)
 *     sub_1405EB980 @ 0x1405EB980 (sub_1405EB980.c)
 *     sub_1405EF950 @ 0x1405EF950 (sub_1405EF950.c)
 *     sub_1405F1C00 @ 0x1405F1C00 (sub_1405F1C00.c)
 *     sub_1405F1E80 @ 0x1405F1E80 (sub_1405F1E80.c)
 *     sub_1405F28C0 @ 0x1405F28C0 (sub_1405F28C0.c)
 *     sub_1405F2C30 @ 0x1405F2C30 (sub_1405F2C30.c)
 *     sub_1405F8F90 @ 0x1405F8F90 (sub_1405F8F90.c)
 *     sub_1405FA160 @ 0x1405FA160 (sub_1405FA160.c)
 *     sub_1405FAE10 @ 0x1405FAE10 (sub_1405FAE10.c)
 *     sub_140619300 @ 0x140619300 (sub_140619300.c)
 *     sub_140963C50 @ 0x140963C50 (sub_140963C50.c)
 */

__int64 __fastcall sub_1405E5224(__int64 *a1)
{
  unsigned __int8 *v1; // r14
  unsigned __int8 *v2; // rsi
  int v3; // edi
  __int64 v4; // r15
  __int64 v5; // r12
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  int v14; // ebx
  __int64 result; // rax
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_140D2DB6E;
  v2 = (unsigned __int8 *)&unk_140D2DB4E;
  v3 = (unsigned __int8)*a1;
  v18 = *a1;
  v4 = 30LL;
  v5 = 16LL;
  v6 = BYTE3(v18) | ((BYTE2(v18) | ((BYTE1(v18) | (v3 << 8)) << 8)) << 8);
  v17 = qword_140D2D300;
  v7 = HIBYTE(v18) | ((BYTE6(v18) | ((BYTE5(v18) | (BYTE4(v18) << 8)) << 8)) << 8);
  do
  {
    v8 = v1[1];
    if ( (unsigned __int8)v8 < 0x1Fu )
      v7 ^= funcs_1405E537D[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
    v9 = *v1;
    if ( (unsigned __int8)v9 < 0x1Fu )
      v6 ^= funcs_1405E537D[v9](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v17, v7);
    v4 -= 2LL;
    v1 -= 2;
    v2 -= 8;
    --v5;
  }
  while ( v5 );
  v10 = ~v7;
  BYTE3(v18) = v6;
  v11 = __ROR4__(v6, 8);
  HIBYTE(v18) = v10;
  v12 = __ROR4__(v10, 8);
  BYTE2(v18) = v11;
  v13 = __ROR4__(v11, 8);
  BYTE6(v18) = v12;
  v14 = __ROR4__(v12, 8);
  BYTE1(v18) = v13;
  BYTE5(v18) = v14;
  BYTE4(v18) = __ROR4__(v14, 8);
  LOBYTE(v18) = __ROR4__(v13, 8);
  result = v18;
  *a1 = v18;
  return result;
}
