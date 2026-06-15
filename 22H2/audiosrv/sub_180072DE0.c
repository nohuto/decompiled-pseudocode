/*
 * XREFs of sub_180072DE0 @ 0x180072DE0
 * Callers:
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 *     sub_180074150 @ 0x180074150 (sub_180074150.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180072DE0(_QWORD *a1, _QWORD *a2)
{
  *a1 = off_18014B2E0;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  return a1;
}
