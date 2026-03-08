/*
 * XREFs of ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x1C0110770
 * Callers:
 *     ?GreFontIsLinked@@YAHPEAUHDC__@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C00E3888 (-GreFontIsLinked@@YAHPEAUHDC__@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C010FC74 (cjIFIMetricsToOTMW.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C01103E8 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C02B59E4 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C02B5E2C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B740C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B7BC0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0110B94 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0110BD8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

IFIOBJR *__fastcall IFIOBJR::IFIOBJR(
        IFIOBJR *this,
        const struct _IFIMETRICS *a2,
        struct RFONTOBJ *a3,
        struct XDCOBJ *a4)
{
  int *v6; // rcx
  int v7; // r10d
  int v8; // r11d
  int v9; // edi
  __int16 v10; // cx
  int v11; // r9d
  int v12; // r10d
  int v13; // eax
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = a2;
  v6 = (int *)((char *)a2 + a2->dpFontSim);
  v7 = *(_DWORD *)(*(_QWORD *)a3 + 12LL) & 0x6000;
  switch ( v7 )
  {
    case 0:
      *((_BYTE *)this + 19) = a2->panose.bWeight;
      *((_WORD *)this + 10) = a2->usWinWeight;
      *((_WORD *)this + 11) = a2->fsSelection;
      *((_WORD *)this + 12) = a2->fwdAveCharWidth;
      *((_WORD *)this + 13) = a2->fwdMaxCharInc;
      *(POINTL *)((char *)this + 28) = a2->ptlCaret;
      goto LABEL_3;
    case 8192:
      if ( (a2->fsSelection & 1) == 0 )
      {
        v17 = *v6;
        goto LABEL_22;
      }
      break;
    case 16384:
      if ( (a2->fsSelection & 0x20) == 0 )
      {
        v17 = v6[1];
        goto LABEL_22;
      }
      break;
    case 24576:
      break;
    default:
      goto LABEL_3;
  }
  v17 = v6[2];
LABEL_22:
  *((_OWORD *)this + 1) = *(_OWORD *)((char *)v6 + v17);
  *((_DWORD *)this + 8) = *(int *)((char *)v6 + v17 + 16);
LABEL_3:
  v8 = *((__int16 *)this + 12);
  v9 = *((__int16 *)this + 13);
  *((_DWORD *)this + 10) = v8;
  *((_DWORD *)this + 9) = v9;
  v10 = a2->fwdMacAscender + a2->fwdMacLineGap - a2->fwdMacDescender - a2->fwdWinDescender - a2->fwdWinAscender;
  if ( v10 <= 0 )
    v10 = 0;
  v11 = v10;
  *((_DWORD *)this + 12) = v10;
  v12 = (__int16)(a2->fwdWinAscender + a2->fwdWinDescender - a2->fwdUnitsPerEm);
  *((_DWORD *)this + 11) = v12;
  if ( (a2->flInfo & 0x3000010) == 0 )
  {
    v15 = *(_DWORD *)(*(_QWORD *)a3 + 648LL);
    if ( v15 > 1 )
    {
      *((_DWORD *)this + 10) = v15 * v8;
      *((_DWORD *)this + 9) = v15 * v9;
    }
    v16 = *(_DWORD *)(*(_QWORD *)a3 + 652LL);
    if ( v16 > 1 )
    {
      *((_DWORD *)this + 12) = v16 * v11;
      *((_DWORD *)this + 11) = v16 * v12;
    }
  }
  if ( (a2->flInfo & 1) != 0 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)a4 + 48LL);
    *((_DWORD *)this + 13) = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18);
    v13 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18);
  }
  else
  {
    *((_DWORD *)this + 13) = a2->ptlAspect.y * *(_DWORD *)(*(_QWORD *)a3 + 652LL);
    v13 = a2->ptlAspect.x * *(_DWORD *)(*(_QWORD *)a3 + 648LL);
  }
  *((_DWORD *)this + 14) = v13;
  return this;
}
