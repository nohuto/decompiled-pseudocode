/*
 * XREFs of ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C000E018
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C000DBEC (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C000B238 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C000B310 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z @ 0x1C000BA28 (-cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0011220 (EngUnmapFontFileFD.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C029532C (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

__int64 __fastcall bComputeGISET(struct _IFIMETRICS *a1, struct PFE *a2, struct _GISET **a3)
{
  unsigned int v3; // ebx
  struct _GISET **v4; // r12
  unsigned int v6; // ebp
  struct _FD_GLYPHSET *v7; // rdi
  char v8; // r14
  PTRDIFF dpwszFamilyName; // esi
  __int64 v10; // rax
  _WORD *v12; // rcx
  HGLYPH *phg; // rdx
  ULONG v14; // r8d
  int v15; // r15d
  struct _GISET *v16; // rax
  struct _GISET *v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  void *j; // r14
  __int64 cGlyphs; // r9
  HGLYPH *v22; // r9
  __int64 v23; // r15
  unsigned int v24; // r12d
  unsigned int i; // esi
  WCHAR wcLow; // ax
  WCHAR v27; // dx
  __int64 v28; // [rsp+20h] [rbp-68h] BYREF
  __int64 v29; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-48h]
  __int64 *v31; // [rsp+98h] [rbp+10h] BYREF
  struct _GISET **v32; // [rsp+A0h] [rbp+18h]

  v32 = a3;
  v3 = 0;
  v31 = (__int64 *)a2;
  *a3 = 0LL;
  v4 = a3;
  v28 = *(_QWORD *)a2;
  v6 = 1;
  v7 = 0LL;
  if ( *(_QWORD *)(v28 + 88) != qword_1C033BDF8 || *(_DWORD *)(*(_QWORD *)(v28 + 80) + 8LL) )
  {
    v8 = 0;
    v7 = PFEOBJ::pfdg(&v31);
    if ( !v7 )
    {
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)&v29,
        (struct PFFOBJ *)&v28);
      v23 = v29;
      v24 = v30;
      if ( v30 == *(_DWORD *)(v29 + 36) )
        v7 = PFEOBJ::pfdg(&v31);
      for ( i = 0; i < v24; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v23 + 200) + 8LL * i++)) )
      {
        if ( i >= *(_DWORD *)(v23 + 36) )
          break;
      }
      if ( !v7 )
        return v3;
      v4 = v32;
    }
    if ( (v7->flAccel & 6) == 0 )
    {
LABEL_20:
      PFEOBJ::vFreepfdg(&v31);
      return v6;
    }
  }
  else
  {
    v8 = 1;
  }
  dpwszFamilyName = 0;
  if ( a1->cjIfiExtra > 8 )
    dpwszFamilyName = a1[1].dpwszFamilyName;
  if ( !v8 )
  {
    if ( dpwszFamilyName )
    {
LABEL_8:
      v10 = Win32AllocPoolZInit(12LL, 1936484167LL);
      if ( v10 )
      {
        *(_DWORD *)v10 = dpwszFamilyName;
        *(_DWORD *)(v10 + 4) = 1;
        *(_WORD *)(v10 + 8) = 0;
        *(_WORD *)(v10 + 10) = dpwszFamilyName;
        *v4 = (struct _GISET *)v10;
      }
      else
      {
        v6 = 0;
      }
      if ( v8 )
        return v6;
      goto LABEL_20;
    }
    v18 = 2LL * v7->cGlyphsSupported;
    if ( v18 <= 0xFFFFFFFF
      && (v6 = 1, (_DWORD)v18)
      && (v19 = Win32AllocPoolZInit((unsigned int)v18, 1936484167LL), (v12 = (_WORD *)v19) != 0LL) )
    {
      v14 = 0;
      for ( j = (void *)v19; v14 < v7->cRuns; ++v14 )
      {
        phg = v7->awcrun[v14].phg;
        cGlyphs = v7->awcrun[v14].cGlyphs;
        if ( phg )
        {
          v22 = &phg[cGlyphs];
          while ( phg < v22 )
            *v12++ = *(_WORD *)phg++;
        }
        else
        {
          if ( !(_WORD)cGlyphs )
            goto LABEL_45;
          wcLow = v7->awcrun[v14].wcLow;
          v27 = cGlyphs + wcLow - 1;
          while ( wcLow <= v27 )
            *v12 = wcLow++;
        }
      }
      qsort(j, v7->cGlyphsSupported, 2uLL, CompareRoutine);
      v15 = cComputeGISET((const unsigned __int16 *)j, v7->cGlyphsSupported, 0LL, 0);
      if ( 4 * v15 == -8
        || (v16 = (struct _GISET *)Win32AllocPoolZInit((unsigned int)(4 * v15 + 8), 1936484167LL), (v17 = v16) == 0LL) )
      {
LABEL_45:
        v6 = 0;
      }
      else
      {
        cComputeGISET((const unsigned __int16 *)j, v7->cGlyphsSupported, v16, v15);
        *v4 = v17;
      }
      Win32FreePool(j);
    }
    else
    {
      v6 = 0;
    }
    goto LABEL_20;
  }
  if ( dpwszFamilyName )
    goto LABEL_8;
  return v3;
}
