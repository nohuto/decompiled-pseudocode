/*
 * XREFs of KiSetNextClockTickDueTime @ 0x14022FD10
 * Callers:
 *     KiSetClockTimer @ 0x14022AC78 (KiSetClockTimer.c)
 *     KeClockInterruptNotify @ 0x14022CD80 (KeClockInterruptNotify.c)
 *     KePrepareNonClockOwnerForIdle @ 0x1402D4634 (KePrepareNonClockOwnerForIdle.c)
 *     KiCancelClockTimer @ 0x1402D94E4 (KiCancelClockTimer.c)
 *     KiRestoreClockTickRate @ 0x1402D9574 (KiRestoreClockTickRate.c)
 *     KiSetClockInterval @ 0x1403ACBC4 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x14056D814 (KiResetClockInterval.c)
 * Callees:
 *     KiSetClockTickRate @ 0x14022AF70 (KiSetClockTickRate.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSetNextClockTickDueTime(char a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rbx
  LARGE_INTEGER v6; // r15
  __int64 v7; // rbp
  LARGE_INTEGER PerformanceCounter; // rdx
  char v9; // r14
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int8 TypeFlags; // al
  __int64 v13; // r12
  int v14; // ebx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  unsigned int v21; // esi
  __int64 TolerableDelay; // rcx
  unsigned __int64 DueTime; // r8
  bool v24; // cf
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rcx
  unsigned int v27; // r9d
  unsigned int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned int v30; // edx
  char v31; // al
  unsigned __int64 v32; // r15
  char v33; // r8
  unsigned int TimeIncrement; // ebp
  char v35; // di
  struct _KPRCB *v36; // rcx
  signed __int32 *v37; // r8
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  unsigned int v41; // eax
  REGHANDLE v42; // rbx
  unsigned __int8 ClockOwner; // cl
  char v45; // [rsp+40h] [rbp-198h]
  unsigned __int8 v46; // [rsp+41h] [rbp-197h] BYREF
  char v47; // [rsp+42h] [rbp-196h] BYREF
  char v48; // [rsp+43h] [rbp-195h] BYREF
  char v49; // [rsp+44h] [rbp-194h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-190h]
  unsigned int v51; // [rsp+4Ch] [rbp-18Ch] BYREF
  unsigned int v52; // [rsp+50h] [rbp-188h] BYREF
  int v53; // [rsp+54h] [rbp-184h] BYREF
  unsigned int v54; // [rsp+58h] [rbp-180h] BYREF
  unsigned int v55; // [rsp+60h] [rbp-178h] BYREF
  int v56; // [rsp+68h] [rbp-170h] BYREF
  __int64 v57; // [rsp+70h] [rbp-168h]
  __int64 v58; // [rsp+78h] [rbp-160h] BYREF
  unsigned __int64 v59; // [rsp+80h] [rbp-158h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-150h] BYREF
  __int64 v61; // [rsp+90h] [rbp-148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-140h] BYREF
  int *v63; // [rsp+A8h] [rbp-130h]
  __int64 v64; // [rsp+B0h] [rbp-128h]
  char v65[32]; // [rsp+C0h] [rbp-118h] BYREF
  unsigned __int8 *v66; // [rsp+E0h] [rbp-F8h]
  __int64 v67; // [rsp+E8h] [rbp-F0h]
  unsigned int *v68; // [rsp+F0h] [rbp-E8h]
  __int64 v69; // [rsp+F8h] [rbp-E0h]
  unsigned int *v70; // [rsp+100h] [rbp-D8h]
  __int64 v71; // [rsp+108h] [rbp-D0h]
  char *v72; // [rsp+110h] [rbp-C8h]
  __int64 v73; // [rsp+118h] [rbp-C0h]
  char *v74; // [rsp+120h] [rbp-B8h]
  __int64 v75; // [rsp+128h] [rbp-B0h]
  int *v76; // [rsp+130h] [rbp-A8h]
  __int64 v77; // [rsp+138h] [rbp-A0h]
  unsigned int *v78; // [rsp+140h] [rbp-98h]
  __int64 v79; // [rsp+148h] [rbp-90h]
  __int64 *v80; // [rsp+150h] [rbp-88h]
  __int64 v81; // [rsp+158h] [rbp-80h]
  __int64 *v82; // [rsp+160h] [rbp-78h]
  __int64 v83; // [rsp+168h] [rbp-70h]
  unsigned __int64 *v84; // [rsp+170h] [rbp-68h]
  __int64 v85; // [rsp+178h] [rbp-60h]
  __int64 *v86; // [rsp+180h] [rbp-58h]
  __int64 v87; // [rsp+188h] [rbp-50h]
  char *v88; // [rsp+190h] [rbp-48h]
  __int64 v89; // [rsp+198h] [rbp-40h]
  unsigned int v90; // [rsp+1D0h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v3 = v90 >> 9;
  LOBYTE(v3) = (v90 & 0x200) != 0;
  v90 = v3;
  v4 = 0LL;
  while ( 1 )
  {
    v5 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v6.QuadPart = MEMORY[0xFFFFF78000000350];
      v7 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v5 )
        break;
    }
    _mm_pause();
  }
  v9 = a1;
  v10 = -1LL;
  if ( PerformanceCounter.QuadPart > (unsigned __int64)v6.QuadPart )
  {
    v57 = 0LL;
    v11 = -1 - v6.QuadPart + PerformanceCounter.QuadPart;
    if ( MEMORY[0xFFFFF78000000369] )
      v11 <<= MEMORY[0xFFFFF78000000369];
    v4 = ((unsigned __int64)v11 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v57 = v4;
  }
  TypeFlags = CurrentPrcb->ClockTimerState.ClockTimerEntries[0].TypeFlags;
  v13 = v4 + v7;
  v14 = 7;
  if ( (TypeFlags & 1) != 0
    && (a1 || (TypeFlags & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[0].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[0].TolerableDelay != -1LL )
  {
    v10 = CurrentPrcb->ClockTimerState.ClockTimerEntries[0].DueTime
        + CurrentPrcb->ClockTimerState.ClockTimerEntries[0].TolerableDelay;
    v14 = 0;
  }
  v15 = CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TypeFlags;
  if ( (v15 & 1) != 0
    && (a1 || (v15 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[1].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TolerableDelay < v10 )
  {
    v10 = CurrentPrcb->ClockTimerState.ClockTimerEntries[1].DueTime
        + CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TolerableDelay;
    v14 = 1;
  }
  v16 = CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TypeFlags;
  if ( (v16 & 1) != 0
    && (a1 || (v16 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[2].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TolerableDelay < v10 )
  {
    v10 = CurrentPrcb->ClockTimerState.ClockTimerEntries[2].DueTime
        + CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TolerableDelay;
    v14 = 2;
  }
  v17 = CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TypeFlags;
  if ( (v17 & 1) != 0
    && (a1 || (v17 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TolerableDelay < v10 )
  {
    v10 = CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime
        + CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TolerableDelay;
    v14 = 3;
  }
  v18 = CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TypeFlags;
  if ( (v18 & 1) != 0
    && (a1 || (v18 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[4].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TolerableDelay < v10 )
  {
    v10 = CurrentPrcb->ClockTimerState.ClockTimerEntries[4].DueTime
        + CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TolerableDelay;
    v14 = 4;
  }
  v19 = CurrentPrcb->ClockTimerState.ClockTimerEntries[5].TypeFlags;
  if ( (v19 & 1) != 0
    && (a1 || (v19 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[5].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[5].TolerableDelay < v10 )
  {
    v10 = CurrentPrcb->ClockTimerState.ClockTimerEntries[5].DueTime
        + CurrentPrcb->ClockTimerState.ClockTimerEntries[5].TolerableDelay;
    v14 = 5;
  }
  v20 = CurrentPrcb->ClockTimerState.ClockTimerEntries[6].TypeFlags;
  if ( (v20 & 1) != 0
    && (a1 || (v20 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[6].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[6].TolerableDelay < v10 )
  {
    v14 = 6;
  }
  v21 = KeMinimumIncrement;
  TolerableDelay = CurrentPrcb->ClockTimerState.ClockTimerEntries[v14].TolerableDelay;
  DueTime = CurrentPrcb->ClockTimerState.ClockTimerEntries[v14].DueTime;
  v24 = (unsigned int)TolerableDelay < KeMinimumIncrement;
  v25 = DueTime + TolerableDelay;
  v26 = DueTime + TolerableDelay;
  if ( !v24 )
    v26 -= (unsigned int)KeMinimumIncrement;
  if ( v26 > v13 + (unsigned __int64)(unsigned int)KeMinimumIncrement )
  {
    v27 = v26 - v13 + KeMinimumIncrement - 1;
    if ( KeMinimumIncrement == 5000 )
      v28 = v27 / 0x1388;
    else
      v28 = v27 / KeMinimumIncrement;
    v21 = v28 * KeMinimumIncrement;
  }
  if ( (qword_140D0C178 & 1) != 0 )
  {
    if ( qword_140D0C178 == 1 )
      v29 = 0LL;
    else
      v29 = qword_140D0C178 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v29 = qword_140D0C178;
  }
  v31 = 1;
  v50 = *(_DWORD *)(v29 + 28);
  v30 = v50;
  v45 = 1;
  v32 = v13 + v50;
  if ( DueTime <= v32 && v32 <= v25 )
  {
    v31 = 0;
    v21 = v50;
    v45 = 0;
  }
  v33 = 0;
  if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotRearmRequired
    && (v21 == CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement
     || v21 == CurrentPrcb->ClockTimerState.TimeIncrement) )
  {
    TimeIncrement = CurrentPrcb->ClockTimerState.TimeIncrement;
  }
  else
  {
    v41 = KiSetClockTickRate(v21, v31);
    v30 = v50;
    TimeIncrement = v41;
    v33 = 1;
  }
  CurrentPrcb->ClockTimerState.ExpectedWakeReason = v14;
  CurrentPrcb->ClockTimerState.NextTickDueTime = v13 + TimeIncrement;
  if ( (unsigned int)dword_140C02F28 > 5 )
  {
    ClockOwner = CurrentPrcb->ClockOwner;
    v35 = v45;
    v66 = &v46;
    v68 = &v51;
    v70 = &v52;
    v72 = &v47;
    v74 = &v48;
    v76 = &v53;
    v78 = &v54;
    v80 = &v58;
    v82 = (__int64 *)&v59;
    v84 = &v60;
    v86 = &v61;
    v88 = &v49;
    v59 = v25;
    v46 = ClockOwner;
    v48 = v33;
    v54 = v30;
    v67 = 1LL;
    v51 = v21;
    v69 = 4LL;
    v52 = TimeIncrement;
    v71 = 4LL;
    v47 = v45;
    v73 = 1LL;
    v75 = 1LL;
    v53 = v14;
    v77 = 4LL;
    v79 = 4LL;
    v58 = v13;
    v81 = 8LL;
    v83 = 8LL;
    v60 = v32;
    v85 = 8LL;
    v61 = v25 - v13;
    v87 = 8LL;
    v49 = v9;
    v89 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F28, word_14002D0FA, 0LL, 0LL, 14, v65);
  }
  else
  {
    v35 = v45;
  }
  if ( v35 )
  {
    v56 = 1397707336;
    v55 = TimeIncrement;
    if ( PopDiagHandleRegistered )
    {
      v42 = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_KERNEL_STRS_INTERNAL) )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v55;
        v64 = 4LL;
        v63 = &v56;
        EtwWriteEx(v42, &POP_ETW_EVENT_KERNEL_STRS_INTERNAL, 0LL, 0, 0LL, 0LL, 2u, &UserData);
      }
    }
  }
  if ( (_BYTE)v90 )
  {
    v36 = KeGetCurrentPrcb();
    v37 = (signed __int32 *)v36->SchedulerAssist;
    if ( v37 )
    {
      _m_prefetchw(v37);
      v39 = *v37;
      do
      {
        v40 = v39;
        v39 = _InterlockedCompareExchange(v37, v39 & 0xFFDFFFFF, v39);
      }
      while ( v40 != v39 );
      if ( (v39 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
    _enable();
  }
  return TimeIncrement;
}
