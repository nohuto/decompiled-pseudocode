/*
 * XREFs of WheaDeferredRecoveryService @ 0x140645AB0
 * Callers:
 *     HalpInterruptDeferredRecoveryService @ 0x14051F590 (HalpInterruptDeferredRecoveryService.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 */

__int64 WheaDeferredRecoveryService()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&WheaPendingDrsInterrupt, 0);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&WheaDrsDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
