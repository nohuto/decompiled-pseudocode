/*
 * XREFs of ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EF3E0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0144878 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     UnpackMouseSettings @ 0x1C01E8C74 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1C01E8EF0 (UnpackPenSettings.c)
 *     UnpackTouchpadSettings @ 0x1C01E90D4 (UnpackTouchpadSettings.c)
 *     ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x1C01F1588 (-ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ivOnNonInputPacketReceived(const void *a1, __int64 a2, int a3, struct tagRECT *a4)
{
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  LARGE_INTEGER *v10; // rdi
  struct tagTHREADINFO **v11; // rdi
  const struct _IVForegroundPacket *v12; // rdx
  struct tagTHREADINFO *v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // r8
  struct tagKERNELHANDLETABLEENTRY *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  LARGE_INTEGER *v28; // rdi
  struct tagTHREADINFO **v29; // rdi
  struct tagTHREADINFO *v30; // rdi
  __int64 v31; // rcx
  unsigned int v32; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  struct tagKERNELHANDLETABLEENTRY *v36; // rax
  __int64 v37; // rcx
  __int64 *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // r8
  BOOL v42; // [rsp+30h] [rbp-91h] BYREF
  __int64 v43; // [rsp+38h] [rbp-89h] BYREF
  int v44; // [rsp+40h] [rbp-81h]
  GUID ActivityId; // [rsp+44h] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+58h] [rbp-69h] BYREF
  BOOL *v47; // [rsp+78h] [rbp-49h]
  __int64 v48; // [rsp+80h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+88h] [rbp-39h] BYREF
  BOOL *v50; // [rsp+A8h] [rbp-19h]
  __int64 v51; // [rsp+B0h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+B8h] [rbp-9h] BYREF
  BOOL *v53; // [rsp+D8h] [rbp+17h]
  __int64 v54; // [rsp+E0h] [rbp+1Fh]

  v5 = (unsigned int)(a3 - 9);
  if ( !(_DWORD)v5 )
  {
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, v5);
      v43 = CurrentThreadWin32Thread;
    }
    else
    {
      CurrentThreadWin32Thread = 0LL;
      v43 = 0LL;
    }
    v44 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v54 = 4LL;
        v42 = v44 == 1;
        v53 = &v42;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &ActivityId,
          0LL,
          3u,
          &v52);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v27 = W32kEtwEnabledKeyword, v26 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v26 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v28 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v26, v27);
      if ( v28 )
        v28[1] = KeQueryPerformanceCounter(0LL);
    }
    v29 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v29 )
    {
      v30 = *v29;
      if ( IsThreadCrossSessionAttached() )
        v30 = 0LL;
      if ( v43 )
      {
        v31 = *(unsigned int *)(v43 + 24);
        if ( *(_DWORD *)(v43 + 48) || (int)v31 > 0 )
        {
          *(_DWORD *)(v43 + 44) = 1;
          *(GUID *)(v43 + 28) = ActivityId;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v51 = 4LL;
              v42 = v44 == 1;
              v50 = &v42;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &ActivityId,
                0LL,
                3u,
                &v49);
              v32 = dword_1C028EE70;
            }
            if ( v32 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v48 = 4LL;
              v42 = v44 == 1;
              v47 = &v42;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &ActivityId,
                0LL,
                3u,
                &v46);
            }
          }
        }
      }
      gptiCurrent = v30;
      if ( v30 )
      {
        *((_DWORD *)v30 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v38 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v36 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v37 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v36;
              if ( !*(_DWORD *)(v37 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v34, v35);
                v37 = *v38;
              }
              HMUnlockObject(v37);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v43);
      gptiCurrent = 0LL;
    }
    UnpackTouchpadSettings(a4);
    UnpackMouseSettings(&a4->left, v39, v40);
    UnpackPenSettings(a4);
    goto LABEL_95;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v6 )
  {
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v7 = PsGetCurrentThreadWin32Thread(a1, a2, v6);
      v43 = v7;
    }
    else
    {
      v7 = 0LL;
      v43 = 0LL;
    }
    v44 = 1;
    if ( v7 && (*(int *)(v7 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v48 = 4LL;
        v42 = v44 == 1;
        v47 = &v42;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &ActivityId,
          0LL,
          3u,
          &v46);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v9 = W32kEtwEnabledKeyword, v8 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v8 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v10 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v8, v9);
      if ( v10 )
        v10[1] = KeQueryPerformanceCounter(0LL);
    }
    v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v11 )
    {
      v13 = *v11;
      if ( IsThreadCrossSessionAttached() )
        v13 = 0LL;
      if ( v43 )
      {
        v14 = *(unsigned int *)(v43 + 24);
        if ( *(_DWORD *)(v43 + 48) || (int)v14 > 0 )
        {
          *(_DWORD *)(v43 + 44) = 1;
          *(GUID *)(v43 + 28) = ActivityId;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v51 = 4LL;
              v42 = v44 == 1;
              v50 = &v42;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &ActivityId,
                0LL,
                3u,
                &v49);
              v15 = dword_1C028EE70;
            }
            if ( v15 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v54 = 4LL;
              v42 = v44 == 1;
              v53 = &v42;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &ActivityId,
                0LL,
                3u,
                &v52);
            }
          }
        }
      }
      gptiCurrent = v13;
      if ( v13 )
      {
        *((_DWORD *)v13 + 377) = 1;
        v16 = PsGetCurrentProcessWin32Process(v14);
        if ( v16 )
        {
          if ( (*(_DWORD *)(v16 + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v20 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v18 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v19 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v18;
              if ( !*(_DWORD *)(v19 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v12, v17);
                v19 = *v20;
              }
              HMUnlockObject(v19);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v43);
      gptiCurrent = 0LL;
    }
    IVForegroundSync::ivReceiveForegroundUpdate((IVForegroundSync *)a4, v12);
LABEL_95:
    UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
    return 1;
  }
  if ( (_DWORD)v6 == 1 )
    CContentRects::SetContentRects(a4[4].left, a4);
  return 1;
}
