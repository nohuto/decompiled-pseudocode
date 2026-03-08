/*
 * XREFs of ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02C27CC
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C00AB7D0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C012FEE8 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0288C60 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0288DC0 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C029B638 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C02A2214 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02BD080 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02BE5A0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02BECE0 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02C0B90 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C02C1EEC (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02C238C (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     NtGdiEngTextOut @ 0x1C02CE030 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02CE7E0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02CEA40 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02CEB90 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02CECD0 (NtGdiFONTOBJ_pifi.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1C02C2DC4 (-bAllocFontLinks@UMPDOBJ@@QEAAHI@Z.c)
 */

__int64 __fastcall UMPDReleaseRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5)
{
  unsigned int *v6; // rdi
  void **v9; // r15
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbp
  char *v21; // r14
  unsigned int v22; // r15d
  __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx

  v6 = a3;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( a2 )
  {
    if ( !a3 && !a4 )
    {
      v9 = a5;
      if ( !a5 )
      {
        v10 = 1;
        goto LABEL_11;
      }
    }
    return 0LL;
  }
  if ( !a3 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v9 = a5;
  if ( !a5 )
    return 0LL;
  v10 = 0;
  *a3 = 0;
  *a4 = 0;
LABEL_11:
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 848LL);
  if ( !v11 )
    goto LABEL_56;
  GreAcquireSemaphore(v11);
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 720LL);
  if ( v14 )
  {
    v15 = *(_QWORD *)(v14 + 504);
    if ( v15 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v15) )
      {
        EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->prfntSystemTT->hsemCache");
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 720LL) + 504LL));
        if ( v10 )
          *((_DWORD *)a2 + 103) |= 0x20u;
        else
          *v6 |= 0x20u;
      }
    }
  }
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
  if ( v16 )
  {
    v17 = *(_QWORD *)(v16 + 504);
    if ( v17 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v17) )
      {
        EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->prfntSysEUDC->hsemCache");
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 504LL));
        if ( v10 )
          *((_DWORD *)a2 + 103) |= 0x40u;
        else
          *v6 |= 0x40u;
      }
    }
  }
  v18 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
  if ( v18 )
  {
    v19 = *(_QWORD *)(v18 + 504);
    if ( v19 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v19) )
      {
        EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->prfntDefEUDC->hsemCache");
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 504LL));
        if ( v10 )
          *((_DWORD *)a2 + 103) |= 0x80u;
        else
          *v6 |= 0x80u;
      }
    }
  }
  v20 = *(unsigned int *)(*(_QWORD *)a1 + 840LL);
  if ( (_DWORD)v20 )
  {
    if ( v10 )
    {
      v21 = 0LL;
      if ( !(unsigned int)UMPDOBJ::bAllocFontLinks(a2, v20) )
        goto LABEL_55;
    }
    else
    {
      if ( (unsigned int)v20 <= 0xA )
      {
        v21 = (char *)*v9;
      }
      else if ( 4 * (_DWORD)v20 )
      {
        v21 = (char *)Win32AllocPool((unsigned int)(4 * v20), 1886221639LL, v12, v13);
      }
      else
      {
        v21 = 0LL;
      }
      *v9 = v21;
      if ( !v21 )
        goto LABEL_54;
      *a4 = v20;
      memset_0(v21, 0, 4 * v20);
    }
    v22 = 0;
    v23 = 0LL;
    v24 = 0LL;
    do
    {
      v25 = *(_QWORD *)(v24 + *(_QWORD *)(*(_QWORD *)a1 + 744LL));
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 504);
        if ( v26 )
        {
          if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v26) )
          {
            EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->paprfntFaceName[ii]->hsemCache");
            GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + v24) + 504LL));
            if ( v10 )
            {
              if ( v22 < *((_DWORD *)a2 + 104) )
              {
                v27 = *((_QWORD *)a2 + 48);
                if ( v27 )
                  *(_DWORD *)(v27 + v23) = 1;
              }
            }
            else
            {
              *(_DWORD *)&v21[v23] = 1;
            }
          }
        }
      }
      ++v22;
      v24 += 8LL;
      v23 += 4LL;
    }
    while ( v22 < (unsigned int)v20 );
    v6 = a3;
  }
  if ( !v10 )
  {
LABEL_54:
    *v6 |= *(_DWORD *)(*(_QWORD *)a1 + 712LL) << 16;
    *(_DWORD *)(*(_QWORD *)a1 + 712LL) |= 0x200u;
  }
LABEL_55:
  EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 848LL));
LABEL_56:
  v28 = *(_QWORD *)(*(_QWORD *)a1 + 504LL);
  if ( v28 && (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v28) )
  {
    EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemCache");
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 504LL));
    if ( v10 )
      *((_DWORD *)a2 + 103) |= 0x10u;
    else
      *v6 |= 0x10u;
  }
  return 1LL;
}
