/*
 * XREFs of SmStoreCompressionStart @ 0x1409D4A38
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A408A4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x14029622C (SmpGetProcessPartition.c)
 *     SmpKeyedStoreEntryGet @ 0x14035BDC0 (SmpKeyedStoreEntryGet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x140650B98 (MmQueryProcessWorkingSetSwapPages.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065AA54 (MmStoreFlushOutstandingEvictions.c)
 *     SmSwapStore @ 0x14067E484 (SmSwapStore.c)
 */

int SmStoreCompressionStart()
{
  _KPROCESS *Process; // rdi
  __int64 ProcessPartition; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  _KPROCESS *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = Process;
  ProcessPartition = SmpGetProcessPartition((__int64)Process);
  v2 = SmpKeyedStoreEntryGet(ProcessPartition + 2072, &v7, 0, 0);
  v3 = v2;
  if ( v2 || *(_DWORD *)(ProcessPartition + 2112) != -1 )
  {
    LODWORD(v2) = MmStoreFlushOutstandingEvictions(*(_QWORD **)(ProcessPartition + 1936));
    if ( v3 )
    {
      LODWORD(v2) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v8, v4, v5);
      if ( (int)v2 >= 0 )
        LODWORD(v2) = SmSwapStore(*(_QWORD *)(ProcessPartition + 1936), 0);
    }
  }
  return v2;
}
