/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0092300 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C009AB1C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetTextCharsetInfo @ 0x1C009B5B4 (GreGetTextCharsetInfo.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009B9F8 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetGlyphOutlineInternal @ 0x1C009C154 (GreGetGlyphOutlineInternal.c)
 *     NtGdiGetWidthTable @ 0x1C009CBA0 (NtGdiGetWidthTable.c)
 *     GreGetCharWidthW @ 0x1C00A2794 (GreGetCharWidthW.c)
 *     GreGetTextMetricsW @ 0x1C00E3244 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00E337C (GreGetTextExtentW.c)
 *     GreGetCharABCWidthsW @ 0x1C00FD238 (GreGetCharABCWidthsW.c)
 *     GreFontIsLinked @ 0x1C0111558 (GreFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C01143A0 (NtGdiQueryFontAssocInfo.c)
 *     GreGetGlyphIndicesW @ 0x1C0114748 (GreGetGlyphIndicesW.c)
 *     GreGetCharWidthInfo @ 0x1C011E014 (GreGetCharWidthInfo.c)
 *     GreGetRealizationInfo @ 0x1C0137954 (GreGetRealizationInfo.c)
 *     NtGdiGetETM @ 0x1C013F420 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C013FA44 (GreGetKerningPairs.c)
 *     GreGetUFI @ 0x1C014F2A0 (GreGetUFI.c)
 *     NtGdiGetLinkedUFIs @ 0x1C014F750 (NtGdiGetLinkedUFIs.c)
 *     GreGetFontUnicodeRanges @ 0x1C015BBC8 (GreGetFontUnicodeRanges.c)
 *     GreGetTextExtentExW @ 0x1C016D540 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027B154 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0297BB4 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C005EB68 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0062CDC (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0090784 (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0097A10 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00986B8 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009CF3C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C009D0D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C009D950 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C009E3C0 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C009E430 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C009E458 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C009F0E4 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00A57FC (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00A58B4 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     Win32FileInfo @ 0x1C00A6758 (Win32FileInfo.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E3DCC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00E7978 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00E8988 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     EngUnmapFontFileFD @ 0x1C011D6F0 (EngUnmapFontFileFD.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C013008C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C016A238 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C016A2B8 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C026D154 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D1FC (--1SEMOBJ@@QEAA@XZ.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C029731C (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A8644 (vRemoveAllInactiveRFONTs.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02BAD7C (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall RFONTOBJ::bInit(RFONTOBJ *this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  unsigned int v5; // r12d
  int v7; // r14d
  __int64 v8; // rdx
  bool v9; // bl
  __int64 v10; // rbx
  __int64 v11; // rbx
  int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  struct PDEV *v15; // rdi
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // ebx
  __int64 v26; // rdx
  int v27; // ebx
  struct XDCOBJ *v28; // rsi
  int v29; // r15d
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // r10d
  _DWORD *v33; // rcx
  __int64 v34; // rdx
  const struct SEMOBJSHARED *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned int v42; // esi
  unsigned int v43; // ecx
  struct RFONT **v44; // rdi
  int v45; // esi
  int InactiveHelper; // eax
  struct PFE *v47; // rcx
  int v48; // r14d
  __int64 v49; // rbx
  int v50; // ecx
  int v51; // eax
  int v52; // r12d
  struct PFE *v53; // rax
  struct PFE *v54; // r15
  __int64 v55; // r14
  int v56; // ecx
  unsigned int v57; // r15d
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  int *v61; // r12
  __int64 v62; // rax
  struct tagLOGFONTW *v63; // rdx
  int NtoD_Win31; // eax
  FLOATL eYX; // ecx
  FLOATL eYY; // edx
  unsigned int v67; // ebx
  int v68; // esi
  __int64 v69; // rax
  struct PFT *v70; // rdx
  __int64 v71; // rcx
  int v72; // edx
  int v73; // eax
  __int64 v74; // rax
  struct PFT *v75; // rdx
  int v76; // ebx
  __int64 v77; // rdx
  int v78; // ecx
  int v79; // eax
  __int64 v80; // rdx
  struct DCOBJ *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // r10
  __int64 v86; // r11
  _QWORD *v87; // r8
  int v88; // r8d
  int v89; // r8d
  __int64 v90; // rax
  __int64 v91; // rdx
  _QWORD *v92; // r8
  _QWORD *v93; // rcx
  struct XDCOBJ *v94; // rbx
  bool v95; // r15
  __int64 v96; // rsi
  unsigned int v97; // r14d
  unsigned int i; // ebx
  struct DCOBJ *v99; // rdx
  size_t v100; // rsi
  unsigned int v101; // eax
  struct tagLOGFONTW *v102; // rax
  struct tagLOGFONTW *v103; // rbx
  struct XDCOBJ *v104; // rdx
  unsigned int v105; // eax
  PFEOBJ *v106; // rcx
  __int64 v107; // rax
  int v108; // edx
  struct DCOBJ *v109; // r8
  __int64 v110; // r15
  unsigned int v112; // [rsp+28h] [rbp-D8h]
  __int64 v113; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v114; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v115; // [rsp+6Ch] [rbp-94h]
  int v116; // [rsp+70h] [rbp-90h]
  int v117; // [rsp+74h] [rbp-8Ch]
  struct DCOBJ *v118; // [rsp+78h] [rbp-88h]
  struct PFE *v119; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v120; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v121; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v122; // [rsp+98h] [rbp-68h] BYREF
  __int64 v123; // [rsp+A0h] [rbp-60h] BYREF
  struct RFONT *v124; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v125; // [rsp+B0h] [rbp-50h] BYREF
  int v126; // [rsp+B8h] [rbp-48h]
  int v127; // [rsp+BCh] [rbp-44h]
  __int64 v128; // [rsp+C0h] [rbp-40h]
  __int64 v129; // [rsp+C8h] [rbp-38h]
  _QWORD v130[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v131; // [rsp+E0h] [rbp-20h]
  struct PDEV *v132; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v133[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v134[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v135; // [rsp+100h] [rbp+0h] BYREF
  __int64 v136; // [rsp+108h] [rbp+8h] BYREF
  __int64 v137; // [rsp+110h] [rbp+10h] BYREF
  __int64 v138; // [rsp+118h] [rbp+18h] BYREF
  int v139; // [rsp+120h] [rbp+20h]
  int v140; // [rsp+124h] [rbp+24h]
  _QWORD v141[2]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v142; // [rsp+138h] [rbp+38h] BYREF
  __int64 v143; // [rsp+148h] [rbp+48h]
  __int64 v144; // [rsp+150h] [rbp+50h] BYREF
  __int64 v145; // [rsp+160h] [rbp+60h] BYREF
  __int64 v146; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v147; // [rsp+180h] [rbp+80h]
  _FD_XFORM v148; // [rsp+188h] [rbp+88h] BYREF
  _OWORD v149[7]; // [rsp+1A0h] [rbp+A0h] BYREF

  v115 = a4;
  v5 = a4;
  v117 = a3;
  v118 = a2;
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    return 0LL;
  }
  v7 = 0;
  if ( !KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    || !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || !KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    v9 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
    if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      && UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread != KeGetCurrentThread() )
    {
      if ( (v9 || !(unsigned int)UserIsUserCritSecIn())
        && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
        && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        goto LABEL_13;
      }
      return 0LL;
    }
  }
LABEL_13:
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 1768LL);
  *(_QWORD *)this = v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 504);
    v12 = 0;
    if ( v11 )
    {
      GreAcquireSemaphore(v11);
      v13 = *(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( (v13 & 8) != 0 )
      {
        v12 = 1;
        *(_DWORD *)(*(_QWORD *)this + 84LL) = v13 & 0xFFFFFFF7;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v11);
      GreReleaseSemaphoreInternal(v11);
      if ( v12 == 1 )
      {
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        v15 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v16 = *((_DWORD *)v15 + 10);
            if ( (v16 & 0x2000) == 0 )
            {
              if ( (v16 & 0x8000) == 0 )
                break;
              v17 = *(_QWORD *)(*((_QWORD *)v15 + 224) + 48LL);
              if ( v17 == PsGetCurrentProcessWin32Process(v14) )
                break;
            }
            v15 = *(struct PDEV **)v15;
            if ( !v15 )
              goto LABEL_25;
          }
          PDEV::IncrementClientReferenceCount(v15);
        }
LABEL_25:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v15 )
        {
          v132 = v15;
          vRemoveAllInactiveRFONTs(v15);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v15 = *(struct PDEV **)v15;
          if ( v15 )
          {
            while ( 1 )
            {
              v19 = *((_DWORD *)v15 + 10);
              if ( (v19 & 0x2000) == 0 )
              {
                if ( (v19 & 0x8000) == 0 )
                  break;
                v20 = *(_QWORD *)(*((_QWORD *)v15 + 224) + 48LL);
                if ( v20 == PsGetCurrentProcessWin32Process(v18) )
                  break;
              }
              v15 = *(struct PDEV **)v15;
              if ( !v15 )
                goto LABEL_33;
            }
            PDEV::IncrementClientReferenceCount(v15);
          }
LABEL_33:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(&v132, 0LL);
        }
      }
    }
  }
  v21 = *(_QWORD *)a2;
  LOBYTE(v8) = 10;
  v113 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 976) + 296LL);
  v23 = HmgShareLock(v22, v8);
  v123 = v23;
  v24 = v23;
  if ( !v23 )
    goto LABEL_263;
  if ( (*(_DWORD *)(v23 + 28) & 1) == 0 )
    goto LABEL_44;
  UserGetHDEV();
  v25 = *(_DWORD *)(v24 + 24);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v24);
  v24 = 0LL;
  if ( !v113 )
  {
LABEL_263:
    RFONTOBJ::vMakeInactive(this);
    *(_QWORD *)this = 0LL;
    v42 = 0;
    *(_QWORD *)(*(_QWORD *)a2 + 1768LL) = 0LL;
    goto LABEL_264;
  }
  if ( v25 == 6 )
  {
    v22 = *(_QWORD *)(v113 + 1448);
  }
  else
  {
    v27 = v25 - 4;
    if ( v27 )
    {
      if ( v27 == 1 )
        v22 = *(_QWORD *)(v113 + 1440);
    }
    else
    {
      v22 = *(_QWORD *)(v113 + 1432);
    }
  }
  LOBYTE(v26) = 10;
  v24 = HmgShareLock(v22, v26);
  v123 = v24;
LABEL_44:
  if ( !v24 )
    goto LABEL_263;
  v28 = v118;
  v29 = lNormAngle((unsigned int)-*(_DWORD *)(v24 + 284));
  v30 = *(_QWORD *)v118;
  v126 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v118 + 976LL) + 208LL);
  v127 = *(_DWORD *)(*(_QWORD *)(v30 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v30 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v125, v118, 0x204u, 0);
    v31 = v125;
  }
  else
  {
    v31 = v30 + 320;
    v125 = v30 + 320;
  }
  if ( v29 || (*(_DWORD *)(v31 + 32) & 1) == 0 || *(float *)(v31 + 12) < 0.0 || (v32 = 1, *(float *)v31 < 0.0) )
    v32 = 0;
  v33 = *(_DWORD **)this;
  v116 = v32;
  if ( !v33 )
  {
    v34 = *(_QWORD *)v118;
LABEL_55:
    *(_QWORD *)(v34 + 1752) = *(_QWORD *)(*(_QWORD *)(v34 + 976) + 296LL);
    goto LABEL_56;
  }
  v36 = *(_QWORD *)v118;
  v34 = *(_QWORD *)v118;
  v37 = *(_QWORD *)(*(_QWORD *)v118 + 976LL);
  if ( *(_QWORD *)(v37 + 296) != *(_QWORD *)(*(_QWORD *)v118 + 1752LL) || v32 != 1 && v33[160] )
    goto LABEL_55;
  if ( v33[52] == *(_DWORD *)(v37 + 208) && v117 == v33[164] && v5 == (v33[21] & 6) )
  {
    if ( (*(_DWORD *)(v36 + 36) & 1) == 0 && *(_DWORD *)(v36 + 32) != 1 )
      goto LABEL_80;
    v38 = *(_DWORD *)(*(_QWORD *)(v36 + 1768) + 12LL);
    if ( (v38 & 0x200004) == 0 )
      goto LABEL_80;
    v39 = 0LL;
    if ( (gulFontInformation & 2) != 0 )
    {
      v39 = 0x10000LL;
      if ( (gulFontInformation & 0x10) != 0 )
        v39 = 268500992LL;
    }
    if ( (v38 & 4) != 0 )
    {
      v40 = v38 & 0x10010000;
      if ( (_DWORD)v39 != (_DWORD)v40 )
        goto LABEL_56;
    }
    else
    {
      if ( (((unsigned int)v39 ^ v38) & 0x10000) != 0 )
        goto LABEL_56;
      v40 = v38 & 0x10010000;
    }
    if ( !(_DWORD)v40 || !(unsigned int)UserIsRemoteConnection(v40, v39, gulFontInformation, 268500992LL) )
    {
LABEL_80:
      v41 = *(_QWORD *)v118;
      if ( *(float *)(*(_QWORD *)v118 + 452LL) == 0.0 || (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v41 + 456)) )
      {
        if ( (*(_DWORD *)(v41 + 252) & 1) == 0 )
        {
LABEL_85:
          v42 = 1;
          goto LABEL_264;
        }
        if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v125, (struct MATRIX *)(*(_QWORD *)this + 172LL)) )
        {
          *(_DWORD *)(*(_QWORD *)v118 + 252LL) &= ~1u;
          goto LABEL_85;
        }
      }
    }
  }
LABEL_56:
  if ( (*(_DWORD *)(v113 + 40) & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v113);
  memset(v149, 0, sizeof(v149));
  if ( !RFONTOBJ::bValid(this) )
    goto LABEL_99;
  SEMOBJ::SEMOBJ((SEMOBJ *)&v121, ghsemRFONTList);
  if ( RFONTOBJ::bActive(this, v35) )
  {
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v121);
    v43 = *(_DWORD *)(*(_QWORD *)this + 840LL);
    if ( v43 <= 0xA )
    {
      v44 = (struct RFONT **)v149;
      v45 = 0;
    }
    else
    {
      v44 = (struct RFONT **)PALLOCMEM2(8 * v43 + 32);
      if ( !v44 )
        goto LABEL_99;
      v45 = 1;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v44);
    v47 = *v44;
    v48 = InactiveHelper;
    if ( *v44 )
    {
      v49 = 0LL;
      do
      {
        v119 = v47;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v119, 0LL);
        v119 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v119);
        v47 = v44[++v49];
      }
      while ( v47 );
      LOBYTE(v5) = v115;
    }
    if ( v45 )
      Win32FreePool(v44);
    if ( v48 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
    v28 = v118;
    v7 = 0;
    goto LABEL_99;
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v121);
LABEL_99:
  v24 = v123;
  v130[0] = 0LL;
  v50 = (*(_BYTE *)(v123 + 297) != 0 ? 0x20 : 0) | 0x80;
  if ( !*(_BYTE *)(v123 + 298) )
    v50 = *(_BYTE *)(v123 + 297) != 0 ? 0x20 : 0;
  *(_DWORD *)(*(_QWORD *)v28 + 1760LL) = v50;
  *(_DWORD *)(*(_QWORD *)v28 + 1764LL) = v29;
  v148 = 0LL;
  v114 = 0;
  v120 = 0LL;
  v122 = 0;
  if ( (*(_DWORD *)(v113 + 40) & 1) != 0 || (v51 = *(_DWORD *)(v24 + 28), v121 = 2, (v51 & 2) == 0) )
    v121 = 0;
  v137 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v52 = v5 & 4;
  v53 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v123, v28, &v114, &v120, &v122, v52);
  v119 = v53;
  v54 = v53;
  if ( !v53 )
    goto LABEL_248;
  v55 = *(_QWORD *)v53;
  v144 = v55;
  v56 = *(_DWORD *)(v55 + 52);
  if ( (v56 & 0x2000) != 0 )
    goto LABEL_115;
  if ( (v56 & 0x1000) == 0 )
    goto LABEL_117;
  v57 = 0;
  if ( !*(_DWORD *)(v55 + 36) )
    goto LABEL_113;
  v58 = *(_QWORD *)(v55 + 200);
  do
  {
    v129 = 0LL;
    v128 = 0LL;
    Win32FileInfo(*(PCWSTR *)(*(_QWORD *)(v58 + 8LL * v57) + 80LL));
    v58 = *(_QWORD *)(v55 + 200);
    v59 = *(_QWORD *)(v58 + 8LL * v57);
    if ( *(_QWORD *)v59 != v128 || *(_DWORD *)(v59 + 24) != (_DWORD)v129 )
    {
      *(_DWORD *)(v55 + 52) |= 0x2000u;
      v28 = v118;
LABEL_115:
      if ( (unsigned int)PFFOBJ::bAttemptReload((PFFOBJ *)&v144) )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        v54 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v123, v28, &v114, &v120, &v122, v52);
        v119 = v54;
        goto LABEL_117;
      }
      goto LABEL_247;
    }
    ++v57;
  }
  while ( v57 < *(_DWORD *)(v55 + 36) );
  v56 = *(_DWORD *)(v55 + 52);
  v28 = v118;
LABEL_113:
  v54 = v119;
  *(_DWORD *)(v55 + 52) = v56 & 0xFFFFEFFF;
LABEL_117:
  if ( !v54 )
  {
LABEL_247:
    v7 = 0;
LABEL_248:
    *(_QWORD *)this = 0LL;
    *(_QWORD *)(*(_QWORD *)v28 + 1768LL) = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v137);
    goto LABEL_249;
  }
  v60 = *(_QWORD *)v28;
  v61 = (int *)(v24 + 276);
  v141[0] = *((_QWORD *)v54 + 4);
  v139 = *(_DWORD *)(*(_QWORD *)(v60 + 976) + 208LL);
  v140 = *(_DWORD *)(*(_QWORD *)(v60 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v60 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v138, v28, 0x204u, 0);
    v60 = *(_QWORD *)v28;
  }
  else
  {
    v138 = v60 + 320;
  }
  v62 = *(_QWORD *)(v60 + 976);
  v63 = (struct tagLOGFONTW *)(v24 + 276);
  if ( *(_DWORD *)(v62 + 208) == 1 )
  {
    v7 = 0;
    NtoD_Win31 = bGetNtoD_Win31(&v148, v63, (struct IFIOBJ *)v141, v28, v121, &v120, 0);
  }
  else
  {
    NtoD_Win31 = bGetNtoD(&v148, v63, (struct IFIOBJ *)v141, v28, &v120);
    v7 = 0;
  }
  if ( !NtoD_Win31 )
    goto LABEL_248;
  eYX = v148.eYX;
  if ( LODWORD(v148.eYX) )
  {
    LODWORD(eYX) = LODWORD(v148.eYX) ^ 0x80000000;
    LODWORD(v148.eYX) ^= 0x80000000;
  }
  eYY = v148.eYY;
  if ( LODWORD(v148.eYY) )
  {
    LODWORD(eYY) = LODWORD(v148.eYY) ^ 0x80000000;
    LODWORD(v148.eYY) ^= 0x80000000;
  }
  if ( (*(_DWORD *)(v141[0] + 48LL) & 0x1000000) != 0 )
  {
    v148.eXX = eYY;
    v148.eXY = eYX;
    if ( eYX != 0.0 )
      LODWORD(v148.eXY) = LODWORD(eYX) ^ 0x80000000;
  }
  if ( (*(_DWORD *)(v141[0] + 48LL) & 1) != 0 && *v61 <= 0 )
    v114 |= 0x8000u;
  v130[0] = *(_QWORD *)v54;
  v131 = 0;
  ++*(_DWORD *)(v130[0] + 68LL);
  if ( ghsemPublicPFT )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  v67 = v114;
  v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 976LL) + 208LL);
  v135 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v69 = v113;
  if ( (*(_DWORD *)(v113 + 40) & 0x800000) != 0 )
    v70 = *(struct PFT **)(*(_QWORD *)(v113 + 3520) + 1520LL);
  else
    v70 = *(struct PFT **)(v113 + 1520);
  *(_QWORD *)this = v70;
  if ( !v70 )
  {
LABEL_163:
    if ( (*(_DWORD *)(v69 + 40) & 0x800000) != 0 )
      v75 = *(struct PFT **)(*(_QWORD *)(v69 + 3520) + 1528LL);
    else
      v75 = *(struct PFT **)(v69 + 1528);
    *(_QWORD *)this = v75;
    if ( !v75 )
    {
LABEL_190:
      *(_QWORD *)this = 0LL;
      v76 = 0;
      goto LABEL_191;
    }
    while ( 1 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v134, v75);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v134);
      v77 = *(_QWORD *)this;
      if ( *(struct PFE **)(*(_QWORD *)this + 120LL) == v54 && v115 == (*(_DWORD *)(v77 + 84) & 6) )
      {
        v78 = *(_DWORD *)(v77 + 12);
        if ( ((v67 ^ v78) & 0xE000) == 0 )
        {
          v79 = (v67 ^ v78) & 0x50010000;
          if ( !v79 )
            goto LABEL_270;
          if ( (v67 & 0x10000) != 0 && (v78 & 0x20000) != 0 )
            v79 = (v67 ^ v78) & 0x50000000;
          if ( (v67 & 0x10000000) != 0 && (v78 & 0x10000000) == 0 && (v78 & 0x2000000) != 0 || !v79 )
          {
LABEL_270:
            if ( !*(_DWORD *)(v77 + 40)
              && *(_QWORD *)&v148.eXX == *(_QWORD *)(v77 + 136)
              && *(_QWORD *)&v148.eYX == *(_QWORD *)(v77 + 144)
              && v117 == *(_DWORD *)(v77 + 656) )
            {
              if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v125, (struct MATRIX *)(v77 + 172)) )
              {
                v80 = *(_QWORD *)this;
                if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == v68 && (v116 || !*(_DWORD *)(v80 + 640)) )
                  break;
              }
            }
          }
        }
      }
      v75 = *(struct PFT **)(*(_QWORD *)this + 672LL);
      *(_QWORD *)this = v75;
      if ( !v75 )
        goto LABEL_190;
    }
    v82 = v113;
    if ( (*(_DWORD *)(v113 + 40) & 0x800000) != 0 )
      v83 = *(_QWORD *)(*(_QWORD *)(v113 + 3520) + 1528LL);
    else
      v83 = *(_QWORD *)(v113 + 1528);
    v84 = *(_QWORD *)(v80 + 664);
    v85 = *(_QWORD *)(v80 + 672);
    v86 = v84 + 664;
    if ( !v84 )
      v86 = 0LL;
    v87 = (_QWORD *)(v85 + 664);
    if ( !v85 )
      v87 = 0LL;
    if ( v84 )
    {
      *(_QWORD *)(v86 + 8) = v85;
      if ( v87 )
        *v87 = *(_QWORD *)(v80 + 664);
    }
    else
    {
      v83 = *(_QWORD *)(v80 + 672);
      if ( !v87 )
      {
LABEL_206:
        if ( (*(_DWORD *)(v82 + 40) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v82 + 3520) + 1528LL) = v83;
        else
          *(_QWORD *)(v82 + 1528) = v83;
        if ( (*(_DWORD *)(v113 + 40) & 0x800000) != 0 )
          v88 = *(_DWORD *)(*(_QWORD *)(v113 + 3520) + 1536LL);
        else
          v88 = *(_DWORD *)(v113 + 1536);
        v89 = v88 - 1;
        if ( (*(_DWORD *)(v113 + 40) & 0x800000) != 0 )
          *(_DWORD *)(*(_QWORD *)(v113 + 3520) + 1536LL) = v89;
        else
          *(_DWORD *)(v113 + 1536) = v89;
        v90 = v113;
        if ( (*(_DWORD *)(v113 + 40) & 0x800000) != 0 )
          v91 = *(_QWORD *)(*(_QWORD *)(v113 + 3520) + 1520LL);
        else
          v91 = *(_QWORD *)(v113 + 1520);
        v92 = (_QWORD *)(v91 + 664);
        if ( !v91 )
          v92 = 0LL;
        v93 = (_QWORD *)(*(_QWORD *)this + 664LL);
        if ( *(_QWORD *)this != -664LL )
        {
          *v93 = 0LL;
          v93[1] = v91;
          if ( v92 )
            *v92 = *(_QWORD *)this;
          v91 = *(_QWORD *)this;
          v90 = v113;
        }
        if ( (*(_DWORD *)(v90 + 40) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v90 + 3520) + 1520LL) = v91;
        else
          *(_QWORD *)(v90 + 1520) = v91;
        v76 = 1;
        *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
        goto LABEL_191;
      }
      *v87 = 0LL;
    }
    v82 = v113;
    goto LABEL_206;
  }
  while ( 1 )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v133, v70);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v133);
    v71 = *(_QWORD *)this;
    if ( *(struct PFE **)(*(_QWORD *)this + 120LL) != v54 || v115 != (*(_DWORD *)(v71 + 84) & 6) )
      goto LABEL_161;
    v72 = *(_DWORD *)(v71 + 12);
    if ( ((v67 ^ v72) & 0xE000) == 0 )
    {
      v73 = (v67 ^ v72) & 0x50010000;
      if ( !v73 )
        goto LABEL_271;
      if ( (v67 & 0x10000) != 0 && (v72 & 0x20000) != 0 )
        v73 = (v67 ^ v72) & 0x50000000;
      if ( (v67 & 0x10000000) != 0 && (v72 & 0x10000000) == 0 && (v72 & 0x2000000) != 0 || !v73 )
      {
LABEL_271:
        if ( !*(_DWORD *)(v71 + 40)
          && *(_QWORD *)&v148.eXX == *(_QWORD *)(v71 + 136)
          && *(_QWORD *)&v148.eYX == *(_QWORD *)(v71 + 144)
          && v117 == *(_DWORD *)(v71 + 656) )
        {
          if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v125, (struct MATRIX *)(v71 + 172)) )
          {
            v74 = *(_QWORD *)this;
            if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == v68 && (v116 || !*(_DWORD *)(v74 + 640)) )
              break;
          }
        }
      }
    }
    v71 = *(_QWORD *)this;
LABEL_161:
    v70 = *(struct PFT **)(v71 + 672);
    *(_QWORD *)this = v70;
    if ( !v70 )
    {
      v69 = v113;
      goto LABEL_163;
    }
  }
  ++*(_DWORD *)(v74 + 660);
  v124 = PDEVOBJ::prfntActive((PDEVOBJ *)&v113);
  if ( v124 != *(struct RFONT **)this )
  {
    RFONTOBJ::vRemove(this, &v124, 1LL);
    RFONTOBJ::vInsert(this, &v124, 1LL);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v113, v124);
  }
  v76 = 1;
LABEL_191:
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v135);
  if ( v76 )
  {
    v42 = 1;
    v81 = v118;
    *(_QWORD *)(*(_QWORD *)v118 + 1768LL) = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)v81 + 252LL) &= ~1u;
    goto LABEL_250;
  }
  v94 = v118;
  if ( (unsigned int)RFONTOBJ::bRealizeFont(
                       this,
                       v118,
                       (struct PDEVOBJ *)&v113,
                       (struct tagENUMLOGFONTEXDVW *)(v24 + 276),
                       v54,
                       &v148,
                       &v120,
                       v114,
                       0,
                       v117,
                       v116,
                       v115) )
  {
LABEL_237:
    if ( *(_DWORD *)(v24 + 280) )
    {
      v136 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v100 = 420LL;
      v145 = *((_QWORD *)v54 + 4);
      v101 = *(_DWORD *)(v24 + 272);
      if ( v101 < 0x1A4 )
        v100 = v101;
      v102 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v100);
      v103 = v102;
      if ( v102 )
      {
        memmove(v102, v61, v100);
        v104 = v118;
        v105 = v121;
        v103->lfWidth = 0;
        if ( !PFEOBJ::bSetFontXform(
                v106,
                v104,
                v103,
                (struct _FD_XFORM *)(*(_QWORD *)this + 152LL),
                v105,
                v112,
                &v120,
                (struct IFIOBJ *)&v145,
                0) )
          *(_FD_XFORM *)(*(_QWORD *)this + 152LL) = v148;
        FreeTmpBuffer(v103);
      }
      else
      {
        *(_FD_XFORM *)(*(_QWORD *)this + 152LL) = v148;
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v136);
    }
    v107 = *(_QWORD *)this;
    v108 = 1;
    v109 = v118;
    v42 = 1;
    v131 = 1;
    *(_QWORD *)(*(_QWORD *)v118 + 1768LL) = v107;
    *(_DWORD *)(*(_QWORD *)v109 + 252LL) &= ~1u;
    goto LABEL_251;
  }
  v95 = 0;
  UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
    (UmfdClientSideFileViewMapper *)&v146,
    (struct PFFOBJ *)v130);
  v96 = v146;
  v97 = v147;
  if ( v147 == *(_DWORD *)(v146 + 36) )
    v95 = (unsigned int)RFONTOBJ::bRealizeFont(
                          this,
                          v94,
                          (struct PDEVOBJ *)&v113,
                          (struct tagENUMLOGFONTEXDVW *)(v24 + 276),
                          v119,
                          &v148,
                          &v120,
                          v114,
                          0,
                          v117,
                          v116,
                          v115) != 0;
  for ( i = 0; i < v97; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v96 + 200) + 8LL * i++)) )
  {
    if ( i >= *(_DWORD *)(v96 + 36) )
      break;
  }
  v7 = 0;
  if ( v95 )
  {
    v54 = v119;
    v61 = (int *)(v24 + 276);
    goto LABEL_237;
  }
  v99 = v118;
  *(_QWORD *)this = 0LL;
  *(_QWORD *)(*(_QWORD *)v99 + 1768LL) = 0LL;
LABEL_249:
  v42 = 0;
LABEL_250:
  v108 = v131;
LABEL_251:
  v110 = v130[0];
  if ( v130[0] && !v108 )
  {
    v142 = 0LL;
    v143 = 0LL;
    GreAcquireSemaphore(ghsemPublicPFT);
    --*(_DWORD *)(v110 + 68);
    if ( !*(_DWORD *)(v110 + 56)
      && !*(_DWORD *)(v110 + 60)
      && !*(_QWORD *)(v110 + 144)
      && !*(_DWORD *)(v110 + 68)
      && !*(_DWORD *)(v110 + 64) )
    {
      PFFOBJ::vPFFC_Delete((PFFOBJ *)v130, (struct PFFCLEANUP *)&v142);
      v7 = 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    if ( v7 )
      vCleanupFontFile((struct PFFCLEANUP *)&v142);
  }
LABEL_264:
  if ( v24 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v24);
  return v42;
}
