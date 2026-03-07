BOOL __stdcall STROBJ_bEnum(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  int pwszOrg; // eax
  ULONG cGlyphs; // edx
  __int64 v9; // rax
  BOOL v10; // edi
  unsigned int v11; // edx
  struct _GLYPHPOS *v12; // rbp
  RFONTOBJ *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx

  pwszOrg = (int)pstro[4].pwszOrg;
  if ( (pwszOrg & 0x1400) != 0 )
    return STROBJ_bEnumLinked((struct ESTROBJ *)pstro, pc, ppgpos);
  cGlyphs = pstro->cGlyphs;
  if ( (pwszOrg & 2) != 0 )
  {
    *pc = cGlyphs;
    *ppgpos = *(PGLYPHPOS *)&pstro[1].rclBkGround.top;
    return 0;
  }
  v9 = pstro[1].cGlyphs;
  v10 = 0;
  v11 = cGlyphs - v9;
  if ( !v11
    || (v12 = (struct _GLYPHPOS *)(*(_QWORD *)&pstro[1].rclBkGround.top + 24 * v9),
        (v13 = *(RFONTOBJ **)&pstro[1].ulCharInc) == 0LL)
    || ((*(_DWORD *)(*(_QWORD *)v13 + 84LL) & 1) == 0
      ? (LODWORD(v14) = RFONTOBJ::cGetGlyphDataCache(v13, v11, v12))
      : (v14 = (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(v13, v12, *(_DWORD *)(*(_QWORD *)v13 + 88LL)) != 0),
        !(_DWORD)v14) )
  {
    *pc = 0;
    return 0;
  }
  v15 = pstro[1].cGlyphs;
  if ( (_DWORD)v15 )
  {
    if ( pstro->ulCharInc )
      vGetPosInfo(pstro, v15, &v12->ptl);
  }
  pstro[1].cGlyphs += v14;
  *pc = v14;
  *ppgpos = v12;
  LOBYTE(v10) = pstro[1].cGlyphs < pstro->cGlyphs;
  return v10;
}
