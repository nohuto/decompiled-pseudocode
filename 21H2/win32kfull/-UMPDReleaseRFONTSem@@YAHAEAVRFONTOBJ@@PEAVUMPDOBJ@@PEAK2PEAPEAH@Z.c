/*
 * XREFs of ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C013CB7C
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0005FCC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C01003A0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     NtGdiEngTextOut @ 0x1C013C110 (NtGdiEngTextOut.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C013C600 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C013C960 (NtGdiFONTOBJ_pifi.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C013CAB0 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C01405BC (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C016B9CC (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02866A0 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0286800 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A9FF0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02AB2A0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02ABA10 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B4A20 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B4C90 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02B4DE0 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1C02AD26C (-bAllocFontLinks@UMPDOBJ@@QEAAHI@Z.c)
 */

__int64 __fastcall UMPDReleaseRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5)
{
  __int64 v6; // rax
  unsigned int *v7; // rdi
  void **v10; // r14
  int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r14d
  char *v23; // r15
  unsigned int v24; // r14d
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  char *v30; // [rsp+60h] [rbp+8h]

  v30 = 0LL;
  v6 = *(_QWORD *)a1;
  v7 = a3;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( a2 )
  {
    if ( !a3 && !a4 )
    {
      v10 = a5;
      if ( !a5 )
      {
        v11 = 1;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
  if ( !a3 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v10 = a5;
  if ( !a5 )
    return 0LL;
  v11 = 0;
  *a3 = 0;
  *a4 = 0;
  v6 = *(_QWORD *)a1;
LABEL_7:
  v12 = *(_QWORD *)(v6 + 848);
  if ( !v12 )
    goto LABEL_14;
  GreAcquireSemaphore(v12);
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 720LL);
  if ( v13 )
  {
    v19 = *(_QWORD *)(v13 + 504);
    if ( v19 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v19) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntSystemTT->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 720LL) + 504LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 720LL) + 504LL));
        if ( v11 )
          *((_DWORD *)a2 + 103) |= 0x20u;
        else
          *v7 |= 0x20u;
      }
    }
  }
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
  if ( v14 )
  {
    v20 = *(_QWORD *)(v14 + 504);
    if ( v20 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v20) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntSysEUDC->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 504LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 504LL));
        if ( v11 )
          *((_DWORD *)a2 + 103) |= 0x40u;
        else
          *v7 |= 0x40u;
      }
    }
  }
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
  if ( v15 )
  {
    v21 = *(_QWORD *)(v15 + 504);
    if ( v21 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v21) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntDefEUDC->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 504LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 504LL));
        if ( v11 )
          *((_DWORD *)a2 + 103) |= 0x80u;
        else
          *v7 |= 0x80u;
      }
    }
  }
  v16 = *(unsigned int *)(*(_QWORD *)a1 + 840LL);
  if ( (_DWORD)v16 )
  {
    if ( v11 )
    {
      v22 = UMPDOBJ::bAllocFontLinks(a2, v16);
    }
    else
    {
      if ( (unsigned int)v16 <= 0xA )
        v23 = (char *)*v10;
      else
        v23 = (char *)PALLOCMEM2((unsigned int)(4 * v16), 1886221639LL, 0);
      v30 = v23;
      *v10 = v23;
      if ( !v23 )
        goto LABEL_23;
      *a4 = v16;
      v22 = 1;
      memset(v23, 0, 4 * v16);
    }
    if ( v22 )
    {
      v24 = 0;
      v25 = 0LL;
      v26 = 0LL;
      do
      {
        v27 = *(_QWORD *)(v26 + *(_QWORD *)(*(_QWORD *)a1 + 744LL));
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 504);
          if ( v28 )
          {
            if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v28) )
            {
              EtwTraceGreLockReleaseSemaphore(
                L"rfo.prfnt->paprfntFaceName[ii]->hsemCache",
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + v26) + 504LL));
              GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + v26) + 504LL));
              if ( v11 )
              {
                if ( v24 < *((_DWORD *)a2 + 104) )
                {
                  v29 = *((_QWORD *)a2 + 48);
                  if ( v29 )
                    *(_DWORD *)(v25 + v29) = 1;
                }
              }
              else
              {
                *(_DWORD *)&v30[v25] = 1;
              }
            }
          }
        }
        ++v24;
        v26 += 8LL;
        v25 += 4LL;
      }
      while ( v24 < (unsigned int)v16 );
      v7 = a3;
    }
  }
  if ( !v11 )
  {
LABEL_23:
    *v7 |= *(_DWORD *)(*(_QWORD *)a1 + 712LL) << 16;
    *(_DWORD *)(*(_QWORD *)a1 + 712LL) |= 0x200u;
  }
  EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)a1 + 848LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 848LL));
LABEL_14:
  v17 = *(_QWORD *)(*(_QWORD *)a1 + 504LL);
  if ( v17 && (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v17) )
  {
    EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)a1 + 504LL));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 504LL));
    if ( v11 )
      *((_DWORD *)a2 + 103) |= 0x10u;
    else
      *v7 |= 0x10u;
  }
  return 1LL;
}
