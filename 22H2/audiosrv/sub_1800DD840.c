/*
 * XREFs of sub_1800DD840 @ 0x1800DD840
 * Callers:
 *     sub_1800DBBD0 @ 0x1800DBBD0 (sub_1800DBBD0.c)
 *     sub_1800DBDC0 @ 0x1800DBDC0 (sub_1800DBDC0.c)
 *     sub_1800DCD20 @ 0x1800DCD20 (sub_1800DCD20.c)
 *     sub_1800DD100 @ 0x1800DD100 (sub_1800DD100.c)
 *     sub_1800DD270 @ 0x1800DD270 (sub_1800DD270.c)
 *     sub_1800DD3E0 @ 0x1800DD3E0 (sub_1800DD3E0.c)
 *     sub_1800DD510 @ 0x1800DD510 (sub_1800DD510.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_1800DD840(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(v2 + 432) )
    return 2289827960LL;
  if ( a2 == *(_QWORD *)(v2 + 56) )
    return 0LL;
  sub_18004BD84((int)retaddr, 4863, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", -2147024809);
  return 2147942487LL;
}
