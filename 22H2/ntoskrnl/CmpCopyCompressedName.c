/*
 * XREFs of CmpCopyCompressedName @ 0x140708D60
 * Callers:
 *     CmpQueryKeyValueData @ 0x1406DCE80 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406DD670 (CmpConstructNameFromKeyNodes.c)
 *     CmpPopulateKeyNodeInformation @ 0x1407074F8 (CmpPopulateKeyNodeInformation.c)
 *     CmAddLogForAction @ 0x1407079F8 (CmAddLogForAction.c)
 *     CmpInitializeValueNameString @ 0x140708514 (CmpInitializeValueNameString.c)
 *     CmpAddSubKeyToList @ 0x140708884 (CmpAddSubKeyToList.c)
 *     CmpMarkIndexDirty @ 0x14070C108 (CmpMarkIndexDirty.c)
 *     CmpLoadHiveVolatile @ 0x140A0C3E0 (CmpLoadHiveVolatile.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140A17018 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x140A22004 (CmpInitializeKeyNameString.c)
 *     CmpPopulateKeyBasicInformation @ 0x140A2A144 (CmpPopulateKeyBasicInformation.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5C4DC (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x140B5DC34 (CmpGetNodeName.c)
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
