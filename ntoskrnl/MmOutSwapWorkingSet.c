/*
 * XREFs of MmOutSwapWorkingSet @ 0x1402DAFF8
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiOutSwapWorkingSet @ 0x1402DB710 (MiOutSwapWorkingSet.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402DBD74 (MiGetWorkingSetSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1402DBD9C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1402DBDF4 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1402DBE44 (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x1402DBFB8 (MiGetKernelStackSwapSupport.c)
 *     MiVadSupportsPrivateCommit @ 0x14031EE80 (MiVadSupportsPrivateCommit.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x140327280 (MiVadMapsLargeImage.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     SmStoreExistsForProcess @ 0x14035BD70 (SmStoreExistsForProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeWorkingSetSwapContext @ 0x14067E58C (MiFreeWorkingSetSwapContext.c)
 *     EtwTraceWorkingSetSwap @ 0x140765840 (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1407658C4 (SmStoreSetProcessVaRanges.c)
 *     MiFreeReservationRuns @ 0x140765980 (MiFreeReservationRuns.c)
 *     VmCheckLargePageInswap @ 0x1409D90D4 (VmCheckLargePageInswap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x140A40524 (MiExtendWorkingSetSwapPagefile.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140A40660 (MiReserveWorkingSetSwapSpace.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int64 *v2; // r15
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v6; // ebx
  __int64 v7; // r15
  unsigned int BestOutswapPagefile; // r13d
  PVOID *Pool; // r12
  __int64 v10; // r14
  struct _KTHREAD *v11; // r15
  __int64 v12; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v14; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  volatile LONG *v18; // r15
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // r14
  __int64 WorkingSetSwapSupport; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  PEPROCESS v30; // r14
  bool v31; // zf
  ULONG_PTR v32; // r14
  struct _KTHREAD *v33; // r15
  __int64 v34; // rsi
  unsigned int v35; // eax
  unsigned int v36; // ecx
  struct _KPRCB *v37; // r8
  signed __int32 *v38; // rdx
  int v39; // eax
  PEPROCESS v40; // r15
  _QWORD *v41; // rax
  unsigned __int64 v42; // rsi
  __int64 v43; // rcx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rsi
  _QWORD *v47; // rcx
  int v48; // esi
  unsigned __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 SharedVm; // rax
  PVOID v55; // rdi
  signed __int32 v57; // eax
  signed __int32 v58; // eax
  signed __int32 v59; // ett
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  unsigned int v68; // r14d
  __int64 v69; // rax
  int v70; // eax
  int v71; // ecx
  signed __int32 v72; // ett
  __int64 v73; // rsi
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  unsigned __int64 v78; // [rsp+30h] [rbp-D0h]
  unsigned __int64 *v80; // [rsp+40h] [rbp-C0h]
  __int64 v81; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v82; // [rsp+50h] [rbp-B0h]
  unsigned int v83; // [rsp+58h] [rbp-A8h]
  unsigned int v84; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v85; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h]
  PEPROCESS Processa; // [rsp+70h] [rbp-90h]
  _OWORD v88[10]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v89; // [rsp+130h] [rbp+30h]
  __int128 v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+150h] [rbp+50h]

  v84 = 0;
  v2 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v78 = 0LL;
  v89 = 0LL;
  v91 = 0LL;
  v90 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Processa = Process;
  v82 = CurrentThread;
  v80 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v6 = 0;
  P = 0LL;
  memset(v88, 0, 0x98uLL);
  v7 = *(_QWORD *)(qword_140C67048 + 8LL * *((unsigned __int16 *)v2 + 87));
  v81 = v7;
  LODWORD(v89) = a2 != 0;
  *((_QWORD *)&v88[1] + 1) = v7;
  if ( (unsigned int)SmStoreExistsForProcess(Process) )
  {
    LODWORD(v88[2]) = -1;
    v6 = 2;
    LODWORD(v89) = v89 | 4;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v7, &v84);
  if ( BestOutswapPagefile != 16 || v6 == 2 )
  {
    Pool = (PVOID *)MiAllocatePool(64, 0x50uLL, 0x43536D4Du);
    if ( Pool )
    {
      v6 |= 1u;
      --v82->SpecialApcDisable;
      v10 = v7 + 1168;
      v11 = KeGetCurrentThread();
      v12 = 0LL;
      _disable();
      AbEntrySummary = v11->AbEntrySummary;
      if ( v11->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v10, v11)) != 0 )
      {
        _BitScanForward(&v14, AbEntrySummary);
        v83 = v14;
        v11->AbEntrySummary = AbEntrySummary & ~(1 << v14);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v57 = *SchedulerAssist;
          do
          {
            v59 = v57;
            v57 = _InterlockedCompareExchange(SchedulerAssist, v57 & 0xFFDFFFFF, v57);
          }
          while ( v59 != v57 );
          if ( (v57 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v12 = (__int64)(&v11[1].Process + 12 * v83);
        if ( (unsigned __int64)(v10 - qword_140C65668) < 0x8000000000LL )
          SessionId = MmGetSessionIdEx(v11->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v12 + 8) = SessionId;
        *(_QWORD *)v12 = v10 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v12, v10);
      if ( v12 )
        *(_BYTE *)(v12 + 18) = 1;
      v18 = (volatile LONG *)(v81 + 1176);
      v19 = v80;
      v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v81 + 1176));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v80);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v48 = -1073740682;
        }
        else
        {
          v48 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v48 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v18);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
          {
            v61 = KeGetCurrentPrcb();
            v62 = v61->SchedulerAssist;
            v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v31 = (v63 & v62[5]) == 0;
            v62[5] &= v63;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v61);
          }
        }
        __writecr8(v20);
        v7 = v81;
      }
      else
      {
        *(_QWORD *)(MiGetSharedVm(v23, v22, v24, v25) + 24) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v18);
        if ( KiIrqlFlags )
        {
          v64 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v64 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v64 >= 2u )
          {
            v65 = KeGetCurrentPrcb();
            v66 = v65->SchedulerAssist;
            v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v31 = (v67 & v66[5]) == 0;
            v26 = (unsigned int)v67 & v66[5];
            v66[5] = v26;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v65);
          }
        }
        __writecr8(v20);
        while ( 1 )
        {
          v27 = v19[17];
          v78 = v27;
          if ( !v27 )
          {
            v48 = -1073741779;
            goto LABEL_55;
          }
          if ( LODWORD(v88[2]) == -1 )
            break;
          v68 = v84;
          v48 = MiReserveWorkingSetSwapSpace(v81, (char *)&v88[2] + 8, v26, BestOutswapPagefile, v84, v27);
          if ( v48 >= 0 )
          {
            v19 = v80;
            v27 = v78;
            break;
          }
          if ( v68 >= 0x10 )
            goto LABEL_55;
          BestOutswapPagefile = v68;
          v48 = MiExtendWorkingSetSwapPagefile(v81, v78, v68);
          if ( v48 < 0 )
            goto LABEL_55;
          v19 = v80;
        }
        v28 = MiAllocateWorkingSetSwapSupport(v27);
        *Pool = (PVOID)v28;
        if ( !v28 )
          goto LABEL_113;
        if ( LODWORD(v88[2]) != -1 )
          *(_DWORD *)(v28 + 32) |= 1u;
        v29 = 0LL;
        if ( !a2 )
          goto LABEL_23;
        v29 = v19[18] - v19[19];
        if ( v29 > v19[18] )
          v29 = v19[18];
        if ( v29 && (v69 = MiAllocateWorkingSetSwapSupport(v29), (Pool[1] = (PVOID)v69) == 0LL) )
        {
LABEL_113:
          v48 = -1073741670;
        }
        else
        {
LABEL_23:
          v30 = Processa;
          v88[0] = *(_OWORD *)Pool;
          v31 = Processa[2].Affinity.StaticBitmap[5] == 0;
          *(_QWORD *)&v88[1] = v19;
          if ( !v31 )
          {
            v70 = VmCheckLargePageInswap(Processa);
            v71 = v88[9];
            if ( v70 )
              v71 = 1;
            LODWORD(v88[9]) = v71;
          }
          LOCK_ADDRESS_SPACE_SHARED(v82, v30);
          if ( (v30[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(v82, v30);
            v48 = -1073741558;
          }
          else
          {
            --v82->SpecialApcDisable;
            v32 = (ULONG_PTR)&v30[1].Affinity.StaticBitmap[8];
            v33 = KeGetCurrentThread();
            v34 = 0LL;
            v85 = 0;
            _disable();
            v35 = v33->AbEntrySummary;
            if ( v33->AbEntrySummary || (v35 = KiAbTryReclaimOrphanedEntries(v32, v33)) != 0 )
            {
              _BitScanForward(&v36, v35);
              v85 = v36;
              v33->AbEntrySummary = v35 & ~(1 << v36);
              v37 = KeGetCurrentPrcb();
              v38 = (signed __int32 *)v37->SchedulerAssist;
              if ( v38 )
              {
                _m_prefetchw(v38);
                v58 = *v38;
                do
                {
                  v72 = v58;
                  v58 = _InterlockedCompareExchange(v38, v58 & 0xFFDFFFFF, v58);
                }
                while ( v72 != v58 );
                if ( (v58 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick(v37);
              }
              _enable();
              v34 = (__int64)(&v33[1].Process + 12 * v85);
              if ( v32 - qword_140C65668 < 0x8000000000LL )
                v39 = MmGetSessionIdEx(v33->ApcState.Process);
              else
                v39 = -1;
              *(_DWORD *)(v34 + 8) = v39;
              *(_QWORD *)v34 = v32 & 0x7FFFFFFFFFFFFFFCLL;
            }
            if ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v32, v34, v32);
            if ( v34 )
              *(_BYTE *)(v34 + 18) = 1;
            v40 = Processa;
            v41 = *(_QWORD **)&Processa[1].Spare2[15];
            if ( v41 )
            {
              do
              {
                v42 = (unsigned __int64)v41;
                v41 = (_QWORD *)*v41;
              }
              while ( v41 );
              do
              {
                if ( !(unsigned int)MiVadMapsLargeImage(v42) && (unsigned int)MiVadSupportsPrivateCommit(v43) )
                  MiOutSwapWorkingSet(
                    (_DWORD)v80,
                    v42,
                    *(_DWORD *)(v42 + 24) << 12,
                    (*(_DWORD *)(v42 + 28) << 12) | 0xFFF,
                    (__int64)v88);
                v44 = *(_QWORD **)(v42 + 8);
                v45 = v42;
                if ( v44 )
                {
                  do
                  {
                    v42 = (unsigned __int64)v44;
                    v44 = (_QWORD *)*v44;
                  }
                  while ( v44 );
                }
                else
                {
                  while ( 1 )
                  {
                    v42 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !v42 || *(_QWORD *)v42 == v45 )
                      break;
                    v45 = v42;
                  }
                }
              }
              while ( v42 );
              v40 = Processa;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v32);
            KeAbPostRelease(v32);
            v31 = v82->SpecialApcDisable++ == -1;
            if ( v31 && ($C71981A45BEB2B45F82C232A7085991E *)v82->ApcState.ApcListHead[0].Flink != &v82->152 )
              KiCheckForKernelApcDelivery();
            UNLOCK_ADDRESS_SPACE_SHARED(v82, v40);
            if ( *((_QWORD *)*Pool + 2) < v78 )
            {
              v46 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
              if ( v46 )
              {
                ExFreePoolWithTag(*Pool, 0);
                *Pool = (PVOID)v46;
              }
            }
            v47 = Pool[1];
            if ( v47 )
            {
              if ( v47[2] < v29 )
              {
                v73 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
                if ( v73 )
                {
                  ExFreePoolWithTag(Pool[1], 0);
                  Pool[1] = (PVOID)v73;
                }
              }
            }
            v78 = *((_QWORD *)*Pool + 3);
            MiGetKernelStackSwapSupport(Pool, v40);
            if ( v6 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*Pool);
            v6 |= 4u;
            v48 = 0;
          }
        }
LABEL_55:
        v49 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v81 + 1176));
        if ( MiGetWorkingSetSwapSupport(v80) == 1 )
        {
          SharedVm = MiGetSharedVm(v51, v50, v52, v53);
          if ( v6 < 4 )
          {
            *(_QWORD *)(SharedVm + 24) = 0LL;
          }
          else
          {
            *(_QWORD *)(SharedVm + 24) = Pool;
            Pool = 0LL;
            v48 = 0;
          }
        }
        else
        {
          v48 = -1073741558;
        }
        v7 = v81;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v81 + 1176));
        if ( KiIrqlFlags )
        {
          v74 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v74 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v74 >= 2u )
          {
            v75 = KeGetCurrentPrcb();
            v76 = v75->SchedulerAssist;
            v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
            v31 = (v77 & v76[5]) == 0;
            v76[5] &= v77;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v75);
          }
        }
        __writecr8(v49);
        MiFreeReservationRuns(v81, (char *)&v88[2] + 8);
        if ( !Pool )
          goto LABEL_60;
      }
      MiFreeWorkingSetSwapContext(v7, Pool);
    }
    else
    {
      v48 = -1073741670;
    }
LABEL_60:
    CurrentThread = v82;
    goto LABEL_61;
  }
  v48 = -1073741497;
LABEL_61:
  if ( (v6 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 1168), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 1168));
    KeAbPostRelease(v7 + 1168);
    v31 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v31 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  v55 = P;
  if ( P )
  {
    if ( v6 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v55, 0);
  }
  *((_QWORD *)&v89 + 1) = *((_QWORD *)&v88[7] + 1);
  v90 = v88[8];
  LODWORD(v91) = v48;
  *(_QWORD *)&v89 = v78;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v48;
}
