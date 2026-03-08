/*
 * XREFs of PnpWatchdogTimerPause @ 0x14068A9F4
 * Callers:
 *     PnpDisableWatchdog @ 0x140688BC4 (PnpDisableWatchdog.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14068A900 (PnpDisableAndFreeEventWatchdog.c)
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 *     PnpCallDriverEntry @ 0x14072A87C (PnpCallDriverEntry.c)
 *     PnpCallAddDevice @ 0x14078CA58 (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x14087CDB0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     WdtpCancelTimer @ 0x14068AA80 (WdtpCancelTimer.c)
 */

__int64 __fastcall PnpWatchdogTimerPause(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // rcx
  int v6; // ecx

  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 )
  {
    if ( !*(_BYTE *)(a1 + 140) )
    {
      v3 = *(unsigned int *)(a1 + 128);
      *(_QWORD *)&v4 = WdtpCancelTimer(a1, 0LL);
      if ( *(int *)(a1 + 136) < 2 )
      {
        v5 = MEMORY[0xFFFFF78000000008] - v1;
        *(_BYTE *)(a1 + 140) = 1;
        v4 = v5 * (unsigned __int128)0x346DC5D63886594BuLL;
        v6 = v3;
        *((_QWORD *)&v4 + 1) >>= 11;
        if ( v3 >= *((_QWORD *)&v4 + 1) )
          v6 = DWORD2(v4);
        *(_DWORD *)(a1 + 132) = v3 - v6;
      }
    }
  }
  return v4;
}
