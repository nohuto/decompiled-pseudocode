/*
 * XREFs of FONTOBJ_bEnsureGlyphCacheBuffer @ 0x1C0130428
 * Callers:
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x1C011DBE0 (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1C011DE48 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 */

__int64 __fastcall FONTOBJ_bEnsureGlyphCacheBuffer(
        __int64 a1,
        unsigned int a2,
        struct _GLYPHDATA **a3,
        unsigned __int64 *a4,
        struct _GLYPHBITS **a5)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  v5 = RFONTOBJ::bEnsureGlyphCacheBuffer((RFONTOBJ *)&v8, a2, a3, a4, a5);
  v8 = 0LL;
  v6 = v5;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  return v6;
}
