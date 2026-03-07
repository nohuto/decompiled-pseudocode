void __fastcall rimObsDeliverToNonExclusiveObservers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  PDEVICE_OBJECT v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  int v36; // edi
  PDEVICE_OBJECT v37; // rcx
  int v38; // edx
  int v39; // r8d
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-60h] BYREF

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 256);
  v10 = SGDGetUserSessionState(v7, v6, v8, v9);
  RIMLockExclusive(v10 + 240);
  v15 = *(_QWORD **)(SGDGetUserSessionState(v12, v11, v13, v14) + 336);
  if ( v15 != (_QWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 336) )
  {
    do
    {
      v30 = v15 - 2;
      if ( (unsigned int)rimObsIsObserverTarget_0(v15 - 2, a1) )
      {
        if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
        {
          v35 = *((_DWORD *)v30 + 30);
          v36 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          if ( (v35 & 1) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 959LL);
          v37 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
            || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v31) = 0;
          }
          LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v31,
              v33,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              23,
              51,
              (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
          if ( v30[4] != PsGetCurrentProcess(v37, v31, v33, v34) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
              || (LOBYTE(v38) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v38) = 0;
            }
            if ( (_BYTE)v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v38,
                v39,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                23,
                52,
                (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
            }
            KeStackAttachProcess((PRKPROCESS)v30[4], &ApcState);
            v36 = 1;
          }
          rimObsDeliverInputToObserver(a1, v15 - 2);
          if ( v36 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          v32 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
            || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v31) = 0;
          }
          LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v31,
              v33,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              3,
              23,
              53,
              (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
        }
      }
      v15 = (_QWORD *)*v15;
    }
    while ( v15 != (_QWORD *)(SGDGetUserSessionState(v32, v31, v33, v34) + 336) );
  }
  v24 = SGDGetUserSessionState(v21, v20, v22, v23);
  *(_QWORD *)(v24 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v24 + 240, 0LL);
  KeLeaveCriticalRegion();
  v29 = SGDGetUserSessionState(v26, v25, v27, v28);
  *(_QWORD *)(v29 + 264) = 0LL;
  ExReleasePushLockExclusiveEx(v29 + 256, 0LL);
  KeLeaveCriticalRegion();
}
