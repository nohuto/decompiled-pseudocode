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
  unsigned int v53; // edx
  bool v54; // zf
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  unsigned __int64 v60; // r13
  unsigned __int64 v61; // r15
  unsigned int v62; // edi
  __int64 v63; // rax
  unsigned __int64 v64; // rbx
  unsigned __int64 *v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // edi
  unsigned __int64 PageTablesForLargeMap; // rax
  int v72; // ecx
  int active; // eax
  __int64 v74; // rdi
  volatile LONG *v75; // rbx
  KIRQL v76; // al
  unsigned __int64 v77; // r8
  _QWORD *v78; // rdx
  unsigned __int64 v79; // rdi
  _QWORD *v80; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 v84; // rdx
  int v85; // r14d
  __int64 v86; // rsi
  unsigned __int64 *v87; // rdi
  unsigned __int64 *v88; // r12
  __int64 v89; // rdx
  int v90; // r13d
  unsigned __int64 v91; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  unsigned int v95; // [rsp+40h] [rbp-138h] BYREF
  int v96; // [rsp+44h] [rbp-134h]
  __int64 v97; // [rsp+48h] [rbp-130h]
  unsigned __int64 v98; // [rsp+50h] [rbp-128h]
  void *v99; // [rsp+58h] [rbp-120h]
  unsigned __int64 v100; // [rsp+60h] [rbp-118h]
  __int64 v101; // [rsp+68h] [rbp-110h]
  unsigned __int64 v102; // [rsp+70h] [rbp-108h]
  __int64 v103; // [rsp+78h] [rbp-100h]
  int v104; // [rsp+80h] [rbp-F8h]
  int v105; // [rsp+84h] [rbp-F4h]
  int SessionId; // [rsp+88h] [rbp-F0h]
  __int64 AnyMultiplexedVm; // [rsp+90h] [rbp-E8h]
  __int64 v108; // [rsp+98h] [rbp-E0h]
  __int64 v109; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v110[25]; // [rsp+B0h] [rbp-C8h] BYREF
  char v112; // [rsp+188h] [rbp+10h]

  v109 = 0LL;
  memset(v110, 0, 0x90uLL);
  v9 = 3;
  v102 = 0LL;
  v10 = 0x7FFFF;
  v100 = 0LL;
  v96 = 0x7FFFF;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v112 = 0;
  v98 = 0LL;
  LODWORD(v13) = 0;
  v97 = 0LL;
  v99 = &unk_140C4EAF8;
  v95 = 3;
  v101 = MiSectionControlArea(a3, v14, 3LL);
  v19 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v19 >= 0x10000 )
  {
    v27 = -1073741793;
    v36 = 0LL;
LABEL_91:
    v72 = 0;
    goto LABEL_92;
  }
  v103 = MiOffsetToProtos(v101, *a4, &v109);
  if ( !v103 )
  {
    v27 = -1073741801;
    v16 = &unk_140C4EAF8;
    v36 = 0LL;
    v17 = 0LL;
LABEL_90:
    v18 = v98;
    v15 = v95;
    goto LABEL_91;
  }
  if ( (_UNKNOWN *)a1 == &unk_140C4CD68 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v108 = 0LL;
    SessionId = -1;
    v9 = ((a6 & 8) != 0) + 3;
  }
  else
  {
    AnyMultiplexedVm = MiGetSessionVm(v21, v20, v22);
    v9 = 2;
    v108 = AnyMultiplexedVm - 256;
    v99 = (void *)(AnyMultiplexedVm - 256 + 880);
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  }
  v13 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v25 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v26 = 16 * v19;
  v98 = v26;
  v97 = *(_QWORD *)(qword_140C4E648 + 8 * v25);
  if ( (*(_DWORD *)(v101 + 56) & 0x420) != 0 )
  {
    v28 = v95;
    goto LABEL_8;
  }
  v27 = MiReferenceDataSubsections(v101, (_DWORD)a4, v13, v9 != 2, (__int64)&v95);
  if ( v27 < 0 )
  {
LABEL_81:
    v36 = 0LL;
    goto LABEL_88;
  }
  v28 = v95;
  v112 = 1;
  if ( v95 >= 3 )
  {
LABEL_8:
    v29 = MiReservePtes((__int64)v99, v26, v23, v24);
    v12 = (_QWORD *)v29;
    if ( v29 )
    {
      v102 = (__int64)(v29 << 25) >> 16;
      goto LABEL_10;
    }
    v27 = -1073741670;
    v36 = 0LL;
LABEL_88:
    v10 = v96;
    goto LABEL_89;
  }
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v26, 9LL, v95);
  v102 = PageTablesForLargeMap;
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
    v36 = v100;
    v27 = -1073741670;
    goto LABEL_88;
  }
  v31 = (_DWORD *)v101;
  v32 = v101;
  Pool[14] ^= (Pool[14] ^ (8 * v28)) & 0x18;
  v33 = MiControlAreaRequiresCharge(v32, v9);
  v34 = v33;
  if ( !v33 )
  {
    v36 = v100;
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
    v36 = v100;
LABEL_20:
    v37 = v103;
LABEL_21:
    *((_QWORD *)v11 + 6) = v37;
    *((_QWORD *)v11 + 4) = v13 << 12;
    *((_QWORD *)v11 + 3) = *a4 >> 12;
    v38 = v102 | 2;
    *((_QWORD *)v11 + 5) = v36;
    *((_QWORD *)v11 + 11) = v38;
    v11[25] = v96;
    if ( (_UNKNOWN *)a1 == &unk_140C4CD68 )
      v39 = -1;
    else
      v39 = *(_DWORD *)(v108 + 8);
    v11[24] = v39;
    *((_QWORD *)v11 + 8) = MiReferenceFileObjectForMap(a3);
    CurrentThread = KeGetCurrentThread();
    if ( v95 || (*(_DWORD *)(v101 + 56) & 0x400) != 0 )
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
          if ( v102 < v47 + v46[4] && v102 < v47 )
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
      if ( (*(_DWORD *)(v101 + 56) & 0x400) == 0 )
      {
        v110[0] = v101;
        MiManageSubsectionView(v110, v11 + 18, 3LL);
      }
      v49 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v49);
      v105 = 0;
      v50 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v49) == 1 )
        v51 = (unsigned int)MmGetSessionIdEx(v50->ApcState.Process);
      else
        v51 = 0xFFFFFFFFLL;
      --v50->SpecialApcDisable;
      v52 = ++v50->AbAllocationRegionCount;
      v53 = ((char)v50->AbEntrySummary | (char)v50->AbOrphanedEntrySummary) ^ 0x3F;
      v54 = !_BitScanReverse((unsigned int *)&v55, v53);
      v104 = v55;
      if ( v54 )
        goto LABEL_73;
      while ( 1 )
      {
        v56 = (__int64)&v50->LockEntries[v55];
        v53 &= ~(1 << v55);
        if ( (*(_BYTE *)(v56 + 26) & 1) != 0
          && (*(_DWORD *)(v56 + 32) & 1) == 0
          && (*(_QWORD *)(v56 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v49 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v56 + 40) == (_DWORD)v51 )
        {
          *(_BYTE *)(v56 + 26) &= ~1u;
          if ( *(_QWORD *)(v56 + 32) )
            break;
        }
        v54 = !_BitScanReverse((unsigned int *)&v55, v53);
        v104 = v55;
        if ( v54 )
          goto LABEL_73;
      }
      if ( !v56 )
      {
LABEL_73:
        if ( (*((_DWORD *)&v50->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v50, v49, v51, 0LL);
      }
      else
      {
        *(_BYTE *)(v56 + 32) |= 2u;
        if ( *(__int64 *)(v56 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v56);
        v105 = *(_DWORD *)(v56 + 88) & 0x1FFFF;
        *(_DWORD *)(v56 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v56 + 25) &= ~1u;
        *(_QWORD *)(v56 + 32) = 0LL;
        v57 = (signed __int64)(v56 - (unsigned __int64)v50->LockEntries) / 96;
        if ( v52 == 1 )
          v50->AbEntrySummary |= 1 << v57;
        else
          _InterlockedOr8((volatile signed __int8 *)&v50->AbOrphanedEntrySummary, 1 << v57);
      }
      --v50->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v50);
      v54 = v50->SpecialApcDisable++ == -1;
      if ( v54 && ($C459BD0D405E8E46662177FB3D0A143F *)v50->ApcState.ApcListHead[0].Flink != &v50->152 )
        KiCheckForKernelApcDelivery(v58);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      v37 = v103;
      v60 = v102;
    }
    else
    {
      v60 = v102;
      v75 = (volatile LONG *)((char *)&unk_140C4CDB0 + 16 * (unsigned __int8)(v102 >> 30));
      v76 = ExAcquireSpinLockExclusive(v75 + 3);
      ++*((_DWORD *)v75 + 2);
      LOBYTE(v77) = 0;
      v78 = *(_QWORD **)v75;
      v79 = v76;
      if ( *(_QWORD *)v75 )
      {
        while ( 1 )
        {
          v77 = v78[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v60 >= v77 + v78[4] || v60 >= v77 )
          {
            v80 = (_QWORD *)v78[1];
            if ( !v80 )
            {
              LOBYTE(v77) = 1;
              break;
            }
          }
          else
          {
            v80 = (_QWORD *)*v78;
            if ( !*v78 )
            {
              LOBYTE(v77) = 0;
              break;
            }
          }
          v78 = v80;
        }
      }
      RtlAvlInsertNodeEx(v75, v78, v77, v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v75 + 3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v79 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v79 + 1));
            v54 = ((unsigned int)v59 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v59;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v79);
    }
    if ( (v11[14] & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v101 + 92));
    v61 = 0LL;
    if ( v95 < 3 )
    {
      v84 = *(_QWORD *)(v37 + 8);
      v85 = v60;
      v86 = MiLargePageSizes[v95];
      v87 = (unsigned __int64 *)(v84 + 8 * v109);
      v88 = (unsigned __int64 *)(v84 + 8LL * *(unsigned int *)(v37 + 44));
      if ( v98 )
      {
        v90 = MiGetAnyMultiplexedVm(3LL);
        do
        {
          if ( v87 == v88 )
          {
            v103 = *(_QWORD *)(v103 + 16);
            v87 = *(unsigned __int64 **)(v103 + 8);
            v88 = &v87[*(unsigned int *)(v103 + 44)];
          }
          v91 = *v87;
          if ( (unsigned int)MiPteInShadowRange(v87, v89)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v91 & 1) != 0
            && ((v91 & 0x20) == 0 || (v91 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v93 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v87 >> 3) & 0x1FF));
              v94 = v91 | 0x20;
              if ( (v93 & 0x20) == 0 )
                v94 = v91;
              v91 = v94;
              if ( (v93 & 0x42) != 0 )
                v91 = v94 | 0x42;
            }
          }
          MiMapWithLargePages(v90, v85, v91 >> 12, v86, v95, 4, 1);
          v85 += (_DWORD)v86 << 12;
          v87 += v86;
          v61 += v86;
        }
        while ( v61 < v98 );
        v60 = v102;
      }
      v69 = 0;
    }
    else
    {
      v62 = 0;
      if ( v13 )
      {
        v63 = 0LL;
        do
        {
          v64 = ZeroPte;
          v65 = &v12[v63];
          if ( (unsigned int)MiPteInShadowRange(v65, v59) )
          {
            if ( (unsigned int)MiPteHasShadow(v66, v59, v67, v68) )
            {
              if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                v64 = ZeroPte | 0x8000000000000000uLL;
              *v65 = v64;
              MiWritePteShadow(v65, v64);
              goto LABEL_57;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v64 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v65 = v64;
LABEL_57:
          v63 = ++v62;
        }
        while ( v62 < v13 );
      }
      v69 = MiAddMappedPtes((_DWORD)v12, v13, v101, (_DWORD)a4, SessionId, 0);
      if ( v69 < 0 )
      {
        ++*(_DWORD *)(a1 + 28);
        MiRemoveFromSystemSpace(a1, v60, 0LL);
        return (unsigned int)v69;
      }
    }
    *a7 = v60;
    return (unsigned int)v69;
  }
  if ( (v35 & 0x4000000) != 0 )
  {
    v96 = -1;
    if ( (int)MiCreatePerSessionProtos(v31, 0xFFFFFFFFLL) < 0 )
    {
      v36 = v100;
      v27 = -1073741801;
      v10 = 0x7FFFF;
LABEL_89:
      v16 = v99;
      v17 = v97;
      goto LABEL_90;
    }
  }
  v36 = *(_QWORD *)(*(_QWORD *)v31 + 48LL);
  if ( !v36 || (unsigned int)MiChargeCommit(v97, v36, 0) )
  {
    if ( v34 != 2 )
      goto LABEL_20;
    v103 = v101 + 128;
    v37 = v101 + 128;
    active = MiReferenceActiveSubsection(v101 + 128);
    v27 = active;
    if ( active >= 0 )
      goto LABEL_21;
    goto LABEL_88;
  }
  v15 = v95;
  v72 = 0;
  v16 = v99;
  v36 = 0LL;
  v10 = v96;
  v27 = -1073741523;
  v17 = v97;
  v18 = v98;
LABEL_92:
  ++*(_DWORD *)(a1 + 28);
  if ( v12 )
  {
    if ( v15 >= 3 )
      MiReleasePtes((__int64)v16, v12, v18);
    else
      MiUnmapLargePages(v102, v18 << 12, 9LL, v16);
    v17 = v97;
    v72 = 0;
    v15 = v95;
  }
  if ( v112 == 1 )
  {
    v54 = v9 == 2;
    v74 = v101;
    LOBYTE(v72) = v15 < 3;
    MiDereferenceDataSubsections(v101, (_DWORD)a4, v13, v72, !v54);
    v17 = v97;
  }
  else
  {
    v74 = v101;
  }
  if ( v10 != 0x7FFFF )
  {
    MiDereferencePerSessionProtos(v74, v10);
    v17 = v97;
  }
  if ( v36 )
    MiReturnCommit(v17, v36);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v27;
}
