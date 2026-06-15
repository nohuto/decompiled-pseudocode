/*
 * XREFs of sub_180052650 @ 0x180052650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052690 @ 0x180052690 (sub_180052690.c)
 */

__int64 __fastcall sub_180052650(int a1, int a2, int a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = sub_180052690(a1, a2, 0, a3, a4, 0LL, 0LL, 0LL);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 1876, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v4);
  return v5;
}
