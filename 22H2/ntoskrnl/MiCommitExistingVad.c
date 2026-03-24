/*
 * XREFs of MiCommitExistingVad @ 0x140218D50
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406C4F40 (MiAllocateFromSubAllocatedRegion.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3214 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D35C0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14020E690 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021A9E0 (MiMakeProtectionMask.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiLocateLockedVadEvent @ 0x14027EA4C (MiLocateLockedVadEvent.c)
 *     MiLockLowestValidPageTable @ 0x140285C40 (MiLockLowestValidPageTable.c)
 *     MiIncreaseUsedPtesCount @ 0x140289E54 (MiIncreaseUsedPtesCount.c)
 *     MmIsAddressValidEx @ 0x14028CB70 (MmIsAddressValidEx.c)
 *     MiComputePageCommitment @ 0x14028D1E0 (MiComputePageCommitment.c)
 *     MiGetPageProtection @ 0x1402B1430 (MiGetPageProtection.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     PsDereferencePartition @ 0x140303F4C (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140303F74 (PsReferencePartitionSafe.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F72A0 (MiInitializeLargeUserBasePfn.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140535508 (MiFlushAllFilesystemPages.c)
 *     MiComputePreferredNode @ 0x140547AB8 (MiComputePreferredNode.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054F718 (MiLockWorkingSetForLargeMapping.c)
 *     MiCreateLargePfnList @ 0x14055DE3C (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x14055E158 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x14055E4B8 (MiInsertLargeUserMapping.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x14063BF58 (MiReturnFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x1408D7384 (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D7710 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiCommitExistingVad(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned __int8 a7,
        _WORD **a8,
        _DWORD *a9,
        _WORD *a10)
{
  ULONG_PTR v11; // rsi
  unsigned int v12; // r8d
  int v14; // r8d
  char v15; // r10
  unsigned int v16; // r11d
  unsigned int v17; // edx
  int v18; // r8d
  int v19; // eax
  _KPROCESS *Process; // r13
  unsigned __int64 v21; // r8
  __int64 v22; // rdi
  unsigned __int64 v23; // r14
  unsigned __int64 BugCheckParameter4; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  unsigned __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r13
  unsigned int v30; // ecx
  __int64 result; // rax
  __int64 v32; // rcx
  int v33; // esi
  __int64 v34; // rbx
  bool v35; // zf
  __int64 v36; // rdx
  __int64 v37; // r13
  __int64 LockedVadEvent; // rax
  __int64 v39; // r9
  _WORD **v40; // rbx
  __int64 v41; // r9
  int LargePfnList; // esi
  int v43; // eax
  int v44; // r13d
  __int64 v45; // r15
  unsigned __int64 v46; // r14
  int v47; // esi
  unsigned int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // r8
  __int64 v52; // rbx
  __int64 v53; // rax
  volatile signed __int64 *v54; // rbx
  int v55; // r13d
  unsigned __int64 v56; // rsi
  unsigned int v57; // ebx
  __int64 v58; // r14
  unsigned __int64 v59; // r15
  int v60; // eax
  __int64 valid; // rax
  int v62; // eax
  __int64 v63; // rdx
  ULONG_PTR v64; // rsi
  __int64 SharedVm; // rsi
  unsigned __int64 v66; // r9
  __int64 v67; // r15
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r10
  struct _LIST_ENTRY *Flink; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  ULONG_PTR v73; // rdx
  unsigned __int64 v74; // r10
  __int64 v75; // rax
  unsigned __int64 v76; // rdx
  unsigned __int64 p_BugCheckParameter3; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  ULONG_PTR v80; // rdx
  int v81; // eax
  unsigned __int64 v82; // rax
  _QWORD *v83; // rcx
  _QWORD **v84; // rbx
  __int64 v85; // rbx
  __int64 v86; // rax
  int PageProtection; // eax
  struct _KTHREAD *v88; // rax
  __int64 v89; // rbx
  __int64 v90; // r9
  unsigned int v91; // ecx
  __int64 v92; // rdx
  unsigned __int64 v93; // rdx
  unsigned int ProtectionMask; // [rsp+30h] [rbp-D0h]
  __int64 v95; // [rsp+38h] [rbp-C8h]
  int v96; // [rsp+40h] [rbp-C0h]
  _KPROCESS *v97; // [rsp+48h] [rbp-B8h]
  unsigned int v98; // [rsp+50h] [rbp-B0h]
  int v99; // [rsp+54h] [rbp-ACh]
  __int64 v100; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  int v102; // [rsp+68h] [rbp-98h]
  int v103; // [rsp+6Ch] [rbp-94h]
  int v104; // [rsp+70h] [rbp-90h]
  __int64 v105; // [rsp+78h] [rbp-88h]
  __int64 v106; // [rsp+80h] [rbp-80h]
  __int64 v107; // [rsp+88h] [rbp-78h]
  int v108; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v109; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v110; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v111; // [rsp+A8h] [rbp-58h]
  __int64 v112; // [rsp+B0h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v114; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v115; // [rsp+C8h] [rbp-38h]
  __int64 v116; // [rsp+D0h] [rbp-30h]
  __int64 v117; // [rsp+D8h] [rbp-28h]
  __int64 v118; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v119; // [rsp+E8h] [rbp-18h]
  _OWORD v120[5]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 v122; // [rsp+158h] [rbp+58h]
  __int64 v123; // [rsp+160h] [rbp+60h] BYREF

  v11 = a1;
  v12 = *(_DWORD *)(a1 + 48);
  v117 = 0LL;
  v102 = 0;
  memset(v120, 0, 32);
  ProtectionMask = MiMakeProtectionMask(a4, a2, (v12 >> 7) & 0x1F);
  v17 = ProtectionMask;
  if ( ProtectionMask == 24 )
    goto LABEL_17;
  if ( v14 == 24 )
  {
    if ( (v16 & 0x100000) == 0 )
      v14 = (*(unsigned __int16 *)(*(_QWORD *)(v11 + 72) + 32LL) >> 1) & 0x1F;
    if ( v14 == 24 )
      LOBYTE(v14) = 0;
  }
  v18 = v14 & 0x18;
  if ( v18 )
  {
    if ( v18 != 16 )
    {
      if ( v18 == 8 )
      {
        v17 = ProtectionMask & 0xFFFFFFE7 | 8;
      }
      else
      {
        if ( v18 != 24 )
          goto LABEL_18;
        v17 = ProtectionMask | 0x18;
      }
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v19 = ProtectionMask & 0x18;
  if ( v19 != 24 )
  {
    if ( v19 != 8 )
      goto LABEL_18;
LABEL_16:
    v17 = ProtectionMask & 0xFFFFFFF7;
    goto LABEL_17;
  }
  v17 = ProtectionMask & 0xFFFFFFE7;
LABEL_17:
  ProtectionMask = v17;
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v97 = Process;
  if ( *(int *)(v11 + 52) >= 0 )
    v21 = 0LL;
  else
    v21 = 8 * ((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  v111 = v21;
  v119 = 32LL * (v17 & 0x1F);
  v22 = v119;
  if ( qword_140C4DF40 )
  {
    if ( (v119 & qword_140C4DF40) != 0 )
      v22 = v119 | 0x10;
    else
      v22 = qword_140C4DF40 | v119;
  }
  if ( (v16 & 0x100000) != 0 && (v16 & 0x1000000) == 0 && (v16 & 0x4000000) != 0 )
    v22 |= 0x4000000uLL;
  v107 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = (a2 + a3 - 1) | 0xFFF;
  BugCheckParameter4 = v107;
  v25 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = v15 & 0x1A;
  v115 = v25;
  v100 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v114 = ((__int64)(((v23 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (v16 & 0x500000) == 0x500000 )
  {
    v27 = ((unsigned __int64)v16 >> 18) & 3;
    v28 = 16LL;
    v29 = MiVadPageSizes[v27];
    v30 = MiVadPageIndices[v27];
    v95 = v29;
    if ( v29 != 16 )
      v28 = 1LL;
    v98 = v30;
    v112 = v28;
    if ( v30 > 1 )
    {
      if ( v26 == 2 )
        goto LABEL_40;
    }
    else
    {
      if ( v30 == 1 )
      {
        if ( v26 != 8 )
          return 3221225485LL;
        goto LABEL_37;
      }
      if ( v26 == 16 )
      {
LABEL_37:
        v32 = 2 - v30;
        do
        {
          BugCheckParameter4 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v32;
        }
        while ( v32 );
        v111 = v21;
        v115 = v25;
        goto LABEL_40;
      }
    }
    return 3221225485LL;
  }
  if ( v26 )
    return 3221225485LL;
  v95 = 1LL;
  v29 = 1LL;
  v112 = 1LL;
  v98 = 3;
  if ( (int)MiChargeFullProcessCommitment(
              v97,
              ((__int64)(((v23 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1) >= 0 )
  {
    v37 = v114;
    v106 = v114;
    v104 = 1;
LABEL_71:
    v43 = *(_DWORD *)(v11 + 48);
    v103 = 0;
    if ( (v43 & 0x100000) != 0 )
    {
      if ( (v43 & 0x70) != 0 || *(int *)(v11 + 52) < 0 )
        goto LABEL_74;
    }
    else
    {
      if ( (v43 & 0xF80) != 0xC00 )
        goto LABEL_74;
      v53 = *(_QWORD *)(v11 + 72);
      if ( *(_QWORD *)(*(_QWORD *)v53 + 64LL) || (*(_DWORD *)(*(_QWORD *)v53 + 56LL) & 0x1000) == 0 )
        goto LABEL_74;
    }
    v103 = 1;
    --CurrentThread->SpecialApcDisable;
    v54 = (volatile signed __int64 *)&v97[1].Affinity.Bitmap[8];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v97[1].Affinity.Bitmap[8], 0LL);
    if ( (int)MiCommitPageTablesForVad(v11, a2, v23) >= 0 )
    {
LABEL_74:
      v44 = 0;
      v105 = 0LL;
      v99 = 0;
      v45 = 0LL;
      v116 = 0LL;
      while ( 1 )
      {
        v46 = 0LL;
        v47 = 0;
        v96 = 0;
        if ( !v98 )
        {
          v48 = MiComputePreferredNode(a1);
          v96 = 1;
          v122 = MiLockWorkingSetForLargeMapping(v100, v49, v48);
          if ( v122 != 17 )
            goto LABEL_87;
        }
        v52 = v100;
        v122 = MiLockWorkingSetShared(v100);
        while ( 2 )
        {
          if ( BugCheckParameter4 > v115 )
          {
            if ( (_WORD)v44 )
            {
              v108 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v108);
                while ( *(__int64 *)(v45 + 24) < 0 );
              }
              *(_QWORD *)(v45 + 16) ^= ((unsigned int)*(_QWORD *)(v45 + 16) ^ ((unsigned int)*(_QWORD *)(v45 + 16)
                                                                             + ((unsigned __int16)v44 << 16))) & 0x3FF0000;
              _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (unsigned __int16)v44 <= 1u )
                MmIsAddressValidEx(*(_QWORD *)(v45 + 8) | 0x8000000000000000uLL);
            }
            if ( v96 == 1 )
            {
              MiUnlockWorkingSetExclusive(v52, v122);
            }
            else
            {
              if ( v46 )
                MiUnlockPageTableInternal(v52, v46);
              MiUnlockWorkingSetShared(v52, v122);
            }
            if ( v103 == 1 )
            {
              if ( (_InterlockedExchangeAdd64(
                      (volatile signed __int64 *)&v97[1].Affinity.Bitmap[8],
                      0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(&v97[1].Affinity.Bitmap[8]);
              KeAbPostRelease((ULONG_PTR)&v97[1].Affinity.Bitmap[8]);
              v88 = CurrentThread;
              v35 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v35 && ($C459BD0D405E8E46662177FB3D0A143F *)v88->ApcState.ApcListHead[0].Flink != &v88->152 )
                KiCheckForKernelApcDelivery();
            }
            if ( v104 == 1 )
            {
              v89 = v105;
              if ( v105 )
                MiReturnFullProcessCommitment(v97);
              v90 = v114 - v89;
            }
            else
            {
              v90 = v106;
            }
            v91 = *(_DWORD *)(a1 + 52);
            v92 = v91;
            LODWORD(v92) = v91 & 0x7FFFFFFF;
            v93 = v90 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v92);
            *(_BYTE *)(a1 + 34) = v93 >> 31;
            *(_DWORD *)(a1 + 52) = v91 ^ (v93 ^ v91) & 0x7FFFFFFF;
            return 0LL;
          }
          if ( v47 && (BugCheckParameter4 & 0xFFF) != 0 )
          {
            v66 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_140;
          }
          if ( (_WORD)v44 )
          {
            MiIncreaseUsedPtesCount(v45, (unsigned __int16)v44);
            v55 = 0;
            v99 = 0;
          }
          else
          {
            v55 = 0;
          }
          if ( v46 )
            MiUnlockPageTableInternal(v52, v46);
          v56 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v118 = 0LL;
          v110 = v56;
          v57 = (*(_DWORD *)(a1 + 48) >> 12) & 0x3F;
          BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
          v58 = BugCheckParameter3 + 1664;
          v59 = (__int64)(BugCheckParameter4 << 25) >> 16;
          if ( v59 < 0xFFFFF68000000000uLL || v59 > 0xFFFFF6FFFFFFFFFFuLL )
            v55 = 1;
          while ( 1 )
          {
            if ( v96 )
            {
              if ( (unsigned __int8)MmIsAddressValidEx(BugCheckParameter4) )
                goto LABEL_113;
              MiUnlockWorkingSetExclusive(v58, v122);
              goto LABEL_108;
            }
            if ( v55 )
            {
              v60 = MiFastLockLeafPageTable(v58, (__int64)(BugCheckParameter4 << 25) >> 16, 0);
              if ( v60 )
                break;
            }
            valid = MiLockLowestValidPageTable(v58, BugCheckParameter4, &v118);
            if ( valid == v56 )
              goto LABEL_113;
            MiUnlockPageTableInternal(v58, valid);
            MiUnlockWorkingSetShared(v58, v122);
LABEL_108:
            v62 = MmAccessFault(((unsigned __int64)v57 << 57) | 0x100000000000002LL, BugCheckParameter4, 0, 0LL);
            v64 = v62;
            if ( v62 < 0 )
            {
              MiFlushAllFilesystemPages(1LL);
              KeBugCheckEx(0x7Au, 1uLL, v64, BugCheckParameter3, BugCheckParameter4);
            }
            if ( v96 )
            {
              SharedVm = MiGetSharedVm(v58, v63);
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
              *(_DWORD *)(SharedVm + 4) = 0;
            }
            else
            {
              MiLockWorkingSetShared(v58);
            }
            v56 = v110;
          }
          if ( v60 != 1 )
          {
            while ( 1 )
              v56 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
LABEL_113:
          v66 = 0xFFFFF6FB7DBED000uLL;
          if ( BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter4 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v45 = v116;
            v47 = 1;
            v46 = v110;
            v44 = v99;
          }
          else
          {
            v67 = (v59 >> 18) & 0x3FFFFFF8;
            v68 = *(_QWORD *)(v67 - 0x904C0000000LL);
            v51 = v67 - 0x904C0000000LL;
            v69 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)(v67 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
              && v51 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v50, v68, v51, 0xFFFFF6FB7DBED000uLL)
              && (v68 & 1) != 0
              && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v71 = *((_QWORD *)&Flink->Flink + ((v51 >> 3) & 0x1FF));
                v51 = v68 | 0x20;
                if ( (v71 & 0x20) == 0 )
                  v51 = v68;
                v68 = v51;
                if ( (v71 & 0x42) != 0 )
                  v68 = v51 | 0x42;
              }
            }
            v109 = v68;
            v50 = (__int64)&v109;
            if ( (unsigned __int64)&v109 >= v66 )
            {
              v50 = (__int64)&v109;
              if ( (unsigned __int64)&v109 <= v69
                && (unsigned int)MiPteHasShadow(&v109, v68, v51, v66)
                && (v68 & 1) != 0
                && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
              {
                v50 = (__int64)KeGetCurrentThread()->ApcState.Process;
                v51 = *(_QWORD *)(v50 + 1928);
                if ( v51 )
                {
                  v72 = *(_QWORD *)(v51 + 8 * (((unsigned __int64)&v109 >> 3) & 0x1FF));
                  v51 = v68 | 0x20;
                  v50 = (unsigned __int8)v72;
                  LOBYTE(v50) = v72 & 0x20;
                  if ( (v72 & 0x20) == 0 )
                    v51 = v68;
                  v68 = v51;
                  if ( (v72 & 0x42) != 0 )
                    v68 = v51 | 0x42;
                }
              }
            }
            v46 = v110;
            v45 = 48 * ((v68 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v44 = v99;
            v47 = 1;
            v116 = v45;
          }
LABEL_140:
          v73 = *(_QWORD *)BugCheckParameter4;
          v74 = 0xFFFFF6FB7DBED7F8uLL;
          if ( BugCheckParameter4 >= v66
            && BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v50, v73, v51, v66)
            && (v73 & 1) != 0
            && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
          {
            v50 = (__int64)KeGetCurrentThread()->ApcState.Process;
            v51 = *(_QWORD *)(v50 + 1928);
            if ( v51 )
            {
              v75 = *(_QWORD *)(v51 + 8 * ((BugCheckParameter4 >> 3) & 0x1FF));
              v51 = v73 | 0x20;
              v50 = (unsigned __int8)v75;
              LOBYTE(v50) = v75 & 0x20;
              if ( (v75 & 0x20) == 0 )
                v51 = v73;
              v73 = v51;
              if ( (v75 & 0x42) != 0 )
                v73 = v51 | 0x42;
            }
          }
          BugCheckParameter3 = v73;
          if ( !v73 )
          {
            if ( BugCheckParameter4 <= v111 )
              v105 += v95;
            if ( v95 == 1 )
            {
              if ( BugCheckParameter4 < v66 || BugCheckParameter4 > 0xFFFFF6FB7DBEDFFFuLL )
              {
                LOWORD(v44) = v112 + v44;
                v99 = v44;
              }
              v76 = v22;
              if ( BugCheckParameter4 >= v66 && BugCheckParameter4 <= v74 )
              {
                if ( (unsigned int)MiPteHasShadow(v50, v22, v51, v66) )
                {
                  if ( !HIBYTE(word_140C4E008) && (v22 & 1) != 0 )
                    v76 |= 0x8000000000000000uLL;
                  goto LABEL_164;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v22 & 1) != 0 )
                {
                  v76 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)BugCheckParameter4 = v76;
LABEL_210:
              v86 = v95;
LABEL_211:
              BugCheckParameter4 += 8 * v112;
              v50 = v107 + 8 * v86;
              v107 = v50;
LABEL_87:
              v52 = v100;
              continue;
            }
LABEL_202:
            v83 = (_QWORD *)*((_QWORD *)v120 + v98);
            v84 = (_QWORD **)v120 + v98;
            if ( !v83 )
            {
              MiDemotePfnListChain(v120);
              v83 = *v84;
            }
            *v84 = (_QWORD *)*v83;
            v85 = (__int64)(v83 + 0xB000000000LL) / 48;
            MiInitializeLargeUserBasePfn(48 * v85 - 0x58000000000LL, v107, v97);
            MiInsertLargeUserMapping(a1, v107, v85, v98, ProtectionMask);
            goto LABEL_210;
          }
          break;
        }
        p_BugCheckParameter3 = (unsigned __int64)&BugCheckParameter3;
        if ( (unsigned __int64)&BugCheckParameter3 < v66 )
          goto LABEL_180;
        p_BugCheckParameter3 = (unsigned __int64)&BugCheckParameter3;
        if ( (unsigned __int64)&BugCheckParameter3 > v74 )
          goto LABEL_180;
        if ( !(unsigned int)MiPteHasShadow(&BugCheckParameter3, v73, v73, v66)
          || (v73 & 1) == 0
          || (v73 & 0x20) != 0 && (v73 & 0x42) != 0 )
        {
          goto LABEL_181;
        }
        p_BugCheckParameter3 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v78 = *(_QWORD *)(p_BugCheckParameter3 + 1928);
        if ( !v78 )
        {
LABEL_180:
          v51 = v73;
          goto LABEL_181;
        }
        v79 = *(_QWORD *)(v78 + 8 * (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
        v51 = v73 | 0x20;
        p_BugCheckParameter3 = (unsigned __int8)v79;
        LOBYTE(p_BugCheckParameter3) = v79 & 0x20;
        if ( (v79 & 0x20) == 0 )
          v51 = v73;
        if ( (v79 & 0x42) != 0 )
          v51 |= 0x42uLL;
LABEL_181:
        if ( (v51 & 0x3E0) == 0x200
          && (v51 & 1) == 0
          && ((v51 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v51)) )
        {
          if ( v95 == 1 )
          {
            v80 = v119 | v73 & 0xFFFFFFFFFFFFFC1FuLL;
            BugCheckParameter3 = v80;
            v51 = v80;
            v81 = *(_DWORD *)(a1 + 48);
            if ( (v81 & 0x100000) != 0 && (v81 & 0x1000000) == 0 && (v81 & 0x4000000) != 0 )
            {
              v51 = v80 | 0x4000000;
              BugCheckParameter3 = v80 | 0x4000000;
            }
            if ( BugCheckParameter4 >= v66 && BugCheckParameter4 <= v74 )
            {
              if ( (unsigned int)MiPteHasShadow(p_BugCheckParameter3, v80, v51, v66) )
              {
                v76 = v51;
                if ( !HIBYTE(word_140C4E008) && (v51 & 1) != 0 )
                  v76 = v51 | 0x8000000000000000uLL;
LABEL_164:
                *(_QWORD *)BugCheckParameter4 = v76;
                MiWritePteShadow(BugCheckParameter4, v76);
                goto LABEL_210;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v82 = v51 | 0x8000000000000000uLL;
                if ( (v51 & 1) == 0 )
                  v82 = v51;
                *(_QWORD *)BugCheckParameter4 = v82;
                goto LABEL_210;
              }
            }
            *(_QWORD *)BugCheckParameter4 = v51;
            goto LABEL_210;
          }
          goto LABEL_202;
        }
        v86 = v95;
        v105 += v95;
        if ( *a9 )
          goto LABEL_211;
        LOWORD(v123) = 0;
        PageProtection = MiGetPageProtection(a1, BugCheckParameter4, (__int64)&v123);
        if ( !v117 )
        {
          if ( ProtectionMask != PageProtection || v102 != a5 )
            *a9 = 1;
          goto LABEL_210;
        }
        if ( (_WORD)v44 )
        {
          MiIncreaseUsedPtesCount(v45, (unsigned __int16)v44);
          v44 = 0;
          v99 = 0;
        }
        if ( v96 == 1 )
        {
          MiUnlockWorkingSetExclusive(v100, v122);
        }
        else
        {
          MiUnlockPageTableInternal(v100, v46);
          MiUnlockWorkingSetShared(v100, v122);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64(v54, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v54);
    KeAbPostRelease((ULONG_PTR)v54);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    if ( v37 )
      MiReturnFullProcessCommitment(v97);
    return 3221225773LL;
  }
LABEL_40:
  v104 = 0;
  v33 = (unsigned __int8)MiLockWorkingSetShared(v100);
  v34 = MiComputePageCommitment((unsigned int)a2 & 0xFFFFF000, v23, a1, v33, 0, 0LL);
  MiUnlockWorkingSetShared(v100, v33);
  v106 = v114 - v34;
  if ( v114 == v34 )
  {
    v37 = v114 - v34;
    goto LABEL_70;
  }
  v35 = v29 == 1;
  v36 = v114 - v34;
  v37 = v114 - v34;
  if ( v35 )
  {
    result = MiChargeFullProcessCommitment(v97, v36);
    if ( (int)result < 0 )
      return result;
    goto LABEL_70;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(v97, v36) )
    return 3221225773LL;
  LockedVadEvent = MiLocateLockedVadEvent(a1, 16LL);
  if ( LockedVadEvent )
    v40 = *(_WORD ***)(LockedVadEvent + 24);
  else
    v40 = 0LL;
  if ( a8 != (_WORD **)1 && a8 != v40 )
  {
    MiReturnProcessPhysicalPages(v39, v37);
    return 3221225485LL;
  }
  if ( v40 )
  {
    if ( !(unsigned __int8)PsReferencePartitionSafe(v40) )
    {
      MiReturnProcessPhysicalPages(v41, v37);
      return 3221226656LL;
    }
    *a10 = **v40;
  }
  else if ( (int)MiChargeFullProcessCommitment(v39, v37) < 0 )
  {
    return MiReturnProcessPhysicalPages(v97, v37);
  }
  LargePfnList = MiCreateLargePfnList(a1, v37, a7, (_DWORD)v40, (__int64)v120);
  if ( v40 )
    PsDereferencePartition(v40);
  if ( LargePfnList >= 0 )
  {
LABEL_70:
    v11 = a1;
    goto LABEL_71;
  }
  if ( !v40 )
    MiReturnFullProcessCommitment(v97);
  MiReturnProcessPhysicalPages(v97, v37);
  return (unsigned int)LargePfnList;
}
