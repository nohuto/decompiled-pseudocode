/*
 * XREFs of ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02C24F8
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C00AB7D0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C012FF64 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
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
 *     <none>
 */

void __fastcall UMPDAcquireRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        const int *a5)
{
  __int64 v5; // r12
  __int64 v7; // rcx
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r14d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r14d
  unsigned int v20; // ebp
  __int64 v21; // rsi
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // [rsp+50h] [rbp+8h]

  v5 = 0LL;
  v7 = *(_QWORD *)a1;
  v11 = 0;
  if ( v7 )
  {
    if ( a2 )
    {
      v11 = 1;
      a3 = *((_DWORD *)a2 + 103);
      if ( *((_QWORD *)a2 + 48) )
        a4 = *((_DWORD *)a2 + 104);
      else
        a4 = 0;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v12 = *(_QWORD *)(v7 + 504);
      if ( v12 )
      {
        GreAcquireSemaphore(v12);
        if ( v11 )
          *((_DWORD *)a2 + 103) &= ~0x10u;
      }
    }
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 848LL);
    if ( v13 )
    {
      GreAcquireSemaphore(v13);
      v25 = 0LL;
      v14 = 0;
      if ( !v11 )
      {
        v25 = 0LL;
        v15 = *(_DWORD *)(*(_QWORD *)a1 + 712LL);
        if ( (v15 & 0x200) != 0 )
        {
          v25 = 1LL;
          *(_DWORD *)(*(_QWORD *)a1 + 712LL) = v15 & 0xFFFFFDFF;
          v14 = 1;
          *(_DWORD *)(*(_QWORD *)a1 + 712LL) = HIWORD(a3);
        }
      }
      if ( (a3 & 0x20) != 0 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)a1 + 720LL);
        if ( v16 )
        {
          GreAcquireSemaphore(*(_QWORD *)(v16 + 504));
          if ( v11 )
            *((_DWORD *)a2 + 103) &= ~0x20u;
        }
      }
      if ( (a3 & 0x40) != 0 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
        if ( v17 )
        {
          if ( v11 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v17 + 504));
            *((_DWORD *)a2 + 103) &= ~0x40u;
          }
          else if ( v14 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v17 + 504));
          }
        }
      }
      if ( (a3 & 0x80u) != 0 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
        if ( v18 )
        {
          if ( v11 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v18 + 504));
            *((_DWORD *)a2 + 103) &= ~0x80u;
          }
          else if ( v14 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v18 + 504));
          }
        }
      }
      if ( a4 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)a1 + 840LL);
        if ( a4 <= v19 )
          v19 = a4;
        v20 = 0;
        if ( v19 )
        {
          v21 = 0LL;
          do
          {
            v22 = *(_QWORD *)(v5 + *(_QWORD *)(*(_QWORD *)a1 + 744LL));
            if ( v22 )
            {
              if ( !v11 )
              {
                v23 = a5[v21] == 0;
LABEL_40:
                if ( !v23 )
                {
                  if ( v11 )
                  {
                    GreAcquireSemaphore(*(_QWORD *)(v22 + 504));
                    if ( v20 < *((_DWORD *)a2 + 104) )
                    {
                      v24 = *((_QWORD *)a2 + 48);
                      if ( v24 )
                        *(_DWORD *)(v21 * 4 + v24) = 0;
                    }
                  }
                  else if ( v25 )
                  {
                    GreAcquireSemaphore(*(_QWORD *)(v22 + 504));
                  }
                }
                goto LABEL_47;
              }
              if ( v20 < *((_DWORD *)a2 + 104) )
              {
                v23 = *(_DWORD *)(v21 * 4 + *((_QWORD *)a2 + 48)) == 0;
                goto LABEL_40;
              }
            }
LABEL_47:
            ++v20;
            v5 += 8LL;
            ++v21;
          }
          while ( v20 < v19 );
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC");
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 848LL));
    }
  }
}
