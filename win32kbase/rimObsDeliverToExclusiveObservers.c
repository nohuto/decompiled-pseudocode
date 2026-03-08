/*
 * XREFs of rimObsDeliverToExclusiveObservers @ 0x1C0003FAC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C01C0BD4 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimObsIsObserverTarget_0 @ 0x1C01DA9A4 (rimObsIsObserverTarget_0.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C01DA9E0 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C01DBC24 (rimObsDeliverInputToObserver.c)
 */

__int64 __fastcall rimObsDeliverToExclusiveObservers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  PDEVICE_OBJECT v13; // rcx
  unsigned int v14; // ebx
  char v15; // di
  void *v16; // r9
  _QWORD *v17; // rbp
  __int64 v18; // rdx
  PDEVICE_OBJECT v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *i; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v30; // esi
  PDEVICE_OBJECT v31; // rcx
  int v32; // edx
  int v33; // r8d
  char v34; // al
  PDEVICE_OBJECT v35; // rcx
  __int16 v36; // ax
  void *v37; // rdx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 256);
  v10 = SGDGetUserSessionState(v7, v6, v8, v9);
  RIMLockExclusive(v10 + 240);
  v13 = WPP_GLOBAL_Control;
  v14 = 0;
  v15 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v11) = 0;
  }
  v16 = &WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids;
  LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      44,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
  v17 = 0LL;
  for ( i = *(_QWORD **)(SGDGetUserSessionState(v13, v11, v12, v16) + 336);
        i != (_QWORD *)(SGDGetUserSessionState(v19, v18, v20, v21) + 336);
        i = (_QWORD *)*i )
  {
    if ( (i[13] & 2) != 0 && (unsigned int)rimObsIsObserverTarget_0(i - 2, a1) )
    {
      if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        v17 = i - 2;
        if ( i == (_QWORD *)16 )
          break;
        if ( (i[13] & 1) != 0 )
        {
          v30 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          v31 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
            || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v18) = 0;
          }
          LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v18,
              v20,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              23,
              46,
              (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
          if ( v17[4] != PsGetCurrentProcess(v31, v18, v20, v21) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
              || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v32) = 0;
            }
            if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v32,
                v33,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                23,
                47,
                (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
            }
            KeStackAttachProcess((PRKPROCESS)v17[4], &ApcState);
            v30 = 1;
          }
          rimObsDeliverInputToObserver(a1, v17);
          if ( v30 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
            || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v18) = 0;
          }
          if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v18,
              v20,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              23,
              48,
              (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
          }
        }
        if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
        {
          v34 = *(_BYTE *)(a1 + 48);
          if ( v34 )
          {
            if ( v34 == 1 )
            {
              *(_DWORD *)(a1 + 688) = 0;
              v35 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
                || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
              {
                v15 = 0;
              }
              LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v36 = 50;
LABEL_68:
                v37 = &WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids;
                LOBYTE(v37) = v15;
                WPP_RECORDER_AND_TRACE_SF_(
                  v35->AttachedDevice,
                  (_DWORD)v37,
                  v20,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  23,
                  v36,
                  (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
              }
            }
          }
          else
          {
            *(_DWORD *)(a1 + 912) = 0;
            v35 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v15 = 0;
            }
            LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v36 = 49;
              goto LABEL_68;
            }
          }
        }
        InputTraceLogging::RIM::DropInput(a1, 11LL);
        break;
      }
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v18) = 0;
      }
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          23,
          45,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
    }
  }
  v23 = SGDGetUserSessionState(v19, v18, v20, v21);
  *(_QWORD *)(v23 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v23 + 240, 0LL);
  KeLeaveCriticalRegion();
  v28 = SGDGetUserSessionState(v25, v24, v26, v27);
  *(_QWORD *)(v28 + 264) = 0LL;
  ExReleasePushLockExclusiveEx(v28 + 256, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v14) = v17 != 0LL;
  return v14;
}
