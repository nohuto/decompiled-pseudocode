/*
 * XREFs of KiSetHeteroPolicyThread @ 0x1405202A4
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x140513260 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14051327C (KeSetUserHeteroCpuPolicyThread.c)
 *     PopUpdateSingleThreadHeteroPolicies @ 0x1408F1550 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402306D0 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1402308B0 (KiAcquireThreadStateLock.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiSelectNextThread @ 0x1402568EC (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiReleaseThreadStateLock @ 0x14035B9E0 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14035BA40 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x14035BAA0 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14035BAD0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSendSoftwareInterrupt @ 0x14035E910 (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14051F0E0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14051F1F8 (KiGenerateHeteroSets.c)
 *     EtwTraceIdealProcessor @ 0x1405A7784 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  int v4; // r13d
  int v5; // esi
  int v6; // r14d
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v10; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // esi
  char v17; // al
  bool v18; // sf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // rax
  _DWORD *v21; // r9
  int v22; // edx
  int v23; // eax
  __int64 v24; // rdi
  char v25; // cl
  unsigned __int64 v26; // rax
  char v27; // cl
  int v28; // ecx
  int v29; // r14d
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // rdi
  __int64 v32; // rcx
  unsigned int v33; // r12d
  unsigned int v34; // r13d
  struct _KPRCB *v35; // rbx
  ULONG_PTR CurrentThread; // rdi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  struct _KPRCB *v40; // r14
  _DWORD *v41; // rcx
  int v42; // eax
  _DWORD *v43; // rcx
  int v44; // eax
  __int64 NextThread; // r14
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // r8d
  bool v49; // zf
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  struct _KPRCB *v56; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v57; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v58; // [rsp+40h] [rbp-30h]
  unsigned int v59; // [rsp+44h] [rbp-2Ch]
  int v60; // [rsp+48h] [rbp-28h] BYREF
  __int64 v61; // [rsp+50h] [rbp-20h] BYREF
  volatile signed __int64 *v62; // [rsp+58h] [rbp-18h] BYREF
  __int64 v63; // [rsp+60h] [rbp-10h] BYREF
  __int64 v64; // [rsp+68h] [rbp-8h] BYREF
  int v65; // [rsp+C0h] [rbp+50h] BYREF

  v61 = 0LL;
  v4 = (int)SchedulerAssist;
  v63 = 0LL;
  v5 = a3;
  v56 = 0LL;
  v6 = a2;
  v64 = 0LL;
  v57 = 0LL;
  v62 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v65 = 0;
  while ( 1 )
  {
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[6];
        v10[6] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v12[6] - 1;
        v12[6] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v65, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v14 = *(unsigned int *)(a1 + 588);
  v15 = *(_DWORD *)(a1 + 196);
  v58 = *(_DWORD *)(a1 + 588);
  v59 = v15;
  if ( v5 )
  {
    v16 = *(unsigned __int8 *)(a1 + 125);
    v17 = (*(_BYTE *)(a1 + 126) ^ v6) & 0x7F;
    v18 = ((v17 ^ *(_BYTE *)(a1 + 126)) & 0x80u) != 0;
    *(_BYTE *)(a1 + 126) ^= v17;
    if ( v18 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( v4 )
  {
LABEL_19:
    v16 = v6;
    goto LABEL_20;
  }
  v16 = *(_BYTE *)(a1 + 126) & 0x7F;
  *(_BYTE *)(a1 + 126) &= ~0x80u;
LABEL_20:
  if ( v16 == 8 )
    v16 = KiDefaultHeteroCpuPolicy;
  if ( !KeHeteroSystem )
  {
    v16 = 0;
    *(_BYTE *)(a1 + 126) &= ~0x80u;
  }
  if ( *(unsigned __int8 *)(a1 + 125) == v16 )
  {
    KiReleaseThreadLockSafe(a1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v49 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v49 )
            KiRemoveSystemWorkPriorityKick((__int64)v20);
        }
      }
    }
LABEL_86:
    __writecr8(CurrentIrql);
    return (unsigned int)v16;
  }
  v23 = v16;
  v24 = KiProcessorBlock[v14];
  if ( v16 >= 5 )
    v23 = KiConvertDynamicHeteroPolicy(a1, a2, KiProcessorBlock[v14]);
  KiGenerateHeteroSets(*(_QWORD *)(v24 + 192), *(_QWORD *)(a1 + 576), v23, &v63, &v64, &v61);
  if ( (v63 & *(_QWORD *)(v24 + 200)) == 0 )
  {
    v25 = *(_BYTE *)(v24 + 209);
    _BitScanForward64(&v26, __ROR8__(v63, v25));
    v27 = v26 + v25;
    LODWORD(v26) = *(_DWORD *)(a1 + 116);
    v28 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v24 + 208) + (v27 & 0x3F)];
    *(_DWORD *)(a1 + 588) = v28;
    if ( (v26 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v28;
  }
  v29 = 0;
  v30 = KiAcquireThreadStateLock(a1, (__int64 *)&v56, (volatile signed __int32 **)&v62);
  v31 = v56;
  *(_BYTE *)(a1 + 125) = v16;
  if ( v30 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue((__int64)v31, (__int64)v62, a1, *(char *)(a1 + 195));
    KiPrepareReadyThreadForRescheduling((_KTHREAD *)a1, *(char *)(a1 + 195), (__int64)&v57);
  }
  else
  {
    v32 = (unsigned int)v30 - 2;
    if ( v30 == 2 )
    {
      if ( (v31->GroupSetMember & v61) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
          v31 = v56;
          if ( !v56->NextThread )
          {
            KiSelectNextThread(v56, (__int64)&v57);
            v29 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v31 = v56;
        }
      }
    }
    else if ( v30 == 3 && (v31->GroupSetMember & v61) == 0 )
    {
      KiSelectNextThread(v31, (__int64)&v57);
      KiInsertDeferredReadyList((__int64)&v57, a1);
    }
  }
  v33 = *(_DWORD *)(a1 + 588);
  v34 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadStateLock(v32, (__int64)v31, v62);
  KiReleaseThreadLockSafe(a1);
  if ( v29 && KeGetPcr()->Prcb.Number != v56->Number )
    KiSendSoftwareInterrupt();
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v58, v33);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v59, v34);
  }
  v35 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)v35, &v57);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (ULONG_PTR)v35->CurrentThread;
    if ( v35->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v35->CurrentThread, 0);
      v40 = KeGetCurrentPrcb();
      v60 = 0;
      while ( 1 )
      {
        v41 = v40->SchedulerAssist;
        if ( v41 )
        {
          if ( v40->NestingLevel <= 1u )
          {
            v42 = v41[6];
            v41[6] = v42 + 1;
            if ( v42 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v40);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v35->PrcbLock, 0LL) )
          break;
        v43 = v40->SchedulerAssist;
        if ( v43 )
        {
          if ( v40->NestingLevel <= 1u )
          {
            v44 = v43[6] - 1;
            v43[6] = v44;
            if ( !v44 )
              KiRemoveSystemWorkPriorityKick((__int64)v40);
          }
        }
        do
          KeYieldProcessorEx(&v60, v37, v38, v39);
        while ( v35->PrcbLock );
      }
      NextThread = (__int64)v35->NextThread;
      v35->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v35, CurrentThread, 0LL);
      _enable();
      v35->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v46 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v46 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)v35, CurrentThread, v46, v47);
      LOBYTE(v48) = CurrentIrql;
      v49 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v48) == 0;
    }
    else
    {
      v49 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v49 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v50 = KeGetCurrentPrcb();
          v51 = v50->SchedulerAssist;
          v49 = (v51[5] & 0xFFFF0003) == 0;
          v51[5] &= 0xFFFF0003;
          if ( v49 )
            KiRemoveSystemWorkPriorityKick((__int64)v50);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v52 = KeGetCurrentPrcb();
        v53 = v52->SchedulerAssist;
        v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v49 = (v54 & v53[5]) == 0;
        v53[5] &= v54;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick((__int64)v52);
      }
    }
    goto LABEL_86;
  }
  if ( v35->NextThread && !v35->DpcRoutineActive )
    KiRequestSoftwareInterrupt(v35, 2);
  return (unsigned int)v16;
}
