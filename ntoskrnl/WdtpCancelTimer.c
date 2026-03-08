/*
 * XREFs of WdtpCancelTimer @ 0x14068AA80
 * Callers:
 *     PnpDisableWatchdog @ 0x140688BC4 (PnpDisableWatchdog.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14068A900 (PnpDisableAndFreeEventWatchdog.c)
 *     PnpWatchdogTimerPause @ 0x14068A9F4 (PnpWatchdogTimerPause.c)
 *     PnpCallDriverEntry @ 0x14072A87C (PnpCallDriverEntry.c)
 *     PnpCallAddDevice @ 0x14078CA58 (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x14087CDB0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     ExDeleteTimer @ 0x140203F60 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x140204330 (ExCancelTimer.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall WdtpCancelTimer(__int64 a1, char a2)
{
  ULONG_PTR v3; // rcx
  NTSTATUS result; // eax

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 )
  {
    ExDeleteTimer(v3, 1, 1, 0LL);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  else
  {
    ExCancelTimer(v3, 0LL);
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  result = *(_DWORD *)(a1 + 88);
  if ( result > 0 )
    return KeWaitForSingleObject((PVOID)(a1 + 96), Executive, 0, 0, 0LL);
  return result;
}
