/*
 * XREFs of NtUserKillTimer @ 0x1C011B3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00E2B70 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1C011B3C4 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C011B7D0 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage @ 0x1C0139694 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C013AE70 (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01A5CC0 (--1AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  PERESOURCE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD **v25; // r14
  _QWORD *i; // rdi
  _QWORD *v27; // rsi
  _QWORD *v28; // r15
  int v29; // eax
  __int64 CurrentProcessWin32Process; // rax
  int IsEnabledDeviceUsage; // eax
  _QWORD *v32; // rdx
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // r14
  _QWORD *v38; // r15
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // r14
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  int v44; // [rsp+A0h] [rbp+18h] BYREF
  char v45; // [rsp+A8h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  v9 = 0LL;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v4) + 8)
    || (v10 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v6, v5, v7, v8),
        !ExIsResourceAcquiredSharedLite(*v10)) )
  {
    v44 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v12, v11, v13);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( !a1 )
  {
    v18 = 0LL;
    goto LABEL_10;
  }
  v18 = ValidateHwnd(a1);
  if ( v18 )
  {
LABEL_10:
    v25 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v18)) & 0x3F));
    for ( i = *v25; ; i = (_QWORD *)*i )
    {
      if ( i == v25 )
        goto LABEL_8;
      v27 = i - 14;
      v28 = i - 3;
      if ( *v28 == v18 && v27[12] == a2 )
      {
        v29 = *((_DWORD *)v27 + 12);
        if ( (v29 & 0x1006) == 0 )
        {
          if ( (v29 & 0x40) != 0 )
            break;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
          v17 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
          {
            v16 = -*(_QWORD *)CurrentProcessWin32Process;
            v15 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            v17 = v15 & CurrentProcessWin32Process;
          }
          if ( v17 == *(_QWORD *)(v27[3] + 424LL) || !v18 && (v27[6] & 4) == 0 )
            break;
        }
      }
    }
    IsEnabledDeviceUsage = Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage();
    v32 = i - 14;
    if ( IsEnabledDeviceUsage )
    {
      IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v44, v32);
      *((_DWORD *)v27 + 12) |= 0x1000u;
      if ( (v27[6] & 1) != 0 )
        DecTimerCountAndClearReadyFlag((struct tagTIMER *)(i - 14));
      if ( !(unsigned int)HMMarkObjectDestroy(i - 14) )
        goto LABEL_50;
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v45);
      if ( !*v28 )
        _bittestandreset(gTimerId, *((_DWORD *)v27 + 24) - 256);
      EtwTraceKillTimer(i - 14);
      HMAssignmentUnlock(i - 3);
      v37 = v27 + 9;
      v38 = v27 + 10;
      if ( (_QWORD *)*v37 == v37 || (_QWORD *)*v38 == v37 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5191LL);
      v39 = (_QWORD *)*v37;
      if ( *(_QWORD **)(*v37 + 8LL) == v37 )
      {
        v40 = (_QWORD *)*v38;
        if ( *(_QWORD **)*v38 == v37 )
        {
          *v40 = v39;
          v39[1] = v40;
          *v38 = v37;
          *v37 = v37;
          v41 = i + 1;
          if ( (_QWORD *)*i == i || (_QWORD *)*v41 == i )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5191LL);
          v42 = (_QWORD *)*i;
          if ( *(_QWORD **)(*i + 8LL) == i )
          {
            v43 = (_QWORD *)*v41;
            if ( *(_QWORD **)*v41 == i )
            {
              *v43 = v42;
              v42[1] = v43;
              *v41 = i;
              *i = i;
LABEL_49:
              HMFreeObject(i - 14);
              AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v45);
              goto LABEL_50;
            }
          }
        }
      }
    }
    else
    {
      IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v44, v32);
      if ( !(unsigned int)HMMarkObjectDestroy(i - 14) )
      {
LABEL_50:
        IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v44);
        v9 = 1LL;
        goto LABEL_8;
      }
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v45);
      if ( (v27[6] & 1) != 0 )
        DecTimerCount((struct tagTIMER *)(i - 14));
      v33 = v27[9];
      if ( *(_QWORD **)(v33 + 8) == v27 + 9 )
      {
        v34 = (_QWORD *)v27[10];
        if ( (_QWORD *)*v34 == v27 + 9 )
        {
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          v35 = *i;
          if ( *(_QWORD **)(*i + 8LL) == i )
          {
            v36 = (_QWORD *)i[1];
            if ( (_QWORD *)*v36 == i )
            {
              *v36 = v35;
              *(_QWORD *)(v35 + 8) = v36;
              if ( !*v28 )
                _bittestandreset(gTimerId, *((_DWORD *)v27 + 24) - 256);
              EtwTraceKillTimer(i - 14);
              HMAssignmentUnlock(i - 3);
              goto LABEL_49;
            }
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_8:
  v19 = PsGetCurrentThreadWin32Thread(v16, v15, v17);
  --*(_DWORD *)(v19 + 48);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v9;
}
