/*
 * XREFs of MiEmptyWorkingSet @ 0x14061C0F8
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A43584 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x14036D5A4 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
