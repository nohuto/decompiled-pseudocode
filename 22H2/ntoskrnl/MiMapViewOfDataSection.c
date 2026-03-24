/*
 * XREFs of MiMapViewOfDataSection @ 0x140639820
 * Callers:
 *     MiMapViewOfSection @ 0x140639150 (MiMapViewOfSection.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14025A688 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiIsProcessCfgEnabled @ 0x14025A880 (MiIsProcessCfgEnabled.c)
 *     MiReferenceVad @ 0x14025ABF0 (MiReferenceVad.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14027D05C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiUnlockVad @ 0x140294CD8 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140294EE0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029590C (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x140295C70 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x14029657C (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140296630 (MiCheckPurgeAndUpMapCount.c)
 *     MiAweControlArea @ 0x1402966C8 (MiAweControlArea.c)
 *     MiGetWsAndInsertVad @ 0x140296700 (MiGetWsAndInsertVad.c)
 *     MiLockVad @ 0x140296DD8 (MiLockVad.c)
 *     MiComputeContiguousSubsectionPte @ 0x140297130 (MiComputeContiguousSubsectionPte.c)
 *     MiLocateSubsectionNode @ 0x140297160 (MiLocateSubsectionNode.c)
 *     MiGetCommittedPages @ 0x140297350 (MiGetCommittedPages.c)
 *     MiLocatePagefileSubsection @ 0x14029737C (MiLocatePagefileSubsection.c)
 *     ExAllocatePoolMm @ 0x1402BBA40 (ExAllocatePoolMm.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     MmGetCurrentProcessorColor @ 0x1402F4110 (MmGetCurrentProcessorColor.c)
 *     MiDereferenceExtendInfo @ 0x140328F64 (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x14032CAF8 (MiDereferenceControlArea.c)
 *     MiDecrementLargeSubsections @ 0x140540350 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1405413C0 (MiIncrementLargeSubsections.c)
 *     MiFindPlaceholderVadToReplace @ 0x140555134 (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14055BD10 (MiUnlockAndDereferenceNestedVad.c)
 *     MiSelectUserAddress @ 0x1405FA9A0 (MiSelectUserAddress.c)
 *     MiCommitVadCfgBits @ 0x14061C0DC (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x14061DFF8 (MiIsVaRangeAvailable.c)
 *     MiUnmapVad @ 0x14061E840 (MiUnmapVad.c)
 *     MiSecureVad @ 0x14061FAD0 (MiSecureVad.c)
 *     MiAddSecureEntry @ 0x14061FBE0 (MiAddSecureEntry.c)
 *     MiChargeSegmentCommit @ 0x1406202F0 (MiChargeSegmentCommit.c)
 *     MiRemoveSharedCommitNode @ 0x140638C00 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140638E70 (MiInsertSharedCommitNode.c)
 *     MiReferenceFileObjectForMap @ 0x14063A360 (MiReferenceFileObjectForMap.c)
 *     MiInsertVadCharges @ 0x14063A390 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x14063A680 (MiAdvanceVadHint.c)
 *     MiFreePlaceholderStorage @ 0x1406A6748 (MiFreePlaceholderStorage.c)
 *     MiLogMapFileEvent @ 0x1408C4798 (MiLogMapFileEvent.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8328 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D83D8 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408D8500 (MiPreparePlaceholderVadReplacement.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned __int64 a8,
        char *a9)
{
  int v9; // eax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  void *v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // r13
  int v18; // edx
  int v19; // eax
  bool v20; // zf
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  int inserted; // esi
  struct _DMA_ADAPTER *v29; // rcx
  unsigned __int64 v30; // rbx
  bool v31; // si
  __int64 *SubsectionNode; // r9
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  int v37; // eax
  _DWORD *PoolMm; // rax
  int v39; // ebx
  unsigned int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  unsigned int v44; // edx
  int v45; // ecx
  unsigned int v46; // eax
  int v47; // ecx
  unsigned __int64 v48; // r12
  unsigned __int64 v49; // r10
  __int64 v50; // r10
  __int64 v51; // r10
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r9
  _DWORD *v54; // rsi
  _DWORD *Pool; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 *v59; // rsi
  __int64 v60; // r10
  __int64 *v61; // rax
  __int64 v62; // rcx
  int v63; // r14d
  int v64; // r9d
  int v65; // eax
  PVOID v66; // rbx
  PVOID v67; // r14
  PVOID v68; // r14
  volatile signed __int64 *v69; // rdi
  unsigned __int64 v70; // r12
  __int64 v71; // [rsp+50h] [rbp-A1h]
  __int64 *BugCheckParameter2; // [rsp+58h] [rbp-99h]
  unsigned __int64 v73; // [rsp+60h] [rbp-91h] BYREF
  PVOID PlaceholderVadToReplace; // [rsp+68h] [rbp-89h]
  unsigned __int64 ControlAreaPtes; // [rsp+70h] [rbp-81h]
  int v76; // [rsp+78h] [rbp-79h]
  int v77; // [rsp+7Ch] [rbp-75h]
  unsigned __int64 v78; // [rsp+80h] [rbp-71h]
  __int64 v79; // [rsp+88h] [rbp-69h]
  unsigned __int64 v80; // [rsp+90h] [rbp-61h]
  unsigned __int64 v81; // [rsp+98h] [rbp-59h]
  __int64 v82; // [rsp+A0h] [rbp-51h]
  unsigned __int64 v83; // [rsp+A8h] [rbp-49h] BYREF
  signed __int64 v84; // [rsp+B0h] [rbp-41h]
  __int64 *v85; // [rsp+B8h] [rbp-39h]
  __int64 v86; // [rsp+C0h] [rbp-31h] BYREF
  unsigned __int64 v87; // [rsp+C8h] [rbp-29h]
  __int64 v88; // [rsp+D0h] [rbp-21h] BYREF
  PVOID P; // [rsp+D8h] [rbp-19h]
  ULONG_PTR v90; // [rsp+E0h] [rbp-11h]
  int PlaceholderStorage; // [rsp+138h] [rbp+47h] BYREF
  unsigned __int64 *v92; // [rsp+140h] [rbp+4Fh]
  unsigned __int64 *v93; // [rsp+148h] [rbp+57h]

  v93 = a4;
  v92 = a3;
  v9 = *(_DWORD *)(a2 + 60);
  v73 = 0LL;
  v83 = 0LL;
  v88 = 0LL;
  v77 = 0;
  if ( (v9 & 2) != 0 )
    return 3221225485LL;
  if ( MiAweControlArea(a1) )
    return 3221225485LL;
  v16 = *v14;
  v17 = *(_QWORD *)(v13 + 88);
  v18 = *(_DWORD *)(v13 + 40);
  v84 = (signed __int64)v15;
  v82 = v16;
  if ( (v18 & 0x2000) != 0 && *(void **)(a1 + 64) == v15 )
    return 3221225485LL;
  v19 = v18 & 0x40000000;
  if ( (v18 & 0x20000000) == 0 )
  {
    if ( !v19 || (v18 & 0x2000) == 0 && (*(void **)(v17 + 2240) != v15 || (*(_DWORD *)(a2 + 72) & 1) != 0) )
      goto LABEL_20;
    return 3221225485LL;
  }
  if ( v19 || (v18 & 0x2000) != 0 || a7 == 24 || (a7 & 0xFFFFFFF8) == 0x10 || (a7 & 5) == 5 )
    return 3221225485LL;
  v20 = *(void **)(a1 + 64) == v15 ? (*(_WORD *)(v16 + 12) & 0x1000) == 0 : (*(_DWORD *)(a1 + 56) & 0x40000000) == 0;
  if ( v20 )
    return 3221225485LL;
LABEL_20:
  v22 = *(_QWORD *)(a2 + 16);
  if ( v22 >= 0x200000 && ((v22 - 1) & *(_QWORD *)(a2 + 32)) != 0 || (v18 & 0x2000) != 0 && *a4 >= 0x10000000000LL )
    return 3221225503LL;
  v23 = (__int64)v15;
  CurrentThread = KeGetCurrentThread();
  v25 = *(_QWORD *)(v17 + 1680) + 48LL;
  PlaceholderVadToReplace = v15;
  v79 = v25;
  P = v15;
  v76 = (int)v15;
  v71 = (__int64)CurrentThread;
  MiCheckPurgeAndUpMapCount(a1);
  v26 = *a4;
  v27 = v26 + *(_QWORD *)(a2 + 24);
  v78 = v26 >> 12;
  v80 = v27 >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1);
  if ( v26 >> 12 >= ControlAreaPtes )
  {
    inserted = -1073741793;
LABEL_27:
    MiDereferenceControlArea(a1);
    if ( v23 )
    {
      if ( *(__int64 *)(v23 + 120) < 0 )
        MiDereferenceExtendInfo(v23, a1);
      v29 = *(struct _DMA_ADAPTER **)(v23 + 128);
      if ( v29 )
        HalPutDmaAdapter(v29);
      MiFreePlaceholderStorage(v23);
      ExFreePoolWithTag((PVOID)v23, 0);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)inserted;
  }
  v30 = a8;
  v31 = 0;
  if ( *(_QWORD *)(a1 + 64) == v23 )
  {
    v83 = v78;
    BugCheckParameter2 = (__int64 *)MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v83);
    SubsectionNode = BugCheckParameter2;
    if ( !v30 && a7 == 24 )
      v31 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(a1, *v93, 0);
    BugCheckParameter2 = SubsectionNode;
  }
  v33 = *((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26);
  v78 -= v33;
  v34 = v80 - v33;
  if ( v31 )
    v34 = 1LL;
  v80 = v34;
  PlaceholderStorage = MiAddViewsForSection(SubsectionNode, v34, (_DWORD *)8, (__int64)SubsectionNode);
  inserted = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
    goto LABEL_27;
  v85 = (__int64 *)(BugCheckParameter2[1] + 8 * v78);
  if ( *(_QWORD *)(a1 + 64) == v23 && v30 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
  {
    v35 = v23;
    LOBYTE(v35) = (v30 & 0xFFF) != 0;
    v84 = (v30 >> 12) + v35;
  }
  v86 = v23;
  v36 = *(_QWORD *)(a5 + 24) << 12;
  ControlAreaPtes = v36;
  LOWORD(v37) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64, 0x88uLL, 0x20646156u, v37 | 0x80000000);
  v23 = (__int64)PoolMm;
  if ( !PoolMm )
  {
    inserted = -1073741670;
LABEL_117:
    MiRemoveViewsFromSectionWithPfn(BugCheckParameter2);
    goto LABEL_27;
  }
  v39 = a7;
  v40 = PoolMm[16] & 0xFBFFFFFF;
  *((_QWORD *)PoolMm + 2) = -2LL;
  *((_QWORD *)PoolMm + 10) = v85;
  *((_QWORD *)PoolMm + 9) = BugCheckParameter2;
  v41 = 0;
  if ( a6 == 1 )
    v41 = 0x4000000;
  v42 = v41 | v40;
  v43 = (*(_DWORD *)(v23 + 48) ^ (v39 << 7)) & 0xF80;
  *(_DWORD *)(v23 + 64) = v42;
  *(_DWORD *)(v23 + 48) ^= v43;
  *(_DWORD *)(v23 + 48) ^= (*(_DWORD *)(v23 + 48) ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x3F000;
  if ( *(_DWORD *)(a2 + 52) )
    *(_BYTE *)(*(_QWORD *)(v17 + 1680) + 352LL) = 1;
  if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
    *(_DWORD *)(v23 + 64) |= 0x2000000u;
  *(_QWORD *)(v23 + 40) = 0LL;
  v90 = v23 + 40;
  *(_DWORD *)(v23 + 64) = ((__int64)*v93 >> 16) & 0xFFFFFF | *(_DWORD *)(v23 + 64) & 0xFF000000;
  if ( (*(_DWORD *)(a2 + 60) & 0x4000000) != 0 )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(v23);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_117;
    v36 = ControlAreaPtes;
  }
  *(_QWORD *)(v23 + 128) = MiReferenceFileObjectForMap(a5);
  if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 64) )
    {
      v44 = MiIncrementLargeSubsections(BugCheckParameter2, v80);
      if ( v44 > 1 )
      {
        inserted = -1073741280;
        goto LABEL_117;
      }
      v45 = *(_DWORD *)(v23 + 48);
      v77 = 1;
      v46 = v45 & 0xFFF3FFFF | 0x80000;
      v47 = v45 | 0xC0000;
      if ( v44 == 1 )
        v47 = v46;
      *(_DWORD *)(v23 + 48) = v47;
    }
    else
    {
      *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFF3FFFF | 0x80000;
    }
  }
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v17);
  if ( (*(_DWORD *)(v17 + 1124) & 0x20) != 0 )
  {
    inserted = -1073741558;
LABEL_113:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v17);
    if ( v76 == 1 )
      MiRemoveSharedCommitNode((_QWORD *)a1, v17, 0);
    if ( v77 )
    {
      v61 = MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *v93 - 1, 0);
      MiDecrementLargeSubsections(BugCheckParameter2, v61);
    }
    goto LABEL_117;
  }
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
  {
    v48 = *v92;
LABEL_76:
    v50 = *(_QWORD *)(a2 + 24) - 1LL;
    v73 = v48;
    v51 = v48 + v50;
    v20 = (*(_DWORD *)(a2 + 60) & 0x4000000) == 0;
    v81 = v51;
    if ( v20 )
    {
      if ( !MiIsVaRangeAvailable(v17, v48, v51 - v48 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      {
        CurrentThread = (struct _KTHREAD *)v71;
        inserted = -1073741800;
        goto LABEL_113;
      }
    }
    else
    {
      PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(
                                         v48,
                                         v51,
                                         *(_BYTE *)(a2 + 104),
                                         &PlaceholderStorage);
      if ( !PlaceholderVadToReplace )
      {
        inserted = PlaceholderStorage;
        CurrentThread = (struct _KTHREAD *)v71;
        goto LABEL_113;
      }
      v49 = v81;
    }
    goto LABEL_82;
  }
  if ( v36 )
  {
    v48 = v36 + *v93;
    goto LABEL_76;
  }
  PlaceholderStorage = MiSelectUserAddress(
                         *(_DWORD *)(a2 + 40),
                         *(_QWORD *)a2,
                         *(_QWORD *)(a2 + 8),
                         *(_QWORD *)(a2 + 24),
                         *(_QWORD *)(a2 + 16),
                         0LL,
                         v39,
                         0,
                         &v86,
                         &v73);
  inserted = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
    goto LABEL_113;
  v48 = v73;
  v49 = *(_QWORD *)(a2 + 24) + v73 - 1;
  v81 = v49;
LABEL_82:
  v52 = v48 >> 12;
  v53 = v49 >> 12;
  *(_BYTE *)(v23 + 32) = v48 >> 44;
  *(_BYTE *)(v23 + 33) = v49 >> 44;
  *(_DWORD *)(v23 + 24) = v48 >> 12;
  *(_DWORD *)(v23 + 28) = v49 >> 12;
  v20 = (*(_DWORD *)(a2 + 40) & 0x2000) == 0;
  ControlAreaPtes = v48 >> 12;
  v87 = v49 >> 12;
  if ( !v20 )
  {
    CurrentThread = (struct _KTHREAD *)v71;
    --*(_WORD *)(v71 + 486);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C990, 0LL);
    v54 = *(_DWORD **)(v82 + 32);
    if ( v54 )
    {
      ++v54[2];
    }
    else
    {
      Pool = MiAllocatePool(64, 0x10uLL, 0x78436D4Du);
      v54 = Pool;
      if ( !Pool )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C990, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C990);
        KeAbPostRelease((ULONG_PTR)&qword_140C4C990);
        KiLeaveGuardedRegionUnsafe(v71);
        inserted = -1073741670;
        goto LABEL_111;
      }
      v56 = v82;
      Pool[2] = 1;
      *(_QWORD *)Pool = _InterlockedCompareExchange64((volatile signed __int64 *)(v56 + 24), -1LL, -1LL);
      *(_QWORD *)(v56 + 32) = Pool;
    }
    v57 = *(_QWORD *)(a5 + 48);
    if ( *(_QWORD *)v54 < v57 )
      *(_QWORD *)v54 = v57;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C990, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C990);
    KeAbPostRelease((ULONG_PTR)&qword_140C4C990);
    KiLeaveGuardedRegionUnsafe(v71);
    v52 = ControlAreaPtes;
    v53 = v87;
    v48 = v73;
    *(_QWORD *)(v23 + 120) = v54;
  }
  if ( (a7 & 5) == 5 )
  {
    v58 = (*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32))
        - (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32))
        + 1;
    *(_DWORD *)(v23 + 52) ^= (*(_DWORD *)(v23 + 52) ^ (*(_DWORD *)(v23 + 28) - *(_DWORD *)(v23 + 24) + 1)) & 0x7FFFFFFF;
    *(_BYTE *)(v23 + 34) = v58 >> 31;
  }
  v59 = BugCheckParameter2;
  *(_QWORD *)(v23 + 88) = MiComputeContiguousSubsectionPte((__int64)BugCheckParameter2, v53 + v78 - v52);
  if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
  {
    P = MiAddSecureEntry(v23, v48, v60, 0x80000000, 0);
    if ( !P )
    {
      inserted = -1073741670;
LABEL_110:
      CurrentThread = (struct _KTHREAD *)v71;
LABEL_111:
      if ( PlaceholderVadToReplace )
        MiUnlockVad((__int64)CurrentThread, (__int64)PlaceholderVadToReplace);
      goto LABEL_113;
    }
  }
  if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
  {
    *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFFFFF8F | 0x50;
    v48 = v73;
    *(_DWORD *)(v23 + 64) |= 0x1000000u;
  }
  if ( !*(_QWORD *)(a1 + 64) )
  {
    inserted = MiInsertSharedCommitNode((_QWORD *)a1, v17, 0);
    if ( inserted < 0 )
      goto LABEL_110;
    v59 = BugCheckParameter2;
    v76 = 1;
  }
  if ( v84 && !(unsigned int)MiChargeSegmentCommit(v59, v85, v84) )
  {
    inserted = -1073741523;
    goto LABEL_110;
  }
  PlaceholderStorage = MiInsertVadCharges(v23, v17);
  inserted = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
    goto LABEL_110;
  v62 = v79;
  if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
  {
    *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFF3FFFF | 0x40000;
    ++*(_QWORD *)(v62 + 384);
  }
  if ( PlaceholderVadToReplace )
  {
    MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v17, v62);
    ExAcquirePushLockExclusiveEx(v23 + 40, 0LL);
  }
  else
  {
    MiLockVad(v71, v23);
  }
  MiGetWsAndInsertVad(v23);
  if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v82 + 56) )
    *(_QWORD *)(v82 + 56) = v48;
  if ( v86 )
    MiAdvanceVadHint(ControlAreaPtes, v87);
  if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
    v48 = v73;
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
    MiLogMapFileEvent(v23, 1061LL);
  inserted = 0;
  PlaceholderStorage = 0;
  v63 = a7 & 2;
  if ( ((a7 & 2) == 0 || !MiIsProcessCfgEnabled()) && !*(_QWORD *)(a2 + 80) )
  {
    v68 = PlaceholderVadToReplace;
    if ( PlaceholderVadToReplace )
    {
      v69 = (volatile signed __int64 *)v90;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v69);
      KeAbPostRelease((ULONG_PTR)v69);
      UNLOCK_ADDRESS_SPACE_UNORDERED(v71, v17);
      v70 = v73;
      inserted = PlaceholderStorage;
      MiFinishPlaceholderVadReplacement(v68);
      *v92 = v70;
    }
    else
    {
      MiUnlockVad(v71, v23);
      UNLOCK_ADDRESS_SPACE(v71, v17);
      *v92 = v48;
    }
    return (unsigned int)inserted;
  }
  UNLOCK_ADDRESS_SPACE_UNORDERED(v71, v17);
  MiReferenceVad(v23);
  if ( v63 )
  {
    if ( MiIsProcessCfgEnabled() )
    {
      inserted = MiCommitVadCfgBits(v23, 0LL, a9);
      if ( inserted < 0 )
      {
LABEL_147:
        v66 = PlaceholderVadToReplace;
        MiUnmapVad(v23, (__int64)PlaceholderVadToReplace, 0);
        if ( v66 )
          MiFinishPlaceholderVadReplacement(v66);
        return (unsigned int)inserted;
      }
    }
  }
  if ( *(_QWORD *)(a2 + 80) )
  {
    v64 = *(_DWORD *)(a2 + 76);
    if ( (unsigned int)(v64 - 1) > 1 && v64 != -2147483647 && v64 != 4 )
    {
      v65 = -1073741755;
LABEL_146:
      inserted = v65;
      goto LABEL_147;
    }
    v65 = MiSecureVad(v23, v48, *(_QWORD *)(a2 + 24), v64, 0, &v88);
    if ( v65 < 0 )
      goto LABEL_146;
    **(_QWORD **)(a2 + 80) = qword_140C4DE50 ^ v88 ^ v17;
  }
  v67 = PlaceholderVadToReplace;
  if ( PlaceholderVadToReplace )
  {
    MiUnlockAndDereferenceNestedVad((PVOID)v23);
    MiFinishPlaceholderVadReplacement(v67);
  }
  else
  {
    MiUnlockAndDereferenceVad((char *)v23);
  }
  *v92 = v48;
  return (unsigned int)inserted;
}
