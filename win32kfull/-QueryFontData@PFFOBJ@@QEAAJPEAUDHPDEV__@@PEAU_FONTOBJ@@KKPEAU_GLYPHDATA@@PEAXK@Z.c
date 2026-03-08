/*
 * XREFs of ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0122090
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C011DA70 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C011E244 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0123010 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0123228 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0123E18 (-GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RF.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C0151CF0 (xInsertMetricsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02FF64C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02FF7F8 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02FF940 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02FFB54 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C011E5E4 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C011FE34 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z @ 0x1C013077C (-ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z.c)
 *     Feature_2942477631__private_IsEnabledDeviceUsage @ 0x1C0130834 (Feature_2942477631__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _BYTE v15[16]; // [rsp+40h] [rbp-28h] BYREF

  v11 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 2888LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v15, this);
  if ( (unsigned int)Feature_2942477631__private_IsEnabledDeviceUsage(v12) )
  {
    v13 = v11(a2, a3, a4, a5, a6, a7, a8);
    if ( !ValidateGlyphDataAndBitmap(v13, a3, a4, a6, a7) )
      v13 = -1;
  }
  else
  {
    v13 = v11(a2, a3, a4, a5, a6, a7, a8);
  }
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v15);
  return v13;
}
