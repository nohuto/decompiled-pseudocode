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
