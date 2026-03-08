/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00F5628
 * Callers:
 *     GreEnumFonts @ 0x1C00037BC (GreEnumFonts.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     GreGetCharSet @ 0x1C0111B08 (GreGetCharSet.c)
 *     ?GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0111D54 (-GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4Entry.c)
 *     GreGetTextFaceW @ 0x1C011A714 (GreGetTextFaceW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0290B74 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C00DF170 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C026D824 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  __int64 v1; // r8
  signed __int32 v3; // ett
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
  do
    v3 = *(_DWORD *)(v1 + 40);
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 40), v3 | 0x40, v3) );
  PDEVOBJ::cFonts(this);
  if ( *(_DWORD *)(*(_QWORD *)this + 2072LL) )
  {
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v5);
    if ( !(unsigned int)DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)v5, this) )
      *(_DWORD *)(*(_QWORD *)this + 2072LL) = 0;
  }
  return 1LL;
}
