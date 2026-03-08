/*
 * XREFs of PopDeepSleepWatchdogTakeAction @ 0x14099E044
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x140999490 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     PopPowerSettingPendingUpdateWatchdog @ 0x14058B6A8 (PopPowerSettingPendingUpdateWatchdog.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x14058F63C (PopDiagTraceCsDeepSleepWatchdog.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 */

char __fastcall PopDeepSleepWatchdogTakeAction(__int64 a1, char a2)
{
  unsigned __int8 updated; // si
  char result; // al
  __int64 v6; // r8

  updated = PopPowerSettingPendingUpdateWatchdog((unsigned int)(10000 * *(_DWORD *)(a1 + 8)));
  result = PopDiagTraceCsDeepSleepWatchdog(
             *(_DWORD *)(a1 + 4),
             *(_DWORD *)(a1 + 12),
             *(_DWORD *)(a1 + 8),
             *(_BYTE *)(a1 + 24) != 0,
             a2,
             updated);
  if ( !*(_BYTE *)(a1 + 24) || (a2 & 1) != 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (a2 & 8) != 0 && *(_DWORD *)(a1 + 16) <= 0x64u )
      __debugbreak();
    v6 = 4LL;
    if ( (a2 & 4) != 0 )
    {
      if ( updated )
        v6 = 5LL;
      return DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351LL, v6, a1, *(unsigned int *)(a1 + 4), 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
