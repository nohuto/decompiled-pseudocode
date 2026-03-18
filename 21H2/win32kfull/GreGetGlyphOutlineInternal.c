/*
 * XREFs of GreGetGlyphOutlineInternal @ 0x1C00196F4
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C0018940 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0018C7C (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0019F14 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C001B030 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ??1RESETFCOBJ@@QEAA@XZ @ 0x1C001C0B0 (--1RESETFCOBJ@@QEAA@XZ.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C001C0D8 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0124858 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C0140B44 (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C0150C24 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C0150EF0 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C015154C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C02A5964 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C02A59A4 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 */

__int64 __fastcall GreGetGlyphOutlineInternal(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        struct tagTTPOLYGONHEADER *a6,
        struct _MAT2 *a7,
        int a8)
{
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  __int64 v12; // r12
  int v13; // esi
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rbx
  struct RFONTOBJ *v24; // r8
  __int64 v25; // rax
  struct _GLYPHDATA *EudcMetrics; // rax
  __int64 v27; // rbx
  unsigned int v28; // r13d
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rbx
  RFONTOBJ *v32; // rcx
  __int64 v33; // r9
  struct RFONTOBJ *v34; // r8
  struct _GLYPHDATA *v35; // rax
  __int64 v36; // rbx
  struct RFONTOBJ *v37; // r8
  unsigned int v38; // r12d
  struct _GLYPHDATA *v39; // rax
  __int64 v40; // rbx
  SIZE sizLogResPpi; // rax
  struct DHPDEV__ *v42; // rdx
  unsigned int v43; // edi
  unsigned int v44; // edi
  unsigned int v45; // edi
  int v46; // eax
  int v47; // ecx
  unsigned int v48; // eax
  LONG top; // ecx
  int v50; // eax
  int v51; // eax
  ULONG v52; // ecx
  unsigned __int16 v54; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B0h] BYREF
  struct _FONTOBJ *v57; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-A0h]
  unsigned int v59; // [rsp+64h] [rbp-9Ch]
  unsigned int v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+9Ch] [rbp-64h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  struct _MAT2 *v69[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct tagTTPOLYGONHEADER *v70; // [rsp+B8h] [rbp-48h]
  _QWORD v71[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v72[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v73[32]; // [rsp+E0h] [rbp-20h] BYREF
  _GLYPHDATA v74; // [rsp+100h] [rbp+0h] BYREF

  v70 = a6;
  v10 = a2;
  v11 = 0;
  v68 = a4;
  v12 = a4;
  v69[0] = a7;
  memset(&v74, 0, sizeof(v74));
  v59 = 0;
  v71[0] = 0LL;
  v60 = -1;
  v67 = a3 & 0x100;
  v13 = a3 & 0x80;
  v14 = a3 & 0xFFFFFE7F;
  v66 = v13 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v72, a1);
  if ( !v12 || !v69[0] )
  {
    v52 = 87;
    goto LABEL_84;
  }
  if ( !v72[0] )
  {
    v52 = 6;
LABEL_84:
    EngSetLastError(v52);
    goto LABEL_85;
  }
  v56 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v56, (struct XDCOBJ *)v72, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v56 + 504));
  v15 = v56;
  v16 = &v56;
  v65 = 0LL;
  v64 = 0LL;
  v62 = 0LL;
  v63 = &v56;
  if ( !v56 )
    goto LABEL_50;
  if ( v13 )
  {
    v11 = v10;
    LODWORD(v57) = v10;
  }
  else
  {
    v54 = v10;
    v55 = 0;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v56, &v54, 1u, &v55, 0, 0);
    v11 = v55;
    v15 = v56;
    LODWORD(v57) = v55;
  }
  if ( v11 == *(_DWORD *)(v15 + 460) && !v13 )
  {
    if ( (unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v56, v10) )
    {
      v17 = v56;
      v18 = *(_QWORD *)(v56 + 848);
      if ( v18 )
      {
        GreAcquireSemaphore(v18);
        v11 = -1;
        GreAcquireSemaphore(ghsemEUDC1);
        ++gcEUDCCount;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
        RFONTOBJ::vInitEUDC((RFONTOBJ *)&v56, (struct XDCOBJ *)v72);
        RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v56, 0);
        v19 = *(_QWORD *)(v17 + 848);
        *(_DWORD *)(v17 + 712) |= 1u;
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v19);
        GreReleaseSemaphoreInternal(*(_QWORD *)(v17 + 848));
        v20 = *(_DWORD *)(v17 + 840);
        v58 = v20;
        if ( v20 )
        {
          v21 = *(_QWORD *)(v17 + 744);
          v22 = v20 - 1;
          v54 = v10;
          v55 = 0;
          v23 = *(_QWORD *)(v21 + 8 * v22);
          v62 = v23;
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v62, &v54, 1u, &v55, 0, 0);
          if ( v55 != *(_DWORD *)(v23 + 460) )
          {
            v25 = *(_QWORD *)(*(_QWORD *)(v17 + 744) + 8 * v22);
            v61 = v25;
            if ( v25
              && (*(_DWORD *)(*(_QWORD *)(v25 + 128) + 52LL) & 0xA) == 8
              && (v58 = v20 - 1, --v20, (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v61, v10, v24)) != 0LL)
              && EudcMetrics->fxD )
            {
              v11 = v55;
              v16 = &v62;
              v63 = &v62;
            }
            else
            {
              v16 = &v56;
            }
            v61 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v61);
            if ( v11 != -1 )
              goto LABEL_47;
          }
        }
        v27 = *(_QWORD *)(v17 + 728);
        if ( v27 )
        {
          v55 = 0;
          v65 = v27;
          v54 = v10;
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v65, &v54, 1u, &v55, 0, 0);
          if ( v55 != *(_DWORD *)(v27 + 460) )
          {
            v16 = &v65;
            v11 = v55;
            v63 = &v65;
            if ( v55 != -1 )
              goto LABEL_47;
          }
        }
        v28 = 0;
        if ( v20 )
        {
          v54 = v10;
          v29 = 0LL;
          do
          {
            v30 = *(_QWORD *)(v17 + 744);
            v55 = 0;
            v31 = *(_QWORD *)(v29 + v30);
            v62 = v31;
            RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v62, &v54, 1u, &v55, 0, 0);
            if ( v55 != *(_DWORD *)(v31 + 460) )
            {
              v33 = *(_QWORD *)(v29 + *(_QWORD *)(v17 + 744));
              v61 = v33;
              if ( v33 )
              {
                if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                                      v32,
                                      v10,
                                      *(struct PFF **)(v17 + 128),
                                      *(struct PFF **)(v33 + 128)) )
                {
                  v35 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v61, v10, v34);
                  if ( v35 )
                  {
                    if ( v35->fxD )
                    {
                      v11 = v55;
                      v16 = &v62;
                      v61 = 0LL;
                      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v61);
                      if ( v11 == -1 )
                        goto LABEL_36;
                      goto LABEL_47;
                    }
                  }
                }
              }
              v61 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v61);
            }
            ++v28;
            v29 += 8LL;
          }
          while ( v28 < v58 );
        }
        v16 = v63;
LABEL_36:
        v36 = *(_QWORD *)(v17 + 736);
        if ( !v36 )
          goto LABEL_46;
        v55 = 0;
        v64 = v36;
        v54 = v10;
        RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v64, &v54, 1u, &v55, 0, 0);
        v38 = v55;
        if ( v55 == *(_DWORD *)(v36 + 460) )
          goto LABEL_46;
        v63 = *(__int64 **)(v17 + 736);
        if ( v63 )
        {
          v39 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v63, v10, v37);
          if ( v39 )
          {
            if ( v39->fxD )
            {
              v11 = v38;
              v16 = &v64;
            }
          }
        }
        v63 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
        if ( v11 == -1 )
        {
LABEL_46:
          RFONTOBJ::dtorHelper((RFONTOBJ *)&v56);
          v11 = (unsigned int)v57;
          *(_DWORD *)(v17 + 712) = 0;
        }
LABEL_47:
        v12 = v68;
      }
    }
  }
  if ( *v16 )
  {
    v40 = *v16;
  }
  else
  {
LABEL_50:
    EngSetLastError(0x3EBu);
    v40 = v71[0];
  }
  v62 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v62);
  v64 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v64);
  v65 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v65);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v56);
  if ( v40 )
  {
    v57 = (struct _FONTOBJ *)v40;
    GreAcquireSemaphore(*(_QWORD *)(v40 + 504));
    v71[0] = *(_QWORD *)(v40 + 128);
    sizLogResPpi = v57[1].sizLogResPpi;
    if ( !*(_QWORD *)&sizLogResPpi || !*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3056LL) )
    {
      EngSetLastError(0x3EBu);
      goto LABEL_79;
    }
    RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)v69, (struct DCOBJ *)v72, (struct RFONTOBJ *)&v57, v69[0], a8, v66);
    if ( !LODWORD(v69[0]) )
    {
      EngSetLastError(0x3EBu);
LABEL_77:
      RESETFCOBJ::~RESETFCOBJ((RESETFCOBJ *)v69);
LABEL_79:
      if ( v57 )
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v57);
      v57 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v57);
      goto LABEL_85;
    }
    if ( v14 )
    {
      if ( v14 == 1 )
        goto LABEL_72;
      if ( v14 <= 3 )
      {
        v46 = 2;
        if ( v14 != 3 )
          v46 = 0;
        v47 = v46 | 4;
        if ( !v67 )
          v47 = v46;
        v48 = PFFOBJ::QueryTrueTypeOutline((PFFOBJ *)v71, v42, v57, v11, v47, &v74, a5, v70);
        goto LABEL_75;
      }
      if ( v14 > 6 )
        goto LABEL_77;
      v43 = v14 - 1;
      if ( !v43 )
      {
LABEL_72:
        v59 = 5;
      }
      else
      {
        v44 = v43 - 3;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( v45 )
          {
            if ( v45 == 1 )
              v59 = 9;
          }
          else
          {
            v59 = 8;
          }
        }
        else
        {
          v59 = 6;
        }
      }
      v48 = PFFOBJ::QueryFontData((PFFOBJ *)v71, 0LL, v57, v59, v11, &v74, v70, a5);
    }
    else
    {
      v48 = PFFOBJ::QueryFontData((PFFOBJ *)v71, 0LL, v57, 4u, v11, &v74, 0LL, 0);
    }
LABEL_75:
    v60 = v48;
    if ( v48 != -1 )
    {
      top = v74.rclInk.top;
      v50 = v74.rclInk.right - v74.rclInk.left;
      *(_DWORD *)(v12 + 8) = v74.rclInk.left;
      *(_DWORD *)v12 = v50;
      *(_DWORD *)(v12 + 4) = v74.rclInk.bottom - top;
      v51 = (v74.ptqD.x.HighPart >> 3) + 1;
      *(_DWORD *)(v12 + 12) = -top;
      *(_WORD *)(v12 + 16) = v51 >> 1;
      *(_WORD *)(v12 + 18) = ((v74.ptqD.y.HighPart >> 3) + 1) >> 1;
    }
    goto LABEL_77;
  }
LABEL_85:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v72);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v73);
  return v60;
}
