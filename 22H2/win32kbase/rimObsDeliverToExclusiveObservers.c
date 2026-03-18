/*
 * XREFs of rimObsDeliverToExclusiveObservers @ 0x1C00053E4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0192EA4 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimObsIsObserverTarget_0 @ 0x1C01AC8E0 (rimObsIsObserverTarget_0.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C01AC91C (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C01ADB14 (rimObsDeliverInputToObserver.c)
 */

__int64 __fastcall rimObsDeliverToExclusiveObservers(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  PDEVICE_OBJECT v6; // rcx
  unsigned int v7; // ebx
  void *v8; // r9
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  PDEVICE_OBJECT v11; // rcx
  _QWORD *i; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v22; // edi
  PDEVICE_OBJECT v23; // rcx
  int v24; // edx
  int v25; // r8d
  char v26; // al
  PDEVICE_OBJECT v27; // rcx
  __int16 v28; // ax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v2 = ((__int64 (*)(void))SGDGetUserSessionState)();
  RIMLockExclusive(v2 + 256);
  v3 = ((__int64 (*)(void))SGDGetUserSessionState)();
  RIMLockExclusive(v3 + 240);
  v6 = WPP_GLOBAL_Control;
  v7 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v4) = 0;
  }
  v8 = &WPP_c696d146d7263bd817038d8ba47edda4_Traceguids;
  LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      1,
      44,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  v9 = 0LL;
  for ( i = *(_QWORD **)(SGDGetUserSessionState(v6, v4, v5, v8) + 336);
        i != (_QWORD *)(SGDGetUserSessionState(v11, v10, v13, v14) + 336);
        i = (_QWORD *)*i )
  {
    if ( (i[13] & 2) != 0 && (unsigned int)rimObsIsObserverTarget_0(i - 2, a1) )
    {
      if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        v9 = i - 2;
        if ( i == (_QWORD *)16 )
          break;
        if ( (i[13] & 1) != 0 )
        {
          v22 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          v23 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v10) = 0;
          }
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v10,
              v13,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              1,
              46,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          if ( v9[4] != PsGetCurrentProcess(v23, v10, v13) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v24) = 0;
            }
            if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v24,
                v25,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                1,
                47,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
            KeStackAttachProcess((PRKPROCESS)v9[4], &ApcState);
            v22 = 1;
          }
          rimObsDeliverInputToObserver(a1, v9);
          if ( v22 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v10) = 0;
          }
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v10,
              v13,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              1,
              48,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
        if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
        {
          v26 = *(_BYTE *)(a1 + 48);
          if ( v26 )
          {
            if ( v26 == 1 )
            {
              *(_DWORD *)(a1 + 688) = 0;
              v27 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v10) = 0;
              }
              LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v28 = 50;
LABEL_68:
                WPP_RECORDER_AND_TRACE_SF_(
                  v27->AttachedDevice,
                  v10,
                  v13,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  1,
                  v28,
                  (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
              }
            }
          }
          else
          {
            *(_DWORD *)(a1 + 912) = 0;
            v27 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v10) = 0;
            }
            LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v28 = 49;
              goto LABEL_68;
            }
          }
        }
        InputTraceLogging::RIM::DropInput(a1, 11LL);
        break;
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v10) = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v13,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          1,
          45,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
  }
  v15 = SGDGetUserSessionState(v11, v10, v13, v14);
  *(_QWORD *)(v15 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v15 + 240, 0LL);
  KeLeaveCriticalRegion();
  v20 = SGDGetUserSessionState(v17, v16, v18, v19);
  *(_QWORD *)(v20 + 264) = 0LL;
  ExReleasePushLockExclusiveEx(v20 + 256, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v7) = v9 != 0LL;
  return v7;
}
