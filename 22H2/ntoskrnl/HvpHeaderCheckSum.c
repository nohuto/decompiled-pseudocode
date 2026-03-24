/*
 * XREFs of HvpHeaderCheckSum @ 0x140723C78
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x1403619E0 (HvpGenerateLogEntryHeader.c)
 *     HvHiveStartFileBacked @ 0x140721038 (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x140723B40 (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x140724610 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140724ADC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteExternal @ 0x140729E60 (HvWriteExternal.c)
 *     HvHiveStartMemoryBacked @ 0x14076FAD4 (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140876AC4 (HvIsInPlaceBaseBlockValid.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1408808A4 (HvSnapshotHiveToOffsetArray.c)
 *     HvAnalyzeLogFiles @ 0x140880C7C (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x140881B98 (HvpLogInvalidLogHeader.c)
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
    result = 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
