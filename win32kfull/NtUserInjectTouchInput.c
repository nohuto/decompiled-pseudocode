/*
 * XREFs of NtUserInjectTouchInput @ 0x1C01D65E0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetLastError @ 0x1C0015748 (UserGetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D6A80 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D6CE8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C00FF0A0 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     xxxInjectTouchInput @ 0x1C01B19B4 (xxxInjectTouchInput.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, volatile void *a2)
{
  __int64 v3; // rbx
  char v4; // di
  char v5; // dl
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // ebx
  struct tagPOINTER_TOUCH_INFO *v10; // r14
  __int64 v11; // rcx
  __int64 CurrentProcessWow64Process; // rax
  size_t v13; // r14
  struct tagPOINTER_TOUCH_INFO *v14; // rax
  struct tagPOINTER_TOUCH_INFO *v15; // rbx
  int v16; // edx
  int v17; // r8d
  __int64 ThreadWin32Thread; // rax
  char v19; // dl
  char v20; // si
  __int64 v22; // [rsp+40h] [rbp-88h]
  struct tagPOINTER_TOUCH_INFO *v23; // [rsp+60h] [rbp-68h]
  __int128 v24; // [rsp+70h] [rbp-58h] BYREF
  __int64 v25; // [rsp+80h] [rbp-48h]
  char v28; // [rsp+E0h] [rbp+18h] BYREF
  __int64 *v29; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
    v4 = 1;
  }
  else
  {
    v4 = 1;
    v5 = 1;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x14u,
      0x14u,
      (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
      a1,
      a2);
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
      LOBYTE(v6) = v4;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        v8,
        2,
        20,
        21,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
    }
    v9 = 0;
    UserSetLastError(5);
  }
  else
  {
    v10 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    if ( (unsigned int)(v3 - 1) > 0xFF )
    {
      v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v3;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v19,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          2u,
          0x14u,
          0x16u,
          (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
          v22);
      }
      v9 = 0;
      UserSetLastError(87);
    }
    else
    {
      EtwTraceTouchInjectionStart();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
      v13 = 144 * v3;
      ProbeForRead(a2, 144 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      v14 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144 * v3, 1953067861LL);
      v15 = v14;
      v23 = v14;
      if ( !v14 )
        ExRaiseStatus(-1073741801);
      memmove(v14, (const void *)a2, v13);
      PushW32ThreadLock((__int64)v15, &v24, (__int64)Win32FreePool);
      v9 = xxxInjectTouchInput(a1, v15);
      if ( !v9 )
      {
        LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v16,
            v17,
            (_DWORD)WPP_GLOBAL_Control,
            2,
            20,
            24,
            (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
        }
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v24;
      v10 = v23;
    }
    if ( v10 )
      Win32FreePool(v10);
    EtwTraceTouchInjectionStop();
    if ( !v9 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = UserGetLastError();
        WPP_RECORDER_AND_TRACE_SF_D(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v4,
          v20,
          (__int64)gFullLog,
          2u,
          0x14u,
          0x19u,
          (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
          v22);
      }
    }
  }
  LeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v29);
  return v9;
}
