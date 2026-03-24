/*
 * XREFs of PopStatsNotifyPowerRequestCsState @ 0x1408F66E0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570498 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x140323010 (RtlEnumerateGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PoArmStopWatchCollection @ 0x14034CF04 (PoArmStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x14034CF54 (PoUnarmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x14034CFC4 (PoIsArmedStopWatchCollection.c)
 *     __report_rangecheckfailure @ 0x1404B63BC (__report_rangecheckfailure.c)
 *     PopLogPowerRequestAction @ 0x1406F51E0 (PopLogPowerRequestAction.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F646C (PopPublishAndPurgePowerRequestStats.c)
 */

void __fastcall PopStatsNotifyPowerRequestCsState(__int64 a1, char a2)
{
  __int64 v2; // rsi
  const CHAR *v3; // rcx
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  __int128 *v6; // rcx
  __int64 *v7; // rcx
  char v8; // al
  BOOLEAN i; // dl
  volatile signed __int32 *v10; // rax
  unsigned int v11; // ebx
  _BYTE *v12; // rdi
  __int64 *v13; // rcx
  _BYTE v14[8]; // [rsp+38h] [rbp+10h] BYREF

  v2 = PopWnfCsEnterScenarioId;
  v3 = "CS Entry";
  if ( !a2 )
    v3 = "CS Exit";
  PopLogPowerRequestAction(v3, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v4 = 0;
  v5 = 0LL;
  do
  {
    v6 = &ExecutionRequiredStopWatchCollection;
    if ( v4 != 3 )
      v6 = 0LL;
    if ( v6 && PoIsArmedStopWatchCollection((__int64)v6) )
    {
      PoUnarmStopWatchCollection(v7);
      v8 = 1;
    }
    else
    {
      if ( v5 >= 4 )
        _report_rangecheckfailure();
      v8 = 0;
    }
    v14[v5] = v8;
    ++v4;
    ++v5;
  }
  while ( v4 <= 3 );
  for ( i = 1; ; i = 0 )
  {
    v10 = (volatile signed __int32 *)RtlEnumerateGenericTableAvl(&PowerRequestStatsDatabase, i);
    if ( !v10 )
      break;
    PopPublishAndPurgePowerRequestStats(v10, v2);
  }
  v11 = 0;
  v12 = v14;
  do
  {
    if ( *v12 )
    {
      v13 = (__int64 *)&ExecutionRequiredStopWatchCollection;
      if ( v11 != 3 )
        v13 = 0LL;
      PoArmStopWatchCollection(v13);
    }
    ++v11;
    ++v12;
  }
  while ( v11 <= 3 );
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
