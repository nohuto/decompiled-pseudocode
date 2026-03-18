/*
 * XREFs of AslAlloc @ 0x1407589A8
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1406951D8 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140695260 (SdbpOpenDatabaseInMemory.c)
 *     SdbpCheckAllAttributes @ 0x140757C04 (SdbpCheckAllAttributes.c)
 *     AslFileMappingCreate @ 0x14075844C (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x1407585EC (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x140758754 (SdbpCreateSearchDBContext.c)
 *     AslpFileGetVersionBlock @ 0x140759B0C (AslpFileGetVersionBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x140849CE8 (AslFileMappingCreateFromImageView.c)
 *     AslRegistryBuildMachinePath @ 0x14084F3B0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084F51C (AslRegistryBuildUserPath.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E170 (SdbGetMergeRedirectPath.c)
 *     SdbOpenDatabaseEx @ 0x140A4E5C0 (SdbOpenDatabaseEx.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140A4E86C (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EB78 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbQueryDataExTagID @ 0x140A4EFF8 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FB6C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A4FFC4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A50ED8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpInitializeSearchDBContext @ 0x140A51430 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140A517D0 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140A51E98 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140A527E0 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140A53278 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x140A53CC8 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140A53E14 (AslStringAnsiToUnicode.c)
 *     AslRegistryGetString @ 0x140A54344 (AslRegistryGetString.c)
 *     AslPathToNetworkPathNt @ 0x140A552D0 (AslPathToNetworkPathNt.c)
 *     AslPathWildcardFindFirst @ 0x140A555C4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140A55B1C (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x140A56328 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140A56468 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A56658 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x140A56B50 (AslpProcessMatchRegNode.c)
 *     AslEnvExpandStrings2 @ 0x140A56F34 (AslEnvExpandStrings2.c)
 *     AslpFileLargeMapCreate @ 0x140A59AB0 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
