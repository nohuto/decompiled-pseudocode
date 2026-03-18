/*
 * XREFs of XLATEOBJ_iXlate @ 0x1C00D5950
 * Callers:
 *     ?vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z @ 0x1C00DE4D0 (-vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0125440 (-vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0125670 (-pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z @ 0x1C01414F0 (-vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B64 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C01703B0 (-vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C01707E0 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1C028F8C0 (-vTransparentCopy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02900C0 (-vTransparentCopyS16D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02903A0 (-vTransparentCopyS24D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0290810 (-vTransparentCopyS32D8@@YAXPEAUBLTINFO@@@Z.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02B4370 (NtGdiXLATEOBJ_iXlate.c)
 *     ?pxrlStrRead16@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C1C30 (-pxrlStrRead16@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead16AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C1EB0 (-pxrlStrRead16AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead16OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C1FD0 (-pxrlStrRead16OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead24AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C20F0 (-pxrlStrRead24AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead24OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C2230 (-pxrlStrRead24OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead32@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C2370 (-pxrlStrRead32@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C25F0 (-pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead32OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C2710 (-pxrlStrRead32OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02C3D50 (-vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRAToRGB16Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02C3F30 (-vConvertAndSaveBGRAToRGB16Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vLoadAndConvert16BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02C4100 (-vLoadAndConvert16BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z.c)
 *     ?vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02C43A0 (-vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z.c)
 *     ?vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02C7EF0 (-vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02C8460 (-vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02C8800 (-vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02C8950 (-vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02CA8B0 (-vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D6CF0 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D7090 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C0141AF0 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C02BE520 (-XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z.c)
 */

ULONG __stdcall XLATEOBJ_iXlate(XLATEOBJ *pxlo, ULONG iColor)
{
  ULONG v2; // ebp
  FLONG flXlate; // eax
  ULONG *v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // edi
  struct tagPALETTEENTRY v11; // eax
  ULONG *v12; // rcx
  ULONG result; // eax
  ULONG cEntries; // ecx
  const unsigned __int8 *RGBXlate; // rax
  unsigned int NearestFromPalentryNoExactMatchFirst; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  ULONG *pulXlate; // [rsp+30h] [rbp+8h] BYREF

  v2 = iColor;
  if ( !pxlo )
    return iColor;
  flXlate = pxlo->flXlate;
  if ( (flXlate & 1) != 0 )
    return iColor;
  if ( (flXlate & 2) != 0 )
  {
    cEntries = pxlo->cEntries;
    if ( iColor > cEntries )
      v2 = iColor % cEntries;
    return *(&pxlo[3].cEntries + v2);
  }
  if ( (flXlate & 4) != 0 )
    return iColor == pxlo[3].cEntries;
  if ( (pxlo[3].flXlate & 0x800) != 0 )
    v5 = *(ULONG **)&pxlo[2].iSrcType;
  else
    v5 = *(ULONG **)&pxlo[2].iUniq;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v7 = *ThreadWin32Thread;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 40);
      if ( v8 != v7 + 40 )
      {
        v9 = v8 - 40;
        if ( v9 )
        {
          if ( (*(_DWORD *)(v9 + 412) & 0x100) != 0 && *(_DWORD *)(v9 + 420) )
          {
            v10 = 1;
            if ( v5 )
            {
              if ( *(_QWORD *)&pxlo[2].iSrcType )
                goto LABEL_15;
            }
            else if ( gfUMPDDebug )
            {
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:ppal == NULL\n",
                1678);
            }
            if ( !*(_QWORD *)&pxlo[2].iSrcType && gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDstDC == NULL\n",
                1683LL);
            return 0;
          }
        }
      }
    }
  }
  v10 = 0;
LABEL_15:
  if ( (v5[6] & 1) != 0 && *(_DWORD *)(*(_QWORD *)&pxlo[2].iSrcType + 28LL) == 256 )
  {
    pulXlate = v5;
    RGBXlate = XEPALOBJ::pGetRGBXlate((XEPALOBJ *)&pulXlate);
    if ( RGBXlate )
      return XLATEOBJ_ulIndexToPalSurf(pxlo, RGBXlate, v2);
    return 0;
  }
  if ( v10 && !pxlo[1].pulXlate )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalSrc == NULL\n",
        1705LL);
    return 0;
  }
  pulXlate = pxlo[1].pulXlate;
  v11 = (struct tagPALETTEENTRY)XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, v2);
  if ( (pxlo[3].flXlate & 0x800) != 0 )
  {
    if ( v10 && !*(_QWORD *)&pxlo[2].iSrcType )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDstDC == NULL\n",
          1719LL);
      return 0;
    }
    pulXlate = *(ULONG **)&pxlo[2].iSrcType;
    NearestFromPalentryNoExactMatchFirst = XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(
                                             (XEPALOBJ *)&pulXlate,
                                             v11);
    v17 = *(_QWORD *)&pxlo[2].iSrcType;
    v18 = NearestFromPalentryNoExactMatchFirst;
    if ( (struct PALETTE *)v17 == ppalDefault )
    {
      result = NearestFromPalentryNoExactMatchFirst + 236;
      if ( (unsigned int)v18 < 0xA )
        return v18;
    }
    else
    {
      if ( v10 )
      {
        if ( (*(_DWORD *)(v17 + 24) & 0x100) == 0 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDstDC->flPal & PAL_DC == 0\n",
              1744LL);
          return 0;
        }
        if ( NearestFromPalentryNoExactMatchFirst >= *(_DWORD *)(v17 + 28) )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:cIndex >= pxlo->ppalDstDC->cEntries\n",
              1750LL);
          return 0;
        }
      }
      if ( (pxlo[3].flXlate & 0x1000) != 0 )
        v19 = *(_QWORD *)(v17 + 80);
      else
        v19 = *(_QWORD *)(v17 + 72);
      return *(unsigned __int8 *)(v19 + v18 + 4);
    }
  }
  else
  {
    if ( v10 && !*(_QWORD *)&pxlo[2].iUniq )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDst == NULL\n",
          1771LL);
      return 0;
    }
    v12 = *(ULONG **)&pxlo[2].iUniq;
    pulXlate = v12;
    if ( v12[7] )
      return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&pulXlate, v11);
    else
      return XEPALOBJ::ulDispatchGFPEFunction(&pulXlate, v12[24], *(unsigned int *)&v11);
  }
  return result;
}
