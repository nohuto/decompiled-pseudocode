/*
 * XREFs of ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C0115D54
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01157C4 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     ?cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z @ 0x1C0113274 (-cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z.c)
 *     EngUnmapFontFileFD @ 0x1C011CB40 (EngUnmapFontFileFD.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0122194 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0122298 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C02A0ACC (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

__int64 __fastcall bComputeGISET(struct _IFIMETRICS *a1, struct PFE *a2, struct _GISET **a3)
{
  unsigned int v5; // esi
  struct _FD_GLYPHSET *v6; // rbx
  char v7; // r12
  PTRDIFF dpwszFamilyName; // edi
  __int64 v9; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  _WORD *v13; // rdx
  ULONG v14; // r8d
  void *j; // rbp
  HGLYPH *phg; // rcx
  __int64 cGlyphs; // r9
  HGLYPH *v18; // r9
  int v19; // r14d
  struct _GISET *v20; // rax
  struct _GISET *v21; // rdi
  __int64 v22; // rbp
  unsigned int v23; // r14d
  unsigned int i; // edi
  WCHAR wcLow; // ax
  WCHAR v26; // cx
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-38h]
  struct PFE *v30; // [rsp+88h] [rbp+10h] BYREF

  v30 = a2;
  *a3 = 0LL;
  v27 = *(_QWORD *)a2;
  v5 = 1;
  v6 = 0LL;
  if ( *(_QWORD *)(v27 + 88) != *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 23448LL)
    || *(_DWORD *)(*(_QWORD *)(v27 + 80) + 8LL) )
  {
    v7 = 0;
    v6 = PFEOBJ::pfdg((PFEOBJ *)&v30);
    if ( !v6 )
    {
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)&v28,
        (struct PFFOBJ *)&v27);
      v22 = v28;
      v23 = v29;
      if ( v29 == *(_DWORD *)(v28 + 36) )
        v6 = PFEOBJ::pfdg((PFEOBJ *)&v30);
      for ( i = 0; i < v23; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v22 + 200) + 8LL * i++)) )
      {
        if ( i >= *(_DWORD *)(v22 + 36) )
          break;
      }
      if ( !v6 )
        return 0LL;
    }
    if ( (v6->flAccel & 6) == 0 )
      goto LABEL_28;
  }
  else
  {
    v7 = 1;
  }
  dpwszFamilyName = 0;
  if ( a1->cjIfiExtra > 8 )
    dpwszFamilyName = a1[1].dpwszFamilyName;
  if ( !v7 )
  {
    if ( !dpwszFamilyName )
    {
      v11 = 2LL * v6->cGlyphsSupported;
      if ( v11 <= 0xFFFFFFFF )
      {
        v5 = 1;
        if ( (_DWORD)v11 )
        {
          v12 = Win32AllocPoolZInit((unsigned int)v11, 1936484167LL);
          v13 = (_WORD *)v12;
          if ( v12 )
          {
            v14 = 0;
            for ( j = (void *)v12; v14 < v6->cRuns; ++v14 )
            {
              phg = v6->awcrun[v14].phg;
              cGlyphs = v6->awcrun[v14].cGlyphs;
              if ( phg )
              {
                v18 = &phg[cGlyphs];
                while ( phg < v18 )
                  *v13++ = *(_WORD *)phg++;
              }
              else
              {
                if ( !(_WORD)cGlyphs )
                  goto LABEL_42;
                wcLow = v6->awcrun[v14].wcLow;
                v26 = cGlyphs + wcLow - 1;
                while ( wcLow <= v26 )
                  *v13 = wcLow++;
              }
            }
            qsort(j, v6->cGlyphsSupported, 2uLL, CompareRoutine);
            v19 = cComputeGISET((const unsigned __int16 *)j, v6->cGlyphsSupported, 0LL, 0);
            if ( 4 * v19 == -8
              || (v20 = (struct _GISET *)Win32AllocPoolZInit((unsigned int)(4 * v19 + 8), 1936484167LL),
                  (v21 = v20) == 0LL) )
            {
LABEL_42:
              v5 = 0;
            }
            else
            {
              cComputeGISET((const unsigned __int16 *)j, v6->cGlyphsSupported, v20, v19);
              *a3 = v21;
            }
            Win32FreePool(j);
LABEL_10:
            if ( v7 )
              return v5;
LABEL_28:
            PFEOBJ::vFreepfdg((PFEOBJ *)&v30);
            return v5;
          }
        }
      }
LABEL_43:
      v5 = 0;
      goto LABEL_10;
    }
LABEL_8:
    v9 = Win32AllocPoolZInit(12LL, 1936484167LL);
    if ( v9 )
    {
      *(_DWORD *)v9 = dpwszFamilyName;
      *(_DWORD *)(v9 + 4) = 1;
      *(_WORD *)(v9 + 8) = 0;
      *(_WORD *)(v9 + 10) = dpwszFamilyName;
      *a3 = (struct _GISET *)v9;
      goto LABEL_10;
    }
    goto LABEL_43;
  }
  if ( dpwszFamilyName )
    goto LABEL_8;
  return 0LL;
}
