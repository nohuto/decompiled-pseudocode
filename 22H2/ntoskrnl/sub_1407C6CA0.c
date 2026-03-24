/*
 * XREFs of sub_1407C6CA0 @ 0x1407C6CA0
 * Callers:
 *     sub_1407C6C54 @ 0x1407C6C54 (sub_1407C6C54.c)
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

__int64 __fastcall sub_1407C6CA0(__int64 *a1)
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
