/*
 * XREFs of MiDeletePartialVad @ 0x14027DF5C
 * Callers:
 *     MiFreeVadRange @ 0x140298C44 (MiFreeVadRange.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiDrainSystemAccessLog @ 0x14025B3E0 (MiDrainSystemAccessLog.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiClearVadBits @ 0x14027E680 (MiClearVadBits.c)
 *     MiLocateLockedVadEvent @ 0x14027EA4C (MiLocateLockedVadEvent.c)
 *     MiCaptureDeleteHierarchy @ 0x14027EA70 (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVirtualAddresses @ 0x14027EC00 (MiDeleteVirtualAddresses.c)
 *     MiAdvanceVadView @ 0x14027EC74 (MiAdvanceVadView.c)
 *     MiComputePageCommitment @ 0x14028D1E0 (MiComputePageCommitment.c)
 *     MiManageSubsectionView @ 0x140291780 (MiManageSubsectionView.c)
 *     MiDecrementSubsections @ 0x140295740 (MiDecrementSubsections.c)
 *     MiInsertVad @ 0x1402969B0 (MiInsertVad.c)
 *     MiFinishVadDeletion @ 0x140297440 (MiFinishVadDeletion.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402989F0 (MiReturnFullProcessCharges.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140298A90 (PsReturnProcessPagedPoolQuota.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     MiCountSharedPages @ 0x1402E2400 (MiCountSharedPages.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     MiUpControlAreaRefs @ 0x14052AAB0 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055502C (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14055527C (MiReInsertPlaceholderVad.c)
 *     MiRemoveSharedCommitNode @ 0x140638C00 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140638E70 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x14063A390 (MiInsertVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x14063C0B0 (MiReturnPageTablePageCommitment.c)
 *     MiResidentPagesForSpan @ 0x140698F04 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x1406A06B0 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406A6748 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x1408C85CC (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8328 (MiCreatePlaceholderStorage.c)
 *     MiLockNestedVad @ 0x1408D9AC8 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408D9AE4 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePartialVad(
        _QWORD *BugCheckParameter4,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5)
{
  unsigned int *v7; // rsi
  int v8; // r12d
  _KPROCESS *Process; // r14
  int v10; // eax
  SIZE_T v11; // r13
  int v12; // edx
  int v13; // r15d
  int v14; // ecx
  unsigned __int64 v15; // r12
  __int64 v16; // r14
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  LONG *v20; // rbx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // bl
  _QWORD *v24; // r14
  _QWORD *v25; // r15
  LONG *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rcx
  ULONG_PTR v30; // r14
  struct _KTHREAD *v31; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v33; // r15
  unsigned int v34; // edx
  __int64 v35; // r9
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // r14
  unsigned __int8 v39; // al
  __int64 v40; // rcx
  _KPROCESS *v41; // r14
  __int64 v42; // r13
  __int64 v43; // rbx
  ULONG_PTR v44; // rbx
  __int64 i; // r15
  LONG *SharedVm; // rbx
  int v48; // r9d
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  _QWORD *v53; // rcx
  __int64 k; // r14
  _QWORD *j; // rax
  __int64 v56; // r8
  unsigned int *Pool; // rax
  int PlaceholderStorage; // ebx
  __int64 v59; // rax
  unsigned int v60; // edx
  char v61; // al
  unsigned __int64 v62; // r14
  __int64 v63; // rcx
  unsigned int v64; // eax
  unsigned __int64 v65; // rcx
  LONG *v66; // rbx
  KIRQL v67; // al
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rcx
  int v71; // r9d
  __int64 v72; // rcx
  unsigned __int64 v73; // r15
  unsigned __int64 v74; // rbx
  LONG *v75; // rbx
  KIRQL v76; // al
  int v77; // edx
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // r14
  __int64 v81; // rcx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // r12
  __int64 v84; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v87; // eax
  __int64 v88; // r13
  __int64 v89; // rdi
  BOOL v90; // r15d
  unsigned __int64 v91; // rsi
  __int64 v92; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v94; // r8
  _DWORD *SchedulerAssist; // r9
  int v96; // eax
  bool v97; // [rsp+48h] [rbp-81h]
  __int64 v98; // [rsp+50h] [rbp-79h]
  ULONG_PTR v99; // [rsp+58h] [rbp-71h] BYREF
  __int64 v100; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 *v101; // [rsp+68h] [rbp-61h]
  _KPROCESS *v102; // [rsp+70h] [rbp-59h]
  unsigned int v103; // [rsp+78h] [rbp-51h]
  int v104; // [rsp+7Ch] [rbp-4Dh] BYREF
  int v105; // [rsp+80h] [rbp-49h]
  int v106; // [rsp+84h] [rbp-45h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-41h]
  __int64 v108; // [rsp+90h] [rbp-39h]
  unsigned __int64 v109; // [rsp+98h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-29h]
  __int128 v111; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v112; // [rsp+B8h] [rbp-11h]
  __int128 v113; // [rsp+C8h] [rbp-1h]
  KIRQL v114; // [rsp+128h] [rbp+5Fh]

  v104 = 0;
  v111 = 0LL;
  v99 = 0LL;
  v112 = 0LL;
  v7 = 0LL;
  v100 = 0LL;
  v8 = 0;
  v113 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v109 = (a3 - a2 + 1) >> 12;
  v97 = 0;
  Process = CurrentThread->ApcState.Process;
  v108 = 0LL;
  v103 = 0;
  v102 = Process;
  v101 = &Process[1].ActiveProcessorsPadding[6];
  v10 = *((_DWORD *)BugCheckParameter4 + 12);
  if ( (v10 & 0x100000) != 0 )
  {
    v11 = 64LL;
    v98 = 64LL;
    v12 = 8;
    if ( (v10 & 0x70) != 0x40 )
      v12 = 0;
    v103 = v12;
  }
  else
  {
    v11 = 136LL;
    v98 = 136LL;
    v56 = *(_QWORD *)BugCheckParameter4[9];
    v108 = v56;
    if ( *(_QWORD *)(v56 + 64) )
    {
      if ( (__int64)BugCheckParameter4[15] < 0 )
        return 3221225505LL;
      v97 = (*(_DWORD *)(v56 + 56) & 0x420) == 0;
    }
  }
  v13 = 2147483645;
  if ( a4 != 3 )
    goto LABEL_6;
  Pool = (unsigned int *)MiAllocatePool(64, v11, 0x46646156u);
  v7 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memmove(Pool, BugCheckParameter4, v11);
  v7[9] = 0;
  *((_QWORD *)v7 + 2) = -2LL;
  *((_QWORD *)v7 + 7) = 0LL;
  v59 = *((unsigned int *)BugCheckParameter4 + 13);
  LODWORD(v59) = v59 & 0x7FFFFFFF;
  v60 = v7[13] & 0x80000000;
  if ( (v59 | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    v61 = 15;
    v60 |= 0x7FFFFFFDu;
  }
  else
  {
    v61 = 0;
  }
  v7[13] = v60;
  *((_BYTE *)v7 + 34) = v61;
  *((_QWORD *)v7 + 5) = 0LL;
  v62 = ((a3 + 1) >> 12)
      - (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32));
  if ( (v7[12] & 0x70) == 0x40 && !(unsigned int)MiCreateRotateView(v7) )
  {
    PlaceholderStorage = -1073741670;
LABEL_105:
    MiFreeRotateView(v7);
    MiFreePlaceholderStorage(v7);
    ExFreePoolWithTag(v7, 0);
    return (unsigned int)PlaceholderStorage;
  }
  if ( MiLocateLockedVadEvent(BugCheckParameter4, 128LL) )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(v7);
    if ( PlaceholderStorage < 0 )
      goto LABEL_105;
  }
  MiLockNestedVad(v7);
  MiAdvanceVadView(v7, v62);
  MiUnlockNestedVad(v7);
  Process = v102;
  if ( v11 != 64 )
  {
    v63 = v108;
    v64 = v7[16] & 0xFDFFFFFF;
    *((_QWORD *)v7 + 15) = 0LL;
    v7[16] = v64;
    PlaceholderStorage = MiInsertSharedCommitNode(v63, Process, 0LL);
    if ( PlaceholderStorage < 0 )
      goto LABEL_105;
    v8 = 1;
  }
  PlaceholderStorage = MiInsertVadCharges(v7, Process);
  if ( PlaceholderStorage < 0 )
  {
    if ( v8 )
      MiRemoveSharedCommitNode(v108, Process, 0LL);
    goto LABEL_105;
  }
  v65 = Process[1].ActiveProcessorsPadding[8];
  if ( v11 == 64 )
  {
    if ( MiVadPageSizes[(v7[12] >> 18) & 3] == 16 )
      ++*(_QWORD *)(v65 + 424);
  }
  else
  {
    if ( *((_QWORD *)v7 + 16) )
    {
      ObfReferenceObjectWithTag(*((PVOID *)v7 + 16), 0x746C6644u);
    }
    else if ( MiVadPageSizes[(v7[12] >> 18) & 3] == 16 )
    {
      ++*(_QWORD *)(v65 + 432);
    }
    MiUpControlAreaRefs(v7, 1LL);
  }
LABEL_6:
  v14 = *((_DWORD *)BugCheckParameter4 + 12);
  v15 = 0LL;
  if ( (v14 & 0x70) == 0x10 || (v14 & 0x70) == 0x40 )
    v15 = MiResidentPagesForSpan(
            (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)) << 12,
            ((*((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32)) << 12) | 0xFFF,
            0LL);
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v16 = *((unsigned int *)BugCheckParameter4 + 13);
  LODWORD(v16) = v16 & 0x7FFFFFFF;
  v17 = ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | v16;
  if ( v17 != 0x7FFFFFFFDLL && v17 )
  {
    if ( v98 == 64 )
    {
      SharedVm = MiGetSharedVm((__int64)v101);
      LOBYTE(v48) = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v114 = v48;
      v19 = MiComputePageCommitment(a2, a3, (_DWORD)BugCheckParameter4, v48, 4, 0LL);
    }
    else
    {
      v19 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
          - MiCountSharedPages(
              BugCheckParameter4,
              ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          + 1;
      v66 = MiGetSharedVm((__int64)v101);
      v67 = ExAcquireSpinLockExclusive(v66);
      v66[1] = 0;
      v114 = v67;
    }
  }
  else
  {
    v18 = 0LL;
    if ( v17 != 0x7FFFFFFFDLL )
      v18 = v17;
    v19 = 0LL;
    v17 = v18;
    v20 = MiGetSharedVm((__int64)v101);
    v114 = ExAcquireSpinLockExclusive(v20);
    v20[1] = 0;
  }
  if ( a4 == 1 )
  {
    if ( v98 != 64 && v97 )
      MiGetProtoPteAddress(
        BugCheckParameter4,
        *((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32),
        0LL,
        &v99);
    v21 = v17 - v19;
    if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | *((_DWORD *)BugCheckParameter4 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v22) = 15;
    }
    else
    {
      v22 = v21 >> 31;
      v13 = v21 & 0x7FFFFFFF;
    }
    *((_DWORD *)BugCheckParameter4 + 13) = *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000 | v13;
    *((_BYTE *)BugCheckParameter4 + 34) = v22;
    MiAdvanceVadView(
      BugCheckParameter4,
      ((a3 + 1) >> 12)
    - (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)));
    if ( v98 != 64 && v97 )
      MiGetProtoPteAddress(
        BugCheckParameter4,
        *((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32),
        0LL,
        &v100);
    v23 = v114;
    v24 = BugCheckParameter4;
    v25 = 0LL;
  }
  else
  {
    v49 = v17 - v19;
    if ( a4 == 2 )
    {
      if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | *((_DWORD *)BugCheckParameter4 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        LOBYTE(v50) = 15;
      }
      else
      {
        v50 = v49 >> 31;
        v13 = v49 & 0x7FFFFFFF;
      }
      *((_DWORD *)BugCheckParameter4 + 13) = v13 | *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000;
      *((_BYTE *)BugCheckParameter4 + 34) = v50;
      if ( v98 != 64 && v97 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          *((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32),
          0LL,
          &v100);
        v100 = *(_QWORD *)(v100 + 16);
      }
      v51 = (a2 - 1) >> 44;
      v52 = (a2 - 1) >> 12;
      *((_DWORD *)BugCheckParameter4 + 7) = v52;
      *((_BYTE *)BugCheckParameter4 + 33) = v51;
      if ( v98 != 64 && v97 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          (unsigned int)v52 | ((unsigned __int64)(unsigned __int8)v51 << 32),
          0LL,
          &v99);
        v99 = *(_QWORD *)(v99 + 16);
        MiAdvanceVadView(BugCheckParameter4, 0LL);
      }
      v23 = v114;
      v24 = 0LL;
    }
    else
    {
      if ( v98 != 64 && v97 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          *((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32),
          0LL,
          &v100);
        v100 = *(_QWORD *)(v100 + 16);
      }
      v68 = a2 - 1;
      v69 = (a2 - 1) >> 12;
      v70 = (a2 - 1) >> 44;
      *((_DWORD *)BugCheckParameter4 + 7) = v69;
      *((_BYTE *)BugCheckParameter4 + 33) = v70;
      if ( v98 != 64 && v97 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          (unsigned int)v69 | ((unsigned __int64)(unsigned __int8)v70 << 32),
          0LL,
          &v99);
        v99 = *(_QWORD *)(v99 + 16);
        MiAdvanceVadView(BugCheckParameter4, 0LL);
      }
      v109 += (v7[7] | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32))
            - (v7[6] | ((unsigned __int64)*((unsigned __int8 *)v7 + 32) << 32))
            + 1;
      MiInsertVad(v7, v102, 2LL);
      v72 = *((unsigned int *)BugCheckParameter4 + 13);
      LODWORD(v72) = v72 & 0x7FFFFFFF;
      if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | v72) == 0x7FFFFFFFDLL )
      {
        v23 = v114;
        v73 = 0x7FFFFFFFDLL;
      }
      else if ( v98 == 64 )
      {
        v23 = v114;
        LOBYTE(v71) = v114;
        v73 = MiComputePageCommitment(
                *((_DWORD *)BugCheckParameter4 + 6) << 12,
                v68,
                (_DWORD)BugCheckParameter4,
                v71,
                4,
                0LL);
      }
      else
      {
        MiUnlockWorkingSetExclusive((__int64)v101, v114);
        v74 = 8
            * ((*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                               + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v73 = ((__int64)(((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v74) >> 3)
            - MiCountSharedPages(BugCheckParameter4, v74, ((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v75 = MiGetSharedVm((__int64)v101);
        v76 = ExAcquireSpinLockExclusive(v75);
        v75[1] = 0;
        v23 = v76;
        v114 = v76;
      }
      v77 = v73 & 0x7FFFFFFF;
      v78 = v73 & 0x7FFFFFFF | *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000;
      v79 = v73 >> 31;
      *((_DWORD *)BugCheckParameter4 + 13) = v78;
      LODWORD(v78) = v78 & 0x7FFFFFFF;
      *((_BYTE *)BugCheckParameter4 + 34) = v73 >> 31;
      if ( (((unsigned __int64)(unsigned __int8)(v73 >> 31) << 31) | v78) != 0x7FFFFFFFDLL )
      {
        v80 = v49 - v73;
        v79 = v80 >> 31;
        v77 = v80 & 0x7FFFFFFF;
      }
      v24 = v7;
      v7[13] = v7[13] & 0x80000000 | v77;
      *((_BYTE *)v7 + 34) = v79;
    }
    v25 = BugCheckParameter4;
  }
  MiUnlockWorkingSetExclusive((__int64)v101, v23);
  MiDeleteVirtualAddresses(a2, a3, v103, &v111);
  v26 = MiGetSharedVm((__int64)v101);
  ExAcquireSpinLockExclusive(v26);
  v26[1] = 0;
  if ( v99 )
    MiDrainSystemAccessLog((__int64)v101, v27, v28);
  LOBYTE(v28) = v114;
  MiCaptureDeleteHierarchy(a2, a3, v28, &v104);
  MiUnlockWorkingSetExclusive((__int64)v101, v114);
  if ( !v25 )
  {
    v25 = (_QWORD *)*BugCheckParameter4;
    v29 = BugCheckParameter4;
    if ( *BugCheckParameter4 )
    {
      for ( ; v25[1]; v25 = (_QWORD *)v25[1] )
        ;
    }
    else
    {
      for ( i = BugCheckParameter4[2]; ; i = v25[2] )
      {
        v25 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v25 || (_QWORD *)v25[1] == v29 )
          break;
        v29 = v25;
      }
    }
  }
  if ( !v24 )
  {
    v24 = (_QWORD *)BugCheckParameter4[1];
    v53 = BugCheckParameter4;
    if ( v24 )
    {
      for ( j = (_QWORD *)*v24; j; j = (_QWORD *)*j )
        v24 = j;
    }
    else
    {
      for ( k = BugCheckParameter4[2]; ; k = v24[2] )
      {
        v24 = (_QWORD *)(k & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v24 || (_QWORD *)*v24 == v53 )
          break;
        v53 = v24;
      }
    }
  }
  if ( !a5 )
    MiClearVadBits(a2, a3, v25, v24);
  MiReturnPageTablePageCommitment(
    a2,
    a3,
    (_DWORD)v102,
    (_DWORD)v25,
    (__int64)v24,
    (__int64)BugCheckParameter4,
    (__int64)&v104);
  v30 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v30);
  v106 = 0;
  v31 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
    SessionId = MmGetSessionIdEx(v31->ApcState.Process);
  else
    SessionId = -1;
  --v31->SpecialApcDisable;
  v33 = ++v31->AbAllocationRegionCount;
  v34 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
  v35 = v30 & 0x7FFFFFFFFFFFFFFCLL;
  v36 = !_BitScanReverse((unsigned int *)&v37, v34);
  v105 = v37;
  if ( v36 )
  {
LABEL_65:
    if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v31, v30, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v38 = (__int64)&v31->LockEntries[v37];
      v34 &= ~(1 << v37);
      if ( (*(_BYTE *)(v38 + 26) & 1) != 0
        && (*(_DWORD *)(v38 + 32) & 1) == 0
        && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v35
        && *(_DWORD *)(v38 + 40) == SessionId )
      {
        *(_BYTE *)(v38 + 26) &= ~1u;
        if ( *(_QWORD *)(v38 + 32) )
          break;
      }
      v36 = !_BitScanReverse((unsigned int *)&v37, v34);
      v105 = v37;
      if ( v36 )
        goto LABEL_64;
    }
    if ( !v38 )
    {
LABEL_64:
      v30 = BugCheckParameter2;
      goto LABEL_65;
    }
    *(_BYTE *)(v38 + 32) |= 2u;
    if ( *(__int64 *)(v38 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
    v106 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
    *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v38 + 25) &= ~1u;
    *(_QWORD *)(v38 + 32) = 0LL;
    v39 = 1 << ((signed __int64)(v38 - (unsigned __int64)v31->LockEntries) / 96);
    if ( v33 == 1 )
      v31->AbEntrySummary |= v39;
    else
      _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, v39);
  }
  --v31->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v31);
  v36 = v31->SpecialApcDisable++ == -1;
  if ( v36 && ($C459BD0D405E8E46662177FB3D0A143F *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
    KiCheckForKernelApcDelivery(v40);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( a5 )
  {
    MiReInsertPlaceholderVad(a5);
    MiUnlockNestedVad(a5);
  }
  v41 = v102;
  if ( v7 && (v7[12] & 0x100000) == 0 )
  {
    v81 = *((_QWORD *)v7 + 9);
    *((_QWORD *)v7 + 14) = (unsigned __int64)v102 | 1;
    MiManageSubsectionView(v81, v7 + 24, 3LL);
  }
  v42 = v19 - v112;
  v43 = v42 - *((_QWORD *)&v111 + 1);
  if ( v42 )
    MiReturnFullProcessCharges(v41, v42);
  if ( v43 )
    MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8LL * v41[1].IdealProcessorPadding[5]), v43);
  if ( v98 != 64 )
    PsReturnProcessPagedPoolQuota(v41, 8 * v109);
  if ( v15 )
  {
    v82 = MiResidentPagesForSpan(
            (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)) << 12,
            ((*((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v82 < v15 )
    {
      v83 = v15 - v82;
      v84 = *(_QWORD *)(qword_140C4E648 + 8LL * v41[1].IdealProcessorPadding[5]);
      if ( (ULONG_PTR *)v84 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v83 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v83 >= 0x80000 )
                break;
              v87 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      v83 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v36 = (_DWORD)CachedResidentAvailable == v87;
              LODWORD(CachedResidentAvailable) = v87;
              if ( v36 )
                goto LABEL_56;
            }
            while ( v87 != -1 && v83 + v87 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v83 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v83 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v84 + 7168), v83);
    }
  }
LABEL_56:
  MiFinishVadDeletion(BugCheckParameter4);
  v44 = v99;
  if ( v99 && v99 != v100 )
  {
    v88 = v108;
    v89 = 0LL;
    v90 = *(_QWORD *)(v108 + 64) != 0LL;
    v91 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v108 + 72));
    do
    {
      v92 = MiDecrementSubsections(v44);
      v44 = *(_QWORD *)(v44 + 16);
      v89 += v92;
    }
    while ( v44 != v100 );
    v99 = v44;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v88 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v91 <= 0xFu && CurrentIrql >= 2u )
        {
          v94 = KeGetCurrentPrcb();
          SchedulerAssist = v94->SchedulerAssist;
          v96 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v91 + 1));
          v36 = (v96 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v96;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick(v94);
        }
      }
    }
    __writecr8(v91);
    if ( v89 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v88 + 60) & 0x3FF)),
        v90,
        v89);
  }
  return 0LL;
}
