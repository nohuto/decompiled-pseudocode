void __fastcall ForegroundLaunch::OnDaemonTimerRateChanged(int a1)
{
  unsigned int *v2; // rbx
  __int64 v3; // rdi
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
  __int64 v14; // [rsp+C8h] [rbp+10h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v14, (struct _EX_PUSH_LOCK *)&unk_1C0362418);
  byte_1C035C164 = a1 != 2;
  if ( a1 == 2 )
  {
    v2 = (unsigned int *)&unk_1C0361228;
    v3 = 10LL;
    do
    {
      v4 = v2[2];
      if ( (_DWORD)v4 == 4 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 743LL);
        v4 = v2[2];
      }
      if ( *(_QWORD *)v2 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v5 = 0;
        }
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v10) = v2[3];
          LODWORD(v9) = v4;
          LODWORD(v8) = *v2;
          WPP_RECORDER_AND_TRACE_SF_Ddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v5,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v4,
            4u,
            2u,
            0x1Fu,
            (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
            v8,
            v9,
            v10);
        }
        if ( v2[3] == 1 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v6 = 0;
          }
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v8) = *v2;
            WPP_RECORDER_AND_TRACE_SF_D(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v6,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              4u,
              2u,
              0x20u,
              (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
              v8);
          }
          v12 = LockProcessByClientId(*(void **)v2, (PEPROCESS *)&Object);
          PsSetProcessPriorityByClass(Object, 0LL, v7);
          if ( Object )
            ObfDereferenceObject(Object);
        }
        *(_OWORD *)v2 = 0LL;
        v13 = 0LL;
        *((_QWORD *)v2 + 2) = 0LL;
      }
      v2 += 6;
      --v3;
    }
    while ( v3 );
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v14);
  }
}
