/*
 * XREFs of sub_18002E740 @ 0x18002E740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E784 @ 0x18002E784 (sub_18002E784.c)
 *     sub_18002E7C0 @ 0x18002E7C0 (sub_18002E7C0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_18002E740(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = sub_18002E7C0(a1, a2, a3, a4, a5);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_18004BD84(retaddr, 954LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v6);
    return v7;
  }
  else
  {
    sub_18002E784(a1);
    return 0LL;
  }
}
