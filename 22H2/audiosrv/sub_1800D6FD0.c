/*
 * XREFs of sub_1800D6FD0 @ 0x1800D6FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052690 @ 0x180052690 (sub_180052690.c)
 */

__int64 __fastcall sub_1800D6FD0(__int64 a1, __int64 a2, int a3, LPVOID *a4, _QWORD *a5, _DWORD *a6, _QWORD *a7)
{
  int v7; // eax
  unsigned int v8; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v7 = sub_180052690(a1, a2, 0, a3, a4, a5, a6, a7);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 1925, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v7);
  return v8;
}
