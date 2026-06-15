/*
 * XREFs of sub_180060060 @ 0x180060060
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_18000AC70 @ 0x18000AC70 (sub_18000AC70.c)
 *     sub_18004DF90 @ 0x18004DF90 (sub_18004DF90.c)
 *     sub_18005FFB8 @ 0x18005FFB8 (sub_18005FFB8.c)
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_1800DDA70 @ 0x1800DDA70 (sub_1800DDA70.c)
 *     sub_1800E3140 @ 0x1800E3140 (sub_1800E3140.c)
 *     sub_1800E5AC0 @ 0x1800E5AC0 (sub_1800E5AC0.c)
 *     sub_1800F9A68 @ 0x1800F9A68 (sub_1800F9A68.c)
 *     sub_180134A80 @ 0x180134A80 (sub_180134A80.c)
 *     sub_180134C8C @ 0x180134C8C (sub_180134C8C.c)
 *     sub_180135100 @ 0x180135100 (sub_180135100.c)
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 *     sub_180135EAC @ 0x180135EAC (sub_180135EAC.c)
 *     sub_180135FC8 @ 0x180135FC8 (sub_180135FC8.c)
 *     sub_1801374C0 @ 0x1801374C0 (sub_1801374C0.c)
 *     sub_1801375A0 @ 0x1801375A0 (sub_1801375A0.c)
 *     sub_1801376CC @ 0x1801376CC (sub_1801376CC.c)
 * Callees:
 *     sub_1800571F8 @ 0x1800571F8 (sub_1800571F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180060060(__int64 *a1, _WORD *a2)
{
  unsigned __int64 v3; // r8

  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  sub_1800571F8(a1, a2, v3);
  return a1;
}
