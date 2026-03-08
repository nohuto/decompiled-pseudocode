/*
 * XREFs of MiEmptyWorkingSet @ 0x140619C4C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A408A4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x140301814 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
