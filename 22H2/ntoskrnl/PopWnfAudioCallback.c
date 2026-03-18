/*
 * XREFs of PopWnfAudioCallback @ 0x1408562B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopGetDozeTimerSource @ 0x1403AA660 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 *     ExQueryWnfStateData @ 0x1407E2740 (ExQueryWnfStateData.c)
 *     PopAudioAccountingCallback @ 0x140856398 (PopAudioAccountingCallback.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408563D4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14085641C (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14099C01C (PopUpdateSmartUserPresencePredictions.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
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
        byte_140C3D94D = 1;
        qword_140CF7D18 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_140C3D94D = 0;
        PopAudioAccountingCallback(0LL);
      }
      v3 = byte_140C3D94D;
      PopAcquirePowerRequestPushLock(1);
      if ( byte_140C3F692 != v3 )
      {
        LOBYTE(v4) = v3;
        byte_140C3F692 = v3;
        PopPowerRequestStatsNotifyScenarioStateChange(0LL, v4);
      }
      PopPowerRequestHandleExecutionEnablementUpdate();
      PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
      PopReleasePolicyLock(v6, v5, v7);
    }
  }
  return (unsigned int)v2;
}
