/*
 * XREFs of sub_1800D8100 @ 0x1800D8100
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800D8040 @ 0x1800D8040 (sub_1800D8040.c)
 */

__int64 __fastcall sub_1800D8100(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int16 *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = sub_1800D8040(a1, a2, a4, a3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 1996, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v4);
  return v5;
}
