/*
 * XREFs of FreeTimer @ 0x1C000B6C0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000ADD4 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     DestroyWindowsTimers @ 0x1C000B4B8 (DestroyWindowsTimers.c)
 *     DestroyThreadsTimers @ 0x1C000B530 (DestroyThreadsTimers.c)
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C0167F2C (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagTIMER *__fastcall FreeTimer(struct tagTIMER *a1)
{
  int v1; // eax
  int v3; // eax
  __int64 *v5; // rdi
  struct tagTIMER *v6; // rsi
  __int64 v7; // rax
  __int64 **v8; // rcx
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 **v11; // rcx
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 12);
  if ( (v1 & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 224LL);
    v1 = *((_DWORD *)a1 + 12);
  }
  v3 = v1 | 0x1000;
  *((_DWORD *)a1 + 12) = v3;
  if ( (v3 & 1) != 0 )
    DecTimerCountAndClearReadyFlag(a1);
  if ( !(unsigned int)HMMarkObjectDestroy(a1) )
    return (struct tagTIMER *)*((_QWORD *)a1 + 9);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( !*((_QWORD *)a1 + 11) )
    _bittestandreset(gTimerId, *((_DWORD *)a1 + 24) - 256);
  EtwTraceKillTimer(a1);
  HMAssignmentUnlock((char *)a1 + 88);
  v5 = (__int64 *)((char *)a1 + 72);
  v6 = (struct tagTIMER *)*((_QWORD *)a1 + 9);
  if ( v6 == (struct tagTIMER *)((char *)a1 + 72) || (v7 = *((_QWORD *)a1 + 9), *((__int64 **)a1 + 10) == v5) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5970LL);
    v7 = *v5;
  }
  if ( *(__int64 **)(v7 + 8) != v5 )
    goto LABEL_20;
  v8 = (__int64 **)*((_QWORD *)a1 + 10);
  if ( *v8 != v5 )
    goto LABEL_20;
  *v8 = (__int64 *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  *((_QWORD *)a1 + 10) = v5;
  *v5 = (__int64)v5;
  v9 = (__int64 *)((char *)a1 + 112);
  v10 = *((_QWORD *)a1 + 14);
  if ( (struct tagTIMER *)v10 == (struct tagTIMER *)((char *)a1 + 112) || *((__int64 **)a1 + 15) == v9 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5970LL);
    v10 = *v9;
  }
  if ( *(__int64 **)(v10 + 8) != v9 || (v11 = (__int64 **)*((_QWORD *)a1 + 15), *v11 != v9) )
LABEL_20:
    __fastfail(3u);
  *v11 = (__int64 *)v10;
  *(_QWORD *)(v10 + 8) = v11;
  *((_QWORD *)a1 + 15) = v9;
  *v9 = (__int64)v9;
  HMFreeObject(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  return v6;
}
