/*
 * XREFs of ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C010E3E4
 * Callers:
 *     ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C01124D0 (-vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 * Callees:
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C01103E8 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 */

void __fastcall vIFIMetricsToTextMetricW(
        struct RFONTOBJ *a1,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  __int64 v7; // rax

  vIFIMetricsToTextMetricWStrict(a1, a2, a3, a4);
  LOBYTE(a3[1].tmAscent) = a4->chFirstChar;
  BYTE1(a3[1].tmAscent) = a4->chLastChar;
  BYTE2(a3[1].tmAscent) = a4->chDefaultChar;
  HIBYTE(a3[1].tmAscent) = a4->chBreakChar;
  v7 = Win32AllocPoolZInit(68LL, 2003661895LL);
  if ( v7 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 688LL) = v7;
    *(_OWORD *)v7 = *(_OWORD *)&a3->tmHeight;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)&a3->tmExternalLeading;
    *(_OWORD *)(v7 + 32) = *(_OWORD *)&a3->tmOverhang;
    *(_OWORD *)(v7 + 48) = *(_OWORD *)&a3->tmDefaultChar;
    *(_DWORD *)(v7 + 64) = a3[1].tmAscent;
  }
}
