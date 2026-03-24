/*
 * XREFs of PnpEnableWatchdog @ 0x1406F0344
 * Callers:
 *     PnpDeviceEventWorker @ 0x140634FF0 (PnpDeviceEventWorker.c)
 *     PnpCallAddDevice @ 0x14073ADCC (PnpCallAddDevice.c)
 *     PnpDeviceCompletionRequestCreate @ 0x14074344C (PnpDeviceCompletionRequestCreate.c)
 *     PnpDelayedRemoveWorker @ 0x14074CB70 (PnpDelayedRemoveWorker.c)
 *     PnpCallDriverEntry @ 0x140770084 (PnpCallDriverEntry.c)
 * Callees:
 *     WdtpArmTimer @ 0x1403488F0 (WdtpArmTimer.c)
 *     PnpAllocateWatchdog @ 0x140349334 (PnpAllocateWatchdog.c)
 */

_QWORD *__fastcall PnpEnableWatchdog(int a1, __int64 a2)
{
  _QWORD *Watchdog; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  Watchdog = PnpAllocateWatchdog();
  v5 = Watchdog;
  if ( Watchdog )
  {
    Watchdog[3] = a2;
    *((_DWORD *)Watchdog + 4) = a1;
    v6 = Watchdog[1];
    *Watchdog = MEMORY[0xFFFFF78000000008];
    WdtpArmTimer(v6);
  }
  return v5;
}
