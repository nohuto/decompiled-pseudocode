/*
 * XREFs of MiDereferencePageChains @ 0x1402B4CFC
 * Callers:
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402B4650 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiProcessPageGroupInfo @ 0x1402B4BE0 (MiProcessPageGroupInfo.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageChains(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 20, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
