/*
 * XREFs of FreeTimer @ 0x1C003C040
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C003B554 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     DestroyWindowsTimers @ 0x1C003BD44 (DestroyWindowsTimers.c)
 *     DestroyThreadsTimers @ 0x1C003BDE0 (DestroyThreadsTimers.c)
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00E2B70 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1C011B3C4 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C011B7D0 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage @ 0x1C0139694 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C013AE70 (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01A5CC0 (--1AtomicExecutionCheck@@QEAA@XZ.c)
 */

struct tagTIMER *__fastcall FreeTimer(struct tagTIMER *a1)
{
  struct tagTIMER *v2; // rbx
  char *v3; // rdi
  struct tagTIMER *v4; // rbp
  char **v5; // rsi
  __int64 v6; // rcx
  char *v7; // rax
  char *v8; // rdi
  char **v9; // rsi
  __int64 v10; // rcx
  char *v11; // rax
  __int64 v13; // rdx
  struct tagTIMER **v14; // rcx
  __int64 v15; // rdx
  struct tagTIMER **v16; // rcx
  char v17; // [rsp+58h] [rbp+10h] BYREF
  char v18; // [rsp+60h] [rbp+18h] BYREF
  int v19; // [rsp+68h] [rbp+20h]

  if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage() )
  {
    IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v18, a1);
    *((_DWORD *)a1 + 12) |= 0x1000u;
    if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
      DecTimerCountAndClearReadyFlag(a1);
    if ( !(unsigned int)HMMarkObjectDestroy(a1) )
    {
      v2 = (struct tagTIMER *)*((_QWORD *)a1 + 9);
LABEL_19:
      IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v18);
      return v2;
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
    if ( !*((_QWORD *)a1 + 11) )
      _bittestandreset(gTimerId, *((_DWORD *)a1 + 24) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock((char *)a1 + 88);
    v3 = (char *)a1 + 72;
    v4 = (struct tagTIMER *)*((_QWORD *)a1 + 9);
    v5 = (char **)((char *)a1 + 80);
    if ( v4 == (struct tagTIMER *)((char *)a1 + 72) || *v5 == v3 )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5191LL);
    }
    v6 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) == v3 )
    {
      v7 = *v5;
      if ( *(char **)*v5 == v3 )
      {
        *(_QWORD *)v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        *v5 = v3;
        *(_QWORD *)v3 = v3;
        v8 = (char *)a1 + 112;
        v9 = (char **)((char *)a1 + 120);
        if ( *(char **)v8 == v8 || *v9 == v8 )
        {
          v19 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5191LL);
        }
        v10 = *(_QWORD *)v8;
        if ( *(char **)(*(_QWORD *)v8 + 8LL) == v8 )
        {
          v11 = *v9;
          if ( *(char **)*v9 == v8 )
          {
            *(_QWORD *)v11 = v10;
            *(_QWORD *)(v10 + 8) = v11;
            *v9 = v8;
            *(_QWORD *)v8 = v8;
            HMFreeObject(a1);
            AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
            v2 = v4;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_31:
    __fastfail(3u);
  }
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v17, a1);
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
    if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
      DecTimerCount(a1);
    v13 = *((_QWORD *)a1 + 9);
    if ( *(struct tagTIMER **)(v13 + 8) != (struct tagTIMER *)((char *)a1 + 72) )
      goto LABEL_31;
    v14 = (struct tagTIMER **)*((_QWORD *)a1 + 10);
    if ( *v14 != (struct tagTIMER *)((char *)a1 + 72) )
      goto LABEL_31;
    *v14 = (struct tagTIMER *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = *((_QWORD *)a1 + 14);
    if ( *(struct tagTIMER **)(v15 + 8) != (struct tagTIMER *)((char *)a1 + 112) )
      goto LABEL_31;
    v16 = (struct tagTIMER **)*((_QWORD *)a1 + 15);
    if ( *v16 != (struct tagTIMER *)((char *)a1 + 112) )
      goto LABEL_31;
    *v16 = (struct tagTIMER *)v15;
    *(_QWORD *)(v15 + 8) = v16;
    if ( !*((_QWORD *)a1 + 11) )
      _bittestandreset(gTimerId, *((_DWORD *)a1 + 24) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock((char *)a1 + 88);
    HMFreeObject(a1);
    AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  }
  IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v17);
  return 0LL;
}
