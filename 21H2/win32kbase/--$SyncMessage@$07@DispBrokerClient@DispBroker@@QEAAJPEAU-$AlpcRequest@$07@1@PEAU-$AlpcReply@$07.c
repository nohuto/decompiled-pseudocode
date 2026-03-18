/*
 * XREFs of ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0143340
 * Callers:
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0143B68 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C0143C6C (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::SyncMessage<8>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  LARGE_INTEGER *v14; // rbx
  struct tagTHREADINFO **v15; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct tagKERNELHANDLETABLEENTRY *v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // rbx
  BOOL v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+78h] [rbp-88h] BYREF
  BOOL *v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A8h] [rbp-58h] BYREF
  BOOL *v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+D8h] [rbp-28h] BYREF
  BOOL *v39; // [rsp+F8h] [rbp-8h]
  __int64 v40; // [rsp+100h] [rbp+0h]

  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  v27 = *(_QWORD *)(a1 + 16);
  v28 = 72LL;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64 *, _QWORD, unsigned __int64))qword_1C0296958)(
         1179648LL,
         a2,
         0LL,
         a3,
         &v28,
         0LL,
         (unsigned __int64)&v27 & -(__int64)(v27 != 0));
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8, v7, v10);
  else
    CurrentThreadWin32Thread = 0LL;
  v29 = CurrentThreadWin32Thread;
  v30 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v29 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v34 = 4LL;
      v26 = v30 == 1;
      v33 = &v26;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v32);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v12 = W32kEtwEnabledKeyword, v13 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v13 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v14 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v12, v13);
    if ( v14 )
      v14[1] = KeQueryPerformanceCounter(0LL);
  }
  v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v15 )
  {
    v16 = *v15;
    if ( IsThreadCrossSessionAttached() )
      v16 = 0LL;
    if ( v29 )
    {
      v17 = *(unsigned int *)(v29 + 24);
      if ( *(_DWORD *)(v29 + 48) || (int)v17 > 0 )
      {
        *(_DWORD *)(v29 + 44) = 1;
        *(GUID *)(v29 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v37 = 4LL;
            v26 = v30 == 1;
            v36 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v35);
            v18 = dword_1C028EE70;
          }
          if ( v18 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v40 = 4LL;
            v26 = v30 == 1;
            v39 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v38);
          }
        }
      }
    }
    gptiCurrent = v16;
    if ( v16 )
    {
      *((_DWORD *)v16 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v24 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v22 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v23 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v22;
            if ( !*(_DWORD *)(v23 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v20, v21);
              v23 = *v24;
            }
            HMUnlockObject(v23);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v29);
    gptiCurrent = 0LL;
  }
  return v9;
}
