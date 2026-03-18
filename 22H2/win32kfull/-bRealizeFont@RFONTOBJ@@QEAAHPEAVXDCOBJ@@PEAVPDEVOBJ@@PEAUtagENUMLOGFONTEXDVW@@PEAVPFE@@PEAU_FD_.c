/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0083CD4
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C015C6AE (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02B6B38 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0080918 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0080F14 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0081018 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008473C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00847AC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C00847CC (--$AllocateIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0084804 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C008482C (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0084B58 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     UmfdQueryFontCapsEx @ 0x1C0084C50 (UmfdQueryFontCapsEx.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0084C80 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0084E98 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0085154 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C008561C (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C0086324 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0087C50 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0113D6C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0113DB0 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0116770 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02B7298 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
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
        unsigned int a10,
        int a11,
        unsigned int a12)
{
  struct RFONT *v12; // r15
  __int64 v17; // rsi
  struct _FD_GLYPHSET *v18; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // eax
  char v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rdx
  unsigned int (__fastcall *v42)(__int64, _BYTE *); // rax
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // ebx
  __int64 v46; // rdx
  __int64 v47; // r15
  bool v48; // zf
  _DWORD *v49; // rdx
  __int64 v50; // rbx
  int v51; // ecx
  int inited; // eax
  Gre::Base *v53; // rcx
  int v54; // ecx
  int v55; // ecx
  __int64 v56; // r14
  int v57; // ecx
  unsigned int v58; // ecx
  int v59; // ecx
  __int64 v60; // rcx
  char v61; // dl
  __int64 v62; // rcx
  const wchar_t *v63; // rbx
  __int64 v64; // rcx
  _BYTE *v65; // rdx
  float v66; // xmm0_4
  unsigned int v67; // ecx
  unsigned __int8 *v68; // r8
  unsigned int v69[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct RFONT *v70; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v71; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v72[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v73; // [rsp+4Ch] [rbp-B4h]
  __int64 v74; // [rsp+50h] [rbp-B0h]
  __int64 v75; // [rsp+58h] [rbp-A8h]
  __int128 v76; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v77; // [rsp+70h] [rbp-90h]
  _FD_DEVICEMETRICS v78; // [rsp+80h] [rbp-80h] BYREF

  v12 = a5;
  v70 = a5;
  v17 = 0LL;
  v18 = PFEOBJ::pfdg((PFEOBJ *)&v70);
  if ( !v18 )
    goto LABEL_2;
  v20 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>();
  *(_QWORD *)this = v20;
  if ( !v20 )
  {
    PFEOBJ::vFreepfdg((__int64 **)&v70);
LABEL_2:
    *(_QWORD *)this = 0LL;
    return 0LL;
  }
  v74 = *(_QWORD *)a5;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = PDEVOBJ::ulLogPixelsX(a3);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = PDEVOBJ::ulLogPixelsY(a3);
  *(_DWORD *)(*(_QWORD *)this + 40LL) = a9;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = a8 | PFEOBJ::flFontType((PFEOBJ *)&v70);
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 4LL) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)(v74 + 80);
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 4) != 0 )
    v21 = *((unsigned int *)a5 + 20);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = v21;
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
  v22 = *(_QWORD *)this;
  if ( a3 )
  {
    *(_QWORD *)(v22 + 104) = *(_QWORD *)a3;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)a3 + 1768LL);
  }
  else
  {
    *(_QWORD *)(v22 + 104) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  v23 = *(_QWORD *)this;
  v69[0] = 0;
  *(_DWORD *)(v23 + 168) = 1;
  *(_DWORD *)(*(_QWORD *)this + 716LL) = *(_DWORD *)(*((_QWORD *)a5 + 4) + 48LL);
  *(_QWORD *)(*(_QWORD *)this + 472LL) = v18;
  v75 = *((_QWORD *)a5 + 4);
  v71 = *(_WORD *)(v75 + 116);
  RFONTOBJ::vXlatGlyphArray(this, &v71, 1, v69, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 460LL) = v69[0];
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  memset_0(&v78, 0, sizeof(v78));
  *(_QWORD *)(*(_QWORD *)this + 96LL) = *(_QWORD *)(v74 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS(this, &v78) )
    goto LABEL_12;
  if ( a2 )
  {
    *(POINTE *)(*(_QWORD *)this + 396LL) = v78.pteBase;
    *(POINTE *)(*(_QWORD *)this + 416LL) = v78.pteSide;
    v25 = *(_DWORD *)(*(_QWORD *)a2 + 352LL);
    v26 = *(_OWORD *)(*(_QWORD *)a2 + 336LL);
    v27 = *(_QWORD *)this;
    *(_OWORD *)(v27 + 172) = *(_OWORD *)(*(_QWORD *)a2 + 320LL);
    *(_OWORD *)(v27 + 188) = v26;
    *(_DWORD *)(v27 + 204) = v25;
    if ( !RFONTOBJ::bCalcLayoutUnits(this, a2)
      || !bGetNtoWScales(
            (struct EPOINTFL *)(*(_QWORD *)this + 212LL),
            a2,
            (struct _FD_XFORM *)(*(_QWORD *)this + 360LL),
            (struct PFEOBJ *)&v70,
            (int *)(*(_QWORD *)this + 220LL)) )
    {
LABEL_12:
      v24 = *(_QWORD *)this;
LABEL_13:
      v76 = 0LL;
      v77 = 0LL;
      PushThreadGuardedObject(&v76, v24, Win32FreePool);
      RFONTOBJ::vDestroyFont(this, 1);
      PopThreadGuardedObject(&v76);
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*(_QWORD *)this);
      goto LABEL_2;
    }
    v29 = *(_QWORD *)this;
    v69[0] = 0;
    bFToL(v28, v69, 0LL);
    *(_DWORD *)(v29 + 328) = v69[0];
    v30 = *(_QWORD *)this;
    v69[0] = 0;
    bFToL(v31, v69, 0LL);
    *(_DWORD *)(v30 + 332) = v69[0];
    v32 = *(_QWORD *)this;
    v69[0] = 0;
    bFToL(v33, v69, 0LL);
    *(_DWORD *)(v32 + 336) = v69[0];
    v34 = *(_QWORD *)this;
    v69[0] = 0;
    bFToL(v35, v69, 0LL);
    *(_DWORD *)(v34 + 340) = v69[0];
    *(_DWORD *)(*(_QWORD *)this + 432LL) = -1;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1 )
    {
      v36 = *(_DWORD *)(v75 + 48);
      if ( (v36 & 4) == 0 )
      {
        if ( (v36 & 0x10) == 0 )
        {
          v38 = ulSimpleDeviceOrientation(this);
LABEL_22:
          *(_DWORD *)(*(_QWORD *)this + 392LL) = v38;
          goto LABEL_23;
        }
        v37 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_29:
        v38 = lNormAngle(v37);
        goto LABEL_22;
      }
LABEL_28:
      v37 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
      goto LABEL_29;
    }
    *(_DWORD *)(*(_QWORD *)this + 392LL) = RFONTOBJ::ulSimpleOrientation(this, a2);
    if ( *(_DWORD *)(*(_QWORD *)this + 392LL) >= 0xE10u && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x10) != 0 )
      goto LABEL_28;
  }
LABEL_23:
  v39 = 0;
  *(_DWORD *)(*(_QWORD *)this + 656LL) = a10;
  v40 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  v41 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a10) + 32) + 23448LL);
  if ( *(_QWORD *)(*(_QWORD *)this + 96LL) == v41 )
  {
    if ( (unsigned int)UmfdQueryFontCapsEx(*(_QWORD *)(*(_QWORD *)this + 24LL), v41, v72) != -1 )
      v39 = v73;
  }
  else
  {
    v42 = *(unsigned int (__fastcall **)(__int64, _BYTE *))(v40 + 3016);
    if ( v42 && v42(2LL, v72) != -1 )
      v39 = v73;
  }
  v43 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v40 + 40) & 0x2000) == 0 )
  {
    *(_DWORD *)(v43 + 92) = 1;
    *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
    goto LABEL_58;
  }
  v44 = *(_DWORD *)(v43 + 12);
  *(_DWORD *)(v43 + 92) = 0;
  v45 = (v44 & 0x10010000) != 0 ? 400 : 800;
  v43 = v45;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
  v46 = *(_QWORD *)this;
  if ( a10 )
  {
    *(_DWORD *)(v46 + 88) = 2;
    goto LABEL_49;
  }
  v47 = *(_QWORD *)(v46 + 104);
  if ( v47 )
  {
    v48 = (*(_DWORD *)(v47 + 40) & 0x8000) == 0;
    *(_QWORD *)v69 = *(_QWORD *)(v46 + 104);
    if ( !v48 )
    {
      if ( KeAreApcsDisabled() )
      {
LABEL_43:
        v43 = v45;
        if ( (*(_DWORD *)(v47 + 1792) & 0x40000000) != 0 )
        {
          v43 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)v69);
          if ( (unsigned int)v43 <= 0x320 )
            v43 = v45;
          if ( (unsigned int)v43 > 0x960 )
            v43 = 2400LL;
        }
        goto LABEL_48;
      }
      v46 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v47 + 2960) )
    {
      v76 = 0LL;
      v77 = 0LL;
      PushThreadGuardedObject(&v76, v46, vRestartbRealizeFont);
      *(_DWORD *)(*(_QWORD *)this + 88LL) = (*(__int64 (__fastcall **)(_QWORD))(v47 + 2960))(*(_QWORD *)(*(_QWORD *)this + 112LL));
      PopThreadGuardedObject(&v76);
    }
    goto LABEL_43;
  }
LABEL_48:
  v12 = v70;
LABEL_49:
  v49 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
  {
    if ( (v39 & 2) == 0
      || (v49[179] & 0x8000) != 0 && (v49[86] > (unsigned int)(2 * v43) || v49[87] > (unsigned int)v43) )
    {
      v49[22] = 2;
    }
  }
  else if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 && (v39 & 1) == 0 )
  {
    v49[22] = 1;
  }
LABEL_58:
  v50 = *(_QWORD *)(SGDGetSessionState(v43) + 32);
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) &= 0x8FFEFFFF;
  if ( a10 )
  {
    v24 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) != 2 )
      goto LABEL_13;
  }
  if ( !a11 || (v51 = 1, *(_DWORD *)(*(_QWORD *)this + 392LL)) )
    v51 = 0;
  *(_DWORD *)(*(_QWORD *)this + 640LL) = v51;
  inited = RFONTOBJ::bInitCache(this, a12);
  v53 = *(Gre::Base **)this;
  if ( !inited )
  {
    v24 = *(_QWORD *)this;
    goto LABEL_13;
  }
  *((_QWORD *)v53 + 86) = 0LL;
  *(_QWORD *)v69 = *((_QWORD *)Gre::Base::Globals(v53) + 3);
  GreAcquireSemaphore(*(_QWORD *)v69);
  v54 = *(_DWORD *)(v50 + 23408);
  v48 = v54 == -1;
  v55 = v54 + 1;
  *(_DWORD *)(v50 + 23408) = v55;
  if ( v48 )
  {
    *(_DWORD *)(v50 + 23408) = 1;
    v55 = 1;
  }
  **(_DWORD **)this = v55;
  if ( a3 )
  {
    *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
    v70 = PDEVOBJ::prfntActive(a3);
    RFONTOBJ::vInsert(this, &v70, 1LL);
    PDEVOBJ::prfntActive(a3, v70);
  }
  v56 = v74;
  v70 = *(struct RFONT **)(v74 + 72);
  RFONTOBJ::vInsert(this, &v70, 0LL);
  *(_QWORD *)(v56 + 72) = v70;
  SEMOBJ::vUnlock((SEMOBJ *)v69);
  v57 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
    v58 = v57 | 1;
  else
    v58 = v57 & 0xFFFFFFFE;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = v58;
  if ( a2 )
    *(_DWORD *)(*(_QWORD *)this + 208LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL);
  else
    *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
  if ( !*(_DWORD *)(v50 + 19352) || (v59 = 1, (*((_DWORD *)v12 + 3) & 0x10) == 0) )
    v59 = 0;
  *(_DWORD *)(*(_QWORD *)this + 708LL) = v59;
  v60 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x10000000) != 0 )
  {
    if ( (*(_DWORD *)(v60 + 204) & 1) == 0 || (v61 = 1, *(_DWORD *)(v60 + 328)) )
      v61 = 0;
    v62 = *(_QWORD *)(*(_QWORD *)(v60 + 120) + 32LL);
    if ( (*(_DWORD *)(v62 + 48) & 0x401000) != 0 )
    {
      if ( v61 )
      {
        if ( *(_WORD *)(v62 + 46) <= 0x190u )
        {
          v63 = (const wchar_t *)(v62 + *(int *)(v62 + 8));
          if ( !_wcsicmp(v63, L"Courier New")
            || !_wcsicmp(v63, L"Rod")
            || !_wcsicmp(v63, L"Rod Transparent")
            || !_wcsicmp(v63, L"Fixed Miriam Transparent")
            || !_wcsicmp(v63, L"Miriam Fixed")
            || !_wcsicmp(v63, L"Simplified Arabic Fixed") )
          {
            *(_DWORD *)(*(_QWORD *)this + 64LL) = 1;
          }
        }
      }
    }
    v64 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x20000000) != 0 )
    {
      v76 = 0LL;
      *(_QWORD *)&v77 = 0LL;
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(v64 + 224), (struct tagFLOATOBJ_XFORM *)&v76);
      v65 = *(_BYTE **)(v56 + 192);
      v66 = (float)*(__int16 *)(v75 + 56) * *((float *)&v76 + 3);
      *((float *)&v76 + 3) = v66;
      if ( v65 )
      {
        v67 = 0;
        if ( *v65 )
        {
          v68 = v65 + 4;
          while ( *v68 != (int)v66 )
          {
            ++v67;
            v68 += 80;
            if ( v67 >= (unsigned __int8)*v65 )
              goto LABEL_102;
          }
          v17 = (__int64)&v65[80 * v67 + 4];
        }
      }
LABEL_102:
      *(_QWORD *)(*(_QWORD *)this + 72LL) = v17;
    }
  }
  return 1LL;
}
