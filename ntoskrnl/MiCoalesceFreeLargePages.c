/*
 * XREFs of MiCoalesceFreeLargePages @ 0x1402C89C0
 * Callers:
 *     MiRebuildLargeZeroPage @ 0x1402C87A0 (MiRebuildLargeZeroPage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiLargePfnPromoteCandidate @ 0x1402C8F70 (MiLargePfnPromoteCandidate.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiLargePagePromote @ 0x14034EC80 (MiLargePagePromote.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064C4F4 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiChangePageHeatImmediate @ 0x1406517FC (MiChangePageHeatImmediate.c)
 */

char __fastcall MiCoalesceFreeLargePages(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v3; // r14d
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r15
  int v12; // ebx
  struct _KTHREAD *v13; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v15; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v19; // r9
  unsigned __int64 v20; // r13
  unsigned int v21; // ebp
  __int64 v22; // r15
  _QWORD *v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // r15d
  BOOL v28; // edx
  __int64 v29; // r10
  int v30; // r8d
  unsigned int v31; // ebp
  unsigned __int64 v32; // r14
  __int64 v33; // rbx
  unsigned __int64 v34; // rdi
  __int64 v35; // r14
  _QWORD *v36; // rsi
  unsigned __int8 v37; // di
  unsigned int v38; // r15d
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 i; // rax
  $C71981A45BEB2B45F82C232A7085991E *v42; // rax
  struct _KTHREAD *v43; // rcx
  bool v44; // zf
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  signed __int64 *v47; // rbx
  struct _KTHREAD *v48; // rcx
  __int64 v49; // rbx
  unsigned int v50; // edi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  unsigned __int8 v55; // cl
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  char v60; // [rsp+30h] [rbp-B8h]
  __int64 v63; // [rsp+48h] [rbp-A0h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+50h] [rbp-98h]
  unsigned int v65; // [rsp+58h] [rbp-90h]
  unsigned int v66; // [rsp+5Ch] [rbp-8Ch]
  int v67; // [rsp+60h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-80h]
  __int64 v69; // [rsp+78h] [rbp-70h]
  __int64 v70; // [rsp+80h] [rbp-68h]
  __int128 v71; // [rsp+90h] [rbp-58h]

  v3 = a3;
  v70 = a1;
  v5 = MiLargePageSizes[a3];
  v6 = MiLargePageSizes[a3 - 1];
  v7 = a2;
  v66 = a3 - 1;
  v71 = 0LL;
  v69 = 48 * a2;
  v8 = 48 * a2 - 0x220000000000LL;
  v63 = v8;
  v9 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * a2) >> 4));
  v10 = a1 + 216;
  v60 = 17;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = *(_DWORD *)(v9 + 8);
  --CurrentThread->SpecialApcDisable;
  v13 = KeGetCurrentThread();
  v67 = 0;
  BugCheckParameter2 = (volatile signed __int64 *)v10;
  _disable();
  AbEntrySummary = v13->AbEntrySummary;
  if ( v13->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v10, v13), v10 = (__int64)BugCheckParameter2, AbEntrySummary) )
  {
    _BitScanForward(&v15, AbEntrySummary);
    v65 = v15;
    v13->AbEntrySummary = AbEntrySummary & ~(1 << v15);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v45 = *SchedulerAssist;
      do
      {
        v46 = v45;
        v45 = _InterlockedCompareExchange(SchedulerAssist, v45 & 0xFFDFFFFF, v45);
      }
      while ( v46 != v45 );
      if ( (v45 & 0x200000) != 0 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v10 = (__int64)BugCheckParameter2;
      }
    }
    _enable();
    v11 = (__int64)(&v13[1].Process + 12 * v65);
    if ( (unsigned __int64)(v10 - qword_140C65668) < 0x8000000000LL )
    {
      SessionId = MmGetSessionIdEx(v13->ApcState.Process);
      v10 = (__int64)BugCheckParameter2;
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v11 + 8) = SessionId;
    *(_QWORD *)v11 = v10 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v10, 0, v11, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v19 = 0x40000000000000LL;
  v20 = v6 / v5;
  v21 = 0;
  if ( v20 )
  {
    v22 = 48 * v5;
    v23 = (_QWORD *)(v69 - 0x21FFFFFFFFD8LL);
    while ( v7 <= qword_140C65820 && (*v23 & 0x40000000000000LL) != 0 )
    {
      if ( !(unsigned int)MiLargePfnPromoteCandidate(v70, v8, a3, 0x40000000000000LL) )
      {
        v19 = 0x40000000000000LL;
        break;
      }
      v24 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4));
      v19 = 0x40000000000000LL;
      if ( v12 == *(_DWORD *)(v24 + 8) )
      {
        ++v21;
        v25 = (unsigned __int64)*(unsigned __int8 *)(v8 + 34) >> 6;
        v8 += v22;
        v7 += v5;
        v23 = (_QWORD *)((char *)v23 + v22);
        ++*((_DWORD *)&v71 + v25);
        if ( v21 < v20 )
          continue;
      }
      break;
    }
    v3 = a3;
  }
  if ( v21 == v20 )
  {
    v26 = 0;
    v27 = 1;
    if ( (_DWORD)v71 )
    {
      v26 = v71;
      v27 = 0;
    }
    v28 = 0;
    if ( DWORD1(v71) )
      v28 = v26 != 0;
    if ( v26 < DWORD1(v71) )
    {
      v26 = DWORD1(v71);
      v27 = 1;
    }
    if ( DWORD2(v71) && v26 )
      v28 = 1;
    if ( v26 < DWORD2(v71) )
    {
      v26 = DWORD2(v71);
      v27 = 2;
    }
    if ( HIDWORD(v71) && v26 )
      v28 = 1;
    v29 = v63;
    v30 = 3;
    if ( v26 < HIDWORD(v71) )
      v27 = 3;
    v31 = 0;
    if ( v28 )
    {
      v49 = v63;
      v50 = 0;
      if ( v20 )
      {
        while ( (unsigned int)MiChangePageAttributeLargeFreeZeroPage(v49, v3, v27, v19) )
        {
          ++v50;
          v49 += 48 * v5;
          if ( v50 >= v20 )
          {
            v29 = v63;
            v19 = 0x40000000000000LL;
            v34 = a2;
            v33 = v63;
            goto LABEL_33;
          }
        }
        v47 = (signed __int64 *)BugCheckParameter2;
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
          goto LABEL_73;
        goto LABEL_74;
      }
    }
    v32 = a2;
    v33 = v63;
    v34 = a2;
    if ( v20 )
    {
LABEL_33:
      v35 = 48 * v5;
      v36 = (_QWORD *)(v69 - 0x21FFFFFFFFD8LL);
      while ( 1 )
      {
        if ( v34 > qword_140C65820 || (*v36 & 0x40000000000000LL) == 0 )
          goto LABEL_42;
        if ( v33 == v29 )
        {
          v60 = MiLockPageInline(v33);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
        {
          goto LABEL_42;
        }
        if ( !(unsigned int)MiLargePfnPromoteCandidate(v70, v33, a3, v19) || *(unsigned __int8 *)(v33 + 34) >> 6 != v27 )
          break;
        ++v31;
        v33 += v35;
        v34 += v5;
        v36 = (_QWORD *)((char *)v36 + v35);
        if ( v31 >= v20 )
          goto LABEL_42;
        v19 = 0x40000000000000LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v33 != v29 )
      {
LABEL_42:
        v32 = a2;
        v37 = v60;
        goto LABEL_43;
      }
      if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
      {
        v37 = v60;
        if ( (unsigned __int8)v60 <= 0xFu && CurrentIrql >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (v60 + 1));
          v44 = (v54 & v53[5]) == 0;
          v30 = v54 & v53[5];
          v53[5] = v30;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(v52);
          v29 = v63;
        }
      }
      else
      {
        v37 = v60;
      }
      __writecr8(v37);
      v32 = a2;
    }
    else
    {
      v37 = 17;
    }
LABEL_43:
    if ( v31 == v20 )
    {
      v38 = v66;
      MiLargePagePromote(v32, v66, v30, 0, (__int64)&v67);
      v29 = v63;
      v39 = 48 * v5;
      v40 = 48 * v5 + v63;
      if ( !v31 )
      {
LABEL_49:
        if ( v67 )
          MiChangePageHeatImmediate(v32, v38, 0LL);
LABEL_51:
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        LOBYTE(v42) = KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
        v43 = CurrentThread;
        v44 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v44 )
        {
          v42 = &v43->152;
          if ( ($C71981A45BEB2B45F82C232A7085991E *)v42->ApcState.ApcListHead[0].Flink != v42 )
            goto LABEL_67;
        }
        return (char)v42;
      }
    }
    else
    {
      if ( !v31 )
        goto LABEL_51;
      v38 = v66;
      v39 = 48 * v5;
      v40 = v29;
    }
    for ( i = v29 + v5 * (48LL * v31 - 48); i != v40; i -= v39 )
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v55 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v55 <= 0xFu && v37 <= 0xFu && v55 >= 2u )
      {
        v56 = KeGetCurrentPrcb();
        v57 = v56->SchedulerAssist;
        v58 = ~(unsigned __int16)(-1LL << (v37 + 1));
        v44 = (v58 & v57[5]) == 0;
        v57[5] &= v58;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(v56);
      }
    }
    __writecr8(v37);
    goto LABEL_49;
  }
  v47 = (signed __int64 *)BugCheckParameter2;
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
LABEL_73:
    ExfReleasePushLockShared(v47);
LABEL_74:
  LOBYTE(v42) = KeAbPostRelease((ULONG_PTR)v47);
  v48 = CurrentThread;
  v44 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v44 )
  {
    v42 = &v48->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v42->ApcState.ApcListHead[0].Flink != v42 )
LABEL_67:
      LOBYTE(v42) = KiCheckForKernelApcDelivery();
  }
  return (char)v42;
}
