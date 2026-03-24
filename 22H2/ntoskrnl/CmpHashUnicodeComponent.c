/*
 * XREFs of CmpHashUnicodeComponent @ 0x1406E3014
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ECFB8 (CmDeleteLayeredKey.c)
 *     CmpCheckLeaf @ 0x1405EBF20 (CmpCheckLeaf.c)
 *     CmpGetNameControlBlock @ 0x1405EFC10 (CmpGetNameControlBlock.c)
 *     CmpAddStringToMapping @ 0x1406A4D14 (CmpAddStringToMapping.c)
 *     CmpAddToLeaf @ 0x1406E290C (CmpAddToLeaf.c)
 *     CmpGetMappingHiveForString @ 0x1406EB5F8 (CmpGetMappingHiveForString.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14072A84C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140765B90 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1407ACED0 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpWaitForHiveMount @ 0x1407C4644 (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x14086FFEC (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140880110 (CmpPartialPromoteSubkeys.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140A5AED4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     NLS_UPCASE @ 0x140206AB0 (NLS_UPCASE.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // r9d
  __int16 v2; // ax
  unsigned __int16 *v3; // r10
  __int64 v4; // r11
  unsigned __int16 v5; // ax

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)a1->m128i_i64[1];
    v4 = (unsigned __int16)(((unsigned __int16)(v2 - 1) >> 1) + 1);
    do
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 > 0x7Au )
          v5 = NLS_UPCASE(v5);
        else
          v5 -= 32;
      }
      ++v3;
      v1 = v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
