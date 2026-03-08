/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x14056AE2C
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x14045DEE0 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KiAbProcessContextSwitch @ 0x140239508 (KiAbProcessContextSwitch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiRequestSoftwareInterrupt @ 0x1402B7A24 (KiRequestSoftwareInterrupt.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14035867C (KiCaptureTotalCyclesCurrentThread.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x140458D70 (KeCheckAndApplyBamQos.c)
 *     KiSetThreadQosLevelUnsafe @ 0x14045A058 (KiSetThreadQosLevelUnsafe.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x14056B928 (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056C0C8 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140576224 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     EtwTraceXSchedulerPriorityKickReceive @ 0x1405FB3E4 (EtwTraceXSchedulerPriorityKickReceive.c)
 */

void __fastcall KeSetThreadSchedulerAssist(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 CurrentIrql; // rbx
  _DWORD *v6; // r9
  int v7; // eax
  __int64 v8; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG_PTR CurrentThread; // r13
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r8d
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int8 v18; // al
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  __int64 NextThread; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r8d
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // r13
  _DWORD *v32; // r9
  int v33; // eax
  struct _KPRCB *v34; // r15
  int v35; // eax
  int v36; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  unsigned int ProcessorCount; // ecx
  struct _KPRCB **Prcbs; // rdx
  __int64 v40; // r8
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  __int64 v45; // rcx
  _DWORD *v46; // r9
  int v47; // eax
  __int64 v48; // rdx
  char v49; // al
  char v50; // al
  char v51; // cl
  unsigned int v52; // edx
  char v53; // dl
  char v54; // cl
  volatile signed __int32 *v55; // rbx
  char v56; // al
  __int64 v57; // rax
  bool v58; // zf
  __int64 v59; // r13
  __int64 v60; // r13
  __int64 v61; // rax
  struct _KPRCB *v62; // r13
  __int64 v63; // rbx
  _KTHREAD *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  ULONG_PTR v68; // r8
  unsigned __int8 v69; // r13
  __int64 v70; // rdx
  __int64 v71; // rbx
  unsigned int v72; // r8d
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // rcx
  _DWORD *v75; // rdx
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // rcx
  _DWORD *v78; // rdx
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // r9
  _DWORD *v81; // r8
  int v82; // eax
  __int64 v83; // [rsp+30h] [rbp-50h] BYREF
  __int64 v84; // [rsp+38h] [rbp-48h] BYREF
  _QWORD *v85; // [rsp+40h] [rbp-40h] BYREF
  int v86; // [rsp+48h] [rbp-38h] BYREF
  int v87; // [rsp+4Ch] [rbp-34h] BYREF
  int v88; // [rsp+50h] [rbp-30h] BYREF
  __int64 v89; // [rsp+58h] [rbp-28h]
  __int64 v90; // [rsp+60h] [rbp-20h] BYREF
  __int64 v91; // [rsp+68h] [rbp-18h] BYREF
  __int64 v92; // [rsp+70h] [rbp-10h] BYREF
  struct _KPRCB *v93; // [rsp+78h] [rbp-8h] BYREF
  int v94; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v95; // [rsp+D8h] [rbp+58h] BYREF

  v3 = 0LL;
  v85 = 0LL;
  v94 = 0;
  v83 = 0LL;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      if ( a3 == 2 || a3 == 3 )
      {
        if ( (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
          EtwTraceXSchedulerPriorityKickReceive(BugCheckParameter1, a3);
        CurrentIrql = KeGetCurrentIrql();
        v95 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v23 = 4;
          if ( (_BYTE)CurrentIrql != 2 )
            v23 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v23;
        }
        v86 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v86);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1);
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v85);
        v91 = 0LL;
        if ( (unsigned __int8)CurrentIrql < 2u )
        {
          CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
            KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v91);
            NextThread = (__int64)CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, CurrentThread, v25, v26);
            KiUpdatePriorityMatrixForRunningTransition(CurrentPrcb, NextThread);
            *(_BYTE *)(CurrentThread + 390) = v95;
            *(_BYTE *)(CurrentThread + 643) = 32;
            KiQueueReadyThread((__int64)CurrentPrcb, &v91, CurrentThread);
            LOBYTE(v27) = v95;
            if ( (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v27) )
            {
              if ( KiIrqlFlags )
              {
                v28 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v28 - 2) <= 0xDu )
                {
                  v29 = KeGetCurrentPrcb();
                  v30 = v29->SchedulerAssist;
                  v58 = (v30[5] & 0xFFFF0003) == 0;
                  v30[5] &= 0xFFFF0003;
                  if ( v58 )
                    KiRemoveSystemWorkPriorityKick(v29);
                }
              }
              __writecr8(1uLL);
              *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
              KiDeliverApc(0, 0, 0LL);
            }
            LOBYTE(CurrentIrql) = v95;
LABEL_30:
            if ( KiIrqlFlags )
            {
              v18 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v18 - 2) <= 0xDu )
                goto LABEL_94;
            }
            goto LABEL_96;
          }
LABEL_34:
          if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) != 0 )
          {
            if ( KiIrqlFlags )
            {
              v19 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v19 - 2) <= 0xDu )
              {
                v20 = KeGetCurrentPrcb();
                v21 = v20->SchedulerAssist;
                v58 = (v21[5] & 0xFFFF0003) == 0;
                v21[5] &= 0xFFFF0003;
                if ( v58 )
                  KiRemoveSystemWorkPriorityKick(v20);
              }
            }
            __writecr8(1uLL);
            *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
            KiDeliverApc(0, 0, 0LL);
          }
          goto LABEL_30;
        }
      }
      else
      {
        if ( a3 != 4 )
          return;
        CurrentIrql = KeGetCurrentIrql();
        v84 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
        {
          v6 = KeGetCurrentPrcb()->SchedulerAssist;
          v7 = 4;
          if ( (_BYTE)CurrentIrql != 2 )
            v7 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
          v6[5] |= v7;
        }
        LODWORD(v95) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v95);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v8 = *(_QWORD *)(BugCheckParameter1 + 968);
        if ( v8 )
        {
          _InterlockedAdd64((volatile signed __int64 *)(v8 + 40), 1uLL);
          if ( *(_QWORD *)(v8 + 40) != *(_QWORD *)(v8 + 48) && *(_BYTE *)(BugCheckParameter1 + 388) == 1 )
            KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1);
        }
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v85);
        v90 = 0LL;
        if ( (unsigned __int8)CurrentIrql < 2u )
        {
          CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
            KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v90);
            v11 = (__int64)CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, CurrentThread, v12, v13);
            KiUpdatePriorityMatrixForRunningTransition(CurrentPrcb, v11);
            *(_BYTE *)(CurrentThread + 390) = v84;
            *(_BYTE *)(CurrentThread + 643) = 32;
            KiQueueReadyThread((__int64)CurrentPrcb, &v90, CurrentThread);
            LOBYTE(v14) = v84;
            if ( (unsigned __int8)KiSwapContext(CurrentThread, v11, v14) )
            {
              if ( KiIrqlFlags )
              {
                v15 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v15 - 2) <= 0xDu )
                {
                  v16 = KeGetCurrentPrcb();
                  v17 = v16->SchedulerAssist;
                  v58 = (v17[5] & 0xFFFF0003) == 0;
                  v17[5] &= 0xFFFF0003;
                  if ( v58 )
                    KiRemoveSystemWorkPriorityKick(v16);
                }
              }
              __writecr8(1uLL);
              *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
              KiDeliverApc(0, 0, 0LL);
            }
            LOBYTE(CurrentIrql) = v84;
            goto LABEL_30;
          }
          goto LABEL_34;
        }
      }
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      return;
    }
    v31 = *(_QWORD *)(BugCheckParameter1 + 968);
    if ( !v31 )
      return;
    LOBYTE(CurrentIrql) = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      v32 = KeGetCurrentPrcb()->SchedulerAssist;
      v33 = 4;
      if ( (_BYTE)CurrentIrql != 2 )
        v33 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      v32[5] |= v33;
    }
    v87 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v87);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v34 = KeGetCurrentPrcb();
    v35 = *(_DWORD *)(v31 + 4);
    v94 = v35;
    if ( v35 >= 7
      || (*(_BYTE *)(BugCheckParameter1 + 1122) = v35,
          KiCheckAssistDataForBamQosLevelOverride(BugCheckParameter1, &v94),
          v94 == (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 512)) )
    {
LABEL_89:
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      KeCheckAndApplyBamQos((__int64)v34, BugCheckParameter1);
      if ( KiIrqlFlags )
      {
        v41 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v41 >= 2u )
        {
LABEL_94:
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v58 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v58 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
LABEL_96:
      __writecr8((unsigned __int8)CurrentIrql);
      return;
    }
    KiAcquirePrcbLocksForIsolationUnit((__int64)v34, 0, &v83);
    KiSetThreadQosLevelUnsafe(BugCheckParameter1, v94);
    if ( !v34->NextThread )
    {
      v36 = *(_DWORD *)(BugCheckParameter1 + 120) >> 1;
      v93 = v34;
      if ( (v36 & 1) == 0 )
      {
        Prcbs = &v93;
        ProcessorCount = 1;
        goto LABEL_84;
      }
      CoreControlBlock = v34->CoreControlBlock;
      ProcessorCount = CoreControlBlock->ProcessorCount;
      Prcbs = CoreControlBlock->Prcbs;
      if ( CoreControlBlock->ProcessorCount )
      {
LABEL_84:
        v40 = ProcessorCount;
        do
        {
          if ( KeHeteroSystem )
            (*Prcbs)->PriorityState[64].AllFields ^= (*(_BYTE *)(BugCheckParameter1 + 512) ^ (*Prcbs)->PriorityState[64].AllFields) & 7;
          ++Prcbs;
          --v40;
        }
        while ( v40 );
      }
    }
    KiReleasePrcbLocksForIsolationUnit(&v83);
    goto LABEL_89;
  }
  if ( a2 )
  {
    *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    *(_QWORD *)(BugCheckParameter1 + 968) = a2;
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
    KeSetActualBasePriorityThread(BugCheckParameter1, 1);
    return;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    v45 = KeGetCurrentIrql();
    v95 = v45;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v45 <= 0xFu )
    {
      v46 = KeGetCurrentPrcb()->SchedulerAssist;
      v47 = 4;
      if ( (_BYTE)v45 != 2 )
        v47 = (-1LL << ((unsigned __int8)v45 + 1)) & 4;
      v46[5] |= v47;
    }
    v88 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v88);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    if ( *(_DWORD *)(BugCheckParameter1 + 1024) != 32 )
    {
      v48 = *(char *)(BugCheckParameter1 + 1024);
      v49 = *(_BYTE *)(v48 + BugCheckParameter1 + 824);
      if ( !v49 )
        KeBugCheckEx(0x157u, BugCheckParameter1, *(char *)(BugCheckParameter1 + 1024), 2uLL, 0LL);
      v50 = v49 - 1;
      *(_BYTE *)(v48 + BugCheckParameter1 + 824) = v50;
      if ( !v50 )
      {
        v51 = v48;
        v52 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v48);
        *(_DWORD *)(BugCheckParameter1 + 856) = v52;
        if ( v52 < 1 << v51 )
        {
          v53 = *(_BYTE *)(BugCheckParameter1 + 195);
          if ( v53 <= 31 )
          {
            v54 = *(_BYTE *)(BugCheckParameter1 + 563)
                + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
                + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
            if ( v54 < v53 )
              KiSetPriorityThread(BugCheckParameter1, (unsigned __int64)&v85, v54);
          }
        }
      }
      *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v55 = 0LL;
          if ( *(_BYTE *)(BugCheckParameter1 + 388) != 1 )
            break;
          v60 = *(unsigned int *)(BugCheckParameter1 + 536);
          v3 = 0LL;
          if ( (int)v60 >= 0 )
          {
            v3 = KiProcessorBlock[v60];
            KiAcquirePrcbLocksForIsolationUnit(v3, 0, &v83);
            if ( *(_BYTE *)(BugCheckParameter1 + 388) != 1 )
              goto LABEL_142;
            v58 = *(_DWORD *)(BugCheckParameter1 + 536) == (_DWORD)v60;
            goto LABEL_141;
          }
          v61 = (unsigned int)v60;
          LODWORD(v84) = 0;
          LODWORD(v61) = v60 & 0x7FFFFFFF;
          v55 = *(volatile signed __int32 **)(KiProcessorBlock[v61] + 34888);
          while ( _interlockedbittestandset64(v55, 0LL) )
          {
            do
              KeYieldProcessorEx(&v84);
            while ( *(_QWORD *)v55 );
          }
          if ( *(_BYTE *)(BugCheckParameter1 + 388) == 1 && *(_DWORD *)(BugCheckParameter1 + 536) == (_DWORD)v60 )
          {
LABEL_143:
            _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
            *(_QWORD *)(BugCheckParameter1 + 968) = 0LL;
            _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
            if ( v3 )
              KiReleasePrcbLocksForIsolationUnit(&v83);
            if ( v55 )
              _InterlockedAnd64((volatile signed __int64 *)v55, 0LL);
            *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
            v62 = KeGetCurrentPrcb();
            KiReadyDeferredReadyList((__int64)v62, &v85);
            v92 = 0LL;
            if ( (unsigned __int8)v95 >= 2u )
            {
              if ( v62->NextThread && !v62->DpcRoutineActive )
                KiRequestSoftwareInterrupt(v62, 2);
            }
            else
            {
              v58 = v62->NextThread == 0LL;
              v63 = (__int64)v62->CurrentThread;
              v89 = v63;
              if ( v58 )
              {
                if ( (*(_DWORD *)(v63 + 116) & 0x40) != 0 )
                {
                  if ( KiIrqlFlags )
                  {
                    v76 = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v76 - 2) <= 0xDu )
                    {
                      v77 = KeGetCurrentPrcb();
                      v78 = v77->SchedulerAssist;
                      v58 = (v78[5] & 0xFFFF0003) == 0;
                      v78[5] &= 0xFFFF0003;
                      if ( v58 )
                        KiRemoveSystemWorkPriorityKick(v77);
                    }
                  }
                  __writecr8(1uLL);
                  *(_DWORD *)(v63 + 116) &= ~0x40u;
                  KiDeliverApc(0, 0, 0LL);
                }
                v69 = v95;
              }
              else
              {
                KiAbProcessContextSwitch(v63, 0);
                KiAcquirePrcbLocksForIsolationUnit((__int64)v62, 0, &v92);
                v64 = v62->NextThread;
                v65 = v89;
                v62->NextThread = 0LL;
                KiCaptureTotalCyclesCurrentThread((__int64)v62, v65, v66, v67);
                KiUpdatePriorityMatrixForRunningTransition(v62, v64);
                v68 = v89;
                *(_BYTE *)(v89 + 390) = v95;
                *(_BYTE *)(v68 + 643) = 32;
                KiQueueReadyThread((__int64)v62, &v92, v68);
                v69 = v95;
                v70 = (__int64)v64;
                v71 = v89;
                LOBYTE(v72) = v95;
                if ( (unsigned __int8)KiSwapContext(v89, v70, v72) )
                {
                  if ( KiIrqlFlags )
                  {
                    v73 = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v73 - 2) <= 0xDu )
                    {
                      v74 = KeGetCurrentPrcb();
                      v75 = v74->SchedulerAssist;
                      v58 = (v75[5] & 0xFFFF0003) == 0;
                      v75[5] &= 0xFFFF0003;
                      if ( v58 )
                        KiRemoveSystemWorkPriorityKick(v74);
                    }
                  }
                  __writecr8(1uLL);
                  *(_DWORD *)(v71 + 116) &= ~0x40u;
                  KiDeliverApc(0, 0, 0LL);
                }
              }
              if ( KiIrqlFlags )
              {
                v79 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v79 - 2) <= 0xDu )
                {
                  v80 = KeGetCurrentPrcb();
                  v81 = v80->SchedulerAssist;
                  v82 = ~(unsigned __int16)(-1LL << (v69 + 1));
                  v58 = (v82 & v81[5]) == 0;
                  v81[5] &= v82;
                  if ( v58 )
                    KiRemoveSystemWorkPriorityKick(v80);
                }
              }
              __writecr8(v69);
            }
            KeSetPriorityThread((PKTHREAD)BugCheckParameter1, *(char *)(BugCheckParameter1 + 563));
            return;
          }
          _InterlockedAnd64((volatile signed __int64 *)v55, 0LL);
        }
        if ( *(_BYTE *)(BugCheckParameter1 + 388) != 2 )
          break;
LABEL_124:
        v57 = *(unsigned int *)(BugCheckParameter1 + 536);
        v3 = 0LL;
        if ( (int)v57 >= 0 )
        {
          v3 = KiProcessorBlock[v57];
          KiAcquirePrcbLocksForIsolationUnit(v3, 0, &v83);
          v58 = BugCheckParameter1 == *(_QWORD *)(v3 + 8);
LABEL_141:
          if ( v58 )
            goto LABEL_143;
LABEL_142:
          KiReleasePrcbLocksForIsolationUnit(&v83);
          v3 = 0LL;
        }
      }
      if ( *(_BYTE *)(BugCheckParameter1 + 388) != 3 )
      {
        if ( *(_BYTE *)(BugCheckParameter1 + 388) != 5 )
          goto LABEL_143;
        v56 = *(_BYTE *)(BugCheckParameter1 + 112) & 7;
        if ( v56 == 1 || (unsigned __int8)(v56 - 3) <= 3u )
          goto LABEL_143;
        goto LABEL_124;
      }
      v59 = *(unsigned int *)(BugCheckParameter1 + 536);
      v3 = 0LL;
      if ( (int)v59 >= 0 )
      {
        v3 = KiProcessorBlock[v59];
        KiAcquirePrcbLocksForIsolationUnit(v3, 0, &v83);
        if ( BugCheckParameter1 == *(_QWORD *)(v3 + 16) )
          goto LABEL_143;
        if ( *(_BYTE *)(BugCheckParameter1 + 388) == 3 && *(_DWORD *)(BugCheckParameter1 + 536) == (_DWORD)v59 )
          __fastfail(0x1Eu);
        goto LABEL_142;
      }
    }
  }
}
