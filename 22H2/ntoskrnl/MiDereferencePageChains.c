/*
 * XREFs of MiDereferencePageChains @ 0x14032F48C
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402F9810 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiProcessPageGroupInfo @ 0x14032F370 (MiProcessPageGroupInfo.c)
 *     MiFindLargePageMemory @ 0x140A497D8 (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageChains(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 20, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
