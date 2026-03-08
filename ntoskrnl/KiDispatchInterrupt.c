/*
 * XREFs of KiDispatchInterrupt @ 0x140255DA0
 * Callers:
 *     KiDpcInterrupt @ 0x14041E8C0 (KiDpcInterrupt.c)
 *     KiDpcInterruptBypass @ 0x14041EF90 (KiDpcInterruptBypass.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140239E10 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024CE30 (KiAbEntryGetLockedHeadEntry.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KeIsUserVaAccessAllowed @ 0x140256450 (KeIsUserVaAccessAllowed.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140282B80 (KiAbTryIncrementIoWaiterCounts.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     IoBoostThreadIoPriority @ 0x140356FD0 (IoBoostThreadIoPriority.c)
 *     KiAbIoBoostOwners @ 0x140357CB0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140357DB4 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140358150 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035822C (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14035827C (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140358338 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiSwapStacksAndRetireDpcList @ 0x14041F850 (KiSwapStacksAndRetireDpcList.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VslKernelShadowStackAssist @ 0x140549640 (VslKernelShadowStackAssist.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiDispatchInterrupt(unsigned __int8 a1, __int64 a2)
{
  __int16 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 CurrentPrcb; // rsi
  _KTHREAD *v6; // r14
  struct _KPRCB *v7; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 result; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 CurrentRunTime; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  bool v17; // zf
  struct _KPRCB *v18; // rcx
  signed __int32 *v19; // r8
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 p_AbSelfIoBoostsList; // r12
  int v23; // ecx
  unsigned int v24; // r13d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  char v29; // cl
  int v30; // r15d
  __int128 *LockedHeadEntry; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  char v34; // r14
  char v35; // al
  char v36; // dl
  int v37; // r10d
  char CpuPriorityKey; // r12
  __int64 v39; // r14
  _DWORD *v40; // rbx
  __int64 ExtensionTable; // rax
  _QWORD *i; // rcx
  volatile signed __int16 *v43; // rbx
  _KTHREAD *v44; // rbx
  char IsUserVaAccessAllowed; // di
  __int64 v46; // r8
  signed __int32 v47[8]; // [rsp+0h] [rbp-89h] BYREF
  _QWORD *v48; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v49; // [rsp+48h] [rbp-41h] BYREF
  _SINGLE_LIST_ENTRY *v50; // [rsp+50h] [rbp-39h]
  _KTHREAD *v51; // [rsp+58h] [rbp-31h]
  struct _KPRCB *v52; // [rsp+60h] [rbp-29h]
  unsigned __int64 v53; // [rsp+68h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v54; // [rsp+70h] [rbp-19h] BYREF
  __int128 v55; // [rsp+88h] [rbp-1h]
  int v56; // [rsp+F0h] [rbp+67h] BYREF
  int v57; // [rsp+F8h] [rbp+6Fh] BYREF
  int v58; // [rsp+100h] [rbp+77h]
  int v59; // [rsp+108h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    v3 = *(_WORD *)(a2 + 368);
    v4 = *(_QWORD *)(a2 + 360);
    if ( v3 == 51 )
    {
      if ( v4 > qword_140D1F378 && v4 <= qword_140D1F368 )
        *(_QWORD *)(a2 + 360) = qword_140D1F378;
    }
    else if ( v3 == 16
           && v4 > (unsigned __int64)&ExpInterlockedPopEntrySListResume
           && v4 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
    {
      *(_QWORD *)(a2 + 360) = &ExpInterlockedPopEntrySListResume;
      if ( (_BYTE)KiKernelCetEnabled )
        VslKernelShadowStackAssist(3, *(_QWORD *)(a2 + 216), 0, 0, (__int64)&ExpInterlockedPopEntrySListResume, 4);
    }
  }
  _disable();
  CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
  v6 = *(_KTHREAD **)(CurrentPrcb + 8);
  v51 = v6;
  v6->WaitIrql = a1;
  if ( (*(_BYTE *)(CurrentPrcb + 13244) & 0xBF) != 0 )
    KiSwapStacksAndRetireDpcList(CurrentPrcb, *(_QWORD *)(CurrentPrcb + 13216));
  v7 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v7->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v9 = *SchedulerAssist;
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
    }
    while ( v10 != v9 );
    if ( (v9 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v7);
  }
  _enable();
  result = *(unsigned __int8 *)(CurrentPrcb + 13241);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(CurrentPrcb + 13241) = 0;
    return KiQuantumEnd();
  }
  if ( *(_QWORD *)(CurrentPrcb + 16) )
  {
    if ( (v6->Header.Size & 4) == 0 || (result = KiDeferGroupSchedulingPreemption(v6, CurrentPrcb), !(_BYTE)result) )
    {
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v12 = __rdtsc();
      v13 = v12 - *(_QWORD *)(CurrentPrcb + 33152);
      v6->CycleTime += v13;
      CurrentRunTime = v6->CurrentRunTime;
      v15 = v13 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v12;
      v16 = (v15 >> 16) + CurrentRunTime;
      if ( v16 > 0xFFFFFFFF )
        LODWORD(v16) = -1;
      v17 = (v6->Header.Size & 0xBE) == 0;
      v6->CurrentRunTime = v16;
      if ( !v17 )
      {
        LOBYTE(v12) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v6, v13, v12);
      }
      v18 = KeGetCurrentPrcb();
      v19 = (signed __int32 *)v18->SchedulerAssist;
      if ( v19 )
      {
        _m_prefetchw(v19);
        v20 = *v19;
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange(v19, v20 & 0xFFDFFFFF, v20);
        }
        while ( v21 != v20 );
        if ( (v20 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
      _enable();
      if ( (v6->AbEntrySummary | v6->AbOrphanedEntrySummary) == 0x3F )
        goto LABEL_87;
      v52 = KeGetCurrentPrcb();
      v49 = 0LL;
      p_AbSelfIoBoostsList = (__int64)&v52->AbSelfIoBoostsList;
      v48 = 0LL;
      v23 = v6->AbEntrySummary | v6->AbOrphanedEntrySummary;
      v50 = &v52->AbSelfIoBoostsList;
      v58 = 0;
      if ( v23 == 63 )
        goto LABEL_86;
      v24 = (v6->AbEntrySummary | v6->AbOrphanedEntrySummary) ^ 0x3F;
      v17 = !_BitScanForward((unsigned int *)&v25, v24);
      v58 = v25;
      if ( v17 )
        goto LABEL_86;
      while ( 1 )
      {
        v24 &= v24 - 1;
        v26 = 96 * v25;
        v27 = (__int64)&v6[1].Process + v26;
        v55 = 0LL;
        v28 = *(_QWORD *)v27;
        *(_QWORD *)&v55 = v28;
        if ( !v28 || (v28 & 2) != 0 || (v28 & 1) != 0 )
          goto LABEL_81;
        if ( v28 < 0 )
        {
          if ( (*(_BYTE *)(v27 + 19) & 1) != 0 )
            goto LABEL_81;
          if ( *(_BYTE *)(v27 + 17) )
          {
            v29 = *(_BYTE *)(v27 - 96LL * *(unsigned __int8 *)(v27 + 16) - 1501);
            if ( v29 > 30 )
              v29 = 30;
            if ( v29 == *(_BYTE *)(v27 + 48) )
              goto LABEL_81;
          }
          else if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey((char *)&v6[1].Process + v26) == *(_BYTE *)(v27 + 48) )
          {
            goto LABEL_81;
          }
        }
        v30 = 0;
        v56 = 0;
        memset(&v54, 0, sizeof(v54));
        v57 = 0;
        LockedHeadEntry = KiAbEntryGetLockedHeadEntry((__int128 *)v27, 1, &v54);
        v32 = (__int64)LockedHeadEntry;
        if ( LockedHeadEntry )
        {
          if ( *(_BYTE *)(v27 + 17) )
          {
            if ( (__int128 *)v27 != LockedHeadEntry )
              KiAbEntryUpdateWaiterTreePosition(v27, LockedHeadEntry);
            v33 = *(_QWORD *)(v32 + 56);
            if ( v33 )
              v34 = *(_BYTE *)(v33 + 24);
            else
              v34 = 30;
            LOBYTE(v56) = v34;
            if ( !*(_BYTE *)(v32 + 17) )
            {
              v35 = KiAbOwnerComputeCpuPriorityKey(v32);
              v36 = v34;
              if ( v35 < v34 )
                v36 = v35;
              v34 = v36;
              LOBYTE(v56) = v36;
            }
            KiAbTryIncrementIoWaiterCounts(v27, v32);
            CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v27);
            if ( v34 < CpuPriorityKey )
            {
              if ( v37 )
              {
LABEL_69:
                v39 = (__int64)v50;
                KiAbIoBoostOwners(v32, v37, (unsigned int)&v49, (unsigned int)&v48, (__int64)v50);
              }
              else
              {
                v39 = (__int64)v50;
              }
              KiAbCpuBoostOwners(v32, (unsigned __int8)CpuPriorityKey, (unsigned int)&v49, (unsigned int)&v48, v39);
              v6 = v51;
              p_AbSelfIoBoostsList = (__int64)v50;
LABEL_72:
              KxReleaseQueuedSpinLock(&v54);
              if ( v30 )
              {
                v40 = (_DWORD *)(v27 - 96LL * *(unsigned __int8 *)(v27 + 16) - 1696);
                if ( ObReferenceObjectSafeWithTag((__int64)v40) )
                {
                  if ( (v30 & 1) != 0 )
                    IoBoostThreadIoPriority(v40, 2LL, 0x80000000LL);
                  if ( (v30 & 2) != 0 )
                  {
                    if ( v40[362] )
                    {
                      ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                      if ( ExtensionTable )
                      {
                        (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v40);
                        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                      }
                    }
                  }
                  ObDereferenceObjectDeferDeleteWithTag(v40, 0x746C6644u);
                }
              }
              goto LABEL_81;
            }
            if ( v37 )
              goto LABEL_69;
            v6 = v51;
            p_AbSelfIoBoostsList = (__int64)v50;
          }
          else
          {
            if ( (__int128 *)v27 != LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition(v27, LockedHeadEntry);
            KiAbDetermineMaxWaiterPriority(v32, (__int64)&v56);
            if ( v56 )
            {
              if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                   v27,
                                   (unsigned int)&v56,
                                   (unsigned int)&v49,
                                   (unsigned int)&v48,
                                   p_AbSelfIoBoostsList,
                                   (__int64)&v57)
                && v27 != v32 )
              {
                KiAbEntryUpdateOwnerTreePosition(v27, v32);
              }
              v30 = v57;
              goto LABEL_72;
            }
          }
          KxReleaseQueuedSpinLock(&v54);
        }
LABEL_81:
        v17 = !_BitScanForward((unsigned int *)&v25, v24);
        v58 = v25;
        if ( v17 )
        {
          for ( i = v48; v48; i = v48 )
          {
            v43 = (volatile signed __int16 *)(i - 101);
            v48 = (_QWORD *)*i;
            *i = 1LL;
            _InterlockedOr(v47, 0);
            if ( *((_BYTE *)i - 15) )
              KiAbProcessThreadLocks((__int64)(i - 101), 0, 1, 0, (__int64)&v49, (__int64)&v48, p_AbSelfIoBoostsList);
            _InterlockedDecrement16(v43 + 434);
          }
LABEL_86:
          KiReadyDeferredReadyList((__int64)v52, &v49);
LABEL_87:
          v59 = 0;
          v53 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
          {
            do
              KeYieldProcessorEx(&v59);
            while ( *(_QWORD *)(CurrentPrcb + 48) );
          }
          v44 = *(_KTHREAD **)(CurrentPrcb + 16);
          *(_QWORD *)(CurrentPrcb + 16) = 0LL;
          *(_QWORD *)(CurrentPrcb + 8) = v44;
          if ( v44->WaitBlockFill6[68] == 1 )
            v44->ReadyTime = v44->ReadyTime - v44->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
          v44->WaitBlockFill6[68] = 2;
          v6->WaitReason = 31;
          KiQueueReadyThread(CurrentPrcb, &v53, v6);
          IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
          if ( KeSmapEnabled )
            __asm { stac }
          LOBYTE(v46) = 1;
          result = KiSwapContext(v6, v44, v46);
          if ( !IsUserVaAccessAllowed && KeSmapEnabled )
            __asm { clac }
          return result;
        }
      }
    }
  }
  return result;
}
