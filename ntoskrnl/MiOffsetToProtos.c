/*
 * XREFs of MiOffsetToProtos @ 0x140331B90
 * Callers:
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiReferenceDataSubsections @ 0x14020FEC8 (MiReferenceDataSubsections.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiSystemImageHasPrivateFixups @ 0x1402D54E0 (MiSystemImageHasPrivateFixups.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x140334FD0 (MmMapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     MiDereferenceDataSubsections @ 0x140668B28 (MiDereferenceDataSubsections.c)
 *     MiAddMappedPtes @ 0x1406A56B0 (MiAddMappedPtes.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 *     MiRelocateImage @ 0x1407F2760 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x1407F2ED0 (MiScanRelocationPage.c)
 *     MiLogRelocationRva @ 0x1407F4A00 (MiLogRelocationRva.c)
 * Callees:
 *     MiLocatePagefileSubsection @ 0x14031DDB0 (MiLocatePagefileSubsection.c)
 *     MiGetControlAreaPtes @ 0x140331C60 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140332910 (MiLocateSubsectionNode.c)
 */

unsigned int *__fastcall MiOffsetToProtos(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 ControlAreaPtes; // rax
  unsigned __int64 v7; // rcx
  __int64 SubsectionNode; // rbx
  unsigned __int64 i; // rax

  *a3 = a2 >> 12;
  ControlAreaPtes = MiGetControlAreaPtes();
  v7 = *a3;
  if ( *a3 >= ControlAreaPtes )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return MiLocatePagefileSubsection((unsigned int *)(a1 + 128), a3);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    SubsectionNode = a1 + 128;
    for ( i = *(unsigned int *)(SubsectionNode + 44); v7 >= i; i = *(unsigned int *)(SubsectionNode + 44) )
    {
      v7 -= i;
      *a3 = v7;
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
    }
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(a1, a2, 0LL);
    *a3 -= *(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26);
  }
  return (unsigned int *)SubsectionNode;
}
