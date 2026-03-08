/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x14035AF7C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1407E3C20 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140224C00 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD **)(qword_140C67048 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]),
           a1);
}
