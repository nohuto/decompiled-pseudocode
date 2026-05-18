/*
 * XREFs of sub_1800CC2A8 @ 0x1800CC2A8
 * Callers:
 *     sub_1800CC680 @ 0x1800CC680 (sub_1800CC680.c)
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 * Callees:
 *     sub_1800AE260 @ 0x1800AE260 (sub_1800AE260.c)
 *     sub_1800CC1BC @ 0x1800CC1BC (sub_1800CC1BC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CC2A8(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    v5 = (v4 - *a2) / 48;
    v6 = sub_1800AE260((__int64)a1, v5);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = &v6[6 * v5];
    a1[1] = sub_1800CC1BC(*a2, a2[1], (__int64)v6);
  }
  return a1;
}
