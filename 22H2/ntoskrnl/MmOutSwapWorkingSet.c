/*
 * XREFs of MmOutSwapWorkingSet @ 0x140350FC0
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiVadSupportsPrivateCommit @ 0x14021B200 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x14021CBE0 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiGetWorkingSetSwapSupport @ 0x140263DB0 (MiGetWorkingSetSwapSupport.c)
 *     SmStoreExistsForProcess @ 0x140264160 (SmStoreExistsForProcess.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402C8E20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     MiFindBestOutswapPagefile @ 0x140350AFC (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x140350BDC (MiGetKernelStackSwapSupport.c)
 *     MiOutSwapWorkingSet @ 0x140351618 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140351710 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x140351768 (MiAllocateWorkingSetSwapSupport.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406FAD78 (MiReserveWorkingSetSwapSpace.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406FB1C0 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406FB270 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1406FB2BC (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1406FB63C (SmStoreSetProcessVaRanges.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408D9B1C (MiExtendWorkingSetSwapPagefile.c)
 *     VmCheckLargePageInswap @ 0x14092E854 (VmCheckLargePageInswap.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int64 *v2; // r13
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int SessionId; // r14d
  unsigned int BestOutswapPagefile; // r15d
  PVOID *Pool; // r14
  volatile LONG *v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 WorkingSetSwapSupport; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  PEPROCESS v19; // r15
  bool v20; // zf
  struct _KTHREAD *v21; // r12
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  _QWORD *v28; // rcx
  int v29; // esi
  volatile LONG *v30; // r15
  unsigned __int64 v31; // rdi
  __int64 v32; // rcx
  LONG *SharedVm; // rax
  ULONG_PTR v34; // r15
  unsigned __int64 v35; // rcx
  struct _KTHREAD *v36; // rdi
  unsigned __int8 v37; // r12
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  PVOID v43; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  int v55; // ecx
  __int64 v56; // rdi
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  int v61; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v62; // [rsp+40h] [rbp-C8h]
  unsigned int v63; // [rsp+48h] [rbp-C0h] BYREF
  int v64; // [rsp+4Ch] [rbp-BCh]
  __int64 v65; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-B0h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PEPROCESS Processa; // [rsp+78h] [rbp-90h]
  _OWORD v71[10]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v72; // [rsp+128h] [rbp+20h]
  __int128 v73; // [rsp+138h] [rbp+30h]
  __int64 v74; // [rsp+148h] [rbp+40h]

  v63 = 0;
  v2 = &Process[1].ActiveProcessorsPadding[6];
  Processa = Process;
  v74 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v62 = 0LL;
  v5 = 0;
  P = 0LL;
  memset(v71, 0, 0x98uLL);
  v66 = *(_QWORD *)(qword_140C4E648 + 8LL * *((unsigned __int16 *)v2 + 87));
  v6 = v66;
  LODWORD(v72) = a2 != 0;
  *((_QWORD *)&v71[1] + 1) = v66;
  SessionId = -1;
  v61 = -1;
  if ( SmStoreExistsForProcess() )
  {
    LODWORD(v72) = v72 | 4;
    v5 = 2;
    LODWORD(v71[2]) = -1;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v66, &v63);
  if ( BestOutswapPagefile == 16 )
  {
    v29 = -1073741497;
  }
  else
  {
    Pool = (PVOID *)MiAllocatePool(64, 0x50uLL, 0x43536D4Du);
    if ( Pool )
    {
      v5 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 1128, 0LL);
      v10 = (volatile LONG *)(v6 + 1136);
      SpinLock = (PEX_SPIN_LOCK)(v6 + 1136);
      v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1136));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v2);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v29 = -1073740682;
        }
        else
        {
          v29 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v29 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v20 = (v48 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v48;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        v6 = v66;
      }
      else
      {
        *((_QWORD *)MiGetSharedVm(v13) + 3) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v49 = KeGetCurrentIrql();
            if ( v49 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v49 >= 2u )
            {
              v50 = KeGetCurrentPrcb();
              v51 = v50->SchedulerAssist;
              v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v20 = (v52 & v51[5]) == 0;
              v14 = (unsigned int)v52 & v51[5];
              v51[5] = v14;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
        }
        __writecr8(v11);
        v15 = v63;
        while ( 1 )
        {
          v16 = v2[16];
          v62 = v16;
          if ( !v16 )
          {
            v29 = -1073741779;
            goto LABEL_36;
          }
          if ( LODWORD(v71[2]) == -1 )
            break;
          v29 = MiReserveWorkingSetSwapSpace(v66, (char *)&v71[2] + 8, v14, BestOutswapPagefile, v15, v16);
          if ( v29 >= 0 )
          {
            v16 = v62;
            break;
          }
          if ( v15 < 0x10 )
          {
            BestOutswapPagefile = v15;
            v29 = MiExtendWorkingSetSwapPagefile(v66, v62, v15);
            if ( v29 >= 0 )
              continue;
          }
          goto LABEL_36;
        }
        v17 = MiAllocateWorkingSetSwapSupport(v16);
        *Pool = (PVOID)v17;
        if ( !v17 )
          goto LABEL_98;
        if ( LODWORD(v71[2]) != -1 )
          *(_DWORD *)(v17 + 32) |= 1u;
        v18 = 0LL;
        if ( !a2 )
          goto LABEL_14;
        v18 = v2[17];
        if ( v18 - v2[18] <= v18 )
          v18 = v2[17] - v2[18];
        if ( v18 && (v53 = MiAllocateWorkingSetSwapSupport(v18), (Pool[1] = (PVOID)v53) == 0LL) )
        {
LABEL_98:
          v29 = -1073741670;
        }
        else
        {
LABEL_14:
          v19 = Processa;
          v71[0] = *(_OWORD *)Pool;
          v20 = Processa[2].Affinity.Bitmap[5] == 0;
          *(_QWORD *)&v71[1] = v2;
          if ( !v20 )
          {
            v54 = VmCheckLargePageInswap(Processa);
            v55 = v71[9];
            if ( v54 )
              v55 = 1;
            LODWORD(v71[9]) = v55;
          }
          v21 = CurrentThread;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v19[1].Affinity.Bitmap[7], 0LL);
          LOBYTE(v21[1].Queue) |= 2u;
          if ( (v19[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, (__int64)v19);
            v29 = -1073741558;
          }
          else
          {
            v22 = *(_QWORD **)&v19[1].Spare2[15];
            v23 = 0LL;
            while ( v22 )
            {
              v23 = (unsigned __int64)v22;
              v22 = (_QWORD *)*v22;
            }
            while ( v23 )
            {
              if ( !MiVadMapsLargeImage(v23) && MiVadSupportsPrivateCommit(v25) )
                MiOutSwapWorkingSet(
                  (_DWORD)v2,
                  v23,
                  *(_DWORD *)(v23 + 24) << 12,
                  (*(_DWORD *)(v23 + 28) << 12) | 0xFFF,
                  (__int64)v71);
              v24 = *(_QWORD **)(v23 + 8);
              v26 = v23;
              if ( v24 )
              {
                do
                {
                  v23 = (unsigned __int64)v24;
                  v24 = (_QWORD *)*v24;
                }
                while ( v24 );
              }
              else
              {
                while ( 1 )
                {
                  v23 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !v23 || *(_QWORD *)v23 == v26 )
                    break;
                  v26 = v23;
                }
              }
            }
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, (__int64)v19);
            if ( *((_QWORD *)*Pool + 2) < v62 )
            {
              v27 = MiReAllocateWorkingSetSwapSupport(*Pool);
              if ( v27 )
              {
                ExFreePoolWithTag(*Pool, 0);
                *Pool = (PVOID)v27;
              }
            }
            v28 = Pool[1];
            if ( v28 )
            {
              if ( v28[2] < v18 )
              {
                v56 = MiReAllocateWorkingSetSwapSupport(v28);
                if ( v56 )
                {
                  ExFreePoolWithTag(Pool[1], 0);
                  Pool[1] = (PVOID)v56;
                }
              }
            }
            v62 = *((_QWORD *)*Pool + 3);
            MiGetKernelStackSwapSupport((__int64)Pool, (__int64)v19);
            if ( v5 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*Pool);
            v5 |= 4u;
            v29 = 0;
          }
        }
LABEL_36:
        v30 = SpinLock;
        v31 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport((__int64)v2) == 1 )
        {
          SharedVm = MiGetSharedVm(v32);
          if ( v5 < 4 )
          {
            *((_QWORD *)SharedVm + 3) = 0LL;
          }
          else
          {
            *((_QWORD *)SharedVm + 3) = Pool;
            Pool = 0LL;
            v29 = 0;
          }
        }
        else
        {
          v29 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v30);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v57 = KeGetCurrentIrql();
            if ( v57 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v57 >= 2u )
            {
              v58 = KeGetCurrentPrcb();
              v59 = v58->SchedulerAssist;
              v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
              v20 = (v60 & v59[5]) == 0;
              v59[5] &= v60;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v58);
            }
          }
        }
        __writecr8(v31);
        v6 = v66;
        MiFreeReservationRuns(v66, (char *)&v71[2] + 8);
      }
      if ( Pool )
        MiFreeWorkingSetSwapContext(v6, Pool);
    }
    else
    {
      v29 = -1073741670;
    }
    SessionId = -1;
  }
  if ( (v5 & 1) != 0 )
  {
    v34 = v6 + 1128;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1128));
    LODWORD(v65) = 0;
    v35 = v6 + 1128;
    v36 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v35) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v36->ApcState.Process);
      v61 = SessionId;
    }
    --v36->SpecialApcDisable;
    v37 = ++v36->AbAllocationRegionCount;
    v38 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
    v20 = !_BitScanReverse((unsigned int *)&v39, v38);
    v64 = v39;
    if ( v20 )
    {
LABEL_71:
      if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v36, v34, SessionId, 0LL);
    }
    else
    {
      while ( 1 )
      {
        v40 = (__int64)&v36->LockEntries[v39];
        v38 &= ~(1 << v39);
        if ( (*(_BYTE *)(v40 + 26) & 1) != 0
          && (*(_DWORD *)(v40 + 32) & 1) == 0
          && (*(_QWORD *)(v40 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v34 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v40 + 40) == v61 )
        {
          *(_BYTE *)(v40 + 26) &= ~1u;
          if ( *(_QWORD *)(v40 + 32) )
            break;
        }
        v20 = !_BitScanReverse((unsigned int *)&v39, v38);
        v64 = v39;
        if ( v20 )
          goto LABEL_70;
      }
      if ( !v40 )
      {
LABEL_70:
        SessionId = v61;
        goto LABEL_71;
      }
      *(_BYTE *)(v40 + 32) |= 2u;
      if ( *(__int64 *)(v40 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v40);
      LODWORD(v65) = *(_DWORD *)(v40 + 88) & 0x1FFFF;
      *(_DWORD *)(v40 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v40 + 25) &= ~1u;
      *(_QWORD *)(v40 + 32) = 0LL;
      v41 = (signed __int64)(v40 - (unsigned __int64)v36->LockEntries) / 96;
      if ( v37 == 1 )
        v36->AbEntrySummary |= 1 << v41;
      else
        _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v41);
    }
    --v36->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v36, v34, &v65);
    v20 = v36->SpecialApcDisable++ == -1;
    if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
      KiCheckForKernelApcDelivery(v42);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v43 = P;
  if ( P )
  {
    if ( v5 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v43, 0);
  }
  *(_QWORD *)&v72 = v62;
  *((_QWORD *)&v72 + 1) = *((_QWORD *)&v71[7] + 1);
  v73 = v71[8];
  LODWORD(v74) = v29;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v29;
}
