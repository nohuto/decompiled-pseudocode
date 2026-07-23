/*
 * XREFs of MiInitNucleus @ 0x140A42364
 * Callers:
 *     MmInitSystem @ 0x140A53D6C (MmInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A170 (ExInitializeNPagedLookasideListInternal.c)
 *     MiInitializeCommitment @ 0x1403BF284 (MiInitializeCommitment.c)
 *     ExInitializePoolHeapManagement @ 0x1403C3584 (ExInitializePoolHeapManagement.c)
 *     MiInitializePageFaultResources @ 0x1403CA0A8 (MiInitializePageFaultResources.c)
 *     MiFreeUnusedPfnPages @ 0x1403CD9E0 (MiFreeUnusedPfnPages.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     __report_rangecheckfailure @ 0x1404B63BC (__report_rangecheckfailure.c)
 *     MiInitializeSections @ 0x140797A24 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x140797B5C (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x140797CBC (MiCreateNodeLists.c)
 *     MiCreatePfnBitMaps @ 0x1407B9CA4 (MiCreatePfnBitMaps.c)
 *     MiConvertInitialMemoryBlock @ 0x1407CB6A4 (MiConvertInitialMemoryBlock.c)
 *     MiComputeNodeMemory @ 0x1407CCFC0 (MiComputeNodeMemory.c)
 *     MmInitializeProcessor @ 0x14099F378 (MmInitializeProcessor.c)
 *     MiCreateResidentBasePfnTemplate @ 0x140A38CA0 (MiCreateResidentBasePfnTemplate.c)
 *     MiCreateResidentPfnTemplate @ 0x140A38CD4 (MiCreateResidentPfnTemplate.c)
 *     MmInitializeMemoryLimits @ 0x140A39AE0 (MmInitializeMemoryLimits.c)
 *     MiMarkLargePageRanges @ 0x140A421B8 (MiMarkLargePageRanges.c)
 *     MiCreatePfnDatabase @ 0x140A42AEC (MiCreatePfnDatabase.c)
 *     MiSwitchToPfns @ 0x140A42F08 (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x140A43850 (MiFindLargestLoaderDescriptor.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A43A34 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiInitializeKernelStacks @ 0x140A4D410 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4E39C (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4E614 (MiBuildPagedPool.c)
 *     MiInitializeDummyPages @ 0x140A55944 (MiInitializeDummyPages.c)
 *     MiZeroBootMappings @ 0x140A5661C (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140A5668C (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x140A56734 (MxRelocatePageTables.c)
 *     MiFillPfnGaps @ 0x140A66AC0 (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x140A66B10 (MiInitializeGapFrames.c)
 *     MiMemoryLicense @ 0x140A6778C (MiMemoryLicense.c)
 *     MiCheckLargePageOk @ 0x140A67C78 (MiCheckLargePageOk.c)
 *     MiInitializeDecayPfns @ 0x140A68188 (MiInitializeDecayPfns.c)
 *     MiInitializeDynamicVa @ 0x140A6836C (MiInitializeDynamicVa.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6E944 (MiCreateTopLevelUltraMappings.c)
 *     MiMapDummyPages @ 0x140A70FCC (MiMapDummyPages.c)
 *     MiExamineHalVa @ 0x140A71544 (MiExamineHalVa.c)
 *     MiInitializeBootDefaults @ 0x140A7160C (MiInitializeBootDefaults.c)
 *     MiInitializeSystemDefaults @ 0x140A71EC8 (MiInitializeSystemDefaults.c)
 *     MiProtectSharedUserPage @ 0x140A73CE0 (MiProtectSharedUserPage.c)
 *     MiInitializeChannelRangesTemporary @ 0x140A74154 (MiInitializeChannelRangesTemporary.c)
 */

char __fastcall MiInitNucleus(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v5; // rdx
  _KPROCESS *Process; // rcx
  __int16 v7; // ax
  int *v8; // rcx
  unsigned int i; // eax
  unsigned int v10; // eax
  _DWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rax
  unsigned int v18; // r8d
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  ULONG_PTR v26; // rax
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rbx
  int v29; // esi
  __int64 v30; // r8
  unsigned __int64 j; // rax
  __int64 v32; // rcx
  char v33; // cl
  _QWORD *v34; // rax
  char *v35; // rax
  char *v36; // rbx
  __int64 v37; // r8
  _DWORD *v38; // r9
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  unsigned int v41; // edi
  PVOID Pool; // rax
  void *v43; // rbx
  unsigned int v44; // edi
  PVOID v45; // rax
  void *v46; // rbx
  _QWORD v47[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v48[48]; // [rsp+50h] [rbp-68h] BYREF

  v47[1] = &MiVisiblePartition;
  MiInitializeSystemDefaults();
  v2 = MEMORY[0xFFFFF6FB7DBEDF68];
  if ( MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL)
    && (unsigned int)MiPteHasShadow()
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      Blink = Flink[246].Blink;
      v5 = v2 | 0x20;
      if ( ((unsigned __int8)Blink & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( ((unsigned __int8)Blink & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = __readcr3();
  Process->DirectoryTableBase = v2 & 0xFFFFFFFFF000LL | v7 & 0xFFF;
  MiLowHalVa = MiExamineHalVa();
  v8 = dword_140C4DF98;
  for ( i = 0; i < 3; ++i )
  {
    *v8 = i;
    v8[1] = i;
    v8[2] = i;
    v8[3] = i;
    v8 += 4;
  }
  v10 = 0;
  v11 = &unk_140C4DFC8;
  do
    *v11++ = v10++;
  while ( v10 <= 3 );
  dword_140C4DFD4 = 1;
  MiInitializeBootDefaults(BugCheckParameter2);
  if ( ((unsigned __int8)&stru_140C4EAC0 & 0xF) != 0 )
    goto LABEL_86;
  qword_140C4EAD0 = 0LL;
  stru_140C4EAC0 = 0LL;
  v12 = &unk_140C4F830;
  v13 = 16LL;
  do
  {
    v12[1] = v12;
    *v12 = v12;
    v12 += 2;
    --v13;
  }
  while ( v13 );
  qword_140C4ECA0 = 0LL;
  qword_140C4EC58 = 0LL;
  qword_140C4EC68 = (__int64)&qword_140C4EC60;
  qword_140C4EC60 = (__int64)&qword_140C4EC60;
  xmmword_140C4EC48 = 0LL;
  MiInitializeDynamicVa();
  if ( dword_140CFB19C == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_140CFB19C = 0;
  }
  else
  {
    MEMORY[0xFFFFF78000000264] = (dword_140CFB19C != 6357068) + 2;
    dword_140CFB19C = 1;
  }
  v47[0] = 0LL;
  qword_140C4DEB8 = -1LL;
  v14 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))off_140C00A68[0])(30LL, 16LL, v47, 0LL);
  v16 = (__int64)&unk_140C4DEA8;
  if ( v14 >= 0 && (v17 = (char *)v47[0]) != 0LL )
  {
    v15 = 0LL;
    if ( *(_QWORD *)v47[0] != -1LL )
    {
      v18 = (unsigned __int16)KeNumberNodes;
      v16 = 0LL;
      do
      {
        if ( *(_DWORD *)&v17[v16 + 8] >= v18 )
        {
          *(_DWORD *)&v17[v16 + 8] = 0;
          v17 = (char *)v47[0];
        }
        dword_140C4DE88 = v15;
        v15 = (unsigned int)(v15 + 1);
        v16 = 16LL * (unsigned int)v15;
      }
      while ( *(_QWORD *)&v17[v16] != -1LL );
    }
  }
  else
  {
    v17 = (char *)&unk_140C4DEA8;
    v47[0] = &unk_140C4DEA8;
  }
  qword_140C4DEC8 = v17;
  MiInitializeChannelRangesTemporary(v16, v15);
  MiMemoryLicense(BugCheckParameter2);
  qword_140D587F8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiRemoveLargeFreeLoaderDescriptors(BugCheckParameter2);
  qword_140D58800 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_140C4E7FA = 3;
    return 0;
  }
  MiCheckLargePageOk(BugCheckParameter2);
  qword_140C4DF90 = -1LL;
  MiProtectSharedUserPage();
  MiCreateResidentPfnTemplate((__int64)&xmmword_140C4E580);
  MiCreateResidentBasePfnTemplate((__int64)&xmmword_140C4E5B0);
  qword_140D58808 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_140C4E7FA = 6;
    return 0;
  }
  qword_140D58810 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  qword_140D58818 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiSwitchToPfns(BugCheckParameter2);
  qword_140D58820 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxRelocatePageTables(BugCheckParameter2);
  qword_140D58828 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiZeroBootMappings();
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_140C4EA10 & 0xF) != 0 )
LABEL_86:
    RtlRaiseStatus(-2147483646);
  stru_140C4EA10 = 0LL;
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((__int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_140C4E7FA = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_140C4E7FA = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_140C4E7FA = 5;
    return 0;
  }
  v20 = BYTE2(MiFlags);
  qword_140D58830 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)ExInitializePoolHeapManagement((unsigned __int8)(v20 & 1) << 10) < 0 )
  {
    byte_140C4E7FA = 2;
    return 0;
  }
  if ( !(unsigned int)MiInitializeKernelStacks() )
  {
    byte_140C4E7FA = 20;
    return 0;
  }
  if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
  {
LABEL_85:
    byte_140C4E7FA = 19;
    return 0;
  }
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb(), v21, v22, v23) )
  {
    byte_140C4E7FA = 10;
    return 0;
  }
  v26 = MiReservePtes((__int64)&qword_140C4EF40, 1u, v24, v25);
  qword_140C4E888 = v26;
  v27 = (_QWORD *)v26;
  if ( !v26 )
  {
    byte_140C4E7FA = 11;
    return 0;
  }
  v28 = ZeroPte;
  v29 = 0;
  if ( MiPteInShadowRange(v26) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v29 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_58;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_58;
    }
    if ( (ZeroPte & 1) != 0 )
      v28 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_58:
  *v27 = v28;
  if ( v29 )
    MiWritePteShadow((__int64)v27, v28, v30);
  MiFreeUnusedPfnPages(0LL);
  for ( j = 0LL; j < 0x29; ++j )
  {
    v32 = 0x1C5C0C00048LL;
    if ( _bittest64(&v32, j) )
      v33 = 0;
    else
      v33 = 1;
    v48[j] = v33;
  }
  qword_140D58838 = KeQueryPerformanceCounter(0LL).QuadPart;
  v34 = MmInitializeMemoryLimits(BugCheckParameter2, (__int64)v48);
  if ( !v34 || (v35 = MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, (__int64)v34), (v36 = v35) == 0LL) )
  {
    byte_140C4E7FA = 12;
    return 0;
  }
  qword_140C50DA0 = (__int64)MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v35);
  if ( !qword_140C50DA0 )
  {
    byte_140C4E7FA = 13;
    return 0;
  }
  MiComputeNodeMemory(&MiSystemPartition, 1, v37, v38);
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_140C4E7FA = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &unk_140C4EDA8) )
    goto LABEL_85;
  qword_140D58840 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiInitializePageFaultResources() )
  {
    byte_140C4E7FA = 21;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() )
    return 0;
  MmPhysicalMemoryBlock = v36;
  if ( !(unsigned int)MiCreatePfnBitMaps((__int64)&MiSystemPartition, v36, v39, v40) )
  {
    byte_140C4E7FA = 15;
    return 0;
  }
  qword_140D58848 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiMarkLargePageRanges();
  qword_140D58850 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializeWsSwapping(&MiSystemPartition);
  if ( qword_140C4DEC8 != &unk_140C4DEA8 )
  {
    v41 = 16 * (dword_140C4DE88 + 2);
    Pool = MiAllocatePool(64, v41, 0x20206D4Du);
    v43 = Pool;
    if ( Pool )
    {
      memmove(Pool, qword_140C4DEC8, v41);
      qword_140C4DEC8 = v43;
    }
  }
  if ( qword_140C4DED0 )
  {
    v44 = 16 * (dword_140C4DE94 + 2);
    v45 = MiAllocatePool(64, v44, 0x20206D4Du);
    v46 = v45;
    if ( v45 )
    {
      memmove(v45, qword_140C4DED0, v44);
      qword_140C4DED0 = v46;
    }
  }
  ExInitializeNPagedLookasideListInternal((__int64)&stru_140C4EA40, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
  return 1;
}
