/*
 * XREFs of MiWorkingSetIsContended @ 0x14028BE50
 * Callers:
 *     MiDispatchFault @ 0x14020EEC0 (MiDispatchFault.c)
 *     MiCheckProcessShadow @ 0x14020F840 (MiCheckProcessShadow.c)
 *     MiGetPageChain @ 0x140212CD0 (MiGetPageChain.c)
 *     MiWalkVaRange @ 0x14023BA60 (MiWalkVaRange.c)
 *     MiQueryAddressSpan @ 0x14025AC30 (MiQueryAddressSpan.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiProbePacketContended @ 0x140288A88 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x140288B80 (MiRemoveMappedPtes.c)
 *     MiCommitPoolMemory @ 0x14028B8AC (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x14028C060 (MiFillPoolCommitPageTable.c)
 *     MiProtectPrivateMemory @ 0x14028E080 (MiProtectPrivateMemory.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402AE5C0 (NtUnlockVirtualMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402EB224 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402EC974 (MiReplaceRotateWithDemandZero.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x140339070 (NtLockVirtualMemory.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6798 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D2D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiSetGraphicsPtes @ 0x14053457C (MiSetGraphicsPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547194 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x140549044 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405496C4 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AA70 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x14054BE84 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551EB4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x14055E670 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x1405639C8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &dword_140C4F780;
  else
    v1 = (LONG *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
