/*
 * XREFs of MiStoreWriteModifiedPages @ 0x14046554A
 * Callers:
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14032F630 (MiTransferSoftwarePte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     MiSufficientAvailablePages @ 0x1403643E4 (MiSufficientAvailablePages.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     MiStoreCheckCandidatePage @ 0x1404650E0 (MiStoreCheckCandidatePage.c)
 *     MiStoreLogNotCandidate @ 0x140465332 (MiStoreLogNotCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140636AEC (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140639084 (MiRefPageFileSpaceBitmaps.c)
 *     MiUpdatePagefilePeakUsage @ 0x140639760 (MiUpdatePagefilePeakUsage.c)
 *     MiStoreDecrementOutstandingWrites @ 0x140659A2C (MiStoreDecrementOutstandingWrites.c)
 *     MiStoreFreeWriteSupport @ 0x140659CD0 (MiStoreFreeWriteSupport.c)
 *     MiStoreLogFullPagefile @ 0x140659D30 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x140659E3C (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140659EFC (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14065A04C (MiStoreLogWriteIssueRetry.c)
 *     MiStoreModifiedWriteDereference @ 0x14065A280 (MiStoreModifiedWriteDereference.c)
 *     MiStoreUpdatePagefileHash @ 0x14065A508 (MiStoreUpdatePagefileHash.c)
 *     MiStoreWriteIssue @ 0x14065A714 (MiStoreWriteIssue.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  ULONG v3; // esi
  __int64 v4; // r11
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v8; // r13
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v10; // edi
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  __int64 UnbiasedInterruptTime; // rax
  unsigned int v15; // r11d
  _QWORD *v16; // rcx
  ULONG v17; // eax
  void *v18; // rax
  unsigned int v19; // r9d
  unsigned int v20; // edx
  int v21; // r10d
  __int64 v22; // rbx
  unsigned int v23; // r8d
  unsigned int v24; // esi
  __int64 *v25; // rsi
  __int64 i; // rax
  unsigned int v27; // edx
  int v28; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  _BYTE *v33; // rdx
  _SLIST_ENTRY *v34; // rbx
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  struct _SLIST_ENTRY *Pool; // rdi
  unsigned int v40; // ebx
  int v41; // eax
  int v42; // edi
  int v43; // eax
  unsigned __int64 v44; // rdi
  _BYTE *v45; // r9
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  __int64 v50; // rax
  unsigned __int64 v51; // rbx
  unsigned __int8 v52; // r9
  unsigned __int8 v53; // al
  unsigned __int8 v54; // dl
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  __int64 v58; // r8
  unsigned int v59; // esi
  __int64 updated; // rbx
  __int64 v61; // rdx
  __int64 v62; // r13
  __int64 v63; // r15
  unsigned int *v64; // rax
  unsigned int v65; // r12d
  unsigned int v66; // r11d
  unsigned int v67; // r8d
  int v68; // edx
  int v69; // r9d
  __int64 v70; // r10
  unsigned int v71; // edi
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  int *v74; // r8
  int v75; // r9d
  int *v76; // rdx
  unsigned int v77; // edx
  int v78; // eax
  bool j; // zf
  _QWORD *v80; // rsi
  unsigned __int64 v81; // rax
  unsigned int v82; // edx
  _BYTE *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdi
  unsigned __int64 v86; // r12
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r10
  _DWORD *v89; // r9
  int v90; // eax
  void *v91; // rax
  __int64 v92; // [rsp+40h] [rbp-99h]
  ULONG v93; // [rsp+48h] [rbp-91h]
  int v94; // [rsp+4Ch] [rbp-8Dh]
  ULONG v95; // [rsp+50h] [rbp-89h]
  PSLIST_ENTRY P; // [rsp+58h] [rbp-81h]
  _SLIST_ENTRY *Object; // [rsp+60h] [rbp-79h]
  __int64 v98; // [rsp+70h] [rbp-69h] BYREF
  _QWORD *v99; // [rsp+78h] [rbp-61h]
  __int128 v100; // [rsp+80h] [rbp-59h] BYREF
  unsigned __int64 v101; // [rsp+90h] [rbp-49h] BYREF
  struct _KTHREAD *v102; // [rsp+98h] [rbp-41h]
  __int64 v103; // [rsp+A0h] [rbp-39h] BYREF
  __int128 v104; // [rsp+A8h] [rbp-31h]
  __int128 v105; // [rsp+B8h] [rbp-21h]
  __int64 v106; // [rsp+C8h] [rbp-11h]
  __int64 v107; // [rsp+D0h] [rbp-9h]
  __int64 v108; // [rsp+D8h] [rbp-1h]
  __int64 v109; // [rsp+E0h] [rbp+7h]
  unsigned int v111; // [rsp+148h] [rbp+6Fh]
  int v112; // [rsp+150h] [rbp+77h]
  unsigned int v113; // [rsp+158h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1 + 208;
  v3 = *(_DWORD *)(a1 + 248) >> 12;
  v4 = a1;
  v101 = 0LL;
  v5 = *(_QWORD *)(v1 + 248);
  v100 = 0LL;
  v98 = 0LL;
  v104 = 0LL;
  v6 = *(unsigned int *)(v5 + 1204);
  v109 = v2;
  v95 = v3;
  v105 = 0LL;
  if ( (_DWORD)v6 )
  {
    MiStoreLogWriteDisabled(v6, v3);
    --*(_DWORD *)(v5 + 1204);
    return 3221225626LL;
  }
  v8 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1188) + 17056);
  v92 = v8;
  if ( !*(_QWORD *)(v8 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  v103 = 0LL;
  Object = 0LL;
  --CurrentThread->KernelApcDisable;
  v102 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  if ( *(_QWORD *)(v5 + 1216) )
  {
    j = CurrentThread->SpecialApcDisable++ == -1;
    if ( j && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v10 = -1073740640;
    goto LABEL_148;
  }
  ++*(_DWORD *)(v5 + 1212);
  j = CurrentThread->SpecialApcDisable++ == -1;
  if ( j && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
    v4 = a1;
  }
  v11 = v8;
  LOBYTE(v12) = 17;
  *(_DWORD *)(v4 + 44) = 1;
  v13 = 0LL;
  v94 = 0;
  v113 = 0;
  v111 = *(_DWORD *)(v92 + 120);
  v112 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v16 = (_QWORD *)(v2 + 48);
  v107 = UnbiasedInterruptTime;
  v17 = 0;
  v108 = v2 + 48;
LABEL_14:
  v99 = v16;
  v93 = v17;
  while ( v17 < v3 )
  {
    v106 = *v16;
    if ( v106 == qword_140C69378 || !*(_QWORD *)(v11 + 24) )
      goto LABEL_42;
    if ( v103 != *(_QWORD *)(v11 + 112) )
    {
      if ( v103 )
      {
        v18 = (void *)MiDerefPageFileSpaceBitmaps(v11, &v103, 1LL);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
      }
      MiRefPageFileSpaceBitmaps(v11, &v103);
      v15 = v111;
    }
    v19 = v15 < (unsigned int)v104 ? v15 : 0;
    v20 = v104 - 1;
    v21 = (BYTE8(v104) & 4) != 0LL ? 0x20 : 0;
    v22 = *((_QWORD *)&v104 + 1) - ((BYTE8(v104) & 4) != 0LL ? 4 : 0);
    while ( 1 )
    {
      v23 = v21 + v20;
      if ( v20 - v19 != -1 )
        break;
      v24 = -1;
LABEL_33:
      if ( !v19 )
        goto LABEL_39;
      v27 = v15 + 1;
      if ( v15 + 1 > (unsigned int)v104 )
        v27 = v104;
      v20 = v27 - 1;
      v19 = 0;
    }
    v25 = (__int64 *)(v22 + 8 * ((unsigned __int64)(v21 + v19) >> 6));
    for ( i = ((1LL << ((v21 + v19) & 0x3F)) - 1) | *v25; i == -1; i = *v25 )
    {
      if ( (unsigned __int64)++v25 > v22 + 8 * ((unsigned __int64)v23 >> 6) )
        goto LABEL_37;
    }
    _BitScanForward64((unsigned __int64 *)&i, ~i);
    v24 = i + ((unsigned int)(((__int64)v25 - v22) >> 3) << 6);
    if ( v24 > v23 )
    {
LABEL_37:
      v24 = -1;
LABEL_32:
      v15 = v111;
      goto LABEL_33;
    }
    if ( v24 == -1 )
      goto LABEL_32;
    v24 -= v21;
LABEL_39:
    v13 = 48 * v106 - 0x220000000000LL;
    v12 = (unsigned __int8)MiLockPageInline(v13);
    if ( (*(_QWORD *)(v13 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_42;
    v98 = 0LL;
    v28 = MiStoreCheckCandidatePage(v13, v24, &v101, &v100, &v98);
    if ( v28 < 0 )
    {
      MiStoreLogNotCandidate(v28);
LABEL_42:
      if ( (_BYTE)v12 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            j = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( j )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8((unsigned __int8)v12);
        LOBYTE(v12) = 17;
      }
LABEL_51:
      if ( Object )
      {
        ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
        Object = 0LL;
      }
      goto LABEL_53;
    }
    if ( (BYTE8(v100) & 3) != 0 )
    {
      v34 = Object;
    }
    else
    {
      if ( !ObReferenceObjectSafeWithTag(v100) )
        goto LABEL_42;
      v34 = (_SLIST_ENTRY *)v100;
      Object = (_SLIST_ENTRY *)v100;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v35 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        j = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( j )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
    __writecr8(v12);
    LOBYTE(v12) = 17;
    P = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 1296));
    Pool = P;
    if ( !P )
    {
      Pool = (struct _SLIST_ENTRY *)MiAllocatePool(64, 0x80uLL, 0x57536D4Du);
      P = Pool;
      if ( !Pool )
      {
        v94 = 1;
        goto LABEL_51;
      }
    }
    Object = 0LL;
    Pool[4].Next = v34;
    if ( (unsigned __int64)(*(_QWORD *)(v92 + 24) - 1LL) >= 8 )
      v40 = 8;
    else
      v40 = *(_DWORD *)(v92 + 24) - 1;
    v41 = v112;
    if ( v112 )
    {
      v41 = MiSufficientAvailablePages(v5, 0x120uLL);
      if ( v41 )
      {
        v41 = (unsigned __int64)(KiQueryUnbiasedInterruptTime() - v107) < 0x2FAF080 ? v112 : 0;
        v112 = v41;
      }
      else
      {
        v112 = 0;
        if ( v40 >= 3 )
          v40 = 3;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    v42 = MiStoreWriteIssue(Pool, v13, &v101, &v100, Pool, v98, a1, v41);
    if ( v42 >= 0 )
    {
      v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v92 + 232));
      v45 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v92 + 112) + 16LL) + ((unsigned __int64)v24 >> 3));
      v111 = v24 + 1;
      *v45 |= 1 << (v24 & 7);
      *(_DWORD *)(v92 + 120) = v24 + 1;
      --*(_QWORD *)(v92 + 24);
      MiUpdatePagefilePeakUsage(v92);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v92 + 232));
      if ( KiIrqlFlags )
      {
        v46 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
          j = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( j )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
      __writecr8(v44);
      v12 = (unsigned __int8)MiLockPageInline(v13);
      v50 = MiCapturePageFileInfoInline((unsigned __int64 *)(v13 + 16), 1, 1);
      *(_QWORD *)(v13 + 16) &= ~2uLL;
      v51 = v50;
      *(_QWORD *)(v13 + 16) = MiTransferSoftwarePte(*(_QWORD *)(v13 + 16), v92, v24, 1);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v53 = KeGetCurrentIrql();
        v54 = v52;
        if ( ((unsigned __int8)KiIrqlFlags & v52) != 0 && v53 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v53 >= 2u )
        {
          v55 = KeGetCurrentPrcb();
          v56 = v55->SchedulerAssist;
          v57 = ~(unsigned __int16)(-1LL << (v54 + (unsigned __int8)v12));
          j = (v57 & v56[5]) == 0;
          v56[5] &= v57;
          if ( j )
            KiRemoveSystemWorkPriorityKick(v55);
        }
      }
      __writecr8(v12);
      LOBYTE(v12) = 17;
      if ( v51 )
        MiReleasePageFileInfo(v5, v51, 2);
      goto LABEL_54;
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
    MiStoreFreeWriteSupport(P);
    if ( v42 != -1073740682 )
    {
      v43 = v94;
      if ( v42 == -1073741670 )
        v43 = 1;
      v94 = v43;
LABEL_84:
      MiStoreLogWriteIssueFailure(v42, (unsigned int)&v100, v24, v113, v112, ++*(_DWORD *)(v5 + 1208));
LABEL_53:
      v33 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 1336) + 8LL) + ((unsigned __int64)v93 >> 3));
      *v33 |= 1 << (v93 & 7);
LABEL_54:
      v17 = v93 + 1;
      v3 = v95;
      v16 = v99 + 1;
      v113 = 0;
      v11 = v92;
      v15 = v111;
      goto LABEL_14;
    }
    v111 = v24 + 1;
    if ( v113 >= v40 )
      goto LABEL_84;
    MiStoreLogWriteIssueRetry((unsigned int)&v100, v24, v113, v112, *(_DWORD *)(v5 + 1208));
    v3 = v95;
    v17 = v93;
    v15 = v111;
    v16 = v99;
    ++v113;
    v11 = v92;
  }
  CurrentThread = v102;
  if ( v94 )
    *(_DWORD *)(v5 + 1204) = 32;
  v58 = *(_QWORD *)(v5 + 1336);
  if ( !*(_DWORD *)v58 )
    goto LABEL_107;
  if ( v3 > 1 )
  {
    if ( *(_DWORD *)v58 < v3 )
      goto LABEL_107;
    v74 = *(int **)(v58 + 8);
    v75 = *v74;
    v76 = &v74[(unsigned __int64)(v3 - 1) >> 5];
    if ( v74 == v76 )
    {
      v77 = 0xFFFFFFFF >> (32 - v3);
      v78 = v75 & v77;
    }
    else
    {
      for ( j = v75 == -1; ; j = *v74 == -1 )
      {
        if ( !j )
          goto LABEL_107;
        if ( ++v74 == v76 )
          break;
      }
      v77 = 0xFFFFFFFF >> ~(v3 - 1);
      v78 = *v74 & v77;
    }
    if ( v78 != v77 )
      goto LABEL_107;
LABEL_122:
    RtlClearBits(*(PRTL_BITMAP *)(v5 + 1336), 0, v3);
    *(_DWORD *)(a1 + 44) = 0;
    --CurrentThread->SpecialApcDisable;
    MiStoreDecrementOutstandingWrites(v5);
    v10 = -1073740759;
    j = CurrentThread->SpecialApcDisable++ == -1;
    if ( j && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    goto LABEL_147;
  }
  if ( v3 == 1 && _bittest(*(const signed __int32 **)(v58 + 8), 0) )
    goto LABEL_122;
LABEL_107:
  v59 = -1;
  updated = ZeroPte;
  v61 = *(_QWORD *)(a1 + 144);
  v62 = *(_QWORD *)(a1 + 176) >> 12;
  if ( (*(_BYTE *)(v61 + 204) & 0x40) == 0 )
    updated = MiTransferSoftwarePte(ZeroPte, v61, v62, 1);
  v63 = v108;
  while ( 2 )
  {
    v64 = *(unsigned int **)(v5 + 1336);
    v65 = v59 + 1;
    v66 = *v64;
    v67 = v65 < *v64 ? v65 : 0;
    v68 = *v64 - 1;
    v69 = (v64[2] & 4) != 0LL ? 0x20 : 0;
    v70 = *((_QWORD *)v64 + 1) - ((*((_QWORD *)v64 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v71 = v68 + v69;
      v72 = 1LL;
      v73 = v67 + v69;
      if ( v71 - (_DWORD)v73 == -1 )
        goto LABEL_112;
      v80 = (_QWORD *)(v70 + 8 * (v73 >> 6));
      v72 = ~*v80 | ((1LL << ((v67 + v69) & 0x3F)) - 1);
      v73 = -1LL;
      if ( v72 == -1LL )
      {
        while ( (unsigned __int64)++v80 <= v70 + 8 * ((unsigned __int64)v71 >> 6) )
        {
          v72 = ~*v80;
          if ( v72 != -1LL )
            goto LABEL_128;
        }
LABEL_112:
        v59 = -1;
        goto LABEL_130;
      }
LABEL_128:
      v72 = ~v72;
      _BitScanForward64(&v81, v72);
      v59 = v81 + ((unsigned int)(((__int64)v80 - v70) >> 3) << 6);
      if ( v59 > v71 )
        goto LABEL_112;
      if ( v59 != -1 )
        break;
LABEL_130:
      if ( !v67 )
        goto LABEL_135;
      v82 = v65 + 1;
      if ( v65 + 1 > v66 )
        v82 = v66;
      v68 = v82 - 1;
      v67 = 0;
    }
    v59 -= v69;
LABEL_135:
    if ( v59 != -1 )
    {
      v83 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 1336) + 8LL) + ((unsigned __int64)v59 >> 3));
      *v83 &= ~(1 << (v59 & 7));
      v84 = *(_QWORD *)(v63 + 8LL * v59);
      if ( v84 == qword_140C69378 )
      {
        updated = MiUpdatePageFileHighInPte(updated, v59 + (unsigned int)v62);
        MiReleasePageFileInfo(v5, updated, 2);
      }
      else
      {
        v85 = 48 * v84 - 0x220000000000LL;
        v86 = (unsigned __int8)MiLockPageInline(v85);
        *(_BYTE *)(v85 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v85 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v87 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v87 <= 0xFu && (unsigned __int8)v86 <= 0xFu && v87 >= 2u )
          {
            v88 = KeGetCurrentPrcb();
            v89 = v88->SchedulerAssist;
            v90 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v86 + 1));
            j = (v90 & v89[5]) == 0;
            v89[5] &= v90;
            if ( j )
              KiRemoveSystemWorkPriorityKick(v88);
          }
        }
        __writecr8(v86);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(v73, v72, v109, v95);
  *(_DWORD *)(a1 + 40) |= 0x20u;
  MiStoreModifiedWriteDereference(a1);
  CurrentThread = v102;
  v10 = 259;
LABEL_147:
  v8 = v92;
LABEL_148:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v103 )
  {
    v91 = (void *)MiDerefPageFileSpaceBitmaps(v8, &v103, 0LL);
    if ( v91 )
      ExFreePoolWithTag(v91, 0);
  }
  return v10;
}
