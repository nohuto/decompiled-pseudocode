/*
 * XREFs of AslAlloc @ 0x14075A888
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140752FF8 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1407530E4 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpResolveMatchingFile @ 0x1407531CC (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140753420 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x140753B0C (AslPathToNetworkPathNt.c)
 *     SdbInitDatabaseInMemory @ 0x140755900 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140755A44 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x1407581E8 (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x140759FC0 (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x14075A094 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14075A630 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckAllAttributes @ 0x1407B243C (SdbpCheckAllAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1407B3664 (AslpFileGetVersionBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x1407B3BD8 (AslFileMappingCreateFromImageView.c)
 *     SdbQueryDataExTagID @ 0x1407C1F28 (SdbQueryDataExTagID.c)
 *     AslRegistryBuildMachinePath @ 0x1407C2620 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407C26D4 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x1409640DC (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14096489C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140964CE4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409659F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x14096630C (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140966AEC (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140967558 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x140967780 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1409678D4 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x140968B44 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140969114 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x140969A3C (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140969B7C (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969CB0 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x14096A1C4 (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapCreate @ 0x14096C454 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AslAlloc(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x74705041u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, a2);
  return v4;
}
