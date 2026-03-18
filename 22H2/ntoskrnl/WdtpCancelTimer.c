/*
 * XREFs of WdtpCancelTimer @ 0x140785BDC
 * Callers:
 *     PnpDisableWatchdog @ 0x140782B7C (PnpDisableWatchdog.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x140785A5C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpWatchdogTimerPause @ 0x140785B50 (PnpWatchdogTimerPause.c)
 *     PnpCallAddDevice @ 0x140792B3C (PnpCallAddDevice.c)
 *     PnpCallDriverEntry @ 0x1407E2148 (PnpCallDriverEntry.c)
 *     PnpDelayedRemoveWorker @ 0x140881B60 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     ExDeleteTimer @ 0x14031D8D0 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x14031DCA0 (ExCancelTimer.c)
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
