/*
 * XREFs of sub_140665D84 @ 0x140665D84
 * Callers:
 *     sub_140665D38 @ 0x140665D38 (sub_140665D38.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     sub_140663AB0 @ 0x140663AB0 (sub_140663AB0.c)
 *     sub_140663C80 @ 0x140663C80 (sub_140663C80.c)
 *     sub_140663D40 @ 0x140663D40 (sub_140663D40.c)
 *     sub_140665550 @ 0x140665550 (sub_140665550.c)
 *     sub_1406655D0 @ 0x1406655D0 (sub_1406655D0.c)
 *     sub_140665F30 @ 0x140665F30 (sub_140665F30.c)
 *     sub_140665FA0 @ 0x140665FA0 (sub_140665FA0.c)
 *     sub_140666290 @ 0x140666290 (sub_140666290.c)
 *     sub_1406680E0 @ 0x1406680E0 (sub_1406680E0.c)
 *     sub_140668150 @ 0x140668150 (sub_140668150.c)
 *     sub_14066A1E0 @ 0x14066A1E0 (sub_14066A1E0.c)
 *     sub_14066A290 @ 0x14066A290 (sub_14066A290.c)
 *     sub_14066C3F0 @ 0x14066C3F0 (sub_14066C3F0.c)
 *     sub_14066C420 @ 0x14066C420 (sub_14066C420.c)
 *     sub_14066C450 @ 0x14066C450 (sub_14066C450.c)
 *     sub_14066C480 @ 0x14066C480 (sub_14066C480.c)
 *     sub_14066F790 @ 0x14066F790 (sub_14066F790.c)
 *     sub_14066F8F0 @ 0x14066F8F0 (sub_14066F8F0.c)
 *     sub_14066FC30 @ 0x14066FC30 (sub_14066FC30.c)
 *     sub_1406706B0 @ 0x1406706B0 (sub_1406706B0.c)
 *     sub_140674680 @ 0x140674680 (sub_140674680.c)
 *     sub_1406761D0 @ 0x1406761D0 (sub_1406761D0.c)
 *     sub_140676D30 @ 0x140676D30 (sub_140676D30.c)
 *     sub_1406777A0 @ 0x1406777A0 (sub_1406777A0.c)
 *     sub_140677B10 @ 0x140677B10 (sub_140677B10.c)
 *     sub_14067E1F0 @ 0x14067E1F0 (sub_14067E1F0.c)
 *     sub_14067F3C0 @ 0x14067F3C0 (sub_14067F3C0.c)
 *     sub_140680070 @ 0x140680070 (sub_140680070.c)
 *     sub_14069D720 @ 0x14069D720 (sub_14069D720.c)
 *     sub_140963AC0 @ 0x140963AC0 (sub_140963AC0.c)
 */

__int64 __fastcall sub_140665D84(__int64 *a1)
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
