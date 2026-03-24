/*
 * XREFs of MiInsertInSystemSpace @ 0x14027B460
 * Callers:
 *     MiMapViewInSystemSpace @ 0x140635F9C (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     MiControlAreaRequiresCharge @ 0x14025A51C (MiControlAreaRequiresCharge.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiReferenceDataSubsections @ 0x14027D7AC (MiReferenceDataSubsections.c)
 *     MiRemoveFromSystemSpace @ 0x1402854CC (MiRemoveFromSystemSpace.c)
 *     MiManageSubsectionView @ 0x140291780 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140296380 (MiReferenceActiveSubsection.c)
 *     RtlAvlInsertNodeEx @ 0x140296BD0 (RtlAvlInsertNodeEx.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiOffsetToProtos @ 0x1402A11E0 (MiOffsetToProtos.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUnmapLargePages @ 0x140394BE4 (MiUnmapLargePages.c)
 *     MiMapWithLargePages @ 0x1403B848C (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8764 (MiGetPageTablesForLargeMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiDereferenceDataSubsections @ 0x140554D68 (MiDereferenceDataSubsections.c)
 *     MiAddMappedPtes @ 0x140636970 (MiAddMappedPtes.c)
 *     MiReferenceFileObjectForMap @ 0x14063A360 (MiReferenceFileObjectForMap.c)
 *     MiDereferencePerSessionProtos @ 0x14069F60C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14069F724 (MiCreatePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  unsigned int v9; // edi
  unsigned int v10; // r12d
  _DWORD *v11; // rsi
  _QWORD *v12; // r14
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  unsigned int v15; // r8d
  void *v16; // r9
  __int64 v17; // r10
  unsigned __int64 v18; // r11
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int64 v26; // r15
  int v27; // ebx
  unsigned int v28; // ebx
  ULONG_PTR v29; // rax
  _DWORD *Pool; // rax
  _DWORD *v31; // r15
  __int64 v32; // rcx
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  unsigned __int64 v36; // r15
  __int64 v37; // r12
  __int64 v38; // rax
  int v39; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v41; // r15
  LONG *SharedVm; // rbx
  KIRQL v43; // al
  __int64 v44; // r8
  unsigned __int8 v45; // di
  _QWORD *v46; // r10
  unsigned __int64 v47; // rdx
  _QWORD *v48; // rax
  ULONG_PTR v49; // r15
  struct _KTHREAD *v50; // rdi
  ULONG_PTR v51; // r9
  unsigned __int8 v52; // r12
  __int64 v53; // rdx
  __int64 v54; // r8
  bool v55; // zf
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // r15
  unsigned int v63; // edi
  __int64 v64; // rax
  unsigned __int64 v65; // rbx
  unsigned __int64 *v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // edi
  unsigned __int64 PageTablesForLargeMap; // rax
  int v73; // ecx
  int active; // eax
  __int64 v75; // rdi
  volatile LONG *v76; // rbx
  KIRQL v77; // al
  unsigned __int64 v78; // r8
  _QWORD *v79; // rdx
  unsigned __int64 v80; // rdi
  _QWORD *v81; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 v85; // rdx
  int v86; // r14d
  __int64 v87; // rsi
  unsigned __int64 *v88; // rdi
  unsigned __int64 *v89; // r12
  __int64 v90; // rdx
  int v91; // r13d
  unsigned __int64 v92; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v94; // rax
  __int64 v95; // rdx
  unsigned int v96; // [rsp+40h] [rbp-138h] BYREF
  int v97; // [rsp+44h] [rbp-134h]
  __int64 v98; // [rsp+48h] [rbp-130h]
  unsigned __int64 v99; // [rsp+50h] [rbp-128h]
  void *v100; // [rsp+58h] [rbp-120h]
  unsigned __int64 v101; // [rsp+60h] [rbp-118h]
  __int64 v102; // [rsp+68h] [rbp-110h]
  unsigned __int64 v103; // [rsp+70h] [rbp-108h]
  __int64 v104; // [rsp+78h] [rbp-100h]
  int v105; // [rsp+80h] [rbp-F8h]
  int v106; // [rsp+84h] [rbp-F4h]
  int SessionId; // [rsp+88h] [rbp-F0h]
  __int64 AnyMultiplexedVm; // [rsp+90h] [rbp-E8h]
  __int64 v109; // [rsp+98h] [rbp-E0h]
  __int64 v110; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v111[25]; // [rsp+B0h] [rbp-C8h] BYREF
  char v113; // [rsp+188h] [rbp+10h]

  v110 = 0LL;
  memset(v111, 0, 0x90uLL);
  v9 = 3;
  v103 = 0LL;
  v10 = 0x7FFFF;
  v101 = 0LL;
  v97 = 0x7FFFF;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v113 = 0;
  v99 = 0LL;
  LODWORD(v13) = 0;
  v98 = 0LL;
  v100 = &unk_140C4EAF8;
  v96 = 3;
  v102 = MiSectionControlArea(a3, v14, 3LL);
  v19 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v19 >= 0x10000 )
  {
    v27 = -1073741793;
    v36 = 0LL;
LABEL_91:
    v73 = 0;
    goto LABEL_92;
  }
  v104 = MiOffsetToProtos(v102, *a4, &v110);
  if ( !v104 )
  {
    v27 = -1073741801;
    v16 = &unk_140C4EAF8;
    v36 = 0LL;
    v17 = 0LL;
LABEL_90:
    v18 = v99;
    v15 = v96;
    goto LABEL_91;
  }
  if ( (_UNKNOWN *)a1 == &unk_140C4CD68 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v109 = 0LL;
    SessionId = -1;
    v9 = ((a6 & 8) != 0) + 3;
  }
  else
  {
    AnyMultiplexedVm = MiGetSessionVm(v21, v20, v22);
    v9 = 2;
    v109 = AnyMultiplexedVm - 256;
    v100 = (void *)(AnyMultiplexedVm - 256 + 880);
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  }
  v13 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v25 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v26 = 16 * v19;
  v99 = v26;
  v98 = *(_QWORD *)(qword_140C4E648 + 8 * v25);
  if ( (*(_DWORD *)(v102 + 56) & 0x420) != 0 )
  {
    v28 = v96;
    goto LABEL_8;
  }
  v27 = MiReferenceDataSubsections(v102, (_DWORD)a4, v13, v9 != 2, (__int64)&v96);
  if ( v27 < 0 )
  {
LABEL_81:
    v36 = 0LL;
    goto LABEL_88;
  }
  v28 = v96;
  v113 = 1;
  if ( v96 >= 3 )
  {
LABEL_8:
    v29 = MiReservePtes((__int64)v100, v26, v23, v24);
    v12 = (_QWORD *)v29;
    if ( v29 )
    {
      v103 = (__int64)(v29 << 25) >> 16;
      goto LABEL_10;
    }
    v27 = -1073741670;
    v36 = 0LL;
LABEL_88:
    v10 = v97;
    goto LABEL_89;
  }
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v26, 9LL, v96);
  v103 = PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
  {
    v27 = -1073741670;
    goto LABEL_81;
  }
  v12 = (_QWORD *)(((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
LABEL_10:
  Pool = MiAllocatePool(64, 0x68uLL, 0x7756694Du);
  v11 = Pool;
  if ( !Pool )
  {
    v36 = v101;
    v27 = -1073741670;
    goto LABEL_88;
  }
  v31 = (_DWORD *)v102;
  v32 = v102;
  Pool[14] ^= (Pool[14] ^ (8 * v28)) & 0x18;
  v33 = MiControlAreaRequiresCharge(v32, v9);
  v34 = v33;
  if ( !v33 )
  {
    v36 = v101;
    v27 = -1073740277;
    goto LABEL_88;
  }
  if ( v33 == 2 )
    v11[14] |= 4u;
  if ( (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
    v11[14] |= 1u;
  if ( (a5 & 1) != 0 )
    v11[14] |= 2u;
  v35 = v31[14];
  if ( (v35 & 0x20) == 0 )
  {
    v36 = v101;
LABEL_20:
    v37 = v104;
LABEL_21:
    *((_QWORD *)v11 + 6) = v37;
    *((_QWORD *)v11 + 4) = v13 << 12;
    *((_QWORD *)v11 + 3) = *a4 >> 12;
    v38 = v103 | 2;
    *((_QWORD *)v11 + 5) = v36;
    *((_QWORD *)v11 + 11) = v38;
    v11[25] = v97;
    if ( (_UNKNOWN *)a1 == &unk_140C4CD68 )
      v39 = -1;
    else
      v39 = *(_DWORD *)(v109 + 8);
    v11[24] = v39;
    *((_QWORD *)v11 + 8) = MiReferenceFileObjectForMap(a3);
    CurrentThread = KeGetCurrentThread();
    if ( v96 || (*(_DWORD *)(v102 + 56) & 0x400) != 0 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
      v41 = AnyMultiplexedVm;
      SharedVm = MiGetSharedVm(AnyMultiplexedVm);
      v43 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      LOBYTE(v44) = 0;
      ++*(_DWORD *)(a1 + 24);
      v45 = v43;
      v46 = *(_QWORD **)(a1 + 16);
      if ( v46 )
      {
        while ( 1 )
        {
          v47 = v46[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v103 < v47 + v46[4] && v103 < v47 )
          {
            v48 = (_QWORD *)*v46;
            if ( !*v46 )
              break;
          }
          else
          {
            v48 = (_QWORD *)v46[1];
            if ( !v48 )
            {
              LOBYTE(v44) = 1;
              break;
            }
          }
          v46 = v48;
        }
      }
      RtlAvlInsertNodeEx(a1 + 16, v46, v44, v11);
      MiUnlockWorkingSetExclusive(v41, v45);
      if ( (*(_DWORD *)(v102 + 56) & 0x400) == 0 )
      {
        v111[0] = v102;
        MiManageSubsectionView(v111, v11 + 18, 3LL);
      }
      v49 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v49);
      v106 = 0;
      v50 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v49) == 1 )
        v51 = (unsigned int)MmGetSessionIdEx(v50->ApcState.Process);
      else
        v51 = 0xFFFFFFFFLL;
      --v50->SpecialApcDisable;
      v52 = ++v50->AbAllocationRegionCount;
      LODWORD(v53) = ((char)v50->AbEntrySummary | (char)v50->AbOrphanedEntrySummary) ^ 0x3F;
      v54 = v49 & 0x7FFFFFFFFFFFFFFCLL;
      v55 = !_BitScanReverse((unsigned int *)&v56, v53);
      v105 = v56;
      if ( v55 )
        goto LABEL_73;
      while ( 1 )
      {
        v57 = (__int64)&v50->LockEntries[v56];
        v53 = ~(1 << v56) & (unsigned int)v53;
        if ( (*(_BYTE *)(v57 + 26) & 1) != 0
          && (*(_DWORD *)(v57 + 32) & 1) == 0
          && (*(_QWORD *)(v57 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v54
          && *(_DWORD *)(v57 + 40) == (_DWORD)v51 )
        {
          *(_BYTE *)(v57 + 26) &= ~1u;
          if ( *(_QWORD *)(v57 + 32) )
            break;
        }
        v55 = !_BitScanReverse((unsigned int *)&v56, v53);
        v105 = v56;
        if ( v55 )
          goto LABEL_73;
      }
      if ( !v57 )
      {
LABEL_73:
        if ( (*((_DWORD *)&v50->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v50, v49, v51, 0LL);
      }
      else
      {
        *(_BYTE *)(v57 + 32) |= 2u;
        if ( *(__int64 *)(v57 + 32) < 0 )
          KiAbEntryRemoveFromTree(v57, v53, v54);
        v106 = *(_DWORD *)(v57 + 88) & 0x1FFFF;
        *(_DWORD *)(v57 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v57 + 25) &= ~1u;
        *(_QWORD *)(v57 + 32) = 0LL;
        v58 = (signed __int64)(v57 - (unsigned __int64)v50->LockEntries) / 96;
        if ( v52 == 1 )
          v50->AbEntrySummary |= 1 << v58;
        else
          _InterlockedOr8((volatile signed __int8 *)&v50->AbOrphanedEntrySummary, 1 << v58);
      }
      --v50->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v50);
      v55 = v50->SpecialApcDisable++ == -1;
      if ( v55 && ($C459BD0D405E8E46662177FB3D0A143F *)v50->ApcState.ApcListHead[0].Flink != &v50->152 )
        KiCheckForKernelApcDelivery(v59);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      v37 = v104;
      v61 = v103;
    }
    else
    {
      v61 = v103;
      v76 = (volatile LONG *)((char *)&unk_140C4CDB0 + 16 * (unsigned __int8)(v103 >> 30));
      v77 = ExAcquireSpinLockExclusive(v76 + 3);
      ++*((_DWORD *)v76 + 2);
      LOBYTE(v78) = 0;
      v79 = *(_QWORD **)v76;
      v80 = v77;
      if ( *(_QWORD *)v76 )
      {
        while ( 1 )
        {
          v78 = v79[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v61 >= v78 + v79[4] || v61 >= v78 )
          {
            v81 = (_QWORD *)v79[1];
            if ( !v81 )
            {
              LOBYTE(v78) = 1;
              break;
            }
          }
          else
          {
            v81 = (_QWORD *)*v79;
            if ( !*v79 )
            {
              LOBYTE(v78) = 0;
              break;
            }
          }
          v79 = v81;
        }
      }
      RtlAvlInsertNodeEx(v76, v79, v78, v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v76 + 3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v80 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v80 + 1));
            v55 = ((unsigned int)v60 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v60;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v80);
    }
    if ( (v11[14] & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v102 + 92));
    v62 = 0LL;
    if ( v96 < 3 )
    {
      v85 = *(_QWORD *)(v37 + 8);
      v86 = v61;
      v87 = MiLargePageSizes[v96];
      v88 = (unsigned __int64 *)(v85 + 8 * v110);
      v89 = (unsigned __int64 *)(v85 + 8LL * *(unsigned int *)(v37 + 44));
      if ( v99 )
      {
        v91 = MiGetAnyMultiplexedVm(3LL);
        do
        {
          if ( v88 == v89 )
          {
            v104 = *(_QWORD *)(v104 + 16);
            v88 = *(unsigned __int64 **)(v104 + 8);
            v89 = &v88[*(unsigned int *)(v104 + 44)];
          }
          v92 = *v88;
          if ( (unsigned int)MiPteInShadowRange(v88, v90)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v92 & 1) != 0
            && ((v92 & 0x20) == 0 || (v92 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v94 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v88 >> 3) & 0x1FF));
              v95 = v92 | 0x20;
              if ( (v94 & 0x20) == 0 )
                v95 = v92;
              v92 = v95;
              if ( (v94 & 0x42) != 0 )
                v92 = v95 | 0x42;
            }
          }
          MiMapWithLargePages(v91, v86, v92 >> 12, v87, v96, 4, 1);
          v86 += (_DWORD)v87 << 12;
          v88 += v87;
          v62 += v87;
        }
        while ( v62 < v99 );
        v61 = v103;
      }
      v70 = 0;
    }
    else
    {
      v63 = 0;
      if ( v13 )
      {
        v64 = 0LL;
        do
        {
          v65 = ZeroPte;
          v66 = &v12[v64];
          if ( (unsigned int)MiPteInShadowRange(v66, v60) )
          {
            if ( (unsigned int)MiPteHasShadow(v67, v60, v68, v69) )
            {
              if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                v65 = ZeroPte | 0x8000000000000000uLL;
              *v66 = v65;
              MiWritePteShadow(v66, v65);
              goto LABEL_57;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v65 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v66 = v65;
LABEL_57:
          v64 = ++v63;
        }
        while ( v63 < v13 );
      }
      v70 = MiAddMappedPtes((_DWORD)v12, v13, v102, (_DWORD)a4, SessionId, 0);
      if ( v70 < 0 )
      {
        ++*(_DWORD *)(a1 + 28);
        MiRemoveFromSystemSpace(a1, v61, 0LL);
        return (unsigned int)v70;
      }
    }
    *a7 = v61;
    return (unsigned int)v70;
  }
  if ( (v35 & 0x4000000) != 0 )
  {
    v97 = -1;
    if ( (int)MiCreatePerSessionProtos(v31, 0xFFFFFFFFLL) < 0 )
    {
      v36 = v101;
      v27 = -1073741801;
      v10 = 0x7FFFF;
LABEL_89:
      v16 = v100;
      v17 = v98;
      goto LABEL_90;
    }
  }
  v36 = *(_QWORD *)(*(_QWORD *)v31 + 48LL);
  if ( !v36 || (unsigned int)MiChargeCommit(v98, v36, 0) )
  {
    if ( v34 != 2 )
      goto LABEL_20;
    v104 = v102 + 128;
    v37 = v102 + 128;
    active = MiReferenceActiveSubsection(v102 + 128);
    v27 = active;
    if ( active >= 0 )
      goto LABEL_21;
    goto LABEL_88;
  }
  v15 = v96;
  v73 = 0;
  v16 = v100;
  v36 = 0LL;
  v10 = v97;
  v27 = -1073741523;
  v17 = v98;
  v18 = v99;
LABEL_92:
  ++*(_DWORD *)(a1 + 28);
  if ( v12 )
  {
    if ( v15 >= 3 )
      MiReleasePtes((__int64)v16, v12, v18);
    else
      MiUnmapLargePages(v103, v18 << 12, 9LL, v16);
    v17 = v98;
    v73 = 0;
    v15 = v96;
  }
  if ( v113 == 1 )
  {
    v55 = v9 == 2;
    v75 = v102;
    LOBYTE(v73) = v15 < 3;
    MiDereferenceDataSubsections(v102, (_DWORD)a4, v13, v73, !v55);
    v17 = v98;
  }
  else
  {
    v75 = v102;
  }
  if ( v10 != 0x7FFFF )
  {
    MiDereferencePerSessionProtos(v75, v10);
    v17 = v98;
  }
  if ( v36 )
    MiReturnCommit(v17, v36);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v27;
}
