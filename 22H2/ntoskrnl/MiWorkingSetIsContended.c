/*
 * XREFs of MiWorkingSetIsContended @ 0x1402E69F0
 * Callers:
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiCheckProcessShadow @ 0x14023F0E0 (MiCheckProcessShadow.c)
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140273C40 (MiQueryAddressSpan.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140285270 (MiFillPoolCommitPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1402A2760 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MiProbePacketContended @ 0x1402E6584 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F155C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiSetGraphicsPtes @ 0x140626550 (MiSetGraphicsPtes.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630CA0 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406313EC (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x140631764 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632AA8 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiAddPagesToEnclave @ 0x140646A80 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1406472A8 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
 *     MiQueryVaPhysicalContiguity @ 0x140648FBC (MiQueryVaPhysicalContiguity.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D730 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E4AC (MiScrubLargeMappedPage.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x140668E30 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  _DWORD *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &unk_140C6A280;
  else
    v1 = (_DWORD *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
