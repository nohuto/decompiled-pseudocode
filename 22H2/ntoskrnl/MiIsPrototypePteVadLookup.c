/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14027CDE0
 * Callers:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE58 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiSetReadOnlyOnSectionView @ 0x140215318 (MiSetReadOnlyOnSectionView.c)
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x140272900 (MiGetPageProtection.c)
 *     MiCountSharedPages @ 0x1402737F0 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A4A0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEB40 (MiInitializeReadInProgressPfn.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
 *     MiComputePageCommitment @ 0x1402E4AB0 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x1402E4D04 (MiIsPteDecommittedPage.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E53F0 (MiIsCfgBitMapPageShared.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiIsFaultPteIntact @ 0x1402EF3C8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402EF4C0 (MiFindActualFaultingPte.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiIsPteEvaluated @ 0x1402F2808 (MiIsPteEvaluated.c)
 *     MiCheckProtoAccess @ 0x1403499A8 (MiCheckProtoAccess.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617CA0 (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C65C40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C65C40;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
