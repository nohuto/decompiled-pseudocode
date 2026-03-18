/*
 * XREFs of MiMapSystemImageWithLargePage @ 0x140A49BD4
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140B4A1A8 (MiHandleBootImage.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14020EBC0 (MiIsRetpolineEnabled.c)
 *     MiIsImportOptimizationEnabled @ 0x14020EBD8 (MiIsImportOptimizationEnabled.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x14029F760 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x1403765A4 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiGetPageTablesForLargeMap @ 0x14038CA78 (MiGetPageTablesForLargeMap.c)
 *     MiMapWithLargePages @ 0x14038CB94 (MiMapWithLargePages.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     MiFreeContiguousPages @ 0x1403C337C (MiFreeContiguousPages.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiPageToNode @ 0x140617860 (MiPageToNode.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061D8E8 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x14064165C (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x140669728 (MiRoundUpToPowerOf2SizeT.c)
 *     RtlPerformRetpolineRelocationsOnImage @ 0x14067A65C (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiChargeSystemImageCommitment @ 0x140695FD0 (MiChargeSystemImageCommitment.c)
 *     MiReservePrivilegedPtes @ 0x140696B28 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x1406971C4 (MiReleasePrivilegedPtes.c)
 *     LdrRelocateImageWithBias @ 0x1409C2054 (LdrRelocateImageWithBias.c)
 *     MiUnmapLargeDriver @ 0x140A49F88 (MiUnmapLargeDriver.c)
 */

char *__fastcall MiMapSystemImageWithLargePage(__int64 a1, unsigned int a2, const void *a3)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 i; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  int v12; // eax
  unsigned __int64 PageTablesForLargeMap; // rax
  char *v14; // rbx
  int v15; // edx
  __int64 v16; // rsi
  unsigned int v17; // r12d
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // eax
  bool IsRetpolineEnabled; // al
  int v23; // eax
  int v24; // eax
  unsigned __int64 PteAddress; // rax
  unsigned int inited; // eax
  char *AnyMultiplexedVm; // [rsp+78h] [rbp-90h]
  _BYTE v28[48]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+110h] [rbp+8h]
  ULONG_PTR v32; // [rsp+128h] [rbp+20h] BYREF

  v4 = a2;
  v32 = 0LL;
  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  if ( a1 )
  {
    v6 = MiSectionControlArea(a1);
    for ( i = v6 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)(i + 32) & 0x3E) == 0 )
        return 0LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v30 = v4;
  v8 = (v4 + (unsigned int)dword_140C65944 + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  v9 = MiRoundUpToPowerOf2SizeT(v8);
  if ( (int)MiFindContiguousPagesEx(
              (__int64)MiSystemPartition,
              512LL,
              qword_140C65CA0,
              v9,
              v10,
              v9,
              1u,
              0x80000000,
              0x80000000,
              0x100000,
              v10,
              v10,
              &v32) < 0 )
    return 0LL;
  if ( v9 > v8 )
    MiFreeContiguousPages(v8 + v32, v9 - v8);
  v12 = MiPageToNode(v32);
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v8, 12, 1LL, v12 + 1);
  v14 = (char *)PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
    goto LABEL_13;
  MiGetPteAddress(PageTablesForLargeMap);
  if ( (int)MiReservePrivilegedPtes() < 0 )
  {
    MiUnmapLargeDriver(v14, v4);
LABEL_13:
    MiFreeContiguousPages(v32, v8);
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiMapWithLargePages((__int64)AnyMultiplexedVm, (unsigned __int64)v14, v32, v8, v15, 6, v15);
  v16 = (unsigned int)((_DWORD)v4 << 12);
  v17 = v16;
  memmove(v14, a3, (unsigned int)v16);
  v18 = v16 + (_DWORD)v14;
  memset(&v14[(unsigned int)v16], 0, (unsigned int)(dword_140C65944 << 12));
  if ( MiIsRetpolineEnabled() )
    memmove(&v14[v16], Base, (unsigned int)(dword_140C65980 << 12));
  v19 = RtlImageNtHeader((__int64)v14);
  v20 = v19;
  if ( *(_DWORD *)(v19 + 132) <= 5u
    || (v21 = *(_DWORD *)(v19 + 176)) != 0
    && (v21 + *(_DWORD *)(v20 + 180) > v17
     || (int)LdrRelocateImageWithBias((unsigned __int64)v14) < 0
     || (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled())
     && (IsRetpolineEnabled = MiIsRetpolineEnabled(),
         v23 = RtlPerformRetpolineRelocationsOnImage((int)v14, (int)v14, v17, v18, (__int64)Base, IsRetpolineEnabled),
         (int)(v23 + 0x80000000) >= 0)
     && v23 != -1073741637
     || (v24 = RtlApplyFunctionOverrideFixupsToImage((unsigned __int64)v14, *(_DWORD *)(v20 + 80)),
         ((v24 + 0x80000000) & 0x80000000) == 0)
     && v24 != -1073741637) )
  {
    MiReleasePrivilegedPtes();
    MiUnmapLargeDriver(v14, v30);
    return 0LL;
  }
  *(_QWORD *)(v20 + 48) = v14;
  if ( a1 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)a3);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v6, PteAddress, v30, 1, (struct _KTHREAD *)v28);
    MiChargeSystemImageCommitment(a1);
  }
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)v14, 0LL, inited, v8);
  }
  return v14;
}
