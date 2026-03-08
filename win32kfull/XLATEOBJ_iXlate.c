/*
 * XREFs of XLATEOBJ_iXlate @ 0x1C00C3AA0
 * Callers:
 *     ?vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z @ 0x1C00C4DE0 (-vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C012A3C0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0150380 (-pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C01508F0 (-vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0151EE0 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1C02988C0 (-vTransparentCopy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02990B0 (-vTransparentCopyS16D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0299480 (-vTransparentCopyS24D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02998F0 (-vTransparentCopyS32D8@@YAXPEAUBLTINFO@@@Z.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02D0330 (NtGdiXLATEOBJ_iXlate.c)
 *     ?pxrlStrRead16@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E3DB0 (-pxrlStrRead16@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead16AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E4030 (-pxrlStrRead16AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead16OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E4150 (-pxrlStrRead16OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E4270 (-pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead24AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E44F0 (-pxrlStrRead24AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead24OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E4630 (-pxrlStrRead24OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead32@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E4770 (-pxrlStrRead32@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead32OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E49F0 (-pxrlStrRead32OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02E6640 (-vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRAToRGB16Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02E6820 (-vConvertAndSaveBGRAToRGB16Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vLoadAndConvert16BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02E69F0 (-vLoadAndConvert16BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z.c)
 *     ?vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02E6C90 (-vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z.c)
 *     ?vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02EAF50 (-vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02EB4D0 (-vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02EB860 (-vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02EBFA0 (-vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02EC1A0 (-vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02EEF50 (-vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02EF4D0 (-vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0302050 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0302400 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D4254 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C014F514 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C02DA6D8 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C02DE240 (-XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z.c)
 */

ULONG __stdcall XLATEOBJ_iXlate(XLATEOBJ *pxlo, ULONG iColor)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rsi
  FLONG flXlate; // ecx
  ULONG result; // eax
  ULONG cEntries; // ecx
  ULONG *v8; // r14
  int v9; // ebp
  const unsigned __int8 *RGBXlate; // rax
  struct tagPALETTEENTRY v11; // eax
  unsigned int NearestFromPalentryNoExactMatchFirst; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  ULONG *pulXlate; // [rsp+40h] [rbp+8h] BYREF

  v4 = Gre::Base::Globals((Gre::Base *)pxlo);
  if ( !pxlo )
    return iColor;
  flXlate = pxlo->flXlate;
  if ( (flXlate & 1) != 0 )
    return iColor;
  if ( (flXlate & 2) != 0 )
  {
    cEntries = pxlo->cEntries;
    if ( iColor > cEntries )
      iColor %= cEntries;
    return *(&pxlo[3].cEntries + iColor);
  }
  else if ( (flXlate & 4) != 0 )
  {
    return iColor == pxlo[3].cEntries;
  }
  else
  {
    if ( (pxlo[3].flXlate & 0x800) != 0 )
      v8 = *(ULONG **)&pxlo[2].iSrcType;
    else
      v8 = *(ULONG **)&pxlo[2].iUniq;
    v9 = bUMPDSecurityGateEx();
    if ( v9 && (!v8 || !*(_QWORD *)&pxlo[2].iSrcType) )
      return 0;
    if ( (v8[6] & 1) != 0 && *(_DWORD *)(*(_QWORD *)&pxlo[2].iSrcType + 28LL) == 256 )
    {
      pulXlate = v8;
      RGBXlate = XEPALOBJ::pGetRGBXlate((XEPALOBJ *)&pulXlate);
      if ( !RGBXlate )
        return 0;
      return XLATEOBJ_ulIndexToPalSurf(pxlo, RGBXlate, iColor);
    }
    else
    {
      if ( v9 && !pxlo[1].pulXlate )
        return 0;
      pulXlate = pxlo[1].pulXlate;
      v11 = (struct tagPALETTEENTRY)XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, iColor);
      if ( (pxlo[3].flXlate & 0x800) != 0 )
      {
        if ( v9 && !*(_QWORD *)&pxlo[2].iSrcType )
          return 0;
        pulXlate = *(ULONG **)&pxlo[2].iSrcType;
        NearestFromPalentryNoExactMatchFirst = XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(
                                                 (XEPALOBJ *)&pulXlate,
                                                 v11);
        v13 = *(_QWORD *)&pxlo[2].iSrcType;
        v14 = NearestFromPalentryNoExactMatchFirst;
        if ( v13 == *((_QWORD *)v4 + 750) )
        {
          result = NearestFromPalentryNoExactMatchFirst + 236;
          if ( (unsigned int)v14 < 0xA )
            return v14;
        }
        else
        {
          if ( v9
            && ((*(_DWORD *)(v13 + 24) & 0x100) == 0 || NearestFromPalentryNoExactMatchFirst >= *(_DWORD *)(v13 + 28)) )
          {
            return 0;
          }
          if ( (pxlo[3].flXlate & 0x1000) != 0 )
            v15 = *(_QWORD *)(v13 + 80);
          else
            v15 = *(_QWORD *)(v13 + 72);
          return *(unsigned __int8 *)(v15 + v14 + 4);
        }
      }
      else
      {
        if ( v9 && !*(_QWORD *)&pxlo[2].iUniq )
          return 0;
        pulXlate = *(ULONG **)&pxlo[2].iUniq;
        return XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&pulXlate, v11, pulXlate[7] == 0);
      }
    }
  }
  return result;
}
