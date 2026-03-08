/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x140A1D040
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140614148 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140614374 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140614E8C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140A18CC4 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A1E428 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x140A209E8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A20C04 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A226D8 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKeyNodeSemantics(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x80000) != 0 )
    return *(_BYTE *)(a2 + 13) & 3;
  else
    return 0LL;
}
