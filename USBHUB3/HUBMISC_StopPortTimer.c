/*
 * XREFs of HUBMISC_StopPortTimer @ 0x1C0032620
 * Callers:
 *     HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer @ 0x1C00124D0 (HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer.c)
 *     HUBPSM20_StoppingReconnectTimerOnOvercurrentInD3Cold @ 0x1C0012760 (HUBPSM20_StoppingReconnectTimerOnOvercurrentInD3Cold.c)
 *     HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected @ 0x1C0012780 (HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_StopPortTimer(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)ExCancelTimer(*(_QWORD *)(a1 + 1312), 0LL) != 1 )
    return 3009LL;
  result = 3013LL;
  *(_BYTE *)(a1 + 1458) = 0;
  return result;
}
