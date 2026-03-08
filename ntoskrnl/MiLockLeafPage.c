/*
 * XREFs of MiLockLeafPage @ 0x14034AF20
 * Callers:
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiDeletePerSessionProtos @ 0x1402CF6DC (MiDeletePerSessionProtos.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInitializeNewImageSectionProtos @ 0x1402EAAAC (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x1402EFF50 (MiMakeImageReadOnly.c)
 *     MiPurgeImageSection @ 0x1402FECC8 (MiPurgeImageSection.c)
 *     MiReservePageFileSpaceForPage @ 0x14032ECD0 (MiReservePageFileSpaceForPage.c)
 *     MiResolveProtoCombine @ 0x140345A28 (MiResolveProtoCombine.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 *     MiSoftFaultMappedView @ 0x14034A9A0 (MiSoftFaultMappedView.c)
 *     MiReplacePageOfProtoPool @ 0x14061B5A0 (MiReplacePageOfProtoPool.c)
 *     MiIsSubsectionClean @ 0x140622654 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x140623294 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14063A2E8 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14063A788 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14063AA00 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14063AB90 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14063CAD0 (MiPurgeFileOnlyPfn.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x140287530 (MiInvalidPteConforms.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14065E278 (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MiLockLeafPage(__int64 *a1, char a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v11; // rdx
  int v12; // [rsp+50h] [rbp+8h] BYREF

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
      if ( MiInvalidPteConforms(*a1) )
      {
        v7 = v6;
        if ( qword_140C657C0 && (v6 & 0x10) == 0 )
          v7 = v6 & ~qword_140C657C0;
LABEL_3:
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        if ( v8 <= qword_140C65820 )
        {
          if ( _bittest64((const signed __int64 *)(48 * v8 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v9 = v4 + 48 * v8;
    if ( (a2 & 1) != 0 )
    {
      MiLockNestedPageAtDpcInline(v4 + 48 * v8);
    }
    else
    {
      v12 = a2 & 1;
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
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    v11 = a2 & 1 | 2u;
    if ( (a2 & 2) == 0 )
      v11 = a2 & 1;
    return MiLockSpecialPurposeMemoryCachedPage(v9, v11);
  }
  return v9;
}
