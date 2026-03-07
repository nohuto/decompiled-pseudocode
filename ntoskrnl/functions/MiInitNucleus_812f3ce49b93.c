char __fastcall MiInitNucleus(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rax
  _KPROCESS *Process; // rdx
  __int16 v4; // cx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v6; // edi
  unsigned int v7; // ebx
  ULONG_PTR v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rbx
  int v11; // r14d
  __int64 v12; // r8
  unsigned int v13; // ebx
  _QWORD *PoolMm; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 i; // rax
  __int64 v21; // rcx
  unsigned __int8 v22; // cf
  char v23; // cl
  _QWORD *v24; // rax
  char *v25; // rax
  char *v26; // rbx
  bool v28; // zf
  __int64 v29; // rdi
  void *DpcStack; // rax
  int inited; // eax
  unsigned int v32; // edi
  PVOID Pool; // rax
  void *v34; // rbx
  unsigned int v35; // edi
  PVOID v36; // rax
  void *v37; // rbx
  __m128i v38[11]; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v39[48]; // [rsp+100h] [rbp-58h] BYREF

  if ( (_DWORD)dword_140C67BB8 )
    KeBugCheckEx(0x1Au, 0x600uLL, (unsigned int)dword_140C67BB8, 0LL, 0LL);
  MiConstructLoaderMemoryTree();
  qword_140D817B8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializeSystemDefaults(BugCheckParameter2);
  v2 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = __readcr3();
  Process->DirectoryTableBase = (((v2 >> 12) & 0xFFFFFFFFFFLL) << 12) | v4 & 0xFFF;
  MiLowHalVa = MiExamineHalVa();
  MiInitializeBootDefaults(BugCheckParameter2);
  MiInitializeSystemPteTracker();
  qword_140C69258 = 0LL;
  xmmword_140C69200 = 0LL;
  qword_140C69240 = 1024LL;
  MiInitializeDynamicVa();
  if ( dword_140D1D1EC == 6881367 )
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = 1;
    dword_140D1D1EC = 0;
  }
  else
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = (dword_140D1D1EC != 6357068) + 2;
    dword_140D1D1EC = 1;
  }
  MiInitializeNumaRangesTemporary();
  MiInitializeChannelRangesTemporary();
  MiSplitMultiNodeFreeDescriptors(BugCheckParameter2);
  MiMemoryLicense(BugCheckParameter2);
  qword_140D817C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiRemoveLargeFreeLoaderDescriptors(BugCheckParameter2);
  qword_140D817C8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_140C67BC2 = 3;
    return 0;
  }
  MiCheckLargePageOk(BugCheckParameter2);
  qword_140C65810 = -1LL;
  MiCreateResidentPfnTemplate(&xmmword_140C66F00);
  xmmword_140C66F50 = xmmword_140C66F20;
  xmmword_140C66F30 = xmmword_140C66F00;
  xmmword_140C66F40 = xmmword_140C66F10;
  BYTE2(xmmword_140C66F50) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140C66F20, 2)) & 0xF8 | 5;
  MxMarkValidMappings(0xFFFFF6FB7DBED800uLL, 0xFFFFF6FB7DBEDFF8uLL, 3LL, BugCheckParameter2);
  qword_140D817D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_140C67BC2 = 6;
    return 0;
  }
  qword_140D817D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxZeroPageTablePfns();
  MxCreatePfns(BugCheckParameter2);
  KeFlushCurrentTbOnly(0);
  qword_140D817E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiSwitchToPfns(BugCheckParameter2);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = (unsigned __int16)KeNumberNodes;
  v7 = 0;
  qword_140D817E8 = PerformanceCounter.QuadPart;
  while ( v7 < v6 )
    MiInitializeZeroingAttributes(v7++);
  MxRelocatePageTables(BugCheckParameter2);
  qword_140D817F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiZeroBootMappings();
  MiInitializeSections((__int64)MiSystemPartition);
  MiInitializeCommitment((unsigned __int64)MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_140C67BC2 = 9;
    return 0;
  }
  v8 = MiReservePtes((__int64)&qword_140C695C0, 1u);
  qword_140C67CC8 = v8;
  v9 = (_QWORD *)v8;
  if ( !v8 )
  {
    byte_140C67BC2 = 11;
    return 0;
  }
  v10 = ZeroPte;
  v11 = 0;
  if ( MiPteInShadowRange(v8) )
  {
    if ( MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_11;
      v28 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_11;
      v28 = (ZeroPte & 1) == 0;
    }
    if ( !v28 )
      v10 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_11:
  *v9 = v10;
  if ( v11 )
    MiWritePteShadow((__int64)v9, v10, v12);
  if ( !(unsigned int)MiProtectSharedUserPage() )
  {
    byte_140C67BC2 = 8;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_140C67BC2 = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_140C67BC2 = 5;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_140C693D8) )
  {
    byte_140C67BC2 = 22;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &qword_140C693B8) )
  {
    byte_140C67BC2 = 23;
    return 0;
  }
  if ( (MiFlags & 0x800000000LL) != 0 )
  {
    v29 = qword_140C6A1A8;
    memset(v38, 0, sizeof(v38));
    v38[10].m128i_i64[1] = (__int64)&qword_140C693D8;
    v38[9].m128i_i64[1] = (__int64)MiFillGapPtes;
    v38[0].m128i_i32[0] = 67584;
    v38[2].m128i_i64[0] = qword_140C6A1A8;
    v38[2].m128i_i64[1] = qword_140C6A1A8 + 0xFFFFFFFFFFFLL;
    MiWalkPageTables(v38);
    DpcStack = KeGetPcr()->Prcb.DpcStack;
    KasaniShadow = v29;
    if ( (int)KasanTrackAddress(
                (unsigned __int64)DpcStack + 80 - (unsigned int)KeKernelStackSize,
                (unsigned int)KeKernelStackSize,
                0) < 0 )
    {
      byte_140C67BC2 = 80;
      return 0;
    }
    if ( (int)KasanTrackAddress((unsigned __int64)KeGetPcr()->Prcb.IsrStack - 24576, 24576LL, 0) < 0 )
    {
      byte_140C67BC2 = 81;
      return 0;
    }
    if ( (int)KasanTrackAddress((unsigned __int64)KeGetPcr()->Prcb.ExceptionStack - 24496, 24576LL, 0) < 0 )
    {
      byte_140C67BC2 = 82;
      return 0;
    }
    if ( (int)KasanTrackAddress((unsigned __int64)KeGetCurrentThread()->StackLimit, (unsigned int)KeKernelStackSize, 0) < 0 )
    {
      byte_140C67BC2 = 83;
      return 0;
    }
  }
  qword_140D817F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)ExInitializePoolHeapManagement((((unsigned int)MiFlags >> 15) & 1) << 10) < 0 )
  {
    byte_140C67BC2 = 2;
    return 0;
  }
  if ( (MiFlags & 0x4000) != 0 )
  {
    inited = VslInitFunctionOverrideCapabilities(&stru_140C65600);
    if ( inited < 0 )
      KeBugCheckEx(0x1Au, 0x1085uLL, inited, 0LL, 0LL);
  }
  else
  {
    RtlInitFunctionOverrideCapabilities((signed __int64 *)&stru_140C65600);
  }
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_140C67F60 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140C67F60 = 0LL;
  v13 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      PoolMm = ExAllocatePoolMm(64, 0x240uLL, 0x6F49694Du, v13 | 0x80000000);
      v15 = PoolMm;
      if ( !PoolMm )
        break;
      v16 = PoolMm + 49;
      v17 = 4LL;
      do
      {
        v16[2] = 0LL;
        v16[1] = v16;
        *v16 = v16;
        v16 += 4;
        --v17;
      }
      while ( v17 );
      v15[67] = 0LL;
      v15[66] = v15 + 65;
      v15[65] = v15 + 65;
      v18 = v13++;
      v19 = 376 * v18;
      LODWORD(v18) = (unsigned __int16)KeNumberNodes;
      *(_QWORD *)(qword_140C65720 + v19 + 368) = v15;
      if ( v13 >= (unsigned int)v18 )
        goto LABEL_28;
    }
    byte_140C67BC2 = 4;
    return 0;
  }
LABEL_28:
  if ( !(unsigned int)MiInitializeKernelStacks() )
  {
    byte_140C67BC2 = 20;
    return 0;
  }
  if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
  {
    byte_140C67BC2 = 19;
    return 0;
  }
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb()) )
  {
    byte_140C67BC2 = 10;
    return 0;
  }
  MiFillPfnGaps();
  qword_140D817F8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiFreeUnusedPfnPages(0LL);
  for ( i = 0LL; i < 0x2C; ++i )
  {
    if ( i > 0x2A || (v21 = 0x5C5C0C00048LL, v22 = _bittest64(&v21, i), v23 = 0, !v22) )
      v23 = 1;
    v39[i] = v23;
  }
  qword_140D81800 = KeQueryPerformanceCounter(0LL).QuadPart;
  v24 = MmInitializeMemoryLimits(BugCheckParameter2, (__int64)v39);
  if ( !v24 || (v25 = MiConvertInitialMemoryBlock((__int64)MiSystemPartition, (__int64)v24), (v26 = v25) == 0LL) )
  {
    byte_140C67BC2 = 12;
    return 0;
  }
  qword_140C6B0E0 = (__int64)MiCreateNodeLists((__int64)MiSystemPartition, (__int64)v25);
  if ( !qword_140C6B0E0 )
  {
    byte_140C67BC2 = 13;
    return 0;
  }
  MiComputeNodeMemory((__int16 *)MiSystemPartition, 1);
  qword_140D81808 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiInitializePageFaultResources() )
  {
    byte_140C67BC2 = 21;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() )
    return 0;
  MmPhysicalMemoryBlock = v26;
  if ( !(unsigned int)MiCreatePfnBitMaps((__int64)MiSystemPartition, v26) )
  {
    byte_140C67BC2 = 15;
    return 0;
  }
  qword_140D81810 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiMarkLargePageRanges(BugCheckParameter2);
  qword_140D81818 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiClearLoaderDescriptorFlags(BugCheckParameter2);
  MiCreateHugeIoRanges(BugCheckParameter2);
  MiInitializeWsSwapping(MiSystemPartition);
  if ( qword_140C65748 != &unk_140C65728 )
  {
    v32 = 16 * (dword_140C65708 + 2);
    Pool = MiAllocatePool(64, v32, 0x20206D4Du);
    v34 = Pool;
    if ( Pool )
    {
      memmove(Pool, qword_140C65748, v32);
      qword_140C65748 = v34;
    }
  }
  if ( qword_140C65750 )
  {
    v35 = 16 * (dword_140C65714 + 2);
    v36 = MiAllocatePool(64, v35, 0x20206D4Du);
    v37 = v36;
    if ( v36 )
    {
      memmove(v36, qword_140C65750, v35);
      qword_140C65750 = v37;
    }
  }
  ExInitializeNPagedLookasideListInternal((__int64)&stru_140C67F80, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
  HIDWORD(MiFlags) |= 4u;
  MiEnumerateSlabAllocators(
    (__int64)MiSystemPartition,
    (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiInitialSlabPopulate,
    0LL,
    0xFFFFFFFF);
  return 1;
}
