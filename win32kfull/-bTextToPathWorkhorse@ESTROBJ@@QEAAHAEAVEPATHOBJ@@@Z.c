__int64 __fastcall ESTROBJ::bTextToPathWorkhorse(STROBJ *pstro, struct EPATHOBJ *a2)
{
  unsigned int v2; // ebx
  PGLYPHPOS v4; // r14
  ULONG ulCharInc; // r12d
  FIX x; // ecx
  FIX y; // edx
  int v8; // r12d
  ULONG v9; // edi
  unsigned int GlyphDataCache; // esi
  RFONTOBJ *v11; // rcx
  unsigned int v12; // r13d
  EPATHOBJ *v13; // rdi
  FIX v14; // ecx
  FIX v15; // edx
  bool v16; // zf
  struct _POINTFIX v18; // [rsp+20h] [rbp-18h] BYREF
  PGLYPHPOS ppgpos; // [rsp+28h] [rbp-10h] BYREF
  ULONG pc; // [rsp+80h] [rbp+48h] BYREF
  struct EPATHOBJ *v21; // [rsp+88h] [rbp+50h]
  ULONG v22; // [rsp+90h] [rbp+58h]
  BOOL v23; // [rsp+98h] [rbp+60h]

  v21 = a2;
  v2 = 0;
  pc = 0;
  v18 = 0LL;
  ppgpos = 0LL;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  do
  {
    v23 = STROBJ_bEnum(pstro, &pc, &ppgpos);
    if ( !pc )
      break;
    v4 = ppgpos;
    if ( !ppgpos )
      break;
    ulCharInc = pstro->ulCharInc;
    if ( ulCharInc )
    {
      v16 = ((__int64)pstro[4].pwszOrg & 0x100) == 0;
      x = ppgpos->ptl.x;
      v18.x = x;
      y = ppgpos->ptl.y;
      v18.y = y;
      if ( v16 )
      {
        v18.y = 16 * y;
        v18.x = 16 * x;
      }
      v8 = 16 * ulCharInc;
      v18.x -= v8;
    }
    else
    {
      v8 = 0;
    }
    v9 = pc;
    GlyphDataCache = pc;
    v22 = pc;
    do
    {
      if ( ((__int64)pstro[4].pwszOrg & 2) == 0 )
      {
        v11 = *(RFONTOBJ **)&pstro[1].ulCharInc;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 84LL) & 1) != 0 )
          GlyphDataCache = v9
                        && (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(
                                           v11,
                                           v4,
                                           *(_DWORD *)(*(_QWORD *)v11 + 88LL)) != 0;
        else
          GlyphDataCache = RFONTOBJ::cGetGlyphDataCache(v11, v9, v4);
        if ( !GlyphDataCache )
          break;
      }
      v12 = 0;
      if ( GlyphDataCache )
      {
        v13 = v21;
        do
        {
          if ( v8 )
          {
            v18.x += v8;
          }
          else
          {
            v16 = ((__int64)pstro[4].pwszOrg & 0x100) == 0;
            v14 = v4->ptl.x;
            v18.x = v14;
            v15 = v4->ptl.y;
            v18.y = v15;
            if ( v16 )
            {
              v18.y = 16 * v15;
              v18.x = 16 * v14;
            }
          }
          if ( !EPATHOBJ::bAppend(v13, (struct EPATHOBJ *)v4->pgdf->pgb, &v18) )
            break;
          ++v12;
          ++v4;
        }
        while ( v12 < GlyphDataCache );
        v9 = v22;
        ppgpos = v4;
        if ( v12 < GlyphDataCache )
          break;
      }
      v9 -= GlyphDataCache;
      v22 = v9;
    }
    while ( v9 );
    v16 = v9 == 0;
    if ( v9 )
      goto LABEL_30;
  }
  while ( v23 );
  v16 = 1;
LABEL_30:
  LOBYTE(v2) = v16;
  return v2;
}
