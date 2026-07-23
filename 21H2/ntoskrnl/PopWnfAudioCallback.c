/*
 * XREFs of PopWnfAudioCallback @ 0x140772540
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopGetDozeTimerSource @ 0x14036D054 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x14061A450 (ExQueryWnfStateData.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x140772624 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsScenarioStateChange @ 0x140772670 (PopStatsScenarioStateChange.c)
 *     PopAudioAccountingCallback @ 0x140772804 (PopAudioAccountingCallback.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F586C (PopUpdateSmartUserPresencePredictions.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
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
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 8;
  v2 = ExQueryWnfStateData(a1, (__int64)&v9, (__int64)v10, &v8);
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
        byte_140C2336D = 1;
        qword_140C4FF98 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_140C2336D = 0;
        PopAudioAccountingCallback(0LL);
      }
      v3 = byte_140C2336D;
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
