/*
 * XREFs of CmpCopyCompressedName @ 0x1406E2D64
 * Callers:
 *     CmpConstructNameFromKeyNodes @ 0x1405F3210 (CmpConstructNameFromKeyNodes.c)
 *     CmpQueryKeyValueData @ 0x1405F7EB0 (CmpQueryKeyValueData.c)
 *     CmpInitializeValueNameString @ 0x14066F2E8 (CmpInitializeValueNameString.c)
 *     CmAddLogForAction @ 0x14069300C (CmAddLogForAction.c)
 *     CmpAddSubKeyToList @ 0x1406E2B90 (CmpAddSubKeyToList.c)
 *     CmpPopulateKeyNodeInformation @ 0x1406E3380 (CmpPopulateKeyNodeInformation.c)
 *     CmpMarkIndexDirty @ 0x1406E53DC (CmpMarkIndexDirty.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140778B38 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x1408791D8 (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x14087CFAC (CmpLoadHiveVolatile.c)
 *     CmpPopulateKeyBasicInformation @ 0x140882694 (CmpPopulateKeyBasicInformation.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5F7C0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x140A61278 (CmpGetNodeName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCopyCompressedName(_WORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2 >> 1;
  if ( v4 < a4 )
    a4 = v4;
  if ( a4 )
  {
    v5 = a4;
    do
    {
      result = *a3++;
      *a1++ = result;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
