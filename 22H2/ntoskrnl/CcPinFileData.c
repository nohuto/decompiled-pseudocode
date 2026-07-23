/*
 * XREFs of CcPinFileData @ 0x14029FCC0
 * Callers:
 *     CcZeroDataInCache @ 0x140359C58 (CcZeroDataInCache.c)
 *     CcPinRead @ 0x14063C8C0 (CcPinRead.c)
 *     CcPinMappedData @ 0x14063CAA0 (CcPinMappedData.c)
 *     CcMapData @ 0x14063CF30 (CcMapData.c)
 *     CcPreparePinWrite @ 0x140678510 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x1406786E4 (CcMapDataCommon.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x140271D9C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x14029D410 (CcAllocateInitializeBcb.c)
 *     ExAcquireSharedStarveExclusive @ 0x14029EBB0 (ExAcquireSharedStarveExclusive.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14029EC70 (CcGetBcbListHeadLargeOffset.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14029EDE0 (ExpAcquireSharedStarveExclusive.c)
 *     CcGetVirtualAddress @ 0x1402A15A0 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1402A1A70 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x1404EAF88 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404EB154 (CcReferenceFileOffset.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405B485C (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        __int64 *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // rsi
  __int64 v11; // r13
  volatile signed __int32 *v12; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v15; // rcx
  int SessionId; // eax
  __int64 v17; // rcx
  bool v18; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v20; // r15
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  _QWORD *BcbListHeadLargeOffset; // rdi
  __int64 v28; // rdi
  __int16 v29; // ax
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  char v32; // al
  __int64 v33; // rax
  _QWORD *v34; // r15
  volatile signed __int32 *v35; // rbx
  unsigned __int64 v36; // rsi
  signed __int32 v37; // eax
  struct _ERESOURCE *v38; // rdi
  __int16 v39; // cx
  __int64 v40; // rsi
  struct _KTHREAD *v41; // rdi
  NTSTATUS v42; // r8d
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rsi
  unsigned int v45; // r15d
  struct _KTHREAD *v46; // rdi
  unsigned __int8 v47; // al
  __int64 v48; // rcx
  __int64 v49; // rsi
  int v50; // eax
  __int64 v51; // rcx
  __int16 SpecialApcDisable; // ax
  unsigned __int8 v53; // di
  unsigned __int64 v54; // rdi
  signed __int32 v55; // eax
  __int64 v56; // rbx
  struct _KEVENT *v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // rdx
  struct _ERESOURCE *v60; // rcx
  int v61; // edx
  __int64 v62; // rbx
  unsigned int v63; // r8d
  __int16 v64; // ax
  unsigned int v65; // r15d
  unsigned int v66; // ebx
  char *v67; // rax
  struct _ERESOURCE *v68; // rcx
  __int64 v69; // r8
  unsigned __int8 v70; // dl
  struct _KTHREAD *v71; // r8
  unsigned __int8 v72; // al
  __int64 v73; // rax
  unsigned __int8 v74; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v77; // edx
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  __int64 v83; // rbx
  struct _KEVENT *v84; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v86; // [rsp+30h] [rbp-D8h]
  int v87; // [rsp+34h] [rbp-D4h]
  _QWORD *P; // [rsp+38h] [rbp-D0h]
  __int64 v89; // [rsp+40h] [rbp-C8h] BYREF
  int v90; // [rsp+48h] [rbp-C0h] BYREF
  int v91; // [rsp+4Ch] [rbp-BCh]
  __int64 v92; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v93; // [rsp+58h] [rbp-B0h] BYREF
  int v94; // [rsp+60h] [rbp-A8h]
  int v95; // [rsp+64h] [rbp-A4h]
  __int64 v96; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v97; // [rsp+70h] [rbp-98h]
  int v98; // [rsp+78h] [rbp-90h]
  int v99; // [rsp+7Ch] [rbp-8Ch]
  int v100; // [rsp+80h] [rbp-88h]
  NTSTATUS v101; // [rsp+84h] [rbp-84h]
  int v102; // [rsp+88h] [rbp-80h]
  __int64 v103; // [rsp+90h] [rbp-78h]
  __int64 v104; // [rsp+98h] [rbp-70h]
  __int64 v105; // [rsp+A0h] [rbp-68h]
  __int64 v106; // [rsp+A8h] [rbp-60h]
  int v107; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *v108; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v109; // [rsp+C0h] [rbp-48h]

  v10 = 0LL;
  v96 = 0LL;
  v91 = 0;
  v90 = 0;
  v89 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v106 = v11;
  if ( *a2 + a3 > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x129uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  *a8 = 0LL;
  if ( (a6 & 4) != 0 )
  {
    v90 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v11, *a2);
  }
  else
  {
    *a8 = CcGetVirtualAddress(v11, *a2, (unsigned int)&v89, (unsigned int)&v90, (a6 & 0x40) != 0, 0);
  }
  v12 = (volatile signed __int32 *)(v11 + 280);
  v99 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v11 + 280, KeGetCurrentIrql(), 0LL);
  v98 = 0;
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_6;
  if ( CurrentThread->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_6:
    _BitScanForward((unsigned int *)&v15, AbEntrySummary);
    v98 = v15;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v15);
    v10 = (__int64)&CurrentThread->LockEntries[v15];
    goto LABEL_7;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceAutoBoostEntryExhaustion(CurrentThread, v11 + 280);
LABEL_7:
  if ( v10 )
  {
    if ( (unsigned __int64)v12 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v12 >> 39) & 0x1FF)) == 1 )
    {
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = (unsigned __int64)v12 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v17);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v12, 0) )
    ExpAcquireFastMutexContended(v11 + 280, v10);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 328) = CurrentIrql;
  v87 = 1;
  v93 = 0LL;
  v92 = 0LL;
  v20 = *a2;
  v21 = HIDWORD(*a2);
  v22 = a3;
  v23 = *a2 + a3;
  v96 = v23;
  v103 = 0LL;
  v24 = v20 + 0x80000;
  v25 = *(_QWORD *)(v11 + 32);
  v26 = HIDWORD(v20);
  if ( v25 <= 0x200000 || (LODWORD(v26) = v21, (*(_DWORD *)(v11 + 152) & 0x200) == 0) )
  {
    LODWORD(v21) = v26;
    goto LABEL_115;
  }
  if ( v25 <= 0x2000000 )
  {
    if ( v24 < v25 )
    {
      BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v11 + 88)
                                        + 8 * ((unsigned __int64)(unsigned int)v25 >> 18)
                                        + 16 * (v24 >> 19));
      goto LABEL_23;
    }
LABEL_115:
    BcbListHeadLargeOffset = (_QWORD *)(v11 + 16);
    goto LABEL_23;
  }
  BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v11, v20 + 0x80000, 1);
  v22 = a3;
LABEL_23:
  v28 = *BcbListHeadLargeOffset - 16LL;
  v103 = v28;
  if ( (_DWORD)v21 || (v29 = *(_WORD *)v28, *(_WORD *)v28 != 765) || *(_DWORD *)(v28 + 36) )
  {
    while ( *(_WORD *)v28 == 765 && v20 < *(_QWORD *)(v28 + 32) )
    {
      v73 = *(_QWORD *)(v28 + 8);
      if ( v20 >= v73 )
      {
        v32 = 1;
        goto LABEL_34;
      }
      if ( v23 >= v73 )
        v23 = *(_QWORD *)(v28 + 8);
      v96 = v23;
      v28 = *(_QWORD *)(v28 + 16) - 16LL;
      v103 = v28;
    }
  }
  else
  {
    v30 = v96;
    while ( v29 == 765 && (unsigned int)v20 < *(_DWORD *)(v28 + 32) )
    {
      v31 = *(_DWORD *)(v28 + 8);
      if ( (unsigned int)v20 >= v31 )
      {
        v32 = 1;
        goto LABEL_34;
      }
      if ( v30 >= v31 )
      {
        v30 = *(_DWORD *)(v28 + 8);
        LODWORD(v96) = v30;
        v23 = v96;
      }
      v28 = *(_QWORD *)(v28 + 16) - 16LL;
      v103 = v28;
      v29 = *(_WORD *)v28;
    }
  }
  v32 = 0;
LABEL_34:
  P = (_QWORD *)v28;
  if ( !v32 )
  {
    if ( (a6 & 8) != 0 )
    {
      v28 = 0LL;
      P = 0LL;
      v86 = 0;
      v34 = a8;
      goto LABEL_74;
    }
    v93 = v20;
    v62 = v23 - v20;
    v61 = v20 & 0xFFF;
    LODWORD(v62) = v61 + v62;
    v92 = v62;
    v63 = v61 + v90;
    v90 += v61;
    if ( (a4 || (*(_DWORD *)(v11 + 152) & 4) != 0) && (v64 = v20, !a5) )
    {
      v65 = v91;
    }
    else
    {
      v64 = v20;
      v65 = 2;
      v91 = 2;
      if ( !v61 )
      {
        if ( (unsigned int)v22 >= 0x1000 )
          v65 = 3;
        v91 = v65;
      }
      if ( (v62 & 0xFFF) == 0 )
      {
        v65 |= 4u;
        v91 = v65;
      }
    }
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      a4 = 1;
    v66 = (v62 + 4095) & 0xFFFFF000;
    LODWORD(v92) = v66;
    *a8 -= v64 & 0xFFF;
    LODWORD(v93) = v93 & 0xFFFFF000;
    if ( v66 > v63 )
    {
      v66 = v63;
      LODWORD(v92) = v63;
    }
    v67 = CcAllocateInitializeBcb(v11, v28, &v93, &v92);
    v28 = (__int64)v67;
    P = v67;
    if ( (a6 & 1) != 0 )
    {
      if ( !v67 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        RtlRaiseStatus(-1073741670);
      }
      if ( !a4 )
      {
        v68 = (struct _ERESOURCE *)(v67 + 72);
        if ( (a6 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v68, 0) )
            KeBugCheckEx(0x34u, 0x201F7uLL, v28, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v68, 0) )
        {
          KeBugCheckEx(0x34u, 0x201FEuLL, v28, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v87 = 0;
      if ( (a6 & 4) == 0 )
      {
        LOBYTE(v69) = 1;
        CcMapAndRead(v66, v65, v69, *a8);
        ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
        if ( !*(_QWORD *)(v28 + 184) )
        {
          *(_QWORD *)(v28 + 184) = *a8;
          *(_QWORD *)(v28 + 56) = v89;
          v89 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        *a8 = *(_QWORD *)(v28 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v28 + 8));
      }
      v34 = a8;
      goto LABEL_73;
    }
    if ( !v67 )
    {
      v86 = 0;
      v34 = a8;
      goto LABEL_74;
    }
    if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v67 + 72), 0) )
      KeBugCheckEx(0x34u, 0x2025EuLL, v28, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v87 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v66, v65, 0LL, *a8) )
    {
      v86 = 0;
      v34 = a8;
      goto LABEL_74;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    v34 = a8;
    if ( !*(_QWORD *)(v28 + 184) )
    {
      *(_QWORD *)(v28 + 184) = *a8;
      *(_QWORD *)(v28 + 56) = v89;
      v89 = 0LL;
    }
    goto LABEL_134;
  }
  if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    a4 = 1;
  if ( *(_QWORD *)(v28 + 184) )
  {
    if ( (a6 & 1) != 0 )
    {
      ++*(_DWORD *)(v28 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v87 = 0;
      if ( !a4 )
      {
        v60 = (struct _ERESOURCE *)(v28 + 72);
        if ( (a6 & 2) != 0 )
          ExAcquireResourceExclusiveLite(v60, 1u);
        else
          ExAcquireSharedStarveExclusive(v60, 1u);
      }
    }
    else
    {
      if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v28 + 72), 0) )
      {
        v28 = 0LL;
        P = 0LL;
        v86 = 0;
        v34 = a8;
        goto LABEL_74;
      }
      ++*(_DWORD *)(v28 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v87 = 0;
    }
    v34 = a8;
    *a8 = *(_QWORD *)(v28 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v28 + 8));
    goto LABEL_73;
  }
  v33 = (unsigned int)(v20 - *(_DWORD *)(v28 + 8));
  v34 = a8;
  *a8 -= v33;
  v93 = *(_QWORD *)(v28 + 8);
  v92 = *(unsigned int *)(v28 + 4);
  if ( (a6 & 1) == 0 )
  {
    if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v28 + 72), 0) )
    {
      v28 = 0LL;
      P = 0LL;
      v86 = 0;
      goto LABEL_74;
    }
    ++*(_DWORD *)(v28 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v87 = 0;
    if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v28 + 4), 0LL, 0LL, *a8) )
    {
      v86 = 0;
      goto LABEL_74;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    if ( !*(_QWORD *)(v28 + 184) )
    {
      *(_QWORD *)(v28 + 184) = *a8;
      *(_QWORD *)(v28 + 56) = v89;
      v89 = 0LL;
    }
LABEL_134:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    *v34 = *(_QWORD *)(v28 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v28 + 8));
    goto LABEL_73;
  }
  ++*(_DWORD *)(v28 + 64);
  v35 = (volatile signed __int32 *)(v11 + 280);
  *(_QWORD *)(v11 + 288) = 0LL;
  v36 = *(unsigned __int8 *)(v11 + 328);
  v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
  if ( v37 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(v11 + 280), v37);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v74 = KeGetCurrentIrql();
      if ( v74 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v74 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
        v18 = (v77 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v77;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v36);
  KeAbPostRelease(v11 + 280);
  v87 = 0;
  if ( !a4 )
  {
    v38 = (struct _ERESOURCE *)(v28 + 72);
    if ( (a6 & 2) != 0 )
    {
      ExAcquireResourceExclusiveLite(v38, 1u);
    }
    else
    {
      if ( (v38->Flag & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v38, 0LL, 0LL);
      v39 = v38->Flag & 1;
      if ( v39 )
      {
        v70 = KeGetCurrentIrql();
        v71 = KeGetCurrentThread();
        if ( v70 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, v70, 1uLL, 0LL);
        if ( (v71->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !v70 && (v71->MiscFlags & 0x400) == 0 && !v71->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v39 )
        ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v38);
      else
        ExpAcquireSharedStarveExclusive((__int64)v38, 1);
    }
  }
  if ( (a6 & 4) == 0 )
  {
    v40 = *a8;
    v41 = KeGetCurrentThread();
    v108 = v41;
    v100 = 0;
    v107 = 0;
    v42 = 0;
    v101 = 0;
    v43 = ((v40 & 0xFFF) + (unsigned __int64)(unsigned int)v92 + 4095) >> 12;
    v94 = v43;
    v44 = v40 & 0xFFFFFFFFFFFFF000uLL;
    v97 = v44;
    v45 = BYTE4(v41[1].Queue) + 4 * LODWORD(v41[1].WaitListEntry.Flink);
    while ( (_DWORD)v43 )
    {
      BYTE4(v41[1].Queue) = 1;
      v58 = v43 - 1;
      if ( (unsigned int)(v43 - 1) > LODWORD(v41[1].WaitListEntry.Flink) )
      {
        if ( v58 > 0xF )
          v58 = 15;
        LODWORD(v41[1].WaitListEntry.Flink) = v58;
      }
      v100 = 0;
      v59 = (unsigned int)((_DWORD)v43 << 12);
      v97 = (unsigned int)v59;
      v42 = MmCheckCachedPageStates(v44, v59, 0LL);
      v101 = v42;
      if ( v42 < 0 )
        break;
      v44 += v97;
      v97 = v44;
      LODWORD(v43) = 0;
      v94 = 0;
    }
    BYTE4(v41[1].Queue) = v45 & 3;
    LODWORD(v41[1].WaitListEntry.Flink) = v45 >> 2;
    if ( v42 < 0 )
      RtlRaiseStatus(v42);
    v105 = 0LL;
    v95 = 0;
    v46 = KeGetCurrentThread();
    --v46->SpecialApcDisable;
    if ( ++v46->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v46, v11 + 280, KeGetCurrentIrql(), 0LL);
    v105 = 0LL;
    v104 = 0LL;
    v102 = 0;
    v47 = v46->AbEntrySummary;
    if ( !v47 )
    {
      if ( !v46->AbOrphanedEntrySummary )
      {
        v49 = 0LL;
        v104 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v46, v11 + 280);
        goto LABEL_55;
      }
      v72 = v46->AbOrphanedEntrySummary;
      v46->AbOrphanedEntrySummary = 0;
      v46->AbEntrySummary |= v72;
      v47 = v46->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v48, v47);
    v102 = v48;
    v46->AbEntrySummary = v47 & ~(1 << v48);
    v49 = (__int64)&v46->LockEntries[v48];
    v104 = v49;
LABEL_55:
    v105 = v49;
    if ( v49 )
    {
      if ( (unsigned __int64)v35 >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v35 >> 39) & 0x1FF)) == 1 )
      {
        v50 = MmGetSessionIdEx(v46->ApcState.Process);
      }
      else
      {
        v50 = -1;
      }
      *(_DWORD *)(v49 + 40) = v50;
      *(_QWORD *)(v49 + 32) = (unsigned __int64)v35 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v46->116 + 1, 0x10u);
    }
    --v46->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v46);
    SpecialApcDisable = v46->SpecialApcDisable;
    v46->SpecialApcDisable = SpecialApcDisable + 1;
    if ( SpecialApcDisable == -1 && ($C459BD0D405E8E46662177FB3D0A143F *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
      KiCheckForKernelApcDelivery(v51);
    v53 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v35, 0) )
      ExpAcquireFastMutexContended(v11 + 280, v49);
    if ( v49 )
      *(_BYTE *)(v49 + 26) |= 1u;
    v109 = KeGetCurrentThread();
    *(_QWORD *)(v11 + 288) = v109;
    *(_DWORD *)(v11 + 328) = v53;
    if ( !P[23] )
    {
      P[23] = *a8;
      P[7] = v89;
      v89 = 0LL;
    }
    *(_QWORD *)(v11 + 288) = 0LL;
    v54 = *(unsigned __int8 *)(v11 + 328);
    v55 = _InterlockedCompareExchange(v35, 1, 0);
    if ( v55 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(v11 + 280), v55);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v78 = KeGetCurrentIrql();
        if ( v78 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v78 >= 2u )
        {
          v79 = KeGetCurrentPrcb();
          v80 = v79->SchedulerAssist;
          v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
          v18 = (v81 & v80[5]) == 0;
          v80[5] &= v81;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v79);
        }
      }
    }
    __writecr8(v54);
    KeAbPostRelease(v11 + 280);
    v28 = (__int64)P;
    v34 = a8;
    *a8 = P[23] + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
    goto LABEL_73;
  }
  v28 = (__int64)P;
  v34 = a8;
LABEL_73:
  v86 = 1;
LABEL_74:
  if ( (a6 & 6) == 6 && v28 && *(_QWORD *)(v28 + 184) )
  {
    v56 = *(_QWORD *)(*(_QWORD *)(v28 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v28 + 56) + 16LL)) )
    {
      v57 = *(struct _KEVENT **)(v56 + 184);
      if ( v57 )
        KeSetEvent(v57, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v56 + 544));
    }
    *(_QWORD *)(v28 + 184) = 0LL;
    *(_QWORD *)(v28 + 56) = 0LL;
    v28 = (__int64)P;
  }
  if ( v87 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
  if ( v89 )
  {
    v83 = *(_QWORD *)(v89 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v89 + 16)) )
    {
      v84 = *(struct _KEVENT **)(v83 + 184);
      if ( v84 )
        KeSetEvent(v84, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v83 + 544));
    }
    v28 = (__int64)P;
  }
  if ( (a6 & 4) != 0 )
    CcDereferenceFileOffset(v11, *a2);
  if ( v86 )
  {
    *a7 = v28;
    *a9 = *(_QWORD *)(v28 + 32);
  }
  else
  {
    *v34 = 0LL;
    if ( v28 )
      CcUnpinFileDataEx((char *)v28, a4, 0, (_DWORD *)v22);
  }
  return v86;
}
