/*
 * XREFs of SmStoreCompressionStart @ 0x1409D78D8
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A43584 (MmProcessWorkingSetControl.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x140344590 (SmpGetProcessPartition.c)
 *     SmpKeyedStoreEntryGet @ 0x1403445F4 (SmpKeyedStoreEntryGet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1406531F4 (MmQueryProcessWorkingSetSwapPages.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065D0A4 (MmStoreFlushOutstandingEvictions.c)
 *     SmSwapStore @ 0x140681864 (SmSwapStore.c)
 */

int SmStoreCompressionStart()
{
  _KPROCESS *Process; // rdi
  __int64 ProcessPartition; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  _KPROCESS *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = Process;
  ProcessPartition = SmpGetProcessPartition((__int64)Process);
  v2 = SmpKeyedStoreEntryGet(ProcessPartition + 2072, &v5, 0, 0);
  v3 = v2;
  if ( v2 || *(_DWORD *)(ProcessPartition + 2112) != -1 )
  {
    LODWORD(v2) = MmStoreFlushOutstandingEvictions(*(_QWORD **)(ProcessPartition + 1936));
    if ( v3 )
    {
      LODWORD(v2) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v6);
      if ( (int)v2 >= 0 )
        LODWORD(v2) = SmSwapStore(*(_QWORD *)(ProcessPartition + 1936), 0);
    }
  }
  return v2;
}
