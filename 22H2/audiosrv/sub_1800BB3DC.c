/*
 * XREFs of sub_1800BB3DC @ 0x1800BB3DC
 * Callers:
 *     sub_1800FF620 @ 0x1800FF620 (sub_1800FF620.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall sub_1800BB3DC(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  AcquireSRWLockExclusive(a1);
  *a2 = a1;
  return a2;
}
