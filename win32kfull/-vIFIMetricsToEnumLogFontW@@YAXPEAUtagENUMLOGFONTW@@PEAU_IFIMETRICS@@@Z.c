/*
 * XREFs of ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x1C01122D8
 * Callers:
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C00045C8 (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00BA744 (vIFIMetricsToEnumLogFontExDvW.c)
 * Callees:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C0115CEC (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 */

void __fastcall vIFIMetricsToEnumLogFontW(struct tagENUMLOGFONTW *a1, struct _IFIMETRICS *a2)
{
  LONG v4; // r8d
  ULONG flInfo; // eax
  BYTE v6; // cl
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2->fwdWinAscender + a2->fwdWinDescender;
  v7[0] = a2;
  a1->elfLogFont.lfHeight = v4;
  a1->elfLogFont.lfWidth = a2->fwdAveCharWidth;
  a1->elfLogFont.lfWeight = a2->usWinWeight;
  a1->elfLogFont.lfItalic = -((a2->fsSelection & 1) != 0);
  a1->elfLogFont.lfUnderline = a2->fsSelection & 2;
  a1->elfLogFont.lfStrikeOut = a2->fsSelection & 0x10;
  a1->elfLogFont.lfCharSet = a2->jWinCharSet;
  a1->elfLogFont.lfEscapement = IFIOBJ::lfOrientation((IFIOBJ *)v7);
  a1->elfLogFont.lfOrientation = IFIOBJ::lfOrientation((IFIOBJ *)v7);
  a1->elfLogFont.lfPitchAndFamily = a2->jWinPitchAndFamily;
  flInfo = a2->flInfo;
  if ( (flInfo & 1) != 0 )
  {
    v6 = 3;
  }
  else if ( (flInfo & 2) != 0 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 3;
    if ( (flInfo & 4) == 0 )
      v6 = (flInfo & 8) != 0 ? 3 : 0;
  }
  a1->elfLogFont.lfOutPrecision = v6;
  *(_WORD *)&a1->elfLogFont.lfClipPrecision = 258;
  wcsncpy_s(a1->elfLogFont.lfFaceName, 0x20uLL, (const wchar_t *)((char *)a2 + a2->dpwszFamilyName), 0x1FuLL);
  a1->elfLogFont.lfFaceName[31] = 0;
  wcsncpy_s(a1->elfFullName, 0x40uLL, (const wchar_t *)((char *)a2 + a2->dpwszFaceName), 0x3FuLL);
  a1->elfFullName[63] = 0;
  wcsncpy_s(a1->elfStyle, 0x20uLL, (const wchar_t *)((char *)a2 + a2->dpwszStyleName), 0x1FuLL);
  a1->elfStyle[31] = 0;
}
