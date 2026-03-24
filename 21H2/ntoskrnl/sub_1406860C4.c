/*
 * XREFs of sub_1406860C4 @ 0x1406860C4
 * Callers:
 *     sub_140686078 @ 0x140686078 (sub_140686078.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     sub_140684850 @ 0x140684850 (sub_140684850.c)
 *     sub_140684A20 @ 0x140684A20 (sub_140684A20.c)
 *     sub_140684AE0 @ 0x140684AE0 (sub_140684AE0.c)
 *     sub_140685890 @ 0x140685890 (sub_140685890.c)
 *     sub_140685910 @ 0x140685910 (sub_140685910.c)
 *     sub_140686270 @ 0x140686270 (sub_140686270.c)
 *     sub_1406862E0 @ 0x1406862E0 (sub_1406862E0.c)
 *     sub_1406865D0 @ 0x1406865D0 (sub_1406865D0.c)
 *     sub_140688420 @ 0x140688420 (sub_140688420.c)
 *     sub_140688490 @ 0x140688490 (sub_140688490.c)
 *     sub_14068A360 @ 0x14068A360 (sub_14068A360.c)
 *     sub_14068A410 @ 0x14068A410 (sub_14068A410.c)
 *     sub_14068A870 @ 0x14068A870 (sub_14068A870.c)
 *     sub_14068A8A0 @ 0x14068A8A0 (sub_14068A8A0.c)
 *     sub_14068A8D0 @ 0x14068A8D0 (sub_14068A8D0.c)
 *     sub_14068A900 @ 0x14068A900 (sub_14068A900.c)
 *     sub_14068ABF0 @ 0x14068ABF0 (sub_14068ABF0.c)
 *     sub_14068AD50 @ 0x14068AD50 (sub_14068AD50.c)
 *     sub_14068B090 @ 0x14068B090 (sub_14068B090.c)
 *     sub_14068BB10 @ 0x14068BB10 (sub_14068BB10.c)
 *     sub_14068FAE0 @ 0x14068FAE0 (sub_14068FAE0.c)
 *     sub_140691D90 @ 0x140691D90 (sub_140691D90.c)
 *     sub_1406928F0 @ 0x1406928F0 (sub_1406928F0.c)
 *     sub_140693360 @ 0x140693360 (sub_140693360.c)
 *     sub_1406936D0 @ 0x1406936D0 (sub_1406936D0.c)
 *     sub_140699DD0 @ 0x140699DD0 (sub_140699DD0.c)
 *     sub_14069AFA0 @ 0x14069AFA0 (sub_14069AFA0.c)
 *     sub_14069BC50 @ 0x14069BC50 (sub_14069BC50.c)
 *     sub_1406BA190 @ 0x1406BA190 (sub_1406BA190.c)
 *     sub_140963A70 @ 0x140963A70 (sub_140963A70.c)
 */

__int64 __fastcall sub_1406860C4(__int64 *a1)
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
      v7 ^= funcs_1405FE846[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
    v9 = *v1;
    if ( (unsigned __int8)v9 < 0x1Fu )
      v6 ^= funcs_1405FE846[v9](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v17, v7);
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
