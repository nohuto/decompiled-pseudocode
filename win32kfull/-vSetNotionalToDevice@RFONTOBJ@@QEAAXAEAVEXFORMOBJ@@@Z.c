/*
 * XREFs of ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C01207B8
 * Callers:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0111610 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C01225F4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C0124150 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C02B59E4 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vSetNotionalToDevice(RFONTOBJ *this, struct EXFORMOBJ *a2)
{
  int v4; // xmm1_4
  int v5; // xmm0_4
  int v6; // xmm2_4

  EXFORMOBJ::vRemoveTranslation(a2);
  v4 = *(_DWORD *)(*(_QWORD *)this + 368LL);
  v5 = *(_DWORD *)(*(_QWORD *)this + 364LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 372LL);
  **(_DWORD **)a2 = *(_DWORD *)(*(_QWORD *)this + 360LL);
  *(_DWORD *)(*(_QWORD *)a2 + 4LL) = v5;
  *(_DWORD *)(*(_QWORD *)a2 + 8LL) = v4;
  *(_DWORD *)(*(_QWORD *)a2 + 12LL) = v6;
  **(float **)a2 = **(float **)a2 * 16.0;
  *(float *)(*(_QWORD *)a2 + 4LL) = *(float *)(*(_QWORD *)a2 + 4LL) * 16.0;
  *(float *)(*(_QWORD *)a2 + 8LL) = *(float *)(*(_QWORD *)a2 + 8LL) * 16.0;
  *(float *)(*(_QWORD *)a2 + 12LL) = *(float *)(*(_QWORD *)a2 + 12LL) * 16.0;
  EXFORMOBJ::vComputeAccelFlags(a2, 8u);
}
