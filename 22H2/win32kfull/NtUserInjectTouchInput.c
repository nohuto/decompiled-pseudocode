/*
 * XREFs of NtUserInjectTouchInput @ 0x1C01FD7E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C003AC94 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00C1144 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00C1170 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserGetLastError @ 0x1C012CCF8 (UserGetLastError.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     WPP_RECORDER_SF_D @ 0x1C01D95D0 (WPP_RECORDER_SF_D.c)
 *     xxxInjectTouchInput @ 0x1C01DC7EC (xxxInjectTouchInput.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0206924 (WPP_RECORDER_SF_dq.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0225358 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, void *Src, int a3, int a4)
{
  __int64 v5; // rdi
  int v6; // edx
  int v7; // ecx
  struct tagPOINTER_TOUCH_INFO *v8; // r15
  __int64 v9; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct tagPOINTER_TOUCH_INFO *v11; // rax
  struct tagPOINTER_TOUCH_INFO *v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // esi
  int v16; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  char LastError; // al
  int v22; // edx
  int v23; // ecx
  struct tagPOINTER_TOUCH_INFO *v25; // [rsp+50h] [rbp-48h]
  __int128 v26; // [rsp+60h] [rbp-38h] BYREF
  __int64 v27; // [rsp+70h] [rbp-28h]
  __int64 *v28; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(a1, (_DWORD)Src, a3, a4);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v28, "InjectTouchInput", 0LL);
  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  v8 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( (unsigned int)(v5 - 1) > 0xFF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(v7, v6, 20, 16, (__int64)&WPP_6c283040767a3b01506b934f69f549d7_Traceguids, v5);
    }
    TraceLoggingTouchInjection(1, 0, v5, 0);
    v15 = 0;
    UserSetLastError(87LL, v18, v19);
  }
  else
  {
    EtwTraceTouchInjectionStart();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
    ProbeForRead(Src, 144 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
    v11 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuota(144 * v5, 1953067861LL);
    v12 = v11;
    v25 = v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    memmove(v11, Src, 144 * v5);
    PushW32ThreadLock((__int64)v12, &v26, (__int64)Win32FreePool);
    v15 = xxxInjectTouchInput(v5, v12);
    if ( v15 )
    {
      v16 = 1;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(v14, v13, 20, 18, (__int64)&WPP_6c283040767a3b01506b934f69f549d7_Traceguids);
      }
      v16 = 0;
      LODWORD(v5) = -2;
    }
    TraceLoggingTouchInjection(1, v16, v5, 0);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v26;
    v8 = v25;
  }
  if ( v8 )
    Win32FreePool(v8);
  EtwTraceTouchInjectionStop();
  if ( !v15 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError(v20);
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_D(v23, v22, 20, 19, (__int64)&WPP_6c283040767a3b01506b934f69f549d7_Traceguids, LastError);
  }
  UserSessionSwitchLeaveCrit(v20);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v28);
  return v15;
}
