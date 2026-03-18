/*
 * XREFs of PopWnfAudioCallback @ 0x1407EE7A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopGetDozeTimerSource @ 0x14036976C (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1407EDF80 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1407EE888 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAudioAccountingCallback @ 0x1407EE8D0 (PopAudioAccountingCallback.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14099D0FC (PopUpdateSmartUserPresencePredictions.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // edi
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 8;
  v2 = ExQueryWnfStateData(a1, &v8, v9, &v7);
  if ( v2 >= 0 )
  {
    if ( v7 < 8 )
    {
      return 0;
    }
    else
    {
      PopAcquirePolicyLock(v1);
      if ( (v9[0] & 2) != 0 )
      {
        byte_140C2330D = 1;
        qword_140C54198 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_140C2330D = 0;
        PopAudioAccountingCallback(0LL);
      }
      v3 = byte_140C2330D;
      PopAcquirePowerRequestPushLock(1);
      if ( byte_140C24512 != v3 )
      {
        byte_140C24512 = v3;
        PopPowerRequestStatsNotifyScenarioStateChange(0, v3);
      }
      PopPowerRequestHandleExecutionEnablementUpdate();
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      PopReleasePolicyLock(v5, v4);
    }
  }
  return (unsigned int)v2;
}
