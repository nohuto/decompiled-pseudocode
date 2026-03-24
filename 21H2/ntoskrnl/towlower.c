/*
 * XREFs of towlower @ 0x1403D3DA0
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x140942C24 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x140950A68 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x14095206C (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x140952140 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1409525EC (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x140952770 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x140952810 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403D496C (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
