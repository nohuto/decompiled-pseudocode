/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x14029F850
 * Callers:
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     MiUpdatePageTableUseCount @ 0x14029EC20 (MiUpdatePageTableUseCount.c)
 *     MiInsertPhysicalPteMapping @ 0x14029F690 (MiInsertPhysicalPteMapping.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiReservePageFileSpaceForPage @ 0x14032ECD0 (MiReservePageFileSpaceForPage.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14062EF5C (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x14063FEB8 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x140649AB0 (MiUpdateAwePageTable.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x140662E50 (MiUpdateForkMaps.c)
 *     MiInsertLargeUserMapping @ 0x140666510 (MiInsertLargeUserMapping.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiIncreaseUsedPtesCount(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)a2 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 <= 1 )
    return MmIsAddressValidEx(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  return result;
}
