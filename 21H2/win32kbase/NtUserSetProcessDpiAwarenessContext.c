/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C0087C20
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0087E94 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C0088048 (IsValidKernelDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v4; // esi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  struct tagTHREADINFO **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // r8
  __int64 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 i; // rsi
  __int64 v29; // rax
  LARGE_INTEGER *v30; // rbx
  struct tagKERNELHANDLETABLEENTRY *v31; // rax
  __int64 v32; // rcx
  BOOL v33; // [rsp+38h] [rbp-79h] BYREF
  __int64 v34; // [rsp+40h] [rbp-71h] BYREF
  int v35; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v38; // [rsp+80h] [rbp-31h]
  int v39; // [rsp+88h] [rbp-29h]
  int v40; // [rsp+8Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v42; // [rsp+B0h] [rbp-1h]
  int v43; // [rsp+B8h] [rbp+7h]
  int v44; // [rsp+BCh] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v46; // [rsp+E0h] [rbp+2Fh]
  int v47; // [rsp+E8h] [rbp+37h]
  int v48; // [rsp+ECh] [rbp+3Bh]

  v3 = a2;
  v4 = a1;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v34 = CurrentThreadWin32Thread;
  v35 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v34 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v39 = 4;
      v40 = 0;
      v33 = v35 == 1;
      v38 = &v33;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v37);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v6 = W32kEtwEnabledKeyword, v7 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v7 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v30 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v6, v7);
    if ( v30 )
      v30[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v13 = *v8;
    if ( v34 )
    {
      v10 = *(unsigned int *)(v34 + 24);
      if ( *(_DWORD *)(v34 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v34 + 44) = 1;
        *(GUID *)(v34 + 28) = ActivityId;
        v11 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v43 = 4;
            v44 = 0;
            v33 = v35 == 1;
            v42 = &v33;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v41);
            v11 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v11 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v47 = 4;
            v48 = 0;
            v33 = v35 == 1;
            v46 = &v33;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v45);
          }
        }
      }
    }
    gptiCurrent = v13;
    if ( v13 )
    {
      *((_DWORD *)v13 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v9, v11, v12);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v16 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v31 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v32 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v31;
            if ( !*(_DWORD *)(v32 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v9, v15);
              v32 = *v16;
            }
            HMUnlockObject(v32);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v34);
    gptiCurrent = 0LL;
  }
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(v4, v9)
    || (v4 & 0xF) == 1
    && (v29 = PsGetCurrentProcessWin32Process(v18, v17, v19, v20),
        v17 = 511LL,
        ((v4 >> 8) & 0x1FF) != *(_WORD *)(v29 + 284)) )
  {
    UserSetLastError(87LL, v17, v19, v20);
LABEL_31:
    v25 = 0LL;
    goto LABEL_25;
  }
  v21 = 0x400000LL;
  v22 = *((_QWORD *)gptiCurrent + 53);
  v23 = *(unsigned int *)(v22 + 820);
  if ( (v23 & 0x400000) != 0 )
  {
    if ( !v3 )
      goto LABEL_31;
    if ( (v4 & 0xF) == 0 )
      goto LABEL_31;
    v24 = *(_DWORD *)(v22 + 280);
    if ( v24 != 18 )
      goto LABEL_31;
  }
  else
  {
    v24 = *(_DWORD *)(v22 + 280);
  }
  v23 = (unsigned int)v23 | 0x400000;
  v25 = 1LL;
  *(_DWORD *)(v22 + 820) = v23;
  if ( v24 != v4 )
  {
    *(_DWORD *)(v22 + 280) = v4;
    v26 = *(_QWORD *)(v22 + 664);
    if ( v26 )
    {
      for ( i = *(_QWORD *)(v26 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v22, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v22, *(struct tagWND **)(i + 104));
      }
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v23, v21, v19, v20);
  return v25;
}
