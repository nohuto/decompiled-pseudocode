/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x14065065C
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x1405CB29C (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiOutSwapWorkingSet @ 0x1402DB710 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1402DBD9C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1402DBDF4 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1402DBE44 (MiFindBestOutswapPagefile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiValidateMemoryRangeEntries @ 0x14075C34C (MiValidateMemoryRangeEntries.c)
 *     EtwTraceWorkingSetSwap @ 0x140765840 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x140765980 (MiFreeReservationRuns.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x140A40524 (MiExtendWorkingSetSwapPagefile.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140A40660 (MiReserveWorkingSetSwapSpace.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned int BestOutswapPagefile; // r13d
  ULONG_PTR v12; // r12
  struct _KTHREAD *v13; // rdi
  __int64 v14; // rbx
  unsigned int AbEntrySummary; // eax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v17; // ecx
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  int SessionId; // eax
  __int64 v22; // r14
  unsigned int v23; // esi
  __int64 v24; // r9
  __int64 v25; // r13
  int v26; // edi
  struct _KPROCESS *v27; // r14
  bool v28; // zf
  _QWORD *WorkingSetSwapSupport; // rsi
  PEPROCESS v30; // rdi
  ULONG_PTR v31; // rdi
  struct _KTHREAD *v32; // r13
  __int64 v33; // r14
  unsigned int v34; // eax
  unsigned int v35; // ecx
  struct _KPRCB *v36; // r8
  signed __int32 *v37; // rdx
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  int v40; // eax
  unsigned __int64 *v41; // r14
  unsigned __int64 v42; // r13
  __int64 v43; // r12
  __int64 **Address; // rax
  int v45; // ecx
  __int64 v46; // rdi
  unsigned int v47; // [rsp+30h] [rbp-D0h]
  unsigned int v48; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v49; // [rsp+38h] [rbp-C8h]
  PEPROCESS Processa; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v51; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v55; // [rsp+78h] [rbp-88h]
  ULONG_PTR v56; // [rsp+80h] [rbp-80h]
  _QWORD *v57; // [rsp+88h] [rbp-78h]
  _OWORD v58[10]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v59; // [rsp+130h] [rbp+30h]
  __int128 v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+50h]

  v51 = 0LL;
  v48 = 0;
  v61 = 0LL;
  Processa = Process;
  v59 = 0LL;
  v53 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v60 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = Process[1].IdealProcessor[25];
  v55 = a2;
  v57 = a4;
  v54 = a3;
  v9 = *(_QWORD *)(qword_140C67048 + 8 * v8);
  v52 = v9;
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, &v48);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v59) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v51);
  memset(v58, 0, 0x98uLL);
  --CurrentThread->SpecialApcDisable;
  v12 = v9 + 1168;
  v56 = v9 + 1168;
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  _disable();
  AbEntrySummary = v13->AbEntrySummary;
  if ( v13->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v12, (__int64)v13)) != 0 )
  {
    _BitScanForward(&v17, AbEntrySummary);
    v47 = v17;
    v13->AbEntrySummary = AbEntrySummary & ~(1 << v17);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v19 = *SchedulerAssist;
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
      }
      while ( v20 != v19 );
      if ( (v19 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v14 = (__int64)(&v13[1].Process + 12 * v47);
    if ( v12 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
    *(_DWORD *)(v14 + 8) = SessionId;
    *(_QWORD *)v14 = v12 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12, v14, v12);
  if ( v14 )
    *(_BYTE *)(v14 + 18) = 1;
  v22 = v51;
  v23 = v48;
  while ( 1 )
  {
    v24 = BestOutswapPagefile;
    v25 = v52;
    v26 = MiReserveWorkingSetSwapSpace(v52, (char *)&v58[2] + 8, CurrentPrcb, v24, v23, v22);
    if ( v26 >= 0 )
      break;
    if ( v23 < 0x10 )
    {
      BestOutswapPagefile = v23;
      v26 = MiExtendWorkingSetSwapPagefile(v52, v22, v23);
      if ( v26 >= 0 )
        continue;
    }
    goto LABEL_22;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v22);
  if ( !WorkingSetSwapSupport )
  {
    v26 = -1073741670;
LABEL_22:
    v27 = Processa;
    goto LABEL_23;
  }
  v30 = Processa;
  *(_QWORD *)&v58[0] = WorkingSetSwapSupport;
  *(_QWORD *)&v58[1] = v53;
  *((_QWORD *)&v58[1] + 1) = v25;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Processa);
  --CurrentThread->SpecialApcDisable;
  v31 = (ULONG_PTR)&v30[1].Affinity.StaticBitmap[8];
  v32 = KeGetCurrentThread();
  v33 = 0LL;
  v49 = 0;
  _disable();
  v34 = v32->AbEntrySummary;
  if ( v32->AbEntrySummary || (v34 = KiAbTryReclaimOrphanedEntries(v31, (__int64)v32)) != 0 )
  {
    _BitScanForward(&v35, v34);
    v49 = v35;
    v32->AbEntrySummary = v34 & ~(1 << v35);
    v36 = KeGetCurrentPrcb();
    v37 = (signed __int32 *)v36->SchedulerAssist;
    if ( v37 )
    {
      _m_prefetchw(v37);
      v38 = *v37;
      do
      {
        v39 = v38;
        v38 = _InterlockedCompareExchange(v37, v38 & 0xFFDFFFFF, v38);
      }
      while ( v39 != v38 );
      if ( (v38 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v36);
    }
    _enable();
    v33 = (__int64)(&v32[1].Process + 12 * v49);
    if ( v31 - qword_140C65668 >= 0x8000000000LL )
      v40 = -1;
    else
      v40 = MmGetSessionIdEx((__int64)v32->ApcState.Process);
    *(_DWORD *)(v33 + 8) = v40;
    *(_QWORD *)v33 = v31 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v31, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v31, v33, v31);
  if ( v33 )
    *(_BYTE *)(v33 + 18) = 1;
  v41 = v55;
  v42 = (unsigned __int64)&v55[2 * v54];
  if ( (unsigned __int64)v55 < v42 )
  {
    v43 = (__int64)v53;
    do
    {
      Address = MiLocateAddress(*v41);
      if ( Address )
      {
        v45 = *((_DWORD *)Address + 12);
        if ( (v45 & 0x70) == 0
          && (v45 & 0x200000) != 0
          && (v45 & 0x800000) == 0
          && (v45 & 0x180000u) < 0x100000
          && (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) >= (*v41 + v41[1] - 1) >> 12 )
        {
          MiOutSwapWorkingSet(v43, (__int64)Address, *v41, *v41 + v41[1] - 1, (__int64)v58);
        }
      }
      v41 += 2;
    }
    while ( (unsigned __int64)v41 < v42 );
    v12 = v56;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v31);
  KeAbPostRelease(v31);
  v28 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v28 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v27 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Processa);
  if ( WorkingSetSwapSupport[2] < v51 )
  {
    v46 = MiReAllocateWorkingSetSwapSupport((__int64)WorkingSetSwapSupport);
    if ( v46 )
    {
      ExFreePoolWithTag(WorkingSetSwapSupport, 0);
      WorkingSetSwapSupport = (_QWORD *)v46;
    }
  }
  v26 = 0;
  v51 = WorkingSetSwapSupport[3];
  *v57 = WorkingSetSwapSupport;
LABEL_23:
  MiFreeReservationRuns(v52, (char *)&v58[2] + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v12);
  KeAbPostRelease(v12);
  v28 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v28 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  *(_QWORD *)&v59 = v51;
  *((_QWORD *)&v59 + 1) = *((_QWORD *)&v58[7] + 1);
  v60 = v58[8];
  LODWORD(v61) = v26;
  EtwTraceWorkingSetSwap(v27);
  return (unsigned int)v26;
}
