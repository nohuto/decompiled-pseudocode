/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x1402E3470
 * Callers:
 *     MiResolveProtoPteFault @ 0x140215390 (MiResolveProtoPteFault.c)
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiWalkVaRange @ 0x14023BA60 (MiWalkVaRange.c)
 *     MiSetReadOnlyOnSectionView @ 0x140240500 (MiSetReadOnlyOnSectionView.c)
 *     MiSharedVaToPartition @ 0x140240DBC (MiSharedVaToPartition.c)
 *     MiInitializeReadInProgressPfn @ 0x14027C5B0 (MiInitializeReadInProgressPfn.c)
 *     MiComputePageCommitment @ 0x14028D1E0 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x14028D5E0 (MiIsPteDecommittedPage.c)
 *     MiSplitPrivatePage @ 0x14028D630 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14028DCEC (MiIsCfgBitMapPageShared.c)
 *     MiSystemFault @ 0x140291A80 (MiSystemFault.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x1402B1430 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiCountSharedPages @ 0x1402E2400 (MiCountSharedPages.c)
 *     MiCheckProtoAccess @ 0x1402E3120 (MiCheckProtoAccess.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402E31E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsFaultPteIntact @ 0x1402E3214 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402E32E4 (MiFindActualFaultingPte.c)
 *     MiTranslatePageForCopy @ 0x14030C534 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     MiIsPteEvaluated @ 0x14033A25C (MiIsPteEvaluated.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B04C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C4DF40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DF40;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
