/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x14066F390
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14066D454 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1407D4398 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopStatsMarkPowerRequestActive @ 0x1406709E8 (PopStatsMarkPowerRequestActive.c)
 *     PopStatsMarkPowerRequestInactive @ 0x140670DA0 (PopStatsMarkPowerRequestInactive.c)
 *     PsReleaseProcessWakeCounter @ 0x1406CE130 (PsReleaseProcessWakeCounter.c)
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
      if ( qword_140C54490 )
      {
        PopStatsMarkPowerRequestActive();
        LOBYTE(v4) = 1;
        result = ((__int64 (__fastcall *)(__int64))qword_140C54490)(v4);
        *(_BYTE *)(a1 + 112) = 1;
      }
    }
  }
  else
  {
    if ( result )
    {
      ((void (__fastcall *)(_QWORD))qword_140C54490)(0LL);
      *(_BYTE *)(a1 + 112) = 0;
      result = PopStatsMarkPowerRequestInactive(a1);
    }
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
    {
      result = PsReleaseProcessWakeCounter(v5, a1);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
  }
  return result;
}
