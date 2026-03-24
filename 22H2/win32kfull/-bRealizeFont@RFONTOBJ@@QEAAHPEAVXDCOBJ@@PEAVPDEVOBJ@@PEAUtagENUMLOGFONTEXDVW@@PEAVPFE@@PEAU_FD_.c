/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C009D950
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00E8260 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A7D6C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0099730 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0099DF4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0099E30 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C0099E6C (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C009A140 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C009E3C0 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C009E430 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C009E458 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C009E478 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     UmfdQueryFontCapsEx @ 0x1C009E6B4 (UmfdQueryFontCapsEx.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C009E6F4 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C009E938 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C009EBFC (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C009EC54 (--$AllocateIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C009EC80 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C009EDA0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C009F18C (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C009FB5C (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     bFToL @ 0x1C00FB1E8 (bFToL.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C012DCB0 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02A8474 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

__int64 __fastcall RFONTOBJ::bRealizeFont(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct PDEVOBJ *a3,
        struct tagENUMLOGFONTEXDVW *a4,
        struct PFE *a5,
        struct _FD_XFORM *a6,
        struct _POINTL *const a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11,
        unsigned int a12)
{
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  struct RFONT *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // eax
  char v41; // r15
  int v42; // r9d
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 (__fastcall *v45)(__int64, _BYTE *); // rax
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  int v49; // r14d
  unsigned int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rbx
  bool v53; // zf
  _DWORD *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // eax
  unsigned int v58; // ecx
  __int64 v59; // rbx
  int v60; // eax
  unsigned int v61; // eax
  int v62; // ecx
  __int64 v63; // rcx
  char v64; // dl
  __int64 v65; // rcx
  const wchar_t *v66; // rbx
  __int64 v67; // rcx
  _BYTE *v68; // rdx
  float v69; // xmm0_4
  unsigned int v70; // ecx
  unsigned __int8 *v71; // r8
  struct RFONT *v72; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v73; // [rsp+38h] [rbp-C8h] BYREF
  struct PFE *v74; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v75; // [rsp+48h] [rbp-B8h]
  _BYTE v76[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v77; // [rsp+54h] [rbp-ACh]
  __int64 v78; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+60h] [rbp-A0h]
  __int128 v80; // [rsp+68h] [rbp-98h] BYREF
  __int128 v81; // [rsp+78h] [rbp-88h]
  _FD_DEVICEMETRICS v82; // [rsp+90h] [rbp-70h] BYREF

  v74 = a5;
  v16 = 0LL;
  v72 = (struct RFONT *)PFEOBJ::pfdg((PFEOBJ *)&v74);
  if ( !v72 )
    goto LABEL_4;
  v17 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>();
  *(_QWORD *)this = v17;
  if ( !v17 )
  {
    PFEOBJ::vFreepfdg((PFEOBJ *)&v74);
LABEL_4:
    *(_QWORD *)this = 0LL;
    return (unsigned int)v16;
  }
  v75 = *(_QWORD *)a5;
  *(_DWORD *)(v17 + 32) = PDEVOBJ::ulLogPixelsX(a3);
  v19 = *(_QWORD *)this;
  *(_DWORD *)(v19 + 36) = PDEVOBJ::ulLogPixelsY(a3);
  *(_DWORD *)(*(_QWORD *)this + 40LL) = a9;
  v20 = PFEOBJ::flFontType((PFEOBJ *)&v74);
  v21 = v75;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = a8 | v20;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 4LL) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)(v21 + 80);
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 4) != 0 )
    v22 = *((unsigned int *)a5 + 20);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = v22;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 136LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 152LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 360LL) = *a6;
  *(struct _POINTL *)(*(_QWORD *)this + 648LL) = *a7;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = *(_QWORD *)this + 240LL;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)(*(_QWORD *)this + 224LL));
  *(_QWORD *)(*(_QWORD *)this + 120LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 128LL) = *(_QWORD *)a5;
  *(_QWORD *)(*(_QWORD *)this + 720LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 736LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 832LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 712LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 836LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 844LL) = *((_DWORD *)a5 + 3) & 0x100;
  v23 = *(_QWORD *)this;
  if ( a3 )
  {
    *(_QWORD *)(v23 + 104) = *(_QWORD *)a3;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)a3 + 1800LL);
  }
  else
  {
    *(_QWORD *)(v23 + 104) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  *(_DWORD *)(*(_QWORD *)this + 168LL) = 1;
  *(_DWORD *)(*(_QWORD *)this + 716LL) = *(_DWORD *)(*((_QWORD *)a5 + 4) + 48LL);
  v24 = v72;
  v25 = *(_QWORD *)this;
  LODWORD(v72) = 0;
  *(_QWORD *)(v25 + 472) = v24;
  v26 = *((_QWORD *)a5 + 4);
  v79 = v26;
  v73 = *(_WORD *)(v26 + 116);
  RFONTOBJ::vXlatGlyphArray(this, &v73, 1, (unsigned int *)&v72, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 460LL) = (_DWORD)v72;
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  memset(&v82, 0, sizeof(v82));
  *(_QWORD *)(*(_QWORD *)this + 96LL) = *(_QWORD *)(v21 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS(this, &v82) )
    goto LABEL_29;
  if ( !a2 )
    goto LABEL_22;
  *(POINTE *)(*(_QWORD *)this + 396LL) = v82.pteBase;
  *(POINTE *)(*(_QWORD *)this + 416LL) = v82.pteSide;
  v28 = *(_QWORD *)a2;
  v29 = *(_QWORD *)this;
  *(_OWORD *)(v29 + 172) = *(_OWORD *)(*(_QWORD *)a2 + 320LL);
  *(_OWORD *)(v29 + 188) = *(_OWORD *)(v28 + 336);
  *(_DWORD *)(v29 + 204) = *(_DWORD *)(v28 + 352);
  if ( !RFONTOBJ::bCalcLayoutUnits(this, a2)
    || !(unsigned int)bGetNtoWScales(
                        (struct EPOINTFL *)(*(_QWORD *)this + 212LL),
                        a2,
                        (__m128 *)(*(_QWORD *)this + 360LL),
                        (struct PFEOBJ *)&v74,
                        (int *)(*(_QWORD *)this + 220LL)) )
  {
LABEL_29:
    v44 = *(_QWORD *)this;
    v80 = 0LL;
    v81 = 0LL;
    PushThreadGuardedObject(&v80, v44, Win32FreePool);
LABEL_30:
    RFONTOBJ::vDestroyFont(this, 1);
    PopThreadGuardedObject(&v80);
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*(_QWORD *)this);
    goto LABEL_4;
  }
  v31 = *(_QWORD *)this;
  LODWORD(v72) = 0;
  bFToL(v30, &v72, 0LL);
  *(_DWORD *)(v31 + 328) = (_DWORD)v72;
  v32 = *(_QWORD *)this;
  LODWORD(v72) = 0;
  bFToL(v33, &v72, 0LL);
  *(_DWORD *)(v32 + 332) = (_DWORD)v72;
  v34 = *(_QWORD *)this;
  LODWORD(v72) = 0;
  bFToL(v35, &v72, 0LL);
  *(_DWORD *)(v34 + 336) = (_DWORD)v72;
  v36 = *(_QWORD *)this;
  LODWORD(v72) = 0;
  bFToL(v37, &v72, 0LL);
  *(_DWORD *)(v36 + 340) = (_DWORD)v72;
  *(_DWORD *)(*(_QWORD *)this + 432LL) = -1;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1 )
  {
    v38 = *(_DWORD *)(v26 + 48);
    if ( (v38 & 4) == 0 )
    {
      if ( (v38 & 0x10) == 0 )
      {
        v40 = ulSimpleDeviceOrientation(this);
LABEL_21:
        *(_DWORD *)(*(_QWORD *)this + 392LL) = v40;
        goto LABEL_22;
      }
      v39 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_28:
      v40 = lNormAngle(v39);
      goto LABEL_21;
    }
LABEL_27:
    v39 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_28;
  }
  *(_DWORD *)(*(_QWORD *)this + 392LL) = RFONTOBJ::ulSimpleOrientation(this, a2);
  if ( *(_DWORD *)(*(_QWORD *)this + 392LL) >= 0xE10u && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x10) != 0 )
    goto LABEL_27;
LABEL_22:
  v41 = 0;
  v42 = a10;
  *(_DWORD *)(*(_QWORD *)this + 656LL) = a10;
  v43 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  if ( (struct PDEV *)v43 == qword_1C0340AC0 )
  {
    if ( (unsigned int)UmfdQueryFontCapsEx(*(_QWORD *)(*(_QWORD *)this + 24LL), v27, v76) != -1 )
      v41 = v77;
  }
  else
  {
    v45 = *(__int64 (__fastcall **)(__int64, _BYTE *))(v43 + 3040);
    if ( v45 )
    {
      v46 = v45(2LL, v76);
      v42 = a10;
      if ( v46 != -1 )
        v41 = v77;
    }
  }
  v47 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v43 + 40) & 0x2000) == 0 )
  {
    *(_DWORD *)(v47 + 92) = 1;
    *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
    goto LABEL_59;
  }
  v48 = *(_DWORD *)(v47 + 12);
  *(_DWORD *)(v47 + 92) = 0;
  v49 = (v48 & 0x10010000) != 0 ? 400 : 800;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
  v50 = v49;
  v51 = *(_QWORD *)this;
  if ( v42 )
  {
    *(_DWORD *)(v51 + 88) = 2;
    goto LABEL_50;
  }
  v52 = *(_QWORD *)(v51 + 104);
  if ( v52 )
  {
    v53 = (*(_DWORD *)(v52 + 40) & 0x8000) == 0;
    v72 = *(struct RFONT **)(v51 + 104);
    if ( !v53 )
    {
      if ( KeAreApcsDisabled() )
      {
LABEL_44:
        v50 = v49;
        if ( (*(_DWORD *)(v52 + 1824) & 0x40000000) != 0 )
        {
          v50 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v72);
          if ( v50 <= 0x320 )
            v50 = v49;
          if ( v50 > 0x960 )
            v50 = 2400;
        }
        v42 = a10;
        goto LABEL_50;
      }
      v51 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v52 + 2984) )
    {
      v80 = 0LL;
      v81 = 0LL;
      PushThreadGuardedObject(&v80, v51, vRestartbRealizeFont);
      *(_DWORD *)(*(_QWORD *)this + 88LL) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v52 + 2984))(
                                              *(_QWORD *)(*(_QWORD *)this + 112LL),
                                              *(_QWORD *)this);
      PopThreadGuardedObject(&v80);
    }
    goto LABEL_44;
  }
LABEL_50:
  v54 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
  {
    if ( (v41 & 2) == 0 || (v54[179] & 0x8000) != 0 && (v54[86] > 2 * v50 || v54[87] > v50) )
      v54[22] = 2;
  }
  else if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 && (v41 & 1) == 0 )
  {
    v54[22] = 1;
  }
LABEL_59:
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) &= 0x8FFEFFFF;
  if ( v42 )
  {
    v55 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) != 2 )
      goto LABEL_68;
  }
  v56 = *(_QWORD *)this;
  if ( !a11 || (v57 = 1, *(_DWORD *)(v56 + 392)) )
    v57 = 0;
  *(_DWORD *)(v56 + 640) = v57;
  if ( !(unsigned int)RFONTOBJ::bInitCache(this, a12) )
  {
    v55 = *(_QWORD *)this;
LABEL_68:
    v80 = 0LL;
    v81 = 0LL;
    PushThreadGuardedObject(&v80, v55, Win32FreePool);
    goto LABEL_30;
  }
  *(_QWORD *)(*(_QWORD *)this + 688LL) = 0LL;
  v78 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v53 = iUniqueStamp == -1;
  v58 = ++iUniqueStamp;
  if ( v53 )
  {
    v58 = 1;
    iUniqueStamp = 1;
  }
  **(_DWORD **)this = v58;
  if ( a3 )
  {
    *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
    v72 = PDEVOBJ::prfntActive(a3);
    RFONTOBJ::vInsert(this, &v72, 1LL);
    PDEVOBJ::prfntActive(a3, v72);
  }
  v59 = v75;
  v72 = *(struct RFONT **)(v75 + 72);
  RFONTOBJ::vInsert(this, &v72, 0LL);
  *(_QWORD *)(v59 + 72) = v72;
  SEMOBJ::vUnlock((SEMOBJ *)&v78);
  v60 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
    v61 = v60 | 1;
  else
    v61 = v60 & 0xFFFFFFFE;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = v61;
  if ( a2 )
    *(_DWORD *)(*(_QWORD *)this + 208LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL);
  else
    *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
  if ( !gbSystemDBCSFontEnabled || (v62 = 1, (*((_DWORD *)v74 + 3) & 0x10) == 0) )
    v62 = 0;
  *(_DWORD *)(*(_QWORD *)this + 708LL) = v62;
  v63 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x10000000) != 0 )
  {
    if ( (*(_DWORD *)(v63 + 204) & 1) == 0 || (v64 = 1, *(_DWORD *)(v63 + 328)) )
      v64 = 0;
    v65 = *(_QWORD *)(*(_QWORD *)(v63 + 120) + 32LL);
    if ( (*(_DWORD *)(v65 + 48) & 0x401000) != 0 && v64 && *(_WORD *)(v65 + 46) <= 0x190u )
    {
      v66 = (const wchar_t *)(v65 + *(int *)(v65 + 8));
      if ( !_wcsicmp(v66, L"Courier New")
        || !_wcsicmp(v66, L"Rod")
        || !_wcsicmp(v66, L"Rod Transparent")
        || !_wcsicmp(v66, L"Fixed Miriam Transparent")
        || !_wcsicmp(v66, L"Miriam Fixed")
        || !_wcsicmp(v66, L"Simplified Arabic Fixed") )
      {
        *(_DWORD *)(*(_QWORD *)this + 64LL) = 1;
      }
      v59 = v75;
    }
    v67 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x20000000) != 0 )
    {
      v80 = 0LL;
      *(_QWORD *)&v81 = 0LL;
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(v67 + 224), (struct tagFLOATOBJ_XFORM *)&v80);
      v68 = *(_BYTE **)(v59 + 192);
      v69 = (float)*(__int16 *)(v79 + 56) * *((float *)&v80 + 3);
      *((float *)&v80 + 3) = v69;
      if ( v68 )
      {
        v70 = 0;
        if ( *v68 )
        {
          v71 = v68 + 4;
          while ( *v71 != (int)v69 )
          {
            ++v70;
            v71 += 80;
            if ( v70 >= (unsigned __int8)*v68 )
              goto LABEL_105;
          }
          v16 = (__int64)&v68[80 * v70 + 4];
        }
      }
LABEL_105:
      *(_QWORD *)(*(_QWORD *)this + 72LL) = v16;
    }
  }
  LODWORD(v16) = 1;
  return (unsigned int)v16;
}
