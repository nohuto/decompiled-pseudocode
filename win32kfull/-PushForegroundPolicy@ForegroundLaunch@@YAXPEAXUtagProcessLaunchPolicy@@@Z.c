/*
 * XREFs of ?PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0011C58
 * Callers:
 *     EditionPushProcessLaunchForegroundPolicy @ 0x1C0011C40 (EditionPushProcessLaunchForegroundPolicy.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddDs @ 0x1C0011E80 (WPP_RECORDER_AND_TRACE_SF_ddDs.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0022210 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::RecordParentPidLegacyPolicy @ 0x1C003F13C (_anonymous_namespace_--RecordParentPidLegacyPolicy.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     LockProcessByClientId @ 0x1C0099860 (LockProcessByClientId.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C012DCC4 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ForegroundLaunch::PushForegroundPolicy(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r8
  unsigned int v5; // eax
  __int64 *v6; // rcx
  unsigned int v7; // r13d
  char v8; // di
  __int64 v9; // rdx
  int v10; // edx
  __int64 v11; // r8
  int v12; // eax
  LONGLONG TimeQuadPart; // rax
  __int64 v14; // rcx
  int v15; // edx
  PEPROCESS Process; // [rsp+60h] [rbp-9h] BYREF
  int v17; // [rsp+68h] [rbp-1h]
  __int128 v18; // [rsp+70h] [rbp+7h]
  LONGLONG v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+DCh] [rbp+73h]
  __int64 v21; // [rsp+E8h] [rbp+7Fh] BYREF

  v20 = HIDWORD(a2);
  v2 = a2;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v21, (struct _EX_PUSH_LOCK *)&unk_1C0362418);
  if ( v2 != 4 )
  {
    if ( !v2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 549LL);
    v5 = 5;
    v6 = (__int64 *)&unk_1C0361228;
    v7 = 15;
    v8 = 1;
    while ( 1 )
    {
      v9 = *v6;
      if ( *v6 )
      {
        if ( v9 == a1 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v8 = 0;
          }
          if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = v8;
            LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v9,
              v4,
              (_DWORD)gFullLog,
              3,
              2,
              24,
              (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
              a1);
          }
          NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v21);
          return;
        }
      }
      else
      {
        v7 = v5;
      }
      ++v5;
      v6 += 3;
      if ( v5 >= 0xF )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v9) = 0;
        }
        LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_ddDs(WPP_GLOBAL_Control->AttachedDevice, v9, v4, (unsigned int)"Added");
        if ( v7 >= 0xF )
        {
          if ( v20 == 1 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
            {
              v8 = 0;
            }
            if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v15 = 27;
              LOBYTE(v15) = v8;
              LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_D(
                WPP_GLOBAL_Control->AttachedDevice,
                v15,
                v4,
                (_DWORD)gFullLog,
                3,
                2,
                27,
                (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
                a1);
            }
          }
        }
        else
        {
          v17 = LockProcessByClientId(a1, &Process, v4, 0LL);
          v12 = 0;
          if ( v20 == 1 )
          {
            LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_D(
                WPP_GLOBAL_Control->AttachedDevice,
                v10,
                v11,
                (_DWORD)gFullLog,
                4,
                2,
                26,
                (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
                a1);
            PsSetProcessPriorityByClass(Process, 1LL, v11);
            v12 = 1;
          }
          *(_QWORD *)&v18 = a1;
          *((_QWORD *)&v18 + 1) = __PAIR64__(v12, v2);
          TimeQuadPart = PsGetProcessCreateTimeQuadPart(Process);
          v19 = TimeQuadPart;
          v14 = 3LL * v7;
          *(_OWORD *)&qword_1C03611B0[v14] = v18;
          qword_1C03611B0[v14 + 2] = TimeQuadPart;
          if ( Process )
            ObfDereferenceObject(Process);
        }
        goto LABEL_25;
      }
    }
  }
  anonymous_namespace_::RecordParentPidLegacyPolicy(a1);
LABEL_25:
  ExReleasePushLockExclusiveEx(v21, 0LL);
  KeLeaveCriticalRegion();
}
