/*
 * XREFs of IoBoostThreadIoPriority @ 0x140356FD0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     FsRtlpWaitForIoAtEof @ 0x140240CC0 (FsRtlpWaitForIoAtEof.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     FsRtlpDoBoost @ 0x1402ECD68 (FsRtlpDoBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140300D74 (CcBoostLowPriorityWorkerThread.c)
 *     ExpBoostIoAfterAcquire @ 0x140356B60 (ExpBoostIoAfterAcquire.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140356E2C (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     IoBoostThreadIo @ 0x14036F310 (IoBoostThreadIo.c)
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x140336C10 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IoBoostThreadIoPriority(volatile signed __int64 *a1, int a2, int a3)
{
  char v5; // r15
  volatile signed __int64 *v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rsi
  struct _EX_RUNDOWN_REF *v11; // rax
  __int64 v12; // r15
  KIRQL v13; // al
  volatile signed __int64 v14; // rdi
  KIRQL v15; // si
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  void *v18; // rsi
  unsigned __int16 v19; // si
  __int64 v20; // r12
  unsigned __int16 j; // di
  _QWORD *v22; // rsi
  unsigned __int64 v23; // rdi
  __int64 v24; // rsi
  struct _EX_RUNDOWN_REF *v25; // r8
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  KIRQL v28; // al
  __int64 v29; // rdi
  __int64 v30; // rcx
  volatile __int64 **v31; // rcx
  __int64 i; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v38; // eax
  bool v39; // zf
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  __int64 Pool2; // rax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  KIRQL v49; // [rsp+28h] [rbp-E0h]
  KIRQL v50; // [rsp+28h] [rbp-E0h]
  char v51; // [rsp+29h] [rbp-DFh]
  void *v53; // [rsp+30h] [rbp-D8h]
  __int64 v54; // [rsp+30h] [rbp-D8h]
  PEX_RUNDOWN_REF v56; // [rsp+38h] [rbp-D0h]
  _QWORD v58[10]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v59; // [rsp+A8h] [rbp-60h]
  PEX_RUNDOWN_REF RunRef[8]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v61[8]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = 0;
  memset(RunRef, 0, sizeof(RunRef));
  memset(v61, 0, sizeof(v61));
  if ( a3 < 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = a1 + 187;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 187);
    if ( *((volatile signed __int64 **)a1 + 160) == a1 + 160 )
    {
      if ( (a3 & 0x40000000) == 0 )
      {
        KxReleaseSpinLock(v6);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v39 = (v38 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v38;
            if ( v39 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v7);
        return;
      }
      v5 = 1;
    }
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      v40 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v39 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
    __writecr8(v7);
  }
  v8 = 0;
  v9 = 0LL;
  v10 = 8LL;
  do
  {
    v11 = ExReferenceCallBackBlock((signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v9 * 8));
    RunRef[v9] = v11;
    if ( v11 )
      v61[v9] = v11[2].Count;
    ++v9;
    --v10;
  }
  while ( v10 );
  if ( v5 == 1 )
  {
    v12 = 0LL;
    goto LABEL_24;
  }
  v12 = 0LL;
  v53 = 0LL;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 187);
  v14 = *((_QWORD *)a1 + 160);
  v15 = v13;
  v49 = v13;
  if ( (volatile signed __int64 *)v14 == a1 + 160 )
    goto LABEL_22;
  do
  {
    v16 = *(char *)(v14 + 34);
    if ( *(char *)(v14 + 35) <= (char)v16 )
    {
      v17 = *(_QWORD *)(v14 + 152);
      if ( v17 < v14 + 8 * (v16 + 8 * v16 + 22) )
      {
        v18 = *(void **)(v17 + 40);
        if ( v18 )
        {
          while ( 1 )
          {
            v56 = RunRef[(unsigned __int16)v12];
            if ( v56 )
            {
              v51 = 0;
              v31 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
              KxAcquireQueuedSpinLock((__int64)v31, v31[1]);
              for ( i = *(_QWORD *)(*(_QWORD *)(v61[(unsigned __int16)v12] + 32LL) + 8LL); i; i = *(_QWORD *)(i + 16) )
              {
                if ( (void *)i == v18 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
                {
                  v51 = 1;
                  break;
                }
              }
              KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 20);
              if ( v51 == 1 && v53 != v18 )
                break;
            }
            LOWORD(v12) = v12 + 1;
            if ( (unsigned __int16)v12 >= 8u )
              goto LABEL_19;
          }
          v53 = v18;
          if ( v8 >= 2 )
          {
            Pool2 = ExAllocatePool2(64LL, 48LL, 1128427337LL);
            if ( !Pool2 )
            {
LABEL_19:
              v12 = 0LL;
              goto LABEL_20;
            }
            *(_QWORD *)(Pool2 + 32) = v59;
            v59 = (_QWORD *)Pool2;
            *(_QWORD *)Pool2 = v56;
            *(_DWORD *)(Pool2 + 24) = a2;
            *(_WORD *)(Pool2 + 40) = v12;
            *(_QWORD *)(Pool2 + 8) = v18;
            *(_QWORD *)(Pool2 + 16) = a1;
          }
          else
          {
            v34 = 6LL * v8;
            v58[v34] = v56;
            LOWORD(v58[v34 + 5]) = v12;
            v58[v34 + 1] = v18;
            v58[v34 + 2] = a1;
            LODWORD(v58[v34 + 3]) = a2;
            v58[v34 + 4] = 0LL;
          }
          ++v8;
          ObfReferenceObjectWithTag(v18, 0x746C6644u);
          ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
          if ( (*(_DWORD *)(v14 - 16) & 2) != 0 )
            ++IoBoostedPagingIrpCount;
          else
            ++IoBoostedThreadedIrpCount;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    v14 = *(_QWORD *)v14;
  }
  while ( (volatile signed __int64 *)v14 != a1 + 160 );
  v15 = v49;
LABEL_22:
  KxReleaseSpinLock(a1 + 187);
  if ( KiIrqlFlags )
  {
    v45 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && v15 <= 0xFu && v45 >= 2u )
    {
      v46 = KeGetCurrentPrcb();
      v47 = v46->SchedulerAssist;
      v48 = ~(unsigned __int16)(-1LL << (v15 + 1));
      v39 = (v48 & v47[5]) == 0;
      v47[5] &= v48;
      if ( v39 )
        KiRemoveSystemWorkPriorityKick(v46);
    }
  }
  __writecr8(v15);
  if ( v8 )
    goto LABEL_29;
LABEL_24:
  v19 = 0;
  v54 = 0LL;
  while ( 2 )
  {
    v20 = *(__int64 *)((char *)RunRef + v12);
    if ( !v20 )
      goto LABEL_26;
    v28 = KeAcquireQueuedSpinLock(0xAuLL);
    v50 = v28;
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v61 + v12) + 32LL) + 8LL);
    if ( !v29 )
      goto LABEL_49;
    while ( 2 )
    {
      if ( (*(_DWORD *)(v29 + 48) & 0x1000000) == 0 )
        goto LABEL_47;
      if ( v8 < 2 )
      {
        v30 = 6LL * v8;
        LODWORD(v58[v30 + 3]) = a2;
        v58[v30 + 4] = 0LL;
        v58[v30] = v20;
        LOWORD(v58[v30 + 5]) = v19;
        v58[v30 + 1] = v29;
        v58[v30 + 2] = a1;
        goto LABEL_46;
      }
      v33 = ExAllocatePool2(64LL, 48LL, 1128427337LL);
      if ( v33 )
      {
        *(_QWORD *)(v33 + 32) = v59;
        v59 = (_QWORD *)v33;
        *(_QWORD *)v33 = v20;
        *(_WORD *)(v33 + 40) = v19;
        *(_QWORD *)(v33 + 8) = v29;
        *(_QWORD *)(v33 + 16) = a1;
        *(_DWORD *)(v33 + 24) = a2;
LABEL_46:
        ObfReferenceObjectWithTag((PVOID)v29, 0x746C6644u);
        ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
        ++v8;
LABEL_47:
        v29 = *(_QWORD *)(v29 + 16);
        if ( !v29 )
          break;
        continue;
      }
      break;
    }
    v12 = v54;
    v28 = v50;
LABEL_49:
    KeReleaseQueuedSpinLock(0xAuLL, v28);
LABEL_26:
    ++v19;
    v12 += 8LL;
    v54 = v12;
    if ( v19 < 8u )
      continue;
    break;
  }
  if ( v8 )
    ++IoBlanketBoostCount;
LABEL_29:
  for ( j = 0; j < v8; ++j )
  {
    if ( j >= 2u )
    {
      v22 = v59;
      v59 = (_QWORD *)v59[4];
    }
    else
    {
      v22 = &v58[6 * j];
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*v22 + 8LL))(*v22, v22 + 1, 0LL);
    if ( j >= 2u )
      ExFreePoolWithTag(v22, 0);
  }
  v23 = 0LL;
  v24 = 8LL;
  do
  {
    v25 = RunRef[v23 / 8];
    if ( v25 )
    {
      _m_prefetchw((char *)&IopUpdatePriorityCallbackRoutine + v23);
      v26 = *(_QWORD *)((char *)&IopUpdatePriorityCallbackRoutine + v23);
      if ( ((unsigned __int64)v25 ^ v26) >= 0xF )
      {
LABEL_92:
        ExReleaseRundownProtection_0(v25);
      }
      else
      {
        while ( 1 )
        {
          v27 = v26;
          v26 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v23),
                  v26 + 1,
                  v26);
          if ( v27 == v26 )
            break;
          if ( ((unsigned __int64)v25 ^ v26) >= 0xF )
            goto LABEL_92;
        }
      }
    }
    v23 += 8LL;
    --v24;
  }
  while ( v24 );
}
