/*
 * XREFs of AslAlloc @ 0x1407A32E8
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x14079CFC8 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x14079D050 (SdbpOpenDatabaseInMemory.c)
 *     AslpFileGetVersionBlock @ 0x1407A0528 (AslpFileGetVersionBlock.c)
 *     SdbpCheckAllAttributes @ 0x1407A24E8 (SdbpCheckAllAttributes.c)
 *     AslFileMappingCreate @ 0x1407A2D8C (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x1407A2F2C (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x1407A3094 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreateFromImageView @ 0x140847670 (AslFileMappingCreateFromImageView.c)
 *     AslRegistryBuildMachinePath @ 0x14084C000 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084C16C (AslRegistryBuildUserPath.c)
 *     SdbGetMergeRedirectPath @ 0x140A4B4A0 (SdbGetMergeRedirectPath.c)
 *     SdbOpenDatabaseEx @ 0x140A4B8F0 (SdbOpenDatabaseEx.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140A4BB9C (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4BEA8 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbQueryDataExTagID @ 0x140A4C328 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4CE9C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A4D2F4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A4E208 (SdbpGetMatchingTextAttributes.c)
 *     SdbpInitializeSearchDBContext @ 0x140A4E760 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140A4EB00 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140A4F1C8 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140A4FB10 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140A505A8 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x140A50FF8 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140A51144 (AslStringAnsiToUnicode.c)
 *     AslRegistryGetString @ 0x140A51674 (AslRegistryGetString.c)
 *     AslPathToNetworkPathNt @ 0x140A5261C (AslPathToNetworkPathNt.c)
 *     AslPathWildcardFindFirst @ 0x140A52910 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140A52E68 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x140A53674 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140A537B4 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A539A4 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x140A53E9C (AslpProcessMatchRegNode.c)
 *     AslEnvExpandStrings2 @ 0x140A54280 (AslEnvExpandStrings2.c)
 *     AslpFileLargeMapCreate @ 0x140A56DFC (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void *__fastcall AslAlloc(__int64 a1, size_t a2)
{
  void *Pool2; // rax
  void *v4; // rbx

  Pool2 = (void *)ExAllocatePool2(256LL, a2, 1953517633LL);
  v4 = Pool2;
  if ( Pool2 )
    memset(Pool2, 0, a2);
  return v4;
}
