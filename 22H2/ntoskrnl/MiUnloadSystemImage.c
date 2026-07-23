/*
 * XREFs of MiUnloadSystemImage @ 0x1406FEA98
 * Callers:
 *     MmChangeImageProtection @ 0x1406FE6A0 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     MiDereferenceImports @ 0x140771B50 (MiDereferenceImports.c)
 *     MmUnloadSystemImage @ 0x140771E10 (MmUnloadSystemImage.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9248 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiManageSubsectionView @ 0x140291780 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiCreateSystemWsles @ 0x140299B00 (MiCreateSystemWsles.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402C3BD0 (ObDereferenceObjectDeferDelete.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     MiReturnResident @ 0x1402E9FEC (MiReturnResident.c)
 *     MiIsRetpolineEnabled @ 0x1402F3630 (MiIsRetpolineEnabled.c)
 *     MiPartitionIdToPointer @ 0x1403253D8 (MiPartitionIdToPointer.c)
 *     MiDereferenceControlArea @ 0x14032CAF8 (MiDereferenceControlArea.c)
 *     MiGetPdeAddress @ 0x140336F4C (MiGetPdeAddress.c)
 *     MiProcessLoaderEntry @ 0x140372B40 (MiProcessLoaderEntry.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14037312C (DbgUnLoadImageSymbolsUnicode.c)
 *     LdrUnloadAlternateResourceModule @ 0x14037F508 (LdrUnloadAlternateResourceModule.c)
 *     MiSessionRemoveImage @ 0x14038A8F8 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x14038C3C8 (MiDeleteSessionPdes.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039E848 (MiFreePrivateFixupEntryForSystemImage.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     KeFlushRsb @ 0x14051B158 (KeFlushRsb.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052A864 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053155C (MiLogPerfMemoryRangeEvent.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E368 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053F0DC (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x140544188 (MiUnmapRetpolineStubs.c)
 *     MiInitPerfMemoryFlags @ 0x140544998 (MiInitPerfMemoryFlags.c)
 *     MiVaToSoftwareWsle @ 0x14055C3B8 (MiVaToSoftwareWsle.c)
 *     PerfLogImageUnload @ 0x14062A070 (PerfLogImageUnload.c)
 *     MiDereferencePerSessionProtos @ 0x14069F60C (MiDereferencePerSessionProtos.c)
 *     MiBytesToMapSystemImage @ 0x1406FF140 (MiBytesToMapSystemImage.c)
 *     MiRememberUnloadedDriver @ 0x14075F2E4 (MiRememberUnloadedDriver.c)
 *     MiReturnSystemImageAddress @ 0x14075F494 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x14075F4E0 (MiReleaseDriverPtes.c)
 *     MiUnlockDriverCode @ 0x140771384 (MiUnlockDriverCode.c)
 *     MiDereferenceImports @ 0x140771B50 (MiDereferenceImports.c)
 *     KseDriverUnloadImage @ 0x140772BB4 (KseDriverUnloadImage.c)
 *     MiMarkKernelImageCfgBits @ 0x140772E64 (MiMarkKernelImageCfgBits.c)
 *     MiReturnSystemImageCommitment @ 0x140772F00 (MiReturnSystemImageCommitment.c)
 *     MmHasImageBeenImportOptimized @ 0x140773388 (MmHasImageBeenImportOptimized.c)
 *     MiFreeLoadedImportList @ 0x1407733B4 (MiFreeLoadedImportList.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407733E0 (ExCovReadjustUnloadedModuleEntry.c)
 *     KeCleanupImageTracepoints @ 0x14077343C (KeCleanupImageTracepoints.c)
 *     MiReleasePrivilegedPtes @ 0x1407738F8 (MiReleasePrivilegedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x140779528 (MiDeleteSessionDriverProtos.c)
 *     MiReleaseSessionDriverCharges @ 0x140779808 (MiReleaseSessionDriverCharges.c)
 *     MiFreeRetpolineRelocationInformation @ 0x14078D6C4 (MiFreeRetpolineRelocationInformation.c)
 *     MiFreeRetpolineImportInfo @ 0x1407CDE74 (MiFreeRetpolineImportInfo.c)
 *     MiFreePatchTableProtos @ 0x1408C9F14 (MiFreePatchTableProtos.c)
 *     MiIsImageFullyRetpolined @ 0x1408D0B04 (MiIsImageFullyRetpolined.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408D0CB8 (MiMarkKernelImageRetpolineBits.c)
 *     MiUnmapLargeDriver @ 0x1408DA794 (MiUnmapLargeDriver.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     VfDriverUnloadImage @ 0x1409C2484 (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(__int64 BugCheckParameter2, char a2)
{
  char v2; // di
  bool v4; // zf
  void *v5; // r15
  ULONG_PTR v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r12
  int v9; // esi
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // r12
  int v12; // edi
  unsigned __int64 SessionVm; // rax
  BOOL v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 PdeAddress; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rax
  void *v20; // rcx
  char v21; // si
  char v22; // r13
  ULONG_PTR v23; // rsi
  unsigned __int64 v24; // rax
  char *AnyMultiplexedVm; // r12
  int v26; // r15d
  int v27; // edi
  PVOID v28; // rax
  void *v29; // rcx
  void *v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  unsigned int SessionId; // eax
  unsigned int inited; // eax
  void *v37; // rax
  int v38; // edx
  __int64 v39; // [rsp+50h] [rbp-B0h]
  unsigned __int64 PteAddress; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  __int128 v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h]
  __int128 v46; // [rsp+90h] [rbp-70h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int128 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49[26]; // [rsp+C0h] [rbp-40h] BYREF
  int v51; // [rsp+1B0h] [rbp+B0h]
  PVOID Object; // [rsp+1B8h] [rbp+B8h]

  v43 = 0LL;
  v2 = a2;
  v45 = 0LL;
  v44 = 0LL;
  memset(v49, 0, 0x90uLL);
  v4 = *(_QWORD *)(BugCheckParameter2 + 136) == 1LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  if ( v4 )
    return;
  v5 = *(void **)(BugCheckParameter2 + 48);
  BugCheckParameter2a = (ULONG_PTR)v5;
  v6 = (BugCheckParameter2 + 160) & -(__int64)((v2 & 4) != 0);
  v7 = 0LL;
  PteAddress = MiGetPteAddress((unsigned __int64)v5);
  v8 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 64) >> 12;
  v39 = v8;
  Object = *(PVOID *)(BugCheckParameter2 + 112);
  v41 = (unsigned __int64)MiBytesToMapSystemImage(*(unsigned int *)(BugCheckParameter2 + 64)) >> 12;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v5) == 1 )
  {
    v51 = 0;
    v10 = MiSessionRemoveImage(BugCheckParameter2, (__int64)&v44);
    if ( !v10 )
      return;
    v7 = MiSectionControlArea((__int64)Object);
    if ( *(_QWORD *)BugCheckParameter2 )
      ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
    v11 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    v12 = v2 & 1;
    if ( v12 )
    {
      if ( MiIsRetpolineEnabled() )
      {
        MiUnmapRetpolineStubs(BugCheckParameter2, 0);
        if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
          KeFlushRsb();
        _mm_lfence();
      }
      SessionVm = MiGetSessionVm();
      MiDeleteSystemPagableVm(SessionVm, v7, PteAddress, v39, 3, &v46);
    }
    MiReleaseSessionDriverCharges(v10);
    if ( v12 )
    {
      v14 = (dword_140C4CCB0 & 0xFFF) != 0;
      if ( v14 + ((unsigned int)dword_140C4CCB0 >> 12) )
        MiUnmapPatchTable(PteAddress + 8 * (v41 - (v14 + ((unsigned int)dword_140C4CCB0 >> 12))));
      if ( (*(_DWORD *)(v7 + 56) & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        MiDereferencePerSessionProtos((__int64 *)v7, SessionId);
      }
      MiGetPdeAddress((unsigned __int64)v5);
      v15 = v44;
      if ( (_QWORD)v44 )
        v15 = v44 + 1;
      if ( v15 )
        MiGetPdeAddress(v15);
      PdeAddress = MiGetPdeAddress((unsigned __int64)v5 + (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 64) - 1));
      if ( *((_QWORD *)&v44 + 1) )
      {
        v34 = MiGetPdeAddress(*((unsigned __int64 *)&v44 + 1));
        if ( v34 == PdeAddress )
          PdeAddress -= 8LL;
      }
      if ( PdeAddress >= v17 )
        MiDeleteSessionPdes();
    }
    v18 = v45;
    if ( v45 )
    {
      v19 = MiPartitionIdToPointer(*(_WORD *)(v11 + 430));
      MiReturnCommit(v19, v18 - *((_QWORD *)&v46 + 1));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 48), -v18);
    }
    v2 = a2;
    if ( (a2 & 0x10) != 0 )
    {
      MiDereferenceImports(v10[11]);
      MiFreeLoadedImportList(v10[11]);
    }
    ExFreePoolWithTag(v10, 0);
    v9 = 0;
    v8 = v39;
  }
  else
  {
    v9 = 1;
    v51 = 1;
  }
  v4 = (*(_WORD *)(BugCheckParameter2 + 108))-- == 1;
  if ( !v4 )
  {
    if ( !v9 && (v2 & 2) != 0 )
      VfDriverUnloadImage(BugCheckParameter2);
    return;
  }
  KeCleanupImageTracepoints(BugCheckParameter2);
  if ( (int)MiMarkKernelImageCfgBits(BugCheckParameter2, 0LL) < 0 )
    KeBugCheckEx(0x1Au, 0x1015uLL, (ULONG_PTR)v5, BugCheckParameter2, (*(_DWORD *)(v6 + 36) >> 8) & 1);
  if ( v9 )
  {
    if ( dword_140C4CCB0 )
      MiClearDriverHotPatchPtes(BugCheckParameter2);
  }
  else
  {
    MiDeleteSessionDriverProtos(v7);
  }
  if ( (unsigned int)MmHasImageBeenImportOptimized(BugCheckParameter2) )
    MiFreeRetpolineImportInfo();
  if ( MiIsRetpolineEnabled() )
  {
    if ( v9 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(BugCheckParameter2 + 48)) )
      MiUnmapRetpolineStubs(BugCheckParameter2, v9);
    MiMarkKernelImageRetpolineBits(BugCheckParameter2, 0LL);
    if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
      KeFlushRsb();
    _mm_lfence();
  }
  if ( v6 )
  {
    v20 = *(void **)(v6 + 136);
    if ( v20 )
    {
      MiFreeRetpolineRelocationInformation(v20);
      *(_QWORD *)(v6 + 136) = 0LL;
    }
  }
  if ( (v2 & 2) != 0 )
  {
    VfDriverUnloadImage(BugCheckParameter2);
    KseDriverUnloadImage(BugCheckParameter2);
  }
  if ( !v9 )
  {
    MiReleasePrivilegedPtes(PteAddress, (unsigned int)v41);
    v8 = 0LL;
    v39 = 0LL;
  }
  if ( (v2 & 0x10) != 0 )
    MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
  MiFreeLoadedImportList(*(_QWORD *)(BugCheckParameter2 + 136));
  *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
  LdrUnloadAlternateResourceModule(v5);
  if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
    DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), (__int64)v5, 0xFFFFFFFFLL);
  if ( *(_QWORD *)BugCheckParameter2 && v8 )
    ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
  v21 = 0;
  v22 = 0;
  if ( !v8 || (v2 & 1) == 0 )
    goto LABEL_95;
  MiRememberUnloadedDriver(BugCheckParameter2 + 88, v5, v41 << 12);
  v23 = 0LL;
  if ( Object )
  {
    v24 = MiSectionControlArea((__int64)Object);
    v23 = v24;
    if ( *(_QWORD *)BugCheckParameter2 )
    {
      v49[0] = v24;
      MiManageSubsectionView(v49, (_QWORD *)v6, 4);
    }
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v5) )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      inited = MiInitPerfMemoryFlags(0, 6);
      MiLogPerfMemoryRangeEvent((__int64)v5, 0LL, inited, (v39 + 511) & 0xFFFFFFFFFFFFFE00uLL);
    }
    MiUnmapLargeDriver(v5, v39);
    v21 = 1;
    goto LABEL_95;
  }
  if ( v6 )
    MiUnlockDriverCode(BugCheckParameter2);
  qword_140C4CD20 = BugCheckParameter2;
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v23, PteAddress, v39, 5, &v46);
  v26 = DWORD2(v47);
  v27 = v46;
  if ( v23 )
    MiWalkEntireImage(v23, (__int64)&v43, 4, 0xFFFFFFFF);
  qword_140C4CD20 = 0LL;
  _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CD48 + 3, v27 - v26);
  v28 = Object;
  if ( !Object )
  {
    MiReleasePrivilegedPtes(PteAddress, (unsigned int)v41);
    if ( !(unsigned int)MiCreateSystemWsles() )
    {
      v37 = (void *)MiVaToSoftwareWsle((__int64)AnyMultiplexedVm, (__int64)((v39 << 28) + (PteAddress << 25)) >> 16);
      if ( v41 != v39 )
      {
        LOBYTE(v38) = 10;
        memset(v37, v38, v41 - v39);
      }
    }
    v5 = (void *)BugCheckParameter2a;
    v22 = 1;
    v21 = 0;
    v2 = a2;
LABEL_95:
    v28 = Object;
    goto LABEL_63;
  }
  v5 = (void *)BugCheckParameter2a;
  v21 = 0;
  v2 = a2;
LABEL_63:
  if ( v51 == 1 )
  {
    if ( v28 )
      MiReleasePrivilegedPtes(PteAddress, (unsigned int)v41);
    if ( (v2 & 1) != 0 )
      MiReturnSystemImageCommitment(BugCheckParameter2, &v46);
  }
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    MiProcessLoaderEntry((unsigned __int64 *)BugCheckParameter2, 0);
    if ( (PerfGlobalGroupMask & 4) != 0 )
      PerfLogImageUnload(
        (unsigned __int16 *)(BugCheckParameter2 + 72),
        0LL,
        0LL,
        v5,
        *(unsigned int *)(BugCheckParameter2 + 64),
        *(_DWORD *)(BugCheckParameter2 + 120),
        *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
        (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
        0);
  }
  if ( v22 )
    MiReleaseDriverPtes(0LL, PteAddress, (unsigned int)v41);
  v29 = *(void **)(BugCheckParameter2 + 80);
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  if ( v6 )
  {
    v30 = *(void **)(v6 + 128);
    if ( v30 )
      MiFreePatchTableProtos(v30);
  }
  if ( Object )
  {
    if ( v6 )
    {
      v31 = *(_QWORD *)(v6 + 56);
      if ( v31 )
        MiReturnResident((__int64)&MiSystemPartition, v31);
    }
    v32 = MiSectionControlArea((__int64)Object);
    v33 = v32;
    if ( !v21 && v5 != *(void **)(*(_QWORD *)v32 + 32LL) )
    {
      MiFreePrivateFixupEntryForSystemImage((ULONG_PTR)v5, 1);
      MiReturnSystemImageAddress(v5, *(unsigned int *)(BugCheckParameter2 + 64));
    }
    if ( v6 && v51 && (*(_DWORD *)(v6 + 36) & 0x80u) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v33);
    MiDereferenceControlArea(v33);
    ObDereferenceObjectDeferDelete(Object);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
