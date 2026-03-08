/*
 * XREFs of PnpEnableWatchdog @ 0x14068A5EC
 * Callers:
 *     PnpDeviceCompletionRequestCreate @ 0x140688CA4 (PnpDeviceCompletionRequestCreate.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x140689D10 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpCallDriverEntry @ 0x14072A87C (PnpCallDriverEntry.c)
 *     PnpCallAddDevice @ 0x14078CA58 (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x14087CDB0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     PnpAllocateWatchdog @ 0x140203B14 (PnpAllocateWatchdog.c)
 *     PnpWatchdogTimerStart @ 0x14068A9C4 (PnpWatchdogTimerStart.c)
 */

__int64 __fastcall PnpEnableWatchdog(int a1, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 Watchdog; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx

  Watchdog = PnpAllocateWatchdog(a3);
  v6 = Watchdog;
  if ( Watchdog )
  {
    *(_QWORD *)(Watchdog + 24) = a2;
    *(_DWORD *)(Watchdog + 16) = a1;
    v7 = *(_QWORD *)(Watchdog + 8);
    *(_QWORD *)Watchdog = MEMORY[0xFFFFF78000000008];
    PnpWatchdogTimerStart(v7);
  }
  return v6;
}
