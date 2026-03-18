/*
 * XREFs of PnpWatchdogTimerPause @ 0x140785B50
 * Callers:
 *     PnpDisableWatchdog @ 0x140782B7C (PnpDisableWatchdog.c)
 *     PiUEventNotifyUserMode @ 0x140783EFC (PiUEventNotifyUserMode.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x140785A5C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCallAddDevice @ 0x140792B3C (PnpCallAddDevice.c)
 *     PnpCallDriverEntry @ 0x1407E2148 (PnpCallDriverEntry.c)
 *     PnpDelayedRemoveWorker @ 0x140881B60 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     WdtpCancelTimer @ 0x140785BDC (WdtpCancelTimer.c)
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
