/*
 * XREFs of NLS_UPCASE @ 0x14022D330
 * Callers:
 *     UpcaseUnicodeToUTF8NHelper @ 0x1403A52CC (UpcaseUnicodeToUTF8NHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140463564 (UpcaseUnicodeToMultiByteNHelper.c)
 *     CmpCompareUnicodeString @ 0x140690A4C (CmpCompareUnicodeString.c)
 *     CmpComputeComponentHashes @ 0x140690B10 (CmpComputeComponentHashes.c)
 *     CmpGetNameControlBlock @ 0x1406D8F90 (CmpGetNameControlBlock.c)
 *     RtlFindUnicodeSubstring @ 0x1406D93E0 (RtlFindUnicodeSubstring.c)
 *     RtlHashUnicodeString @ 0x1406D94E0 (RtlHashUnicodeString.c)
 *     CmpCompareInIndex @ 0x1406D9710 (CmpCompareInIndex.c)
 *     RtlPrefixUnicodeString @ 0x1406D9ED0 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1406DA090 (RtlCompareUnicodeStrings.c)
 *     RtlCompareUnicodeString @ 0x1406DA1F0 (RtlCompareUnicodeString.c)
 *     CmpDoCompareKeyName @ 0x1406DA960 (CmpDoCompareKeyName.c)
 *     CmpCheckLeaf @ 0x1406DCB70 (CmpCheckLeaf.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpFindNameInListCellWithStatus @ 0x1406DF8E0 (CmpFindNameInListCellWithStatus.c)
 *     CmpFindNameInListFromIndex @ 0x1406DFF10 (CmpFindNameInListFromIndex.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     CmpHashUnicodeComponent @ 0x140708D90 (CmpHashUnicodeComponent.c)
 *     RtlpHashStringToAtom @ 0x140717FE0 (RtlpHashStringToAtom.c)
 *     CmpHashCompressedComponent @ 0x140769984 (CmpHashCompressedComponent.c)
 *     CompareUnicodeStrings @ 0x14079F030 (CompareUnicodeStrings.c)
 *     CmpCheckLexicographicalOrder @ 0x1407AA980 (CmpCheckLexicographicalOrder.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B6FA0 (ObpCreateSymbolicLinkName.c)
 *     ObpLookupDirectoryEntry @ 0x1407B72E8 (ObpLookupDirectoryEntry.c)
 *     CmpCompareTwoCompressedNames @ 0x1407BFD60 (CmpCompareTwoCompressedNames.c)
 *     CmpCompareCompressedName @ 0x1407C4C74 (CmpCompareCompressedName.c)
 *     AslStringPatternMatchExW @ 0x1407C6DFC (AslStringPatternMatchExW.c)
 *     RtlSuffixUnicodeString @ 0x1409B8B20 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1409B9980 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1409BF260 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x140A51E98 (SdbpGetProcessHistory.c)
 *     AslEnvVarQuery @ 0x140A575BC (AslEnvVarQuery.c)
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
