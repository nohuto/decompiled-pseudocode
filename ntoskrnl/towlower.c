/*
 * XREFs of towlower @ 0x1403D5C20
 * Callers:
 *     ExpTranslateBootEntryNameToId @ 0x14083EA68 (ExpTranslateBootEntryNameToId.c)
 *     EtwpCovSampCheckForSegments @ 0x1408A3FCC (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x1409F9F48 (ExpParseArcPathName.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1409FB2B8 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1409FB3B4 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1409FB538 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1409FB5D8 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403D67C4 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
