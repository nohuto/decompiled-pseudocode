/*
 * XREFs of PopWnfAudioCallback @ 0x140852480
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopGetDozeTimerSource @ 0x1403A5B00 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
 *     ExQueryWnfStateData @ 0x140793060 (ExQueryWnfStateData.c)
 *     PopAudioAccountingCallback @ 0x140852568 (PopAudioAccountingCallback.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408525A4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1408525EC (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140998F8C (PopUpdateSmartUserPresencePredictions.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // edi
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-18h] BYREF

  v9 = 8;
  v2 = ExQueryWnfStateData(a1, &v10, v11, &v9);
  if ( v2 >= 0 )
  {
    if ( v9 < 8 )
    {
      return 0;
    }
    else
    {
      PopAcquirePolicyLock(v1);
      if ( (v11[0] & 2) != 0 )
      {
        byte_140C3D4CD = 1;
        qword_140CF78D8 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_140C3D4CD = 0;
        PopAudioAccountingCallback(0LL);
      }
      v3 = byte_140C3D4CD;
      PopAcquirePowerRequestPushLock(1);
      if ( byte_140C3F252 != v3 )
      {
        LOBYTE(v4) = v3;
        byte_140C3F252 = v3;
        PopPowerRequestStatsNotifyScenarioStateChange(0LL, v4);
      }
      PopPowerRequestHandleExecutionEnablementUpdate();
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      PopReleasePolicyLock(v6, v5, v7);
    }
  }
  return (unsigned int)v2;
}
