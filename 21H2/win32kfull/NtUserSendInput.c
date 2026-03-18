/*
 * XREFs of NtUserSendInput @ 0x1C007EAF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007EDA8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     xxxSendInput @ 0x1C007EDD4 (xxxSendInput.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007F7CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C007F814 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     UserGetLastError @ 0x1C0113B5C (UserGetLastError.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddD @ 0x1C0203E34 (WPP_RECORDER_AND_TRACE_SF_ddD.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, void *a2, unsigned int a3)
{
  volatile void *v3; // r13
  __int64 v4; // r14
  char v5; // di
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  __int64 CurrentProcessWow64Process; // rax
  void *v11; // rax
  void *v12; // r13
  unsigned int v13; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  PDEVICE_OBJECT v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v20; // si
  int v21; // r8d
  int v22; // edx
  void *v23; // [rsp+70h] [rbp-68h]
  __int128 v24; // [rsp+80h] [rbp-58h] BYREF
  __int64 v25; // [rsp+90h] [rbp-48h]
  void *Src; // [rsp+E8h] [rbp+10h]
  unsigned int v27; // [rsp+F0h] [rbp+18h]
  char v28; // [rsp+F8h] [rbp+20h] BYREF

  v27 = a3;
  Src = a2;
  v3 = a2;
  v4 = a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(a2) = 0;
    v5 = 1;
  }
  else
  {
    v5 = 1;
    LOBYTE(a2) = 1;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dqd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, WPP_MAIN_CB.Queue.ListEntry.Flink);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v28,
    "SendInput",
    0LL);
  EnterCrit(0LL, 0LL);
  v24 = 0LL;
  v25 = 0LL;
  v9 = v27;
  if ( v27 != 40 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = v5;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        20,
        14,
        (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
        v27,
        40);
    }
    goto LABEL_24;
  }
  if ( !(_DWORD)v4 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = v5;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v7,
        v8,
        2,
        20,
        15,
        (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids);
    }
LABEL_24:
    v13 = 0;
    UserSetLastError(87LL, v9);
    goto LABEL_12;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
  ProbeForRead(v3, 40 * v4, CurrentProcessWow64Process != 0 ? 1 : 4);
  v11 = (void *)Win32AllocPoolWithQuotaZInit(40 * v4, 1769173845LL);
  v12 = v11;
  v23 = v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  memmove(v11, Src, 40 * v4);
  PushW32ThreadLock(v12, &v24, Win32FreePool);
  v13 = xxxSendInput((unsigned int)v4, v12);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(ThreadWin32Thread + 16) = v24;
  Win32FreePool(v23);
  if ( v13 != (_DWORD)v4 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserGetLastError(WPP_GLOBAL_Control, v15, v17, v18);
      LOBYTE(v21) = v20;
      LOBYTE(v22) = v5;
      WPP_RECORDER_AND_TRACE_SF_ddD(WPP_GLOBAL_Control->AttachedDevice, v22, v21, WPP_MAIN_CB.Queue.ListEntry.Flink);
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v16);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v28);
  return v13;
}
