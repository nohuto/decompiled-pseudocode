/*
 * XREFs of sub_14075B3C4 @ 0x14075B3C4
 * Callers:
 *     sub_14075B378 @ 0x14075B378 (sub_14075B378.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     sub_140758420 @ 0x140758420 (sub_140758420.c)
 *     sub_140758620 @ 0x140758620 (sub_140758620.c)
 *     sub_1407597E0 @ 0x1407597E0 (sub_1407597E0.c)
 *     sub_14075B030 @ 0x14075B030 (sub_14075B030.c)
 *     sub_14075B570 @ 0x14075B570 (sub_14075B570.c)
 *     sub_14075B6C0 @ 0x14075B6C0 (sub_14075B6C0.c)
 *     sub_14075C8B0 @ 0x14075C8B0 (sub_14075C8B0.c)
 *     sub_14075C930 @ 0x14075C930 (sub_14075C930.c)
 *     sub_14075CE60 @ 0x14075CE60 (sub_14075CE60.c)
 *     sub_14075CEE0 @ 0x14075CEE0 (sub_14075CEE0.c)
 *     sub_14075FA20 @ 0x14075FA20 (sub_14075FA20.c)
 *     sub_14075FB90 @ 0x14075FB90 (sub_14075FB90.c)
 *     sub_140760300 @ 0x140760300 (sub_140760300.c)
 *     sub_140760BB0 @ 0x140760BB0 (sub_140760BB0.c)
 *     sub_140760BE0 @ 0x140760BE0 (sub_140760BE0.c)
 *     sub_140760C10 @ 0x140760C10 (sub_140760C10.c)
 *     sub_140760D60 @ 0x140760D60 (sub_140760D60.c)
 *     sub_1407618D0 @ 0x1407618D0 (sub_1407618D0.c)
 *     sub_140768430 @ 0x140768430 (sub_140768430.c)
 *     sub_140768980 @ 0x140768980 (sub_140768980.c)
 *     sub_140768E50 @ 0x140768E50 (sub_140768E50.c)
 *     sub_14076AFA0 @ 0x14076AFA0 (sub_14076AFA0.c)
 *     sub_14076B790 @ 0x14076B790 (sub_14076B790.c)
 *     sub_14076BB20 @ 0x14076BB20 (sub_14076BB20.c)
 *     sub_14076C1A0 @ 0x14076C1A0 (sub_14076C1A0.c)
 *     sub_14076C240 @ 0x14076C240 (sub_14076C240.c)
 *     sub_14076FD70 @ 0x14076FD70 (sub_14076FD70.c)
 *     sub_140771CA0 @ 0x140771CA0 (sub_140771CA0.c)
 *     sub_1407769D0 @ 0x1407769D0 (sub_1407769D0.c)
 *     sub_1407778A0 @ 0x1407778A0 (sub_1407778A0.c)
 */

__int64 __fastcall sub_14075B3C4(__int64 *a1)
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

  v1 = (unsigned __int8 *)&unk_140D53DAE;
  v2 = (unsigned __int8 *)&unk_140D53D8E;
  v3 = (unsigned __int8)*a1;
  v18 = *a1;
  v4 = 30LL;
  v5 = 16LL;
  v6 = BYTE3(v18) | ((BYTE2(v18) | ((BYTE1(v18) | (v3 << 8)) << 8)) << 8);
  v17 = qword_140D532E0;
  v7 = HIBYTE(v18) | ((BYTE6(v18) | ((BYTE5(v18) | (BYTE4(v18) << 8)) << 8)) << 8);
  do
  {
    v8 = v1[1];
    if ( (unsigned __int8)v8 < 0x1Fu )
      v7 ^= funcs_1406DC7FD[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
    v9 = *v1;
    if ( (unsigned __int8)v9 < 0x1Fu )
      v6 ^= funcs_1406DC7FD[v9](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v17, v7);
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
