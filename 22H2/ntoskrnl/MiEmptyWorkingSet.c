/*
 * XREFs of MiEmptyWorkingSet @ 0x14053040C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140689770 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x140317DA0 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
