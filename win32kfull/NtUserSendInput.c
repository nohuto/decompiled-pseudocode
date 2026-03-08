/*
 * XREFs of NtUserSendInput @ 0x1C0016F20
 * Callers:
 *     <none>
 * Callees:
 *     UserGetLastError @ 0x1C0015748 (UserGetLastError.c)
 *     xxxSendInput @ 0x1C00171A4 (xxxSendInput.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C0017538 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D6A80 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D6CE8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00E3308 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddD @ 0x1C01E443C (WPP_RECORDER_AND_TRACE_SF_ddD.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, void *a2, int a3, int a4)
{
  int v4; // ebx
  volatile void *v5; // r13
  __int64 v6; // r14
  char v7; // di
  int v8; // r8d
  int v9; // r9d
  __int64 CurrentProcessWow64Process; // rax
  void *v11; // rax
  void *v12; // r13
  unsigned int v13; // ebx
  __int64 ThreadWin32Thread; // rax
  PDEVICE_OBJECT v15; // rcx
  int v17; // edx
  int v18; // edx
  bool v19; // si
  int v20; // r8d
  int v21; // edx
  void *v22; // [rsp+70h] [rbp-68h]
  __int128 v23; // [rsp+80h] [rbp-58h] BYREF
  __int64 v24; // [rsp+90h] [rbp-48h]
  void *Src; // [rsp+E8h] [rbp+10h]
  char v26; // [rsp+F8h] [rbp+20h] BYREF

  Src = a2;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(a2) = 0;
    v7 = 1;
  }
  else
  {
    v7 = 1;
    LOBYTE(a2) = 1;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dqd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, a4);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v26,
    "SendInput",
    0LL);
  EnterCrit(0LL, 0LL);
  v23 = 0LL;
  v24 = 0LL;
  if ( v4 != 40 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 14;
      LOBYTE(v17) = v7;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v8,
        (_DWORD)gFullLog,
        2,
        20,
        14,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
        v4,
        40);
    }
    goto LABEL_23;
  }
  if ( !(_DWORD)v6 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 15;
      LOBYTE(v18) = v7;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v8,
        v9,
        2,
        20,
        15,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
    }
LABEL_23:
    v13 = 0;
    UserSetLastError(87LL);
    goto LABEL_12;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  ProbeForRead(v5, 40 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
  v11 = (void *)Win32AllocPoolWithQuotaZInit(40 * v6, 1769173845LL);
  v12 = v11;
  v22 = v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  memmove(v11, Src, 40 * v6);
  PushW32ThreadLock(v12, &v23, Win32FreePool);
  v13 = xxxSendInput((unsigned int)v6, v12);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(ThreadWin32Thread + 16) = v23;
  Win32FreePool(v22);
  if ( v13 != (_DWORD)v6 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserGetLastError();
      LOBYTE(v20) = v19;
      LOBYTE(v21) = v7;
      WPP_RECORDER_AND_TRACE_SF_ddD(WPP_GLOBAL_Control->AttachedDevice, v21, v20, (_DWORD)gFullLog);
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v15);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v26);
  return v13;
}
