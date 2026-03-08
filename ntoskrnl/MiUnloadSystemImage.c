/*
 * XREFs of MiUnloadSystemImage @ 0x1407F627C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x1407D1E10 (MmChangeImageProtection.c)
 *     MmUnloadSystemImage @ 0x1407F5FA0 (MmUnloadSystemImage.c)
 *     MiDereferenceSingleImport @ 0x1407F77B4 (MiDereferenceSingleImport.c)
 *     MiActOnPatchInAllSessions @ 0x140A31950 (MiActOnPatchInAllSessions.c)
 *     MmRegisterHotPatches @ 0x140B7092C (MmRegisterHotPatches.c)
 * Callees:
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140200F38 (MiDeleteSessionPdes.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MmGetMinWsPagePriority @ 0x140242D60 (MmGetMinWsPagePriority.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402637F0 (ObDereferenceObjectDeferDelete.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiReturnResident @ 0x1402A52C8 (MiReturnResident.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiProcessLoaderEntry @ 0x1402B2790 (MiProcessLoaderEntry.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x1403005CC (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x140335DC0 (MiManageSubsectionView.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiIsRetpolineEnabled @ 0x14036905C (MiIsRetpolineEnabled.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     MiGetPdeAddress @ 0x14036C27C (MiGetPdeAddress.c)
 *     LdrUnloadAlternateResourceModule @ 0x14036C804 (LdrUnloadAlternateResourceModule.c)
 *     KasanDriverUnloadImage @ 0x14036C820 (KasanDriverUnloadImage.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14036CBB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiDereferenceControlArea @ 0x14036CC30 (MiDereferenceControlArea.c)
 *     MiPartitionIdToPointer @ 0x14036CC64 (MiPartitionIdToPointer.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeFlushRsb @ 0x140571404 (KeFlushRsb.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061B438 (MiLogPerfMemoryRangeEvent.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1406238BC (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapRetpolineStubs @ 0x14063EE24 (MiUnmapRetpolineStubs.c)
 *     MiInitPerfMemoryFlags @ 0x14063F1FC (MiInitPerfMemoryFlags.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MiVaToSoftwareWsle @ 0x14065F900 (MiVaToSoftwareWsle.c)
 *     MiDeleteSessionDriverProtos @ 0x14067F83C (MiDeleteSessionDriverProtos.c)
 *     MiReleaseSessionDriverCharges @ 0x14067FD74 (MiReleaseSessionDriverCharges.c)
 *     MiDereferencePerSessionProtos @ 0x14075B72C (MiDereferencePerSessionProtos.c)
 *     PerfLogImageUnload @ 0x1407EA8E0 (PerfLogImageUnload.c)
 *     MiBytesToMapSystemImage @ 0x1407F6A64 (MiBytesToMapSystemImage.c)
 *     MiFreeLoadedImportList @ 0x1407F6CA0 (MiFreeLoadedImportList.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407F6CC8 (ExCovReadjustUnloadedModuleEntry.c)
 *     MmHasImageBeenImportOptimized @ 0x1407F72B8 (MmHasImageBeenImportOptimized.c)
 *     MiMarkKernelImageCfgBits @ 0x1407F72E0 (MiMarkKernelImageCfgBits.c)
 *     KseDriverUnloadImage @ 0x1407F7364 (KseDriverUnloadImage.c)
 *     MiReleasePrivilegedPtes @ 0x1407F7400 (MiReleasePrivilegedPtes.c)
 *     MiReleaseDriverPtes @ 0x1407F74BC (MiReleaseDriverPtes.c)
 *     KeCleanupImageTracepoints @ 0x1407F7618 (KeCleanupImageTracepoints.c)
 *     MiReturnSystemImageAddress @ 0x1407F7768 (MiReturnSystemImageAddress.c)
 *     MiDereferenceSingleImport @ 0x1407F77B4 (MiDereferenceSingleImport.c)
 *     MiUnlockDriverCode @ 0x14084EDE0 (MiUnlockDriverCode.c)
 *     MiRememberUnloadedDriver @ 0x140854D38 (MiRememberUnloadedDriver.c)
 *     MiFreeRetpolineImportInfo @ 0x14085ACF4 (MiFreeRetpolineImportInfo.c)
 *     MiReturnSystemImageCommitment @ 0x14085DA60 (MiReturnSystemImageCommitment.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140861430 (MiFreeRetpolineRelocationInformation.c)
 *     MiIsImageFullyRetpolined @ 0x140A315C8 (MiIsImageFullyRetpolined.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A31774 (MiMarkKernelImageRetpolineBits.c)
 *     MiFreePatchTableProtos @ 0x140A3427C (MiFreePatchTableProtos.c)
 *     MiUnmapPatchTable @ 0x140A3953C (MiUnmapPatchTable.c)
 *     MiUnmapLargeDriver @ 0x140A472B8 (MiUnmapLargeDriver.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfDriverUnloadImage @ 0x140ABA284 (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(__int64 BugCheckParameter2, char a2)
{
  unsigned __int64 v4; // r12
  ULONG_PTR v5; // r15
  __int64 PteAddress; // rax
  __int64 v7; // rcx
  __int64 *v8; // r13
  unsigned __int64 v9; // rdi
  _QWORD *v11; // r14
  unsigned __int64 v12; // r13
  int v13; // esi
  unsigned __int64 SessionVm; // rax
  unsigned __int64 PdeAddress; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  void *v21; // rcx
  char v22; // si
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdi
  unsigned int v25; // esi
  __int64 v26; // rax
  ULONG_PTR v27; // rcx
  char v28; // r13
  char v29; // r14
  __int64 v30; // rdi
  ULONG_PTR v31; // rsi
  unsigned __int64 v32; // rax
  char *AnyMultiplexedVm; // r12
  int v34; // r15d
  int v35; // edi
  void *v36; // rcx
  void *v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  __int128 *v41; // rsi
  unsigned int v42; // r14d
  __int64 v43; // rax
  ULONG_PTR v44; // rcx
  __int128 *v45; // rsi
  unsigned int v46; // r14d
  __int64 v47; // rax
  ULONG_PTR v48; // rcx
  unsigned int SessionId; // eax
  unsigned int inited; // eax
  void *v51; // rax
  int v52; // edx
  PVOID Object; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v55; // [rsp+60h] [rbp-A0h]
  __int128 v56; // [rsp+68h] [rbp-98h] BYREF
  __int128 v57; // [rsp+78h] [rbp-88h] BYREF
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  __int128 v59; // [rsp+90h] [rbp-70h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-50h]
  _OWORD v62[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-28h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  __int64 v65[28]; // [rsp+F0h] [rbp-10h] BYREF
  int v66; // [rsp+1E0h] [rbp+E0h]
  unsigned __int64 v68; // [rsp+1F0h] [rbp+F0h]
  unsigned __int64 v69; // [rsp+1F8h] [rbp+F8h]

  v58 = 0LL;
  v61 = 0LL;
  v60 = 0LL;
  memset(v65, 0, 0x98uLL);
  memset(v62, 0, sizeof(v62));
  v64 = 0LL;
  v63 = 0LL;
  if ( *(_QWORD *)(BugCheckParameter2 + 136) == 1LL )
    return;
  v4 = *(_QWORD *)(BugCheckParameter2 + 48);
  BugCheckParameter2a = v4;
  v5 = (BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0);
  *(_QWORD *)&v57 = v5;
  PteAddress = MiGetPteAddress(v4);
  v7 = *(unsigned int *)(BugCheckParameter2 + 64);
  v8 = 0LL;
  v69 = PteAddress;
  Object = *(PVOID *)(BugCheckParameter2 + 112);
  v68 = (unsigned __int64)(unsigned int)v7 >> 12;
  v55 = (unsigned __int64)MiBytesToMapSystemImage(v7) >> 12;
  v9 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
  {
    v66 = 0;
    v11 = (_QWORD *)MiSessionRemoveImage(BugCheckParameter2, (__int64)&v60);
    if ( !v11 )
      return;
    *(_QWORD *)&v56 = MiSectionControlArea((__int64)Object);
    if ( *(_QWORD *)BugCheckParameter2 )
      ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
    v12 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    v13 = a2 & 1;
    if ( v13 )
    {
      if ( MiIsRetpolineEnabled() )
      {
        MiUnmapRetpolineStubs(BugCheckParameter2, 0);
        if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
          KeFlushRsb();
        _mm_lfence();
      }
      SessionVm = MiGetSessionVm();
      MiDeleteSystemPagableVm(SessionVm, v56, v69, v68, 3, v62);
    }
    MiReleaseSessionDriverCharges((__int64)v11);
    if ( v13 )
    {
      if ( ((unsigned int)dword_140C694FC >> 12) + ((dword_140C694FC & 0xFFF) != 0) )
        MiUnmapPatchTable(v69 + 8 * v68);
      if ( (*(_DWORD *)(v56 + 56) & 0x8000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        MiDereferencePerSessionProtos((__int64 *)v56, SessionId);
      }
      MiGetPdeAddress(v4);
      if ( (_QWORD)v60 && (_QWORD)v60 != -1LL )
        MiGetPdeAddress(v60 + 1);
      PdeAddress = MiGetPdeAddress(v4 + (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 64) - 1));
      if ( *((_QWORD *)&v60 + 1) )
      {
        v17 = MiGetPdeAddress(*((unsigned __int64 *)&v60 + 1));
        if ( v17 == PdeAddress )
          PdeAddress -= 8LL;
      }
      if ( PdeAddress >= v16 )
        MiDeleteSessionPdes();
    }
    v18 = v61;
    if ( v61 )
    {
      v19 = MiPartitionIdToPointer(*(_WORD *)(v12 + 366));
      MiReturnCommit(v19, v18 - *((_QWORD *)&v62[0] + 1), v20);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 40), -v18);
    }
    if ( (a2 & 0x10) != 0 )
      v9 = v11[11];
    ExFreePoolWithTag(v11, 0);
    v8 = (__int64 *)v56;
  }
  else
  {
    v66 = 1;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 108))-- != 1 )
  {
    if ( v9 )
    {
      v41 = (__int128 *)v9;
      v57 = 0LL;
      if ( v9 != -2LL && v9 != 1 )
      {
        if ( (v9 & 1) != 0 )
        {
          *(_QWORD *)&v57 = 1LL;
          v41 = &v57;
          *((_QWORD *)&v57 + 1) = v9 & 0xFFFFFFFFFFFFFFFEuLL;
        }
        v42 = 0;
        if ( *(_QWORD *)v41 )
        {
          v43 = 0LL;
          do
          {
            v44 = *((_QWORD *)v41 + v43 + 1);
            if ( !v44 )
              break;
            if ( !(unsigned int)MiDereferenceSingleImport(v44) )
              break;
            v43 = ++v42;
          }
          while ( (unsigned __int64)v42 < *(_QWORD *)v41 );
        }
      }
      MiFreeLoadedImportList(v9);
    }
    if ( !v66 && (a2 & 2) != 0 )
      VfDriverUnloadImage(BugCheckParameter2);
    return;
  }
  KeCleanupImageTracepoints(BugCheckParameter2);
  if ( (int)MiMarkKernelImageCfgBits(BugCheckParameter2, 0LL) < 0 )
    KeBugCheckEx(0x1Au, 0x1015uLL, v4, BugCheckParameter2, 0LL);
  if ( v9 )
  {
    v45 = (__int128 *)v9;
    v56 = 0LL;
    if ( v9 != -2LL && v9 != 1 )
    {
      if ( (v9 & 1) != 0 )
      {
        *(_QWORD *)&v56 = 1LL;
        v45 = &v56;
        *((_QWORD *)&v56 + 1) = v9 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v46 = 0;
      if ( *(_QWORD *)v45 )
      {
        v47 = 0LL;
        do
        {
          v48 = *((_QWORD *)v45 + v47 + 1);
          if ( !v48 )
            break;
          if ( !(unsigned int)MiDereferenceSingleImport(v48) )
            break;
          v47 = ++v46;
        }
        while ( (unsigned __int64)v46 < *(_QWORD *)v45 );
      }
    }
    MiFreeLoadedImportList(v9);
  }
  if ( !v66 )
    MiDeleteSessionDriverProtos(v8);
  if ( dword_140C694FC )
    MiClearDriverHotPatchPtes(BugCheckParameter2);
  if ( (unsigned int)MmHasImageBeenImportOptimized(BugCheckParameter2) )
    MiFreeRetpolineImportInfo();
  if ( MiIsRetpolineEnabled() )
  {
    if ( v66 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(BugCheckParameter2 + 48)) )
      MiUnmapRetpolineStubs(BugCheckParameter2, v66);
    MiMarkKernelImageRetpolineBits(BugCheckParameter2, 0LL);
    if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
      KeFlushRsb();
    _mm_lfence();
  }
  if ( v5 )
  {
    v21 = *(void **)(v5 + 160);
    if ( v21 )
    {
      MiFreeRetpolineRelocationInformation(v21);
      *(_QWORD *)(v5 + 160) = 0LL;
    }
  }
  v22 = a2;
  if ( (a2 & 2) != 0 )
  {
    VfDriverUnloadImage(BugCheckParameter2);
    KseDriverUnloadImage(BugCheckParameter2);
  }
  if ( (a2 & 0x40) != 0 )
    KasanDriverUnloadImage(BugCheckParameter2);
  if ( v66 )
  {
    v23 = v68;
  }
  else
  {
    MiReleasePrivilegedPtes(v69, (unsigned int)v55);
    v23 = 0LL;
    v68 = 0LL;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v24 = *(_QWORD *)(BugCheckParameter2 + 136);
    v59 = 0LL;
    if ( v24 != -2LL && v24 != 1 )
    {
      if ( (v24 & 1) != 0 )
      {
        *(_QWORD *)&v59 = 1LL;
        *((_QWORD *)&v59 + 1) = v24 & 0xFFFFFFFFFFFFFFFEuLL;
        v24 = (unsigned __int64)&v59;
      }
      v25 = 0;
      if ( *(_QWORD *)v24 )
      {
        v26 = 0LL;
        do
        {
          v27 = *(_QWORD *)(v24 + 8 * v26 + 8);
          if ( !v27 )
            break;
          if ( !(unsigned int)MiDereferenceSingleImport(v27) )
            break;
          v26 = ++v25;
        }
        while ( (unsigned __int64)v25 < *(_QWORD *)v24 );
      }
      v22 = a2;
    }
  }
  MiFreeLoadedImportList(*(_QWORD *)(BugCheckParameter2 + 136));
  *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
  LdrUnloadAlternateResourceModule(v4);
  if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
    DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), v4, 0xFFFFFFFFLL);
  if ( *(_QWORD *)BugCheckParameter2 && v23 )
  {
    ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
    v28 = 0;
    v29 = 0;
  }
  else
  {
    v28 = 0;
    v29 = 0;
    if ( !v68 )
      goto LABEL_120;
  }
  if ( (v22 & 1) != 0 )
  {
    MiRememberUnloadedDriver(BugCheckParameter2 + 88, v4, v55 << 12);
    v30 = (__int64)Object;
    v31 = 0LL;
    if ( Object )
    {
      v32 = MiSectionControlArea((__int64)Object);
      v31 = v32;
      if ( *(_QWORD *)BugCheckParameter2 )
      {
        v65[0] = v32;
        MiManageSubsectionView(v65, (_QWORD *)v5, 4);
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2a) )
    {
      if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
      {
        inited = MiInitPerfMemoryFlags(0, 6);
        v4 = BugCheckParameter2a;
        MiLogPerfMemoryRangeEvent(BugCheckParameter2a, 0LL, inited, (v68 + 511) & 0xFFFFFFFFFFFFFE00uLL);
      }
      else
      {
        v4 = BugCheckParameter2a;
      }
      MiUnmapLargeDriver(v4, v68);
      v28 = 1;
    }
    else
    {
      if ( v5 )
        MiUnlockDriverCode(BugCheckParameter2);
      qword_140C655B0 = BugCheckParameter2;
      MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v31, v69, v68, 5, v62);
      v34 = v63;
      v35 = v62[0];
      if ( v31 )
        MiWalkEntireImage(v31, (ULONG_PTR)&v58, 4u, 0xFFFFFFFF);
      qword_140C655B0 = 0LL;
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C655D0 + 3, v35 - v34);
      v30 = (__int64)Object;
      if ( !Object )
      {
        MiReleasePrivilegedPtes(v69, (unsigned int)v55);
        if ( !(unsigned int)MmGetMinWsPagePriority() )
        {
          v51 = (void *)MiVaToSoftwareWsle((__int64)AnyMultiplexedVm, (__int64)((v68 << 28) + (v69 << 25)) >> 16);
          if ( v55 != v68 )
          {
            LOBYTE(v52) = 10;
            memset(v51, v52, v55 - v68);
          }
        }
        v29 = 1;
      }
      v5 = v57;
      v4 = BugCheckParameter2a;
    }
    goto LABEL_77;
  }
LABEL_120:
  v30 = (__int64)Object;
LABEL_77:
  if ( v66 == 1 )
  {
    if ( v30 )
      MiReleasePrivilegedPtes(v69, (unsigned int)v55);
    if ( (a2 & 1) != 0 )
      MiReturnSystemImageCommitment(BugCheckParameter2, v62);
  }
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    MiProcessLoaderEntry((int *)BugCheckParameter2, 0);
    if ( (PerfGlobalGroupMask[0] & 4) != 0 )
      PerfLogImageUnload(
        (unsigned __int16 *)(BugCheckParameter2 + 72),
        0LL,
        0LL,
        v4,
        *(unsigned int *)(BugCheckParameter2 + 64),
        *(_DWORD *)(BugCheckParameter2 + 120),
        *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
        (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
        0);
  }
  if ( v29 )
    MiReleaseDriverPtes(0LL, v69, (unsigned int)v55);
  v36 = *(void **)(BugCheckParameter2 + 80);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  if ( v5 )
  {
    v37 = *(void **)(v5 + 128);
    if ( v37 )
      MiFreePatchTableProtos(v37);
  }
  if ( v30 )
  {
    if ( v5 )
    {
      v38 = *(_QWORD *)(v5 + 56);
      if ( v38 )
        MiReturnResident((__int64)MiSystemPartition, v38);
    }
    v39 = MiSectionControlArea(v30);
    v40 = v39;
    if ( !v28 && v4 != *(_QWORD *)(*(_QWORD *)v39 + 32LL) )
    {
      MiFreePrivateFixupEntryForSystemImage(v4, 1);
      MiReturnSystemImageAddress(v4, *(unsigned int *)(BugCheckParameter2 + 64));
    }
    if ( v5 && v66 && (*(_DWORD *)(v5 + 36) & 0x80u) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v40);
    MiDereferenceControlArea(v40);
    ObDereferenceObjectDeferDelete(Object);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
