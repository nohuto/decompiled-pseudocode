/*
 * XREFs of sub_18011B97C @ 0x18011B97C
 * Callers:
 *     sub_180118D90 @ 0x180118D90 (sub_180118D90.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_18011B97C(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 = 0LL;
  *a2 = *(_QWORD *)a3;
  **(_QWORD **)(a3 + 8) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *(_QWORD *)(a3 + 8);
  sub_18011CB50(a3 + 48);
  unknown_libname_101((__int64 *)(a3 + 16));
  j_j__o_free(a3);
  --*(_QWORD *)(a1 + 8);
  return a2;
}
