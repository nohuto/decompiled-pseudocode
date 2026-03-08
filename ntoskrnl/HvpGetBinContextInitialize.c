/*
 * XREFs of HvpGetBinContextInitialize @ 0x140AF2644
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067D1C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpReferenceSecurityNode @ 0x14067D3EC (CmpReferenceSecurityNode.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14071C9C4 (CmpValidateHiveSecurityDescriptors.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14072CD4C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvpFindNextDirtyBlock @ 0x1407A4B70 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1407A5934 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x1407A6080 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x1407A6200 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x1407A6710 (HvpFindFreeCell.c)
 *     HvpGetCellContextMove @ 0x1407A69E8 (HvpGetCellContextMove.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1407A6EA4 (HvpAddFreeCellHint.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpCheckLeaf @ 0x1407B0800 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1407B0B10 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1407B2930 (CmpCheckValueList.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpCopyModifiedData @ 0x1407FA0A0 (HvpCopyModifiedData.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A10EC4 (CmEnumerateValueFromLayeredKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     HvWriteExternal @ 0x140A1DE94 (HvWriteExternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetBinContextInitialize(_WORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  return result;
}
