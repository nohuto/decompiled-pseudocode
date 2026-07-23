/*
 * XREFs of towlower @ 0x1403D3F10
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x140942DF4 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x140950C38 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x14095223C (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x140952310 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1409527BC (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x140952940 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1409529E0 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403D4ADC (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
