void __fastcall ForegroundLaunch::OnDaemonTimer(ForegroundLaunch *this)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned int *v3; // rdi
  __int64 v4; // r9
  char v5; // dl
  char v6; // dl
  __int64 v7; // r8
  __int64 v8; // [rsp+40h] [rbp-78h]
  __int64 v9; // [rsp+48h] [rbp-70h]
  __int64 v10; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  int v12; // [rsp+68h] [rbp-50h]
  __int64 v13; // [rsp+80h] [rbp-38h]

  v1 = MEMORY[0xFFFFF78000000014] - 50000000LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&unk_1C0362418, 0LL);
  v2 = 10LL;
  v3 = (unsigned int *)&unk_1C0361228;
  do
  {
    v4 = v3[2];
    if ( (_DWORD)v4 == 4 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 693LL);
      v4 = v3[2];
    }
    if ( *(_QWORD *)v3 && v1 > *((_QWORD *)v3 + 2) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v10) = v3[3];
        LODWORD(v9) = v4;
        LODWORD(v8) = *v3;
        WPP_RECORDER_AND_TRACE_SF_Ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v5,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v4,
          4u,
          2u,
          0x1Du,
          (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
          v8,
          v9,
          v10);
      }
      if ( v3[3] == 1 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v6 = 0;
        }
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v8) = *v3;
          WPP_RECORDER_AND_TRACE_SF_D(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v6,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            2u,
            0x1Eu,
            (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
            v8);
        }
        v12 = LockProcessByClientId(*(void **)v3, (PEPROCESS *)&Object);
        PsSetProcessPriorityByClass(Object, 0LL, v7);
        if ( Object )
          ObfDereferenceObject(Object);
      }
      *(_OWORD *)v3 = 0LL;
      v13 = 0LL;
      *((_QWORD *)v3 + 2) = 0LL;
    }
    v3 += 6;
    --v2;
  }
  while ( v2 );
  ExReleasePushLockExclusiveEx(&unk_1C0362418, 0LL);
  KeLeaveCriticalRegion();
}
