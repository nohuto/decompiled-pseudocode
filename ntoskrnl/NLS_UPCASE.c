/*
 * XREFs of NLS_UPCASE @ 0x140267AD0
 * Callers:
 *     UpcaseUnicodeToUTF8NHelper @ 0x14039FDA4 (UpcaseUnicodeToUTF8NHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14045B5C4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     RtlHashUnicodeString @ 0x140680AE0 (RtlHashUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x140684CA0 (RtlCompareUnicodeStrings.c)
 *     RtlFindUnicodeSubstring @ 0x1406B8BB0 (RtlFindUnicodeSubstring.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     CmpComputeComponentHashes @ 0x140739D80 (CmpComputeComponentHashes.c)
 *     CmpHashCompressedComponent @ 0x14074BDE4 (CmpHashCompressedComponent.c)
 *     CompareUnicodeStrings @ 0x140752340 (CompareUnicodeStrings.c)
 *     ObpCreateSymbolicLinkName @ 0x1407612D4 (ObpCreateSymbolicLinkName.c)
 *     ObpLookupDirectoryEntry @ 0x14076161C (ObpLookupDirectoryEntry.c)
 *     CmpCompareTwoCompressedNames @ 0x14076D7AC (CmpCompareTwoCompressedNames.c)
 *     CmpCompareCompressedName @ 0x140775138 (CmpCompareCompressedName.c)
 *     AslStringPatternMatchExW @ 0x14077790C (AslStringPatternMatchExW.c)
 *     CmpCompareUnicodeString @ 0x14077B3C0 (CmpCompareUnicodeString.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 *     CmpCompareInIndex @ 0x1407AE250 (CmpCompareInIndex.c)
 *     CmpDoCompareKeyName @ 0x1407AE420 (CmpDoCompareKeyName.c)
 *     CmpGetNameControlBlock @ 0x1407B01F0 (CmpGetNameControlBlock.c)
 *     CmpCheckLexicographicalOrder @ 0x1407B0610 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckLeaf @ 0x1407B0800 (CmpCheckLeaf.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmpFindNameInListCellWithStatus @ 0x1407B3CA0 (CmpFindNameInListCellWithStatus.c)
 *     CmpFindNameInListFromIndex @ 0x1407B42D0 (CmpFindNameInListFromIndex.c)
 *     RtlpHashStringToAtom @ 0x1407DA630 (RtlpHashStringToAtom.c)
 *     RtlSuffixUnicodeString @ 0x1409B5AF0 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1409B6A60 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1409BC230 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x140A4F1C8 (SdbpGetProcessHistory.c)
 *     AslEnvVarQuery @ 0x140A54908 (AslEnvVarQuery.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_UPCASE(__int64 a1, unsigned __int16 a2)
{
  if ( a2 < 0x61u )
    return a2;
  if ( a2 <= 0x7Au )
    return a2 - 32;
  if ( a1 && a2 >= 0xC0u )
    return *(_WORD *)(a1
                    + 2LL
                    * ((a2 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(a1
                                                         + 2LL
                                                         * (((unsigned __int8)a2 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(a1
                                                                                              + 2
                                                                                              * ((unsigned __int64)a2 >> 8))))))
         + a2;
  else
    return a2;
}
