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
