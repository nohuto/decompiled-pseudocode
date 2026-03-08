/*
 * XREFs of PspDeleteCpuPartition @ 0x1409AE100
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteCpuPartition @ 0x140972338 (KeDeleteCpuPartition.c)
 */

__int64 __fastcall PspDeleteCpuPartition(unsigned __int16 *a1)
{
  return KeDeleteCpuPartition(a1);
}
