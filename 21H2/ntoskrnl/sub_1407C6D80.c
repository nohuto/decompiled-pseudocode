/*
 * XREFs of sub_1407C6D80 @ 0x1407C6D80
 * Callers:
 *     sub_1407C6D34 @ 0x1407C6D34 (sub_1407C6D34.c)
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

__int64 __fastcall sub_1407C6D80(__int64 *a1)
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
      v2 ^= funcs_1405FE846[v7](v5, *(v1 - 2), *(v1 - 1), *v1, v1[1], (__int64)&v14, v4);
    if ( byte_140D2DB50[v3 + 1] < 0x1Fu )
      v4 ^= funcs_1405FE846[byte_140D2DB50[v3 + 1]](v5 + 1, v1[2], v1[3], v1[4], v1[5], (__int64)&v14, v2);
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
