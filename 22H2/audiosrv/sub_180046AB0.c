/*
 * XREFs of sub_180046AB0 @ 0x180046AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033330 @ 0x180033330 (sub_180033330.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_180046AB0(__int64 a1, char a2, char a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *(_BYTE *)(a1 + 456) = a2;
  if ( !a3 )
    return 0LL;
  v4 = sub_180033330(a1, 0, 0LL);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_18004BD84(retaddr, 1723LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v4);
  return v5;
}
