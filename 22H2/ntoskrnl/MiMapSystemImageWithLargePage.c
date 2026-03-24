/*
 * XREFs of MiMapSystemImageWithLargePage @ 0x1408DA420
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140A4FB14 (MiHandleBootImage.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     MiFreeContiguousPages @ 0x1402E91B8 (MiFreeContiguousPages.c)
 *     MiIsImportOptimizationEnabled @ 0x1402F3618 (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x1402F3630 (MiIsRetpolineEnabled.c)
 *     MiPageToNode @ 0x140329884 (MiPageToNode.c)
 *     MiMapWithLargePages @ 0x1403B848C (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8764 (MiGetPageTablesForLargeMap.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053155C (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140544998 (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x14055BE0C (MiRoundUpToPowerOf2SizeT.c)
 *     RtlPerformRetpolineRelocationsOnImage @ 0x14058FDBC (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiReservePrivilegedPtes @ 0x14075E2C0 (MiReservePrivilegedPtes.c)
 *     MiChargeSystemImageCommitment @ 0x14075E354 (MiChargeSystemImageCommitment.c)
 *     MiReleasePrivilegedPtes @ 0x1407738F8 (MiReleasePrivilegedPtes.c)
 *     MiUnmapLargeDriver @ 0x1408DA794 (MiUnmapLargeDriver.c)
 *     LdrRelocateImageWithBias @ 0x1409193B4 (LdrRelocateImageWithBias.c)
 */

char *__fastcall MiMapSystemImageWithLargePage(__int64 a1, unsigned int a2, const void *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 i; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  _DWORD *v11; // r9
  int v13; // eax
  unsigned __int64 PageTablesForLargeMap; // rax
  __int64 v15; // r8
  _DWORD *v16; // r9
  char *v17; // rbx
  size_t v18; // r13
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // eax
  bool IsRetpolineEnabled; // al
  int v23; // eax
  unsigned __int64 PteAddress; // rax
  unsigned int inited; // eax
  char *AnyMultiplexedVm; // [rsp+60h] [rbp-88h]
  _QWORD v27[14]; // [rsp+78h] [rbp-70h] BYREF
  ULONG_PTR v29; // [rsp+108h] [rbp+20h] BYREF

  v3 = a2;
  v29 = 0LL;
  memset(v27, 0, 48);
  if ( a1 )
  {
    v5 = MiSectionControlArea(a1);
    for ( i = v5 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)(i + 32) & 0x3E) == 0 )
        return 0LL;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v7 = v3;
  v8 = (v3 + (unsigned int)dword_140C4CC4C + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  v9 = MiRoundUpToPowerOf2SizeT(v8);
  if ( (int)MiFindContiguousPages(
              (__int64)&MiSystemPartition,
              0x200uLL,
              0xFFFFFFFFFuLL,
              v9,
              v9,
              1u,
              0x80000000,
              0x80000000,
              0x100000,
              0LL,
              (__int64 *)&v29) < 0 )
    return 0LL;
  if ( v9 > v8 )
    MiFreeContiguousPages(v8 + v29, v9 - v8, v10, v11);
  v13 = MiPageToNode(v29);
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v8, 12, 1, v13 + 1);
  v17 = (char *)PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
    goto LABEL_13;
  MiGetPteAddress(PageTablesForLargeMap);
  if ( (int)MiReservePrivilegedPtes() < 0 )
  {
    MiUnmapLargeDriver(v17, v3);
LABEL_13:
    MiFreeContiguousPages(v29, v8, v15, v16);
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiMapWithLargePages((__int64)AnyMultiplexedVm, (unsigned __int64)v17, v29, v8, 1, 6, 1);
  v18 = (unsigned int)((_DWORD)v3 << 12);
  memmove(v17, a3, v18);
  memset(&v17[v18], 0, (unsigned int)(dword_140C4CC4C << 12));
  if ( MiIsRetpolineEnabled() )
    memmove(&v17[v18], Base, (unsigned int)(dword_140C4CC88 << 12));
  v19 = RtlImageNtHeader((__int64)v17);
  v20 = v19;
  if ( *(_DWORD *)(v19 + 132) <= 5u
    || (v21 = *(_DWORD *)(v19 + 176)) != 0
    && (v21 + *(_DWORD *)(v20 + 180) > (unsigned int)v18
     || (int)LdrRelocateImageWithBias(v17) < 0
     || (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled())
     && (IsRetpolineEnabled = MiIsRetpolineEnabled(),
         v23 = RtlPerformRetpolineRelocationsOnImage(
                 (int)v17,
                 (int)v17,
                 v18,
                 (int)v17 + (int)v18,
                 (__int64)Base,
                 IsRetpolineEnabled),
         (int)(v23 + 0x80000000) >= 0)
     && v23 != -1073741637) )
  {
    MiReleasePrivilegedPtes();
    MiUnmapLargeDriver(v17, v7);
    return 0LL;
  }
  *(_QWORD *)(v20 + 48) = v17;
  if ( a1 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)a3);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v5, PteAddress, v7, 1, v27);
    MiChargeSystemImageCommitment(a1);
  }
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)v17, 0LL, inited, v8);
  }
  return v17;
}
