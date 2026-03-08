/*
 * XREFs of InternalSetTimer @ 0x1C0061830
 * Callers:
 *     _SetSystemTimer @ 0x1C0006384 (_SetSystemTimer.c)
 *     _anonymous_namespace_::AppStarting_Set @ 0x1C003EF54 (_anonymous_namespace_--AppStarting_Set.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0061410 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetTimer @ 0x1C00616A0 (NtUserSetTimer.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C007933C (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     SetRITTimer @ 0x1C00793E0 (SetRITTimer.c)
 *     SetJournalTimer @ 0x1C01C19C8 (SetJournalTimer.c)
 *     _SetTimer @ 0x1C01C1BF4 (_SetTimer.c)
 *     xxxSoundSentry @ 0x1C01F73D8 (xxxSoundSentry.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0218490 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02184EC (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0219500 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C022FBB8 (UserSetTimer.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00DDC4C (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v6; // r12d
  char v7; // r14
  __int64 v9; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // r8
  __int64 v12; // r15
  unsigned int v13; // esi
  unsigned __int64 v14; // rdi
  _QWORD **v15; // r14
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rbx
  int v22; // ecx
  __int64 v23; // rdi
  int v24; // r11d
  unsigned int v25; // edx
  unsigned int v26; // r8d
  unsigned int v27; // eax
  int v28; // r9d
  unsigned int v29; // r10d
  int v30; // eax
  unsigned int v31; // r8d
  unsigned int v32; // r9d
  unsigned int v33; // ecx
  unsigned int v34; // r10d
  _QWORD *v36; // rcx
  char *v37; // rdx
  char *v38; // rcx
  char **v39; // rax
  signed int v40; // r8d
  unsigned int v41; // r9d
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r8
  int v45; // edx
  signed int v46; // ecx
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // [rsp+38h] [rbp-50h]
  _QWORD v51[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v52; // [rsp+98h] [rbp+10h]

  v52 = a2;
  v6 = a3;
  v7 = a2;
  if ( *(&WPP_MAIN_CB.ActiveThreadCount + 1) )
  {
    UserSetLastError(641);
    return 0LL;
  }
  if ( a3 < 0xA )
  {
    v6 = 10;
  }
  else if ( a3 > 0x7FFFFFFF )
  {
    v6 = 0x7FFFFFFF;
  }
  v9 = 0LL;
  v50 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v9 = *ThreadWin32Thread;
    v50 = *ThreadWin32Thread;
  }
  v12 = v9;
  if ( !v9 || (a6 & 4) != 0 )
  {
    v12 = gptiRit;
  }
  else if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 16);
  }
  if ( a5 == -1 || !a5 && v12 && _bittest64((const signed __int64 *)(v12 + 648), 0x23u) )
    v13 = a6 & 0xFFFFFDFF;
  else
    v13 = a6 | 0x200;
  v14 = a1 >> 8;
  v15 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + v7) & 0x3F));
  v16 = *v15;
  if ( *v15 == v15 )
  {
LABEL_56:
    if ( (*(_DWORD *)(v12 + 488) & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 898LL);
    }
    else
    {
      LOBYTE(v11) = 16;
      v21 = HMAllocObject(v12, 0LL, v11);
      if ( v21 )
      {
        *(_QWORD *)(v21 + 88) = 0LL;
        if ( a1 )
        {
LABEL_59:
          *(_QWORD *)(v21 + 96) = v52;
          v36 = (_QWORD *)(v21 + 72);
          if ( *(_QWORD *)(gtmrListHead + 8LL) != gtmrListHead
            || (*v36 = gtmrListHead,
                *(_QWORD *)(v21 + 80) = gtmrListHead,
                *(_QWORD *)(gtmrListHead + 8LL) = v36,
                v37 = (char *)(v21 + 112),
                gtmrListHead = v21 + 72,
                v38 = (char *)&gTimerHashTable
                    + 16 * (((unsigned __int8)v14 + (unsigned __int8)*(_DWORD *)(v21 + 96)) & 0x3F),
                v39 = (char **)*((_QWORD *)v38 + 1),
                *v39 != v38) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)v37 = v38;
          *(_QWORD *)(v21 + 120) = v39;
          *v39 = v37;
          *((_QWORD *)v38 + 1) = v37;
          goto LABEL_28;
        }
        v45 = g_cTimerId;
        v46 = g_cTimerId;
        do
        {
          g_cTimerId = --v46;
          if ( v46 < 0 )
          {
            g_cTimerId = 32511;
            v46 = 32511;
          }
          if ( !_bittestandset(gTimerId, v46) )
          {
            v52 = v46 + 256;
            goto LABEL_59;
          }
        }
        while ( v46 != v45 );
        UserSetLastError(8);
        HMFreeObject(v21);
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    v17 = v16 - 14;
    if ( *(v16 - 3) == a1 && v17[12] == v52 )
    {
      v18 = *((unsigned int *)v17 + 12);
      if ( (((unsigned __int8)v13 ^ *((_BYTE *)v17 + 48)) & 6) == 0 )
      {
        if ( (v18 & 0x40) != 0 )
          break;
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v18);
        v20 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
          v20 = 0LL;
        if ( v20 == *(_QWORD **)(v17[3] + 424LL) || !a1 && ((*((_BYTE *)v17 + 48) ^ (unsigned __int8)v13) & 4) == 0 )
          break;
      }
    }
    v16 = (_QWORD *)*v16;
    if ( v16 == v15 )
    {
      LOBYTE(v14) = BYTE1(a1);
      goto LABEL_56;
    }
  }
  if ( (v17[6] & 1) != 0 )
    DecTimerCount((struct tagTIMER *)(v16 - 14));
  v21 = (__int64)(v16 - 14);
  if ( v17[3] != v12 && (*(_DWORD *)(v12 + 488) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 961LL);
LABEL_28:
  v51[1] = a1;
  v51[0] = v21 + 88;
  HMAssignmentLock(v51, 0LL);
  *(_DWORD *)(v21 + 40) = v6;
  *(_DWORD *)(v21 + 52) = v6;
  *(_QWORD *)(v21 + 32) = a4;
  *(_QWORD *)(v21 + 104) = 0LL;
  if ( (v13 & 0x200) != 0 )
    *(_DWORD *)(v21 + 44) = a5;
  *(_DWORD *)(v21 + 128) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v13 & 0x80u) != 0 )
  {
    v13 &= ~0x80u;
  }
  else if ( (v13 & 0x100) != 0 )
  {
    *(_QWORD *)(v21 + 104) = v50;
  }
  *(_DWORD *)(v21 + 48) = v13 | 8;
  *(_QWORD *)(v21 + 24) = v12;
  v22 = *(_DWORD *)(*(_QWORD *)(v12 + 424) + 1020LL);
  if ( v22 )
  {
    v47 = *(_DWORD *)(v21 + 52) + v22;
    v48 = 0x7FFFFFFF;
    if ( v47 < 0x7FFFFFFF )
      v48 = v47;
    *(_DWORD *)(v21 + 52) = v48;
  }
  EtwTraceInternalSetTimer(v21);
  v23 = 1LL;
  if ( gbRITAlerted )
    goto LABEL_51;
  if ( !gbTimersProcActive )
  {
    v24 = *(_DWORD *)(v21 + 48);
    v25 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
    if ( (v24 & 0x200) != 0 )
    {
      v26 = *(_DWORD *)(v21 + 44);
      if ( v26 > gCurrentTimerCoalescingTolerance )
        v27 = *(_DWORD *)(v21 + 44);
      else
        v27 = gCurrentTimerCoalescingTolerance;
      v28 = *(_DWORD *)(v21 + 52);
      if ( v28 + v27 >= 0x7FFFFFFF )
      {
        v29 = 0x7FFFFFFF;
      }
      else
      {
        if ( v26 <= gCurrentTimerCoalescingTolerance )
          v26 = gCurrentTimerCoalescingTolerance;
        v29 = v28 + v26;
      }
      v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 24) + 424LL) + 1024LL);
      if ( v30 )
      {
        v49 = v29 + v30;
        v29 = 0x7FFFFFFF;
        if ( v49 < 0x7FFFFFFF )
          v29 = v49;
      }
    }
    else
    {
      v29 = *(_DWORD *)(v21 + 52);
    }
    v31 = gdmsNextTimer;
    if ( v25 > gdmsNextTimer )
      goto LABEL_50;
    v32 = guNextCoalescableTimerDue;
    if ( v25 > guNextCoalescableTimerDue )
      goto LABEL_50;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 24) + 424LL) + 1028LL) )
      goto LABEL_50;
    v33 = v29 + v25;
    if ( v29 + v25 < v29 )
      goto LABEL_50;
    *(_DWORD *)(v21 + 48) = v24 & 0xFFFFFFF7;
    v34 = v25 + *(_DWORD *)(v21 + 52);
    *(_DWORD *)(v21 + 52) = v34;
    if ( v34 < v31 )
      goto LABEL_65;
    if ( v32 <= v33 )
    {
LABEL_50:
      if ( (*(_DWORD *)(v21 + 48) & 8) != 0 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock, 0LL);
        if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
        {
          KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
          ExReleasePushLockSharedEx(&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock, 0LL, v44);
          KeLeaveCriticalRegion();
          gbRITAlerted = 1;
        }
        else
        {
          ExReleasePushLockSharedEx(&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock, 0LL, v43);
          KeLeaveCriticalRegion();
          gbRITAlerted = 0;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1105LL);
        }
      }
      goto LABEL_51;
    }
    if ( v34 < v31 )
    {
LABEL_65:
      v31 = v34;
      gdmsNextTimer = v34;
    }
    if ( v32 >= v33 )
    {
      v32 = v33;
      guNextCoalescableTimerDue = v33;
    }
    v40 = v31 - v25;
    v41 = v32 - v25;
    v42 = -10000LL * v40;
    if ( v40 == v41 )
      KeSetTimer(gptmrMaster, (LARGE_INTEGER)v42, 0LL);
    else
      KeSetCoalescableTimer(gptmrMaster, (LARGE_INTEGER)v42, 0, v41 - v40, 0LL);
    goto LABEL_50;
  }
  gbRITRescan = 1;
LABEL_51:
  if ( *(_QWORD *)(v21 + 96) )
    return *(_QWORD *)(v21 + 96);
  return v23;
}
