/*
 * XREFs of CmpCopyCompressedName @ 0x1407A47DC
 * Callers:
 *     CmpMarkIndexDirty @ 0x1406BA4F0 (CmpMarkIndexDirty.c)
 *     CmAddLogForAction @ 0x14073485C (CmAddLogForAction.c)
 *     CmpInitializeValueNameString @ 0x1407845C0 (CmpInitializeValueNameString.c)
 *     CmpPopulateKeyNodeInformation @ 0x140785DFC (CmpPopulateKeyNodeInformation.c)
 *     CmpAddSubKeyToList @ 0x1407A4300 (CmpAddSubKeyToList.c)
 *     CmpQueryKeyValueData @ 0x1407AA6A0 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKeyNodes @ 0x1407B0C90 (CmpConstructNameFromKeyNodes.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140A142C8 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x140A1F2A4 (CmpInitializeKeyNameString.c)
 *     CmpPopulateKeyBasicInformation @ 0x140A273E4 (CmpPopulateKeyBasicInformation.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B333A8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x140B34B00 (CmpGetNodeName.c)
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
