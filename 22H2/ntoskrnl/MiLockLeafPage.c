/*
 * XREFs of MiLockLeafPage @ 0x140218430
 * Callers:
 *     MiCombineWithExisting @ 0x1402179D4 (MiCombineWithExisting.c)
 *     MiSoftFaultMappedView @ 0x140217EB0 (MiSoftFaultMappedView.c)
 *     MiReservePageFileSpaceForPage @ 0x140284D50 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140293FB4 (MiActOnPte.c)
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 *     MiResolveProtoCombine @ 0x1402E3AF8 (MiResolveProtoCombine.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiDeletePerSessionProtos @ 0x14033E9C4 (MiDeletePerSessionProtos.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140347C78 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInitializeNewImageSectionProtos @ 0x140356790 (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x14035C74C (MiMakeImageReadOnly.c)
 *     MiPurgeImageSection @ 0x140369DE8 (MiPurgeImageSection.c)
 *     MiReplacePageOfProtoPool @ 0x14061DA50 (MiReplacePageOfProtoPool.c)
 *     MiIsSubsectionClean @ 0x140624B04 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x140625744 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14063C764 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14063CBF8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14063CE70 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14063D000 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14063EF38 (MiPurgeFileOnlyPfn.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660478 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiInvalidPteConforms @ 0x1402DC440 (MiInvalidPteConforms.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348380 (MiLockNestedPageAtDpcInline.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1406608C8 (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MiLockLeafPage(unsigned __int64 *a1, __int64 a2)
{
  char v2; // r14
  unsigned __int64 v4; // r8
  unsigned __int64 i; // r9
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v11; // rdx
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0xFFFFDE0000000000uLL;
  for ( i = 0x7FFFFFFFFFFFFFFFLL; ; _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), i) )
  {
    while ( 1 )
    {
      v6 = *a1;
      v7 = *a1;
      if ( (*a1 & 1) != 0 )
        goto LABEL_3;
      if ( (*a1 & 0xC00) != 0x800 )
        return 0LL;
      if ( (unsigned int)MiInvalidPteConforms(*a1, a2, v4, i) )
      {
        v7 = v6;
        if ( qword_140C65C40 && (v6 & 0x10) == 0 )
          v7 = v6 & ~qword_140C65C40;
LABEL_3:
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        if ( v8 <= qword_140C65CA0 )
        {
          a2 = 6 * v8;
          if ( _bittest64((const signed __int64 *)(48 * v8 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v9 = v4 + 48 * v8;
    if ( (v2 & 1) != 0 )
    {
      MiLockNestedPageAtDpcInline(v4 + 48 * v8, 6 * v8, v4, i);
    }
    else
    {
      v12 = v2 & 1;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        goto LABEL_7;
      do
      {
        do
          KeYieldProcessorEx(&v12);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    }
    i = 0x7FFFFFFFFFFFFFFFLL;
    v4 = 0xFFFFDE0000000000uLL;
LABEL_7:
    if ( *a1 == v6 )
      break;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    v11 = v2 & 1 | 2u;
    if ( (v2 & 2) == 0 )
      v11 = v2 & 1;
    return MiLockSpecialPurposeMemoryCachedPage(v9, v11, v4, i);
  }
  return v9;
}
