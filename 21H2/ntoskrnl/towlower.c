/*
 * XREFs of towlower @ 0x1403E3150
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x1409EF2FC (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x1409FCDF8 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x1409FE424 (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1409FE4F8 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1409FE9A4 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1409FEB28 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1409FEBC8 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403E3CE0 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
