/*
 * XREFs of MiHotRemovePartitionPageRun @ 0x1408DB59C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1405607E0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiRemovePhysicalMemory @ 0x1408C5FDC (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiHotRemovePartitionPageRun(__int64 a1, ULONG_PTR a2)
{
  __int64 result; // rax

  result = MiRemovePhysicalMemory(a1, a2, 0x10u);
  if ( (int)result >= 0 )
    _InterlockedExchangeAdd64(&qword_140C4EFB8, -(__int64)a2);
  return result;
}
