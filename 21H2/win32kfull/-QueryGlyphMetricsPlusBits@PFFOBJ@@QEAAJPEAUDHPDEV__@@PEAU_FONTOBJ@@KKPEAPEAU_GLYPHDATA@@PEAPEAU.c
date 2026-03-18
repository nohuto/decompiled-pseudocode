/*
 * XREFs of ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C0019160
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C0018B7C (xInsertGlyphbitsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C0018FE0 (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D464C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C001AEC4 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C001AEF0 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C001B8F4 (UmfdQueryGlyphMetricsPlusBits.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z @ 0x1C015FF14 (-ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z.c)
 */

__int64 __fastcall PFFOBJ::QueryGlyphMetricsPlusBits(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        int a4,
        unsigned int a5,
        struct _GLYPHDATA **a6,
        struct _GLYPHBITS **a7)
{
  int v9; // r14d
  unsigned int GlyphMetricsPlusBits; // esi
  struct _GLYPHDATA *v12; // r9
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  v9 = (int)a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 88LL) != qword_1C033BDF8 )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v13, this);
  GlyphMetricsPlusBits = UmfdQueryGlyphMetricsPlusBits(v9, (_DWORD)a3, a4, a5, (__int64)a6, (__int64)a7);
  if ( a6 )
    v12 = *a6;
  else
    v12 = 0LL;
  if ( !ValidateGlyphDataAndBitmap(GlyphMetricsPlusBits, a3, 1u, v12, *a7) )
    GlyphMetricsPlusBits = -1;
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v13);
  return GlyphMetricsPlusBits;
}
