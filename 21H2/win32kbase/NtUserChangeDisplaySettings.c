/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C00647B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     CheckAccessEx @ 0x1C002FB20 (CheckAccessEx.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0064A40 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C0067780 (DrvLogDiagDisplayChange.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(int a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  struct tagTHREADINFO **v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagTHREADINFO *v19; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v21; // rbx
  struct tagTHREADINFO *v22; // rdx
  unsigned int v23; // ebx
  LARGE_INTEGER *v25; // rbx
  struct tagKERNELHANDLETABLEENTRY *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  BOOL v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+58h] [rbp-A8h]
  GUID v33; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v34[10]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+C0h] [rbp-40h] BYREF
  BOOL *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+F0h] [rbp-10h] BYREF
  BOOL *v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+118h] [rbp+18h]
  int v42; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+120h] [rbp+20h] BYREF
  BOOL *v44; // [rsp+140h] [rbp+40h]
  int v45; // [rsp+148h] [rbp+48h]
  int v46; // [rsp+14Ch] [rbp+4Ch]

  memset(v34, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v34[1]);
  v30[1] = -1;
  v34[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v34[3]) = 26;
  LOBYTE(v34[6]) = -1;
  v30[0] = 0x2000;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  else
    CurrentThreadWin32Thread = 0LL;
  v31 = CurrentThreadWin32Thread;
  v32 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v31 + 48)) )
  {
    EtwActivityIdControl(3u, &v33);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v37 = 4;
      v38 = 0;
      v29 = v32 == 1;
      v36 = &v29;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &v33,
        0LL,
        3u,
        &v35);
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
    v25 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v12, v13);
    if ( v25 )
      v25[1] = KeQueryPerformanceCounter(0LL);
  }
  v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v14 )
  {
    v19 = *v14;
    if ( v31 )
    {
      v16 = *(unsigned int *)(v31 + 24);
      if ( *(_DWORD *)(v31 + 48) || (int)v16 > 0 )
      {
        *(_DWORD *)(v31 + 44) = 1;
        *(GUID *)(v31 + 28) = v33;
        v17 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v41 = 4;
            v42 = 0;
            v29 = v32 == 1;
            v40 = &v29;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &v33,
              0LL,
              3u,
              &v39);
            v17 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v17 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v45 = 4;
            v46 = 0;
            v29 = v32 == 1;
            v44 = &v29;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &v33,
              0LL,
              3u,
              &v43);
          }
        }
      }
    }
    gptiCurrent = v19;
    if ( v19 )
    {
      *((_DWORD *)v19 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16, v15, v17, v18);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v16 = (__int64)gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v21 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v26 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v27 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v26;
              if ( !*(_DWORD *)(v27 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v15, v17);
                v27 = *v21;
              }
              HMUnlockObject(v27);
            }
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v31);
    gptiCurrent = 0LL;
  }
  if ( !gbVideoInitialized )
  {
    v23 = -1;
    goto LABEL_21;
  }
  v22 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 0x10) != 0
    || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v30, 0) )
  {
    if ( a3 == 34 )
      goto LABEL_20;
    v28 = 5LL;
LABEL_56:
    v23 = -1;
    UserSetLastError(v28, (__int64)v22, v17, v18);
    goto LABEL_21;
  }
  if ( (a3 & 0x8000000) != 0 )
  {
    v28 = 87LL;
    goto LABEL_56;
  }
LABEL_20:
  DrvLogDiagDisplayChange(0LL, 8LL);
  v23 = xxxUserChangeDisplaySettings(a1, a2, 0, a3, a4, UserMode, (__int64)v34);
LABEL_21:
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v23;
}
