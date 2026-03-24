/*
 * XREFs of NLS_UPCASE @ 0x140206AB0
 * Callers:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140206970 (RtlpUpcaseUnicodeStringPrivate.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140206A00 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140585904 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1405859F8 (UpcaseUnicodeToUTF8NHelper.c)
 *     CmpCheckLeaf @ 0x1405EBF20 (CmpCheckLeaf.c)
 *     RtlFindUnicodeSubstring @ 0x1405ED870 (RtlFindUnicodeSubstring.c)
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
 *     CmpCompareInIndex @ 0x1405EDCF0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405EDFE0 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlCompareUnicodeString @ 0x1405EE320 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1405EE720 (CmpCompareCompressedName.c)
 *     CmpGetNameControlBlock @ 0x1405EFC10 (CmpGetNameControlBlock.c)
 *     CmpCheckLexicographicalOrder @ 0x1405F2E10 (CmpCheckLexicographicalOrder.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     ObpLookupDirectoryEntryEx @ 0x140601DF4 (ObpLookupDirectoryEntryEx.c)
 *     RtlpHashStringToAtom @ 0x14061BF80 (RtlpHashStringToAtom.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406405D0 (CmpPerformSingleKcbCacheLookup.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     CmpComputeComponentHashes @ 0x1406493E0 (CmpComputeComponentHashes.c)
 *     RtlCompareUnicodeStrings @ 0x14065F910 (RtlCompareUnicodeStrings.c)
 *     CompareUnicodeStrings @ 0x140677E28 (CompareUnicodeStrings.c)
 *     CmpFindNameInListCellWithStatus @ 0x1406DEE20 (CmpFindNameInListCellWithStatus.c)
 *     CmpHashUnicodeComponent @ 0x1406E3014 (CmpHashUnicodeComponent.c)
 *     CmpCompareUnicodeString @ 0x1406EB710 (CmpCompareUnicodeString.c)
 *     ObpCreateSymbolicLinkName @ 0x14070CE9C (ObpCreateSymbolicLinkName.c)
 *     AslStringPatternMatchW @ 0x140752F0C (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x14075396C (AslEnvVarQuery.c)
 *     CmpHashCompressedComponent @ 0x140765D24 (CmpHashCompressedComponent.c)
 *     CmpCompareTwoCompressedNames @ 0x140875E78 (CmpCompareTwoCompressedNames.c)
 *     RtlSuffixUnicodeString @ 0x14090FC90 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x140910D40 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x140916520 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x14096630C (SdbpGetProcessHistory.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_UPCASE(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 <= 0x7Au )
    return a1 - 32;
  if ( !Nls844UnicodeUpcaseTable || a1 < 0xC0u )
    return a1;
  return a1
       + *(_WORD *)(Nls844UnicodeUpcaseTable
                  + 2LL
                  * ((a1 & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                       + 2LL
                                                       * (((unsigned __int8)a1 >> 4)
                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                            + 2
                                                                                            * ((unsigned __int64)a1 >> 8))))));
}
