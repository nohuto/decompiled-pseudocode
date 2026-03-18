/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00BDC38
 * Callers:
 *     GreEnumFonts @ 0x1C0003CEC (GreEnumFonts.c)
 *     GreGetCharSet @ 0x1C0076CB8 (GreGetCharSet.c)
 *     ?GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0081368 (-GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4Entry.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     GreGetTextFaceW @ 0x1C0110B2C (GreGetTextFaceW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C028E30C (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C00A8438 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C013E7D4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 */

__int64 __fastcall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  unsigned int v2; // edi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = PDEVOBJ::cFonts(this);
  if ( v2 )
  {
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v4);
    DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)v4, this, v2);
  }
  return 1LL;
}
