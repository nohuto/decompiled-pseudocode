/*
 * XREFs of sub_1407C70A0 @ 0x1407C70A0
 * Callers:
 *     sub_1407C7054 @ 0x1407C7054 (sub_1407C7054.c)
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

__int64 __fastcall sub_1407C70A0(__int64 *a1)
{
  unsigned __int8 *v1; // rsi
  int v2; // edi
  __int64 v3; // r14
  int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // edi
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  __int64 result; // rax
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_140D2DAD2;
  v15 = *a1;
  v14 = qword_140D2D300;
  v2 = BYTE3(v15) | ((BYTE2(v15) | ((BYTE1(v15) | ((unsigned __int8)v15 << 8)) << 8)) << 8);
  v3 = 0LL;
  v4 = ~(HIBYTE(v15) | ((BYTE6(v15) | ((BYTE5(v15) | (BYTE4(v15) << 8)) << 8)) << 8));
  v5 = 0LL;
  v6 = 16LL;
  do
  {
    v7 = byte_140D2DB50[v3];
    if ( (unsigned __int8)v7 < 0x1Fu )
      v2 ^= funcs_1405E537D[v7](v5, *(v1 - 2), *(v1 - 1), *v1, v1[1], (__int64)&v14, v4);
    if ( byte_140D2DB50[v3 + 1] < 0x1Fu )
      v4 ^= funcs_1405E537D[byte_140D2DB50[v3 + 1]](v5 + 1, v1[2], v1[3], v1[4], v1[5], (__int64)&v14, v2);
    v5 += 2LL;
    v3 += 2LL;
    v1 += 8;
    --v6;
  }
  while ( v6 );
  BYTE3(v15) = v2;
  v8 = __ROR4__(v2, 8);
  HIBYTE(v15) = v4;
  BYTE2(v15) = v8;
  v9 = __ROR4__(v4, 8);
  v10 = __ROR4__(v8, 8);
  BYTE6(v15) = v9;
  BYTE1(v15) = v10;
  v11 = __ROR4__(v9, 8);
  BYTE5(v15) = v11;
  BYTE4(v15) = __ROR4__(v11, 8);
  LOBYTE(v15) = __ROR4__(v10, 8);
  result = v15;
  *a1 = v15;
  return result;
}
