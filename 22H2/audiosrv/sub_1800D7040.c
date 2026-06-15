/*
 * XREFs of sub_1800D7040 @ 0x1800D7040
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052690 @ 0x180052690 (sub_180052690.c)
 */

__int64 __fastcall sub_1800D7040(__int64 a1, __int64 a2, unsigned int a3, int a4, LPVOID *a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v5 = sub_180052690(a1, a2, a3, a4, a5, 0LL, 0LL, 0LL);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 1895, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v5);
  return v6;
}
