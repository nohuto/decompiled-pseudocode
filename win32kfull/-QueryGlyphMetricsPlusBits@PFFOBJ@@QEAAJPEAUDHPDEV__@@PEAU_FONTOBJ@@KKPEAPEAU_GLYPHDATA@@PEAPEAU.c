/*
 * XREFs of ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C011E4D4
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C011DA70 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C011E244 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02FF64C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C011E5E4 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C011E69C (UmfdQueryGlyphMetricsPlusBits.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C011FE34 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z @ 0x1C013077C (-ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z.c)
 *     Feature_2942477631__private_IsEnabledDeviceUsage @ 0x1C0130834 (Feature_2942477631__private_IsEnabledDeviceUsage.c)
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
  int v9; // r15d
  __int64 v11; // rbx
  unsigned int GlyphMetricsPlusBits; // edi
  struct _GLYPHDATA *v14; // r9
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF

  v9 = (int)a2;
  v11 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  if ( v11 != *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 23448LL) )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v15, this);
  if ( (unsigned int)Feature_2942477631__private_IsEnabledDeviceUsage() )
  {
    GlyphMetricsPlusBits = UmfdQueryGlyphMetricsPlusBits(v9, (_DWORD)a3, a4, a5, (__int64)a6, (__int64)a7);
    if ( a6 )
      v14 = *a6;
    else
      v14 = 0LL;
    if ( !ValidateGlyphDataAndBitmap(GlyphMetricsPlusBits, a3, 1u, v14, *a7) )
      GlyphMetricsPlusBits = -1;
  }
  else
  {
    GlyphMetricsPlusBits = UmfdQueryGlyphMetricsPlusBits(v9, (_DWORD)a3, a4, a5, (__int64)a6, (__int64)a7);
  }
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v15);
  return GlyphMetricsPlusBits;
}
