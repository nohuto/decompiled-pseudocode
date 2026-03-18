/*
 * XREFs of NtUserInjectTouchInput @ 0x1C01F8300
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007EDA8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007F7CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserGetLastError @ 0x1C0113B5C (UserGetLastError.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     xxxInjectTouchInput @ 0x1C01D73EC (xxxInjectTouchInput.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C0203F20 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, volatile void *a2)
{
  int v2; // r9d
  __int64 v3; // rsi
  char v4; // di
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // r9d
  int v8; // esi
  struct tagPOINTER_TOUCH_INFO *v9; // r15
  __int64 v10; // rcx
  __int64 CurrentProcessWow64Process; // rax
  SIZE_T v12; // rsi
  struct tagPOINTER_TOUCH_INFO *v13; // rax
  struct tagPOINTER_TOUCH_INFO *v14; // rbx
  int v15; // edx
  int v16; // r8d
  __int64 ThreadWin32Thread; // rax
  bool v18; // r14
  char LastError; // al
  int v20; // r8d
  int v21; // edx
  struct tagPOINTER_TOUCH_INFO *v23; // [rsp+60h] [rbp-68h]
  __int128 v24; // [rsp+70h] [rbp-58h] BYREF
  __int64 v25; // [rsp+80h] [rbp-48h]
  volatile void *Address; // [rsp+D8h] [rbp+10h]
  char v28; // [rsp+E0h] [rbp+18h] BYREF
  __int64 *v29; // [rsp+E8h] [rbp+20h] BYREF

  Address = a2;
  v2 = (int)a2;
  v3 = a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(a2) = 0;
    v4 = 1;
  }
  else
  {
    v4 = 1;
    LOBYTE(a2) = 1;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dq(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v2);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v29, "InjectTouchInput", 0LL);
  v28 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v28);
  InputExtensibilityCalloutGuard();
  if ( v28 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = v4;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        v7,
        2,
        20,
        20,
        (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids);
    }
    v8 = 0;
    UserSetLastError(5LL, v5);
  }
  else
  {
    v9 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    if ( (unsigned int)(v3 - 1) > 0xFF )
    {
      LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          v6,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          20,
          21,
          (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
          v3);
      }
      v8 = 0;
      UserSetLastError(87LL, v5);
    }
    else
    {
      EtwTraceTouchInjectionStart();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10);
      v12 = 144 * v3;
      ProbeForRead(Address, v12, CurrentProcessWow64Process != 0 ? 1 : 4);
      v13 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(v12, 1953067861LL);
      v14 = v13;
      v23 = v13;
      if ( !v13 )
        ExRaiseStatus(-1073741801);
      memmove(v13, (const void *)Address, v12);
      PushW32ThreadLock((__int64)v14, &v24, (__int64)Win32FreePool);
      v8 = xxxInjectTouchInput(a1, v14);
      if ( !v8 )
      {
        LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (_DWORD)WPP_GLOBAL_Control,
            2,
            20,
            23,
            (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids);
        }
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v24;
      v9 = v23;
    }
    if ( v9 )
      Win32FreePool(v9);
    EtwTraceTouchInjectionStop();
    if ( !v8 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LastError = UserGetLastError();
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v4;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v21,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          20,
          24,
          (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
          LastError);
      }
    }
  }
  LeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v29);
  return v8;
}
