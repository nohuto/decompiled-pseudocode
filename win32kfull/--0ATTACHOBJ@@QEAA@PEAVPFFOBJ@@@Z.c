/*
 * XREFs of ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C011E5E4
 * Callers:
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C011E4D4 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C01205AC (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C01211B4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0122090 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C01223D8 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02E2F94 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C02E3048 (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02E3190 (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C02E31FC (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C01150C4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0309288 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

ATTACHOBJ *__fastcall ATTACHOBJ::ATTACHOBJ(ATTACHOBJ *this, struct PFFOBJ *a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rcx
  struct _FONTFILEVIEW **v7; // r10
  struct _FONTFILEVIEW *v8; // rdx
  int v9; // eax
  unsigned int v11[2]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]
  void *v13[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 88LL) + 40LL) & 0x2000) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 36);
    if ( v5 <= 3 )
    {
      if ( (*(_DWORD *)(v4 + 52) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 52LL) & 0x2000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v6 = 0LL;
      if ( v5 )
      {
        v7 = *(struct _FONTFILEVIEW ***)(*(_QWORD *)a2 + 200LL);
        while ( 1 )
        {
          v8 = v7[v6];
          v9 = *((_DWORD *)v8 + 10);
          if ( (v9 & 0x10) == 0 && (v9 & 8) != 0 && !*((_QWORD *)v8 + 6) )
            break;
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= v5 )
            return this;
        }
        v14 = 0LL;
        *(_QWORD *)v11 = 0LL;
        v12 = 0;
        *(_OWORD *)v13 = 0LL;
        if ( MapFontFiles(v5, v7, v13, v11) )
        {
          *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 200LL);
          *((_DWORD *)this + 2) = v5;
        }
      }
    }
  }
  return this;
}
