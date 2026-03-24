/*
 * XREFs of PopWnfAudioCallback @ 0x140772380
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopGetDozeTimerSource @ 0x14036CEA4 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PopAcquirePowerRequestPushLock @ 0x14067B148 (PopAcquirePowerRequestPushLock.c)
 *     ExQueryWnfStateData @ 0x1406BB180 (ExQueryWnfStateData.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x140772464 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsScenarioStateChange @ 0x1407724B0 (PopStatsScenarioStateChange.c)
 *     PopAudioAccountingCallback @ 0x140772644 (PopAudioAccountingCallback.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F570C (PopUpdateSmartUserPresencePredictions.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // edi
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 8;
  v2 = ExQueryWnfStateData(a1, &v9, v10, &v8);
  if ( v2 >= 0 )
  {
    if ( v8 < 8 )
    {
      return 0;
    }
    else
    {
      PopAcquirePolicyLock(v1);
      if ( (v10[0] & 2) != 0 )
      {
        byte_140C23ECD = 1;
        qword_140C4FF58 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_140C23ECD = 0;
        PopAudioAccountingCallback(0LL);
      }
      v3 = byte_140C23ECD;
      PopAcquirePowerRequestPushLock(1);
      LOBYTE(v4) = v3;
      BYTE2(PopExecutionRequiredContext) = v3;
      PopStatsScenarioStateChange(0LL, v4);
      PopHandleExecutionRequiredEnablementUpdate();
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      PopReleasePolicyLock(v6, v5);
    }
  }
  return (unsigned int)v2;
}
