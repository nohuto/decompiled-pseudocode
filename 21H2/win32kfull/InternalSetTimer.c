/*
 * XREFs of InternalSetTimer @ 0x1C0080820
 * Callers:
 *     _SetSystemTimer @ 0x1C002CAB8 (_SetSystemTimer.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0080450 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetTimer @ 0x1C0080680 (NtUserSetTimer.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0112224 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     SetRITTimer @ 0x1C0115170 (SetRITTimer.c)
 *     xxxSoundSentry @ 0x1C015DA30 (xxxSoundSentry.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C01677B8 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     _SetTimer @ 0x1C01EB288 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02359BC (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235A18 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0236E00 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C024825C (UserSetTimer.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C00FB5CC (-SetDelayableTimer@@YAXKK@Z.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0111E24 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C01686FC (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledDeviceUsage @ 0x1C0168894 (Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01D8654 (--1CAutoPushLockSh@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v17; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v19; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rbp
  unsigned int v22; // esi
  _QWORD **v23; // r14
  _QWORD *v24; // rdi
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rdx
  _QWORD *v31; // rdx
  char *v32; // rcx
  char *v33; // rax
  char **v34; // rdx
  _QWORD *v35; // rdi
  _DWORD *v36; // r14
  _QWORD *v37; // rsi
  int v38; // ecx
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // r9d
  unsigned int v42; // edx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  int v45; // r8d
  unsigned int v46; // r10d
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // r8d
  unsigned int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // ecx
  __int64 v53; // [rsp+28h] [rbp-50h]
  _QWORD *v54; // [rsp+30h] [rbp-48h]
  __int64 v55; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v56[2]; // [rsp+40h] [rbp-38h] BYREF

  if ( gbCleanupInitiated )
  {
    UserSetLastError(641LL, a2, a3);
    return 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = 10;
  if ( (unsigned int)a3 >= 0xA )
    v10 = a3;
  if ( v10 > 0x7FFFFFFF )
    v10 = 0x7FFFFFFF;
  v11 = 0LL;
  v53 = 0LL;
  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
  {
    CurrentProcess = PsGetCurrentProcess(v13, v12, v14);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v17);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
    {
LABEL_16:
      v21 = gptiRit;
      goto LABEL_17;
    }
    v11 = 0LL;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v11 = *ThreadWin32Thread;
    v53 = *ThreadWin32Thread;
  }
  v21 = v11;
  if ( !v11 || (a6 & 4) != 0 )
    goto LABEL_16;
  if ( a1 )
    v21 = *(_QWORD *)(a1 + 16);
LABEL_17:
  if ( a5 == -1 || !a5 && v21 && (*(_QWORD *)(v21 + 648) & 0x800000000LL) != 0 )
    v22 = a6 & 0xFFFFFDFF;
  else
    v22 = a6 | 0x200;
  v23 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  v24 = *v23;
  if ( *v23 == v23 )
  {
LABEL_33:
    if ( v21 && (*(_DWORD *)(v21 + 488) & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 927LL);
    }
    else
    {
      LOBYTE(v19) = 16;
      v27 = (_QWORD *)HMAllocObject(v21, 0LL, v19);
      v54 = v27;
      v25 = v27;
      if ( v27 )
      {
        v27[11] = 0LL;
        if ( a1 )
        {
          v27[12] = a2;
        }
        else
        {
          v29 = g_cTimerId;
          v28 = (unsigned int)g_cTimerId;
          while ( 1 )
          {
            g_cTimerId = --v29;
            v30 = (unsigned int)v29;
            if ( v29 < 0 )
            {
              v29 = 32511;
              g_cTimerId = 32511;
              v30 = 32511LL;
            }
            if ( !_bittestandset(gTimerId, v30) )
              break;
            if ( (_DWORD)v30 == (_DWORD)v28 )
            {
              UserSetLastError(8LL, v30, v28);
              HMFreeObject(v25);
              return 0LL;
            }
          }
          v27[12] = (int)v30 + 256;
        }
        v31 = v27 + 9;
        if ( *(_QWORD *)(gtmrListHead[0] + 8LL) != gtmrListHead[0]
          || (v27[10] = gtmrListHead[0],
              *v31 = gtmrListHead[0],
              *(_QWORD *)(gtmrListHead[0] + 8LL) = v31,
              v32 = (char *)(v27 + 14),
              gtmrListHead[0] = v27 + 9,
              v33 = (char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)v27[12]) & 0x3F),
              v34 = (char **)*((_QWORD *)v33 + 1),
              *v34 != v33) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v32 = v33;
        v25[15] = v34;
        *v34 = v32;
        *((_QWORD *)v33 + 1) = v32;
        if ( (unsigned int)Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledDeviceUsage(v32, v34, v28) )
        {
          v25[8] = v25 + 7;
          v25[7] = v25 + 7;
        }
        goto LABEL_58;
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    v25 = v24 - 14;
    if ( *(v24 - 3) == a1 && v25[12] == a2 )
    {
      v26 = *((unsigned int *)v25 + 12);
      if ( (((unsigned __int8)v22 ^ *((_BYTE *)v25 + 48)) & 6) == 0
        && (v26 & 0x1000) == 0
        && ((v26 & 0x40) != 0
         || PsGetCurrentProcessWin32Process(v26) == *(_QWORD *)(v25[3] + 424LL)
         || !a1 && (((unsigned __int8)v22 ^ *((_BYTE *)v25 + 48)) & 4) == 0) )
      {
        break;
      }
    }
    v24 = (_QWORD *)*v24;
    if ( v24 == v23 )
      goto LABEL_33;
  }
  v54 = v24 - 14;
  if ( (v25[6] & 1) != 0 )
    DecTimerCountAndClearReadyFlag((struct tagTIMER *)(v24 - 14));
  if ( v21 && v25[3] != v21 && (*(_DWORD *)(v21 + 488) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 993LL);
LABEL_58:
  v56[1] = a1;
  v56[0] = v25 + 11;
  HMAssignmentLock(v56);
  *((_DWORD *)v25 + 10) = v10;
  *((_DWORD *)v25 + 13) = v10;
  v25[4] = a4;
  v25[13] = 0LL;
  if ( (v22 & 0x200) != 0 )
    *((_DWORD *)v25 + 11) = a5;
  v35 = v54;
  *((_DWORD *)v54 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v22 & 0x80u) == 0 )
  {
    if ( (v22 & 0x100) != 0 )
      v25[13] = v53;
  }
  else
  {
    v22 &= ~0x80u;
  }
  v36 = v54 + 6;
  *((_DWORD *)v54 + 12) = v22 | 8;
  v37 = v54 + 3;
  v54[3] = v21;
  v38 = *(_DWORD *)(*(_QWORD *)(v21 + 424) + 1036LL);
  if ( v38 )
  {
    v39 = *((_DWORD *)v25 + 13) + v38;
    v40 = 0x7FFFFFFF;
    if ( v39 < 0x7FFFFFFF )
      v40 = v39;
    *((_DWORD *)v25 + 13) = v40;
  }
  EtwTraceInternalSetTimer(v54);
  if ( gbRITAlerted )
    goto LABEL_103;
  if ( gbTimersProcActive )
  {
    gbRITRescan = 1;
    goto LABEL_103;
  }
  v35 = v54;
  v41 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
  if ( (*v36 & 0x200) != 0 )
  {
    v42 = *((_DWORD *)v54 + 11);
    v43 = gCurrentTimerCoalescingTolerance;
    v44 = gCurrentTimerCoalescingTolerance;
    v45 = *((_DWORD *)v25 + 13);
    if ( v42 > gCurrentTimerCoalescingTolerance )
      v44 = *((_DWORD *)v54 + 11);
    if ( v45 + v44 >= 0x7FFFFFFF )
    {
      v46 = 0x7FFFFFFF;
    }
    else
    {
      if ( v42 > gCurrentTimerCoalescingTolerance )
        v43 = *((_DWORD *)v54 + 11);
      v46 = v45 + v43;
    }
    v47 = *(_DWORD *)(*(_QWORD *)(*v37 + 424LL) + 1040LL);
    if ( v47 )
    {
      v48 = v46 + v47;
      v46 = 0x7FFFFFFF;
      if ( v48 < 0x7FFFFFFF )
        v46 = v48;
    }
  }
  else
  {
    v46 = *((_DWORD *)v25 + 13);
  }
  v49 = gdmsNextTimer;
  if ( v41 <= gdmsNextTimer )
  {
    v50 = guNextCoalescableTimerDue;
    if ( v41 <= guNextCoalescableTimerDue && !*(_DWORD *)(*(_QWORD *)(*v37 + 424LL) + 1044LL) )
    {
      v51 = v46 + v41;
      if ( v46 + v41 >= v46 )
      {
        *v36 &= ~8u;
        *((_DWORD *)v25 + 13) += v41;
        v52 = *((_DWORD *)v25 + 13);
        if ( v49 > v52 )
          goto LABEL_90;
        if ( v50 <= v51 )
          goto LABEL_94;
        if ( v52 < v49 )
        {
LABEL_90:
          v49 = *((_DWORD *)v25 + 13);
          gdmsNextTimer = v49;
        }
        if ( v50 >= v51 )
        {
          v50 = v46 + v41;
          guNextCoalescableTimerDue = v46 + v41;
        }
        SetDelayableTimer(v49 - v41, v50 - v41);
      }
    }
  }
LABEL_94:
  if ( (*v36 & 8) != 0 )
  {
    CAutoPushLockSh::CAutoPushLockSh(
      (CAutoPushLockSh *)&v55,
      (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
    if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
    {
      KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
      CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)&v55);
      result = v54[12];
      gbRITAlerted = 1;
      if ( !result )
        return 1LL;
    }
    else
    {
      ExReleasePushLockSharedEx(v55, 0LL);
      KeLeaveCriticalRegion();
      gbRITAlerted = 0;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1137LL);
      result = v54[12];
      if ( !result )
        return 1LL;
    }
    return result;
  }
LABEL_103:
  result = v35[12];
  if ( !result )
    return 1LL;
  return result;
}
