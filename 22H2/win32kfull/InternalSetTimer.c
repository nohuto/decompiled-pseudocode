/*
 * XREFs of InternalSetTimer @ 0x1C00E6510
 * Callers:
 *     _SetSystemTimer @ 0x1C0006474 (_SetSystemTimer.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C003CDCC (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     SetRITTimer @ 0x1C003CE70 (SetRITTimer.c)
 *     _anonymous_namespace_::AppStarting_Set @ 0x1C00E5CB4 (_anonymous_namespace_--AppStarting_Set.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00E6080 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetTimer @ 0x1C00E6310 (NtUserSetTimer.c)
 *     SetJournalTimer @ 0x1C01C0868 (SetJournalTimer.c)
 *     _SetTimer @ 0x1C01C0A94 (_SetTimer.c)
 *     xxxSoundSentry @ 0x1C01F6208 (xxxSoundSentry.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02158D0 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C021592C (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0216940 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C022CE98 (UserSetTimer.c)
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00AC2EC (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00E2B70 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage @ 0x1C0139694 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C013AE70 (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C014F272 (--1CAutoPushLockSh@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r8
  __int64 v14; // r15
  unsigned int v15; // esi
  unsigned __int64 v16; // rdi
  _QWORD **v17; // r14
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  int IsEnabledDeviceUsage; // eax
  struct tagTIMER *v23; // rcx
  __int64 v24; // rbx
  int v25; // edx
  signed int v26; // ecx
  _QWORD *v27; // rcx
  char *v28; // rdx
  char *v29; // rcx
  char **v30; // rax
  int v31; // ecx
  unsigned int v32; // ecx
  int v33; // eax
  int v34; // r11d
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned int v37; // ecx
  unsigned int v38; // eax
  int v39; // r9d
  unsigned int v40; // r10d
  int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // r8d
  unsigned int v44; // r9d
  unsigned int v45; // ecx
  unsigned int v46; // r10d
  signed int v47; // r8d
  unsigned int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // [rsp+38h] [rbp-50h]
  _QWORD v52[2]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v53[2]; // [rsp+50h] [rbp-38h] BYREF

  if ( HIDWORD(WPP_MAIN_CB.SecurityDescriptor) )
  {
    UserSetLastError(641LL);
    return 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = 10;
  if ( a3 >= 0xA )
    v10 = a3;
  if ( v10 > 0x7FFFFFFF )
    v10 = 0x7FFFFFFF;
  v11 = 0LL;
  v51 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v11 = *ThreadWin32Thread;
    v51 = *ThreadWin32Thread;
  }
  v14 = v11;
  if ( !v11 || (a6 & 4) != 0 )
  {
    v14 = gptiRit;
  }
  else if ( a1 )
  {
    v14 = *(_QWORD *)(a1 + 16);
  }
  if ( a5 == -1 || !a5 && v14 && _bittest64((const signed __int64 *)(v14 + 648), 0x23u) )
    v15 = a6 & 0xFFFFFDFF;
  else
    v15 = a6 | 0x200;
  v16 = a1 >> 8;
  v17 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  v18 = *v17;
  if ( *v17 == v17 )
  {
LABEL_34:
    if ( (*(_DWORD *)(v14 + 488) & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1014LL);
    }
    else
    {
      LOBYTE(v13) = 16;
      v24 = HMAllocObject(v14, 0LL, v13);
      if ( v24 )
      {
        *(_QWORD *)(v24 + 88) = 0LL;
        if ( !a1 )
        {
          v25 = g_cTimerId;
          v26 = g_cTimerId;
          while ( 1 )
          {
            g_cTimerId = --v26;
            if ( v26 < 0 )
            {
              g_cTimerId = 32511;
              v26 = 32511;
            }
            if ( !_bittestandset(gTimerId, v26) )
              break;
            if ( v26 == v25 )
            {
              UserSetLastError(8LL);
              HMFreeObject(v24);
              return 0LL;
            }
          }
          a2 = v26 + 256;
        }
        *(_QWORD *)(v24 + 96) = a2;
        v27 = (_QWORD *)(v24 + 72);
        if ( *(_QWORD *)(gtmrListHead + 8LL) != gtmrListHead
          || (*v27 = gtmrListHead,
              *(_QWORD *)(v24 + 80) = gtmrListHead,
              *(_QWORD *)(gtmrListHead + 8LL) = v27,
              v28 = (char *)(v24 + 112),
              gtmrListHead = v24 + 72,
              v29 = (char *)&gTimerHashTable
                  + 16 * (((unsigned __int8)v16 + (unsigned __int8)*(_DWORD *)(v24 + 96)) & 0x3F),
              v30 = (char **)*((_QWORD *)v29 + 1),
              *v30 != v29) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v28 = v29;
        *(_QWORD *)(v24 + 120) = v30;
        *v30 = v28;
        *((_QWORD *)v29 + 1) = v28;
        if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage() )
        {
          *(_QWORD *)(v24 + 64) = v24 + 56;
          *(_QWORD *)(v24 + 56) = v24 + 56;
        }
        goto LABEL_58;
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    v19 = v18 - 14;
    if ( *(v18 - 3) == a1 && v19[12] == a2 )
    {
      v20 = *((unsigned int *)v19 + 12);
      if ( (((unsigned __int8)v15 ^ *((_BYTE *)v19 + 48)) & 6) == 0 && (v20 & 0x1000) == 0 )
      {
        if ( (v20 & 0x40) != 0 )
          break;
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v20);
        if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
          CurrentProcessWin32Process = 0LL;
        if ( CurrentProcessWin32Process == *(_QWORD **)(v19[3] + 424LL)
          || !a1 && ((*((_BYTE *)v19 + 48) ^ (unsigned __int8)v15) & 4) == 0 )
        {
          break;
        }
      }
    }
    v18 = (_QWORD *)*v18;
    if ( v18 == v17 )
    {
      LOBYTE(v16) = BYTE1(a1);
      goto LABEL_34;
    }
  }
  if ( (v19[6] & 1) != 0 )
  {
    IsEnabledDeviceUsage = Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage();
    v23 = (struct tagTIMER *)(v18 - 14);
    if ( IsEnabledDeviceUsage )
      DecTimerCountAndClearReadyFlag(v23);
    else
      DecTimerCount(v23);
  }
  v24 = (__int64)(v18 - 14);
  if ( v19[3] != v14 && (*(_DWORD *)(v14 + 488) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1084LL);
LABEL_58:
  v53[1] = a1;
  v53[0] = v24 + 88;
  HMAssignmentLock(v53, 0LL);
  *(_DWORD *)(v24 + 40) = v10;
  *(_DWORD *)(v24 + 52) = v10;
  *(_QWORD *)(v24 + 32) = a4;
  *(_QWORD *)(v24 + 104) = 0LL;
  if ( (v15 & 0x200) != 0 )
    *(_DWORD *)(v24 + 44) = a5;
  *(_DWORD *)(v24 + 128) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v15 & 0x80u) == 0 )
  {
    if ( (v15 & 0x100) != 0 )
      *(_QWORD *)(v24 + 104) = v51;
  }
  else
  {
    v15 &= ~0x80u;
  }
  *(_DWORD *)(v24 + 48) = v15 | 8;
  *(_QWORD *)(v24 + 24) = v14;
  v31 = *(_DWORD *)(*(_QWORD *)(v14 + 424) + 1044LL);
  if ( v31 )
  {
    v32 = *(_DWORD *)(v24 + 52) + v31;
    v33 = 0x7FFFFFFF;
    if ( v32 < 0x7FFFFFFF )
      v33 = v32;
    *(_DWORD *)(v24 + 52) = v33;
  }
  EtwTraceInternalSetTimer(v24);
  if ( gbRITAlerted )
    goto LABEL_105;
  if ( gbTimersProcActive )
  {
    gbRITRescan = 1;
    goto LABEL_105;
  }
  v34 = *(_DWORD *)(v24 + 48);
  v35 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
  if ( (v34 & 0x200) != 0 )
  {
    v36 = *(_DWORD *)(v24 + 44);
    v37 = gCurrentTimerCoalescingTolerance;
    v38 = gCurrentTimerCoalescingTolerance;
    v39 = *(_DWORD *)(v24 + 52);
    if ( v36 > gCurrentTimerCoalescingTolerance )
      v38 = *(_DWORD *)(v24 + 44);
    if ( v39 + v38 >= 0x7FFFFFFF )
    {
      v40 = 0x7FFFFFFF;
    }
    else
    {
      if ( v36 > gCurrentTimerCoalescingTolerance )
        v37 = *(_DWORD *)(v24 + 44);
      v40 = v39 + v37;
    }
    v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 24) + 424LL) + 1048LL);
    if ( v41 )
    {
      v42 = v40 + v41;
      v40 = 0x7FFFFFFF;
      if ( v42 < 0x7FFFFFFF )
        v40 = v42;
    }
  }
  else
  {
    v40 = *(_DWORD *)(v24 + 52);
  }
  v43 = gdmsNextTimer;
  if ( v35 <= gdmsNextTimer )
  {
    v44 = guNextCoalescableTimerDue;
    if ( v35 <= guNextCoalescableTimerDue && !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 24) + 424LL) + 1052LL) )
    {
      v45 = v40 + v35;
      if ( v40 + v35 >= v40 )
      {
        *(_DWORD *)(v24 + 48) = v34 & 0xFFFFFFF7;
        v46 = v35 + *(_DWORD *)(v24 + 52);
        *(_DWORD *)(v24 + 52) = v46;
        if ( v46 < v43 )
          goto LABEL_90;
        if ( v44 <= v45 )
          goto LABEL_96;
        if ( v46 < v43 )
        {
LABEL_90:
          v43 = v46;
          gdmsNextTimer = v46;
        }
        if ( v44 >= v45 )
        {
          v44 = v45;
          guNextCoalescableTimerDue = v45;
        }
        v47 = v43 - v35;
        v48 = v44 - v35;
        v49 = -10000LL * v47;
        if ( v47 == v48 )
          KeSetTimer(gptmrMaster, (LARGE_INTEGER)v49, 0LL);
        else
          KeSetCoalescableTimer(gptmrMaster, (LARGE_INTEGER)v49, 0, v48 - v47, 0LL);
      }
    }
  }
LABEL_96:
  if ( (*(_DWORD *)(v24 + 48) & 8) != 0 )
  {
    CAutoPushLockSh::CAutoPushLockSh(
      (CAutoPushLockSh *)v52,
      (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
    if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
    {
      KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
      CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)v52);
      result = *(_QWORD *)(v24 + 96);
      gbRITAlerted = 1;
      if ( !result )
        return 1LL;
    }
    else
    {
      ExReleasePushLockSharedEx(v52[0], 0LL, v50);
      KeLeaveCriticalRegion();
      gbRITAlerted = 0;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1228LL);
      result = *(_QWORD *)(v24 + 96);
      if ( !result )
        return 1LL;
    }
    return result;
  }
LABEL_105:
  result = *(_QWORD *)(v24 + 96);
  if ( !result )
    return 1LL;
  return result;
}
