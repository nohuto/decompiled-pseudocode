/*
 * XREFs of NtUserInjectTouchInput @ 0x1C01D55B0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetLastError @ 0x1C00164F8 (UserGetLastError.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C008C400 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C008C668 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C00C35E0 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     xxxInjectTouchInput @ 0x1C01B07F4 (xxxInjectTouchInput.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentProcessWow64Process; // rax
  size_t v15; // r14
  struct tagPOINTER_TOUCH_INFO *v16; // rax
  struct tagPOINTER_TOUCH_INFO *v17; // rbx
  int v18; // edx
  int v19; // r8d
  __int64 ThreadWin32Thread; // rax
  char v21; // dl
  char v22; // si
  __int64 v24; // [rsp+40h] [rbp-88h]
  struct tagPOINTER_TOUCH_INFO *v25; // [rsp+60h] [rbp-68h]
  __int128 v26; // [rsp+70h] [rbp-58h] BYREF
  __int64 v27; // [rsp+80h] [rbp-48h]
  char v30; // [rsp+E0h] [rbp+18h] BYREF
  __int64 *v31; // [rsp+E8h] [rbp+20h] BYREF

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
      (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
      a1,
      a2);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v31, "InjectTouchInput", 0LL);
  v30 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v30);
  InputExtensibilityCalloutGuard();
  if ( v30 )
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
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
    }
    v9 = 0;
    UserSetLastError(5);
  }
  else
  {
    v10 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    if ( (unsigned int)(v3 - 1) > 0xFF )
    {
      v21 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = v3;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v21,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          2u,
          0x14u,
          0x16u,
          (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
          v24);
      }
      v9 = 0;
      UserSetLastError(87);
    }
    else
    {
      EtwTraceTouchInjectionStart();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12, v11, v13);
      v15 = 144 * v3;
      ProbeForRead(a2, 144 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      v16 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144 * v3, 1953067861LL);
      v17 = v16;
      v25 = v16;
      if ( !v16 )
        ExRaiseStatus(-1073741801);
      memmove(v16, (const void *)a2, v15);
      PushW32ThreadLock((__int64)v17, &v26, (__int64)Win32FreePool);
      v9 = xxxInjectTouchInput(a1, v17);
      if ( !v9 )
      {
        LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v18,
            v19,
            (_DWORD)WPP_GLOBAL_Control,
            2,
            20,
            24,
            (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
        }
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v26;
      v10 = v25;
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
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = UserGetLastError();
        WPP_RECORDER_AND_TRACE_SF_D(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v4,
          v22,
          (__int64)gFullLog,
          2u,
          0x14u,
          0x19u,
          (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
          v24);
      }
    }
  }
  LeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v31);
  return v9;
}
