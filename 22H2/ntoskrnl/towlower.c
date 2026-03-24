/*
 * XREFs of towlower @ 0x1403D36A0
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x140942C74 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x140950AB8 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x1409520BC (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x140952190 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x14095263C (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1409527C0 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x140952860 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403D426C (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
