/*
 * XREFs of ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0018C7C
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0015418 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0015648 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C0018B7C (xInsertGlyphbitsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C0018FE0 (xInsertMetricsPlusRFONTOBJ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00196F4 (GreGetGlyphOutlineInternal.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0141258 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D464C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02D47E4 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02D4914 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C001AEC4 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C001AEF0 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z @ 0x1C015FF14 (-ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryFontData(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        void *a7,
        unsigned int a8)
{
  __int64 (__fastcall *v11)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int); // rbx
  unsigned int v12; // ebx
  _BYTE v14[16]; // [rsp+40h] [rbp-28h] BYREF

  v11 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 2888LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v14, this);
  v12 = v11(a2, a3, a4, a5, a6, a7, a8);
  if ( !ValidateGlyphDataAndBitmap(v12, a3, a4, a6, a7) )
    v12 = -1;
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v14);
  return v12;
}
