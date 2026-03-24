/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x1406F4A40
 * Callers:
 *     PopPowerRequestCleanUp @ 0x14034B808 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406F2B04 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1407D4148 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PsReleaseProcessWakeCounter @ 0x1405DE9D0 (PsReleaseProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestActive @ 0x1406F6098 (PopStatsMarkPowerRequestActive.c)
 *     PopStatsMarkPowerRequestInactive @ 0x1406F7330 (PopStatsMarkPowerRequestInactive.c)
 */

char __fastcall PopUpdatePowerRequestProcessWakeCounter(__int64 a1, char a2)
{
  char result; // al
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = *(_BYTE *)(a1 + 112);
  if ( a2 )
  {
    if ( !result )
    {
      if ( qword_140C54450 )
      {
        PopStatsMarkPowerRequestActive();
        LOBYTE(v4) = 1;
        result = ((__int64 (__fastcall *)(__int64))qword_140C54450)(v4);
        *(_BYTE *)(a1 + 112) = 1;
      }
    }
  }
  else
  {
    if ( result )
    {
      ((void (__fastcall *)(_QWORD))qword_140C54450)(0LL);
      *(_BYTE *)(a1 + 112) = 0;
      result = PopStatsMarkPowerRequestInactive(a1);
    }
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
    {
      result = PsReleaseProcessWakeCounter(v5);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
  }
  return result;
}
