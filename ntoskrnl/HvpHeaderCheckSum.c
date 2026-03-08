/*
 * XREFs of HvpHeaderCheckSum @ 0x140AF2414
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x1402B2544 (HvpGenerateLogEntryHeader.c)
 *     HvHiveStartFileBacked @ 0x14072F1D4 (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x140730880 (HvpGetHiveHeader.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140731AB4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x14073216C (HvWriteHivePrimaryFile.c)
 *     HvApplyLogFiles @ 0x1407F9454 (HvApplyLogFiles.c)
 *     HvAnalyzeLogFiles @ 0x1407F9528 (HvAnalyzeLogFiles.c)
 *     HvHiveStartMemoryBacked @ 0x1407FF060 (HvHiveStartMemoryBacked.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1A9B4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvWriteExternal @ 0x140A1DE94 (HvWriteExternal.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140A1E0E4 (HvIsInPlaceBaseBlockValid.c)
 *     HvpLogInvalidLogHeader @ 0x140A2788C (HvpLogInvalidLogHeader.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AF2D84 (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpHeaderCheckSum(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  LODWORD(result) = 0;
  v2 = 127LL;
  do
  {
    result = *a1++ ^ (unsigned int)result;
    --v2;
  }
  while ( v2 );
  if ( (_DWORD)result == -1 )
    return 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
