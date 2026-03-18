/*
 * XREFs of InternalSetTimer @ 0x1C0075120
 * Callers:
 *     SetDeepDelayableVisRITTimer @ 0x1C0074EF0 (SetDeepDelayableVisRITTimer.c)
 *     NtUserSetTimer @ 0x1C0074F50 (NtUserSetTimer.c)
 *     SetRITTimer @ 0x1C0078D60 (SetRITTimer.c)
 *     _SetSystemTimer @ 0x1C00C2F28 (_SetSystemTimer.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C00FF018 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     xxxSoundSentry @ 0x1C011B3AC (xxxSoundSentry.c)
 *     SetJournalTimer @ 0x1C01E5EC8 (SetJournalTimer.c)
 *     _SetTimer @ 0x1C01E60B0 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C022F1A4 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C022F200 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0230248 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C0243AE8 (UserSetTimer.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C0076474 (-SetDelayableTimer@@YAXKK@Z.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00FEB18 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C0103450 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01CEF78 (--1CAutoPushLockSh@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v9; // r13d
  __int64 v10; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbp
  unsigned int v15; // edi
  _QWORD **v16; // rsi
  _QWORD *i; // r14
  _QWORD *v18; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r11d
  unsigned int v23; // r9d
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  int v27; // r8d
  unsigned int v28; // r10d
  int v29; // eax
  unsigned int Flink; // r8d
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  __int64 result; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // r8
  char *v37; // rdx
  char *v38; // rcx
  char **v39; // rax
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // [rsp+20h] [rbp-58h]
  __int64 v48; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+30h] [rbp-48h]
  _QWORD v50[2]; // [rsp+40h] [rbp-38h] BYREF

  v6 = a2;
  if ( gbCleanupInitiated )
  {
    UserSetLastError(641LL, a2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 10;
    if ( a3 >= 0xA )
      v9 = a3;
    if ( v9 > 0x7FFFFFFF )
      v9 = 0x7FFFFFFF;
    v10 = 0LL;
    v47 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v10 = *ThreadWin32Thread;
      v47 = *ThreadWin32Thread;
    }
    v14 = v10;
    if ( !v10 || (a6 & 4) != 0 )
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
    v49 = a1 >> 8;
    v16 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)v6) & 0x3F));
    for ( i = *v16; i != v16; i = (_QWORD *)*i )
    {
      v18 = i - 14;
      if ( *(i - 3) == a1 && v18[12] == v6 )
      {
        v12 = *((unsigned int *)v18 + 12);
        if ( (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 6) == 0 )
        {
          if ( (v12 & 0x40) != 0
            || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12),
                v12 = v18[3],
                CurrentProcessWin32Process == *(_QWORD *)(v12 + 424))
            || !a1 && (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 4) == 0 )
          {
            if ( (v18[6] & 1) != 0 )
              DecTimerCount((struct tagTIMER *)(i - 14));
            v20 = v18[3];
            if ( v20 )
            {
              if ( v20 != v14 )
              {
                if ( (*(_DWORD *)(v14 + 488) & 1) == 0
                  || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v12), (*(_DWORD *)(v14 + 488) & 1) == 0) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
                }
              }
            }
            goto LABEL_28;
          }
        }
      }
    }
    if ( (*(_DWORD *)(v14 + 488) & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      return 0LL;
    }
    LOBYTE(v13) = 16;
    v35 = (_QWORD *)HMAllocObject(v14, 0LL, v13);
    v18 = v35;
    if ( !v35 )
      return 0LL;
    v35[11] = 0LL;
    if ( a1 )
    {
LABEL_58:
      v35[12] = v6;
      v36 = v35 + 9;
      if ( *(_QWORD *)(gtmrListHead[0] + 8LL) != gtmrListHead[0]
        || (v35[10] = gtmrListHead[0],
            *v36 = gtmrListHead[0],
            *(_QWORD *)(gtmrListHead[0] + 8LL) = v36,
            v37 = (char *)(v35 + 14),
            gtmrListHead[0] = v35 + 9,
            v38 = (char *)&gTimerHashTable
                + 16 * (((unsigned __int8)*((_DWORD *)v35 + 24) + (unsigned __int8)v49) & 0x3F),
            v39 = (char **)*((_QWORD *)v38 + 1),
            *v39 != v38) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v37 = v38;
      v18[15] = v39;
      *v39 = v37;
      *((_QWORD *)v38 + 1) = v37;
LABEL_28:
      v50[1] = a1;
      v50[0] = v18 + 11;
      HMAssignmentLock(v50, 0LL);
      *((_DWORD *)v18 + 10) = v9;
      *((_DWORD *)v18 + 13) = v9;
      v18[4] = a4;
      v18[13] = 0LL;
      if ( (v15 & 0x200) != 0 )
        *((_DWORD *)v18 + 11) = a5;
      *((_DWORD *)v18 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (v15 & 0x80u) != 0 )
      {
        v15 &= ~0x80u;
      }
      else if ( (v15 & 0x100) != 0 )
      {
        v18[13] = v47;
      }
      *((_DWORD *)v18 + 12) = v15 | 8;
      v18[3] = v14;
      v21 = *(_DWORD *)(*(_QWORD *)(v14 + 424) + 1036LL);
      if ( v21 )
      {
        v44 = *((_DWORD *)v18 + 13) + v21;
        v45 = 0x7FFFFFFF;
        if ( v44 < 0x7FFFFFFF )
          v45 = v44;
        *((_DWORD *)v18 + 13) = v45;
      }
      EtwTraceInternalSetTimer(v18);
      if ( !BYTE5(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      {
        if ( !BYTE4(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
        {
          v22 = *((_DWORD *)v18 + 12);
          v23 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
          if ( (v22 & 0x200) != 0 )
          {
            v24 = *((_DWORD *)v18 + 11);
            v25 = gCurrentTimerCoalescingTolerance;
            v26 = gCurrentTimerCoalescingTolerance;
            v27 = *((_DWORD *)v18 + 13);
            if ( v24 > gCurrentTimerCoalescingTolerance )
              v26 = *((_DWORD *)v18 + 11);
            if ( v27 + v26 >= 0x7FFFFFFF )
            {
              v28 = 0x7FFFFFFF;
            }
            else
            {
              if ( v24 > gCurrentTimerCoalescingTolerance )
                v25 = *((_DWORD *)v18 + 11);
              v28 = v27 + v25;
            }
            v29 = *(_DWORD *)(*(_QWORD *)(v18[3] + 424LL) + 1040LL);
            if ( v29 )
            {
              v46 = v28 + v29;
              v28 = 0x7FFFFFFF;
              if ( v46 < 0x7FFFFFFF )
                v28 = v46;
            }
          }
          else
          {
            v28 = *((_DWORD *)v18 + 13);
          }
          Flink = (unsigned int)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink;
          if ( v23 > LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
            goto LABEL_50;
          v31 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
          if ( v23 > *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
            goto LABEL_50;
          if ( *(_DWORD *)(*(_QWORD *)(v18[3] + 424LL) + 1044LL) )
            goto LABEL_50;
          v32 = v28 + v23;
          if ( v28 + v23 < v28 )
            goto LABEL_50;
          *((_DWORD *)v18 + 12) = v22 & 0xFFFFFFF7;
          *((_DWORD *)v18 + 13) += v23;
          v33 = *((_DWORD *)v18 + 13);
          if ( Flink > v33 )
            goto LABEL_64;
          if ( v31 <= v32 )
          {
LABEL_50:
            if ( (v18[6] & 8) != 0 )
            {
              CAutoPushLockSh::CAutoPushLockSh(
                (CAutoPushLockSh *)&v48,
                (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
              if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
              {
                KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
                CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)&v48);
                BYTE5(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 1;
              }
              else
              {
                ExReleasePushLockSharedEx(v48, 0LL);
                KeLeaveCriticalRegion();
                BYTE5(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v43);
              }
            }
            goto LABEL_51;
          }
          if ( v33 < Flink )
          {
LABEL_64:
            Flink = *((_DWORD *)v18 + 13);
            LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = Flink;
          }
          if ( v31 >= v32 )
          {
            v31 = v28 + v23;
            *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = v28 + v23;
          }
          SetDelayableTimer(Flink - v23, v31 - v23);
          goto LABEL_50;
        }
        *((_BYTE *)&WPP_MAIN_CB.DeviceQueue.Size + 2) = 1;
      }
LABEL_51:
      result = v18[12];
      if ( !result )
        return 1LL;
      return result;
    }
    v40 = g_cTimerId;
    v41 = g_cTimerId;
    do
    {
      g_cTimerId = --v40;
      v42 = (unsigned int)v40;
      if ( v40 < 0 )
      {
        v40 = 32511;
        v42 = 32511LL;
        g_cTimerId = 32511;
      }
      if ( !_bittestandset(gTimerId, v42) )
      {
        v6 = (int)v42 + 256;
        goto LABEL_58;
      }
    }
    while ( (_DWORD)v42 != v41 );
    UserSetLastError(8LL, v42);
    HMFreeObject(v18);
  }
  return 0LL;
}
