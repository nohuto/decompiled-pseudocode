/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x1402F59FC
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14074E1B0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14025B9B0 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD **)(qword_140C674C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]),
           a1);
}
