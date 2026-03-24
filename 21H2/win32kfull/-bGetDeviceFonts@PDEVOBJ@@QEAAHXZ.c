/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C013043C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetTextFaceW @ 0x1C0097620 (GreGetTextFaceW.c)
 *     GreGetCharSet @ 0x1C009B770 (GreGetCharSet.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009BA88 (GreGetOutlineTextMetricsInternalW.c)
 *     GreEnumFonts @ 0x1C00BAA0C (GreEnumFonts.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C028B274 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C016AB44 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 */

__int64 __fastcall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  unsigned int v2; // eax
  struct PFT *v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = PDEVOBJ::cFonts(this);
  if ( v2 )
  {
    v4 = gpPFTDevice;
    DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)&v4, this, v2);
  }
  return 1LL;
}
