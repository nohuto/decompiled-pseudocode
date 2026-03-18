/*
 * XREFs of GreStretchBltInternal @ 0x1C002AF84
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0025910 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     BltIcon @ 0x1C00BE16C (BltIcon.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     NtGdiStretchBlt @ 0x1C00F6C80 (NtGdiStretchBlt.c)
 *     NtUserBitBltSysBmp @ 0x1C014C140 (NtUserBitBltSysBmp.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C0239218 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C02745B0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C002C648 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002C6F4 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C002C7C4 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C002CDE8 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C002CF1C (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     GreMovePointer @ 0x1C0086EF0 (GreMovePointer.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0088D44 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C0089370 (bCvtPts1.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00894E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C008C6C8 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0116EA0 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0119CBC (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0275B34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02894C8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028DAA8 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreStretchBltInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  int v14; // r15d
  unsigned int v16; // ebx
  unsigned int v17; // r14d
  unsigned int v18; // r10d
  int v19; // eax
  char v20; // r13
  int v21; // r13d
  bool v22; // zf
  int v23; // ebx
  DC *v24; // rcx
  __int64 v25; // rdx
  int v26; // r8d
  ULONG v27; // ecx
  __int64 v28; // r9
  DC *v29; // r8
  __int64 v30; // r9
  struct SURFACE *v31; // rbx
  struct SURFACE *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rbx
  DC *v35; // r9
  struct SURFACE *v36; // r12
  __int64 v37; // rbx
  __int64 v38; // r8
  int v39; // r11d
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r10
  SURFACE *v43; // rcx
  int v44; // r12d
  DC *v45; // r8
  __int64 v46; // rcx
  BOOL v47; // r12d
  struct SURFACE *v48; // rax
  int v49; // edx
  __int64 v50; // r9
  __int64 v51; // r11
  unsigned int v52; // r14d
  __int64 v53; // r8
  int v54; // edx
  unsigned int v55; // eax
  unsigned __int8 v56; // r9
  SURFACE *v57; // rax
  DC *v58; // rcx
  DC *v59; // r8
  __int64 v60; // rcx
  unsigned int v63; // [rsp+6Ch] [rbp-94h]
  DC *v65[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v66[32]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v67; // [rsp+A8h] [rbp-58h]
  _QWORD v68[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v69[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v70; // [rsp+E0h] [rbp-20h]
  unsigned int v71; // [rsp+E4h] [rbp-1Ch]
  _BYTE v72[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v73; // [rsp+F8h] [rbp-8h]
  __int64 v74; // [rsp+100h] [rbp+0h]
  _BYTE v75[288]; // [rsp+110h] [rbp+10h] BYREF
  struct SURFACE *v76; // [rsp+230h] [rbp+130h] BYREF
  int v77; // [rsp+238h] [rbp+138h]
  int v78; // [rsp+23Ch] [rbp+13Ch]
  _QWORD v79[2]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v80; // [rsp+250h] [rbp+150h] BYREF
  __int64 v81; // [rsp+260h] [rbp+160h]
  __int64 v82; // [rsp+268h] [rbp+168h]
  __int64 v83; // [rsp+270h] [rbp+170h]
  __int64 v84; // [rsp+278h] [rbp+178h]
  struct SURFACE *v85; // [rsp+280h] [rbp+180h]
  struct SURFACE *v86; // [rsp+288h] [rbp+188h]
  __int64 v87; // [rsp+290h] [rbp+190h]
  char v88[8]; // [rsp+298h] [rbp+198h] BYREF
  char *v89; // [rsp+2A0h] [rbp+1A0h]
  _DWORD v90[6]; // [rsp+2D8h] [rbp+1D8h] BYREF
  _DWORD v91[8]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v92; // [rsp+310h] [rbp+210h]
  unsigned int v93; // [rsp+318h] [rbp+218h]
  int v94; // [rsp+31Ch] [rbp+21Ch]

  v14 = a2;
  v70 = a11 & 0x40000000;
  v87 = 0LL;
  v94 = 0;
  v67 = 0;
  v16 = a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF);
  v17 = 0;
  v93 = ((v16 >> 8) | v16 & 0xFF0000) >> 8;
  v19 = (unsigned __int8)gajRop3[(unsigned __int16)(v16 >> 8) >> 8];
  v20 = v19 | gajRop3[(unsigned __int64)v93 >> 8];
  v71 = v19 | (unsigned __int8)gajRop3[(unsigned __int64)v93 >> 8];
  v21 = v20 & 0xD4;
  if ( v21
    || (v18 = (((unsigned int)(a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF)) >> 8) | a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF) & 0xFF0000) >> 8,
        (unsigned __int8)v18 != v18 >> 8) )
  {
    v65[0] = 0LL;
    v65[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v66);
    XDCOBJ::vLock((XDCOBJ *)v65, a1);
    if ( ((gajRop3[(unsigned __int8)v16] | gajRop3[BYTE1(v16)]) & 2) == 0 || v16 == 16711778 )
    {
      v23 = a4;
    }
    else
    {
      v22 = v16 == 66;
      v23 = a4;
      if ( !v22 )
        bSpDwmValidateSurface((struct XDCOBJ *)v65, v14, a3, a4, a5);
    }
    v68[0] = 0LL;
    v68[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v69);
    XDCOBJ::vLock((XDCOBJ *)v68, a6);
    bSpDwmValidateSurface((struct XDCOBJ *)v68, a7, a8, a9, a10);
    v24 = v65[0];
    if ( !v65[0] )
      goto LABEL_129;
    if ( (*((_DWORD *)v65[0] + 9) & 0x10000) == 0 )
    {
      v25 = *((_QWORD *)v65[0] + 122);
      if ( (*(_DWORD *)(v25 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v65[0], *(_QWORD *)(v25 + 160));
        v24 = v65[0];
      }
    }
    if ( !v24 || (*((_DWORD *)v24 + 9) & 0x10000) != 0 || !v68[0] && v21 )
    {
LABEL_129:
      EngSetLastError(6u);
      if ( !v21 || v68[0] )
        v17 = 1;
      goto LABEL_132;
    }
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v75);
    if ( v21 )
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v75, (struct XDCOBJ *)v65, (struct XDCOBJ *)v68, (a11 & 0x40000000) != 0);
    else
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v75, (struct XDCOBJ *)v65, v26);
    if ( (v75[112] & 1) == 0 )
    {
      v27 = 8;
LABEL_36:
      EngSetLastError(v27);
      goto LABEL_128;
    }
    if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v65)
      || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v68)
      || (*(_DWORD *)(*(_QWORD *)(v28 + 496) + 112LL) & 0x10000000) != 0 )
    {
      v29 = v65[0];
      if ( !*((_QWORD *)v65[0] + 62) || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v68) )
      {
        if ( (*((_DWORD *)v29 + 9) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v72, (struct XDCOBJ *)v65, 0x204u);
          v77 = v14 + v23;
          v78 = a3 + a5;
          v76 = (struct SURFACE *)__PAIR64__(a3, v14);
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v72, (struct ERECTL *)&v76) )
          {
            ERECTL::vOrder((ERECTL *)&v76);
            XDCOBJ::vAccumulate((XDCOBJ *)v65, (struct ERECTL *)&v76);
          }
        }
        v17 = 1;
        goto LABEL_128;
      }
      if ( (*(_DWORD *)(v30 + 36) & 1) == 0 )
      {
LABEL_128:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v75);
LABEL_132:
        MDCOBJ::~MDCOBJ((MDCOBJ *)v68);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v69);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v65);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v66);
        goto LABEL_133;
      }
    }
    if ( v21
      && ((v31 = XDCOBJ::pSurfaceEff((XDCOBJ *)v68), *((_DWORD *)v31 + 164))
       && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v31 + 164)
       || !(unsigned int)_SurfaceAccessCheck(v31))
      || (v32 = XDCOBJ::pSurfaceEff((XDCOBJ *)v65), !(unsigned int)DestSurfaceAccessCheck(v32)) )
    {
      v27 = 5;
      goto LABEL_36;
    }
    if ( (unsigned __int8)v93 != BYTE1(v93) )
    {
      v27 = 87;
      goto LABEL_36;
    }
    if ( (a11 < 0 && (v33 = *((_QWORD *)v65[0] + 122), (*(_DWORD *)(v33 + 108) & 1) != 0)
       || (v33 = *((_QWORD *)v65[0] + 122), (*(_BYTE *)(v33 + 108) & 9) == 9))
      && a6 != a1 )
    {
      v34 = *(_QWORD *)(v33 + 308);
      v67 = DC::dwSetLayout(v65[0], -1, 0);
      v14 = v34 - v14 - a4;
      v63 = 0x80000000;
    }
    else
    {
      v63 = 0;
    }
    v73 = 0LL;
    v76 = XDCOBJ::pSurfaceEff((XDCOBJ *)v68);
    v36 = v76;
    v74 = 0LL;
    v37 = *((_QWORD *)v76 + 6);
    if ( !v70 )
    {
LABEL_71:
      v47 = (a11 & 0x40000000) != 0;
      goto LABEL_72;
    }
    v38 = v68[0];
    v39 = *(_DWORD *)(v68[0] + 36LL);
    if ( (v39 & 1) == 0
      || (v40 = *(_QWORD *)(v68[0] + 48LL), (*(_DWORD *)(v40 + 40) & 0x80u) != 0)
      || v40 != *((_QWORD *)v35 + 6)
      && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v65) || v41 != *(_QWORD *)(v42 + 3496))
      || !v37 )
    {
      v47 = 0;
LABEL_72:
      EXFORMOBJ::vInit((EXFORMOBJ *)v79, (struct XDCOBJ *)v65, 0x204u, 0);
      v85 = XDCOBJ::pSurfaceEff((XDCOBJ *)v65);
      v81 = *((_QWORD *)v85 + 16);
      v82 = *((_QWORD *)v65[0] + 11);
      EXFORMOBJ::vInit((EXFORMOBJ *)&v80, (struct XDCOBJ *)v68, 0x204u, 0);
      v48 = XDCOBJ::pSurfaceEff((XDCOBJ *)v68);
      v49 = a12;
      v86 = v48;
      v50 = *((_QWORD *)v48 + 16);
      v83 = v50;
      v51 = *(_QWORD *)(v68[0] + 88LL);
      v84 = v51;
      if ( a12 == -1 )
        v49 = *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 180LL);
      if ( (a13 & 1) != 0 )
        v73 = *(_QWORD *)(*((_QWORD *)v65[0] + 122) + 248LL);
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           v88,
                           v73,
                           *((unsigned int *)v65[0] + 30),
                           v50,
                           v81,
                           v51,
                           v82,
                           *(_DWORD *)(*((_QWORD *)v65[0] + 122) + 184LL),
                           *(_DWORD *)(*((_QWORD *)v65[0] + 122) + 176LL),
                           v49,
                           0) )
      {
        v94 |= 2u;
        v52 = v71;
        if ( (v71 & 0xE8) != 0 )
        {
          v89 = (char *)v65[0] + 1200;
          v53 = *((_QWORD *)v65[0] + 122);
          v54 = *(_DWORD *)(v53 + 152);
          if ( (v54 & 1) != 0 || (*((_DWORD *)v65[0] + 79) & 1) != 0 )
          {
            *(_DWORD *)(v53 + 152) = v54 & 0xFFFFFFFE;
            *((_DWORD *)v65[0] + 79) &= ~1u;
            EBRUSHOBJ::vInitBrush(v89, v65[0], *((_QWORD *)v65[0] + 17), v82, v81, v85, 1);
          }
          v92 = *((_QWORD *)v65[0] + 149);
        }
        else
        {
          v89 = 0LL;
        }
        v87 = 0LL;
        if ( (*(_DWORD *)(v80 + 32) & 1) != 0 )
        {
          v91[0] = a7;
          v91[2] = a9 + a7;
          v91[1] = a8;
          v91[3] = a8 + a10;
          if ( (*(_BYTE *)(v80 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v80, v91, 2LL) )
          {
            if ( v21 && ERECTL::bEmpty((ERECTL *)v91) )
            {
              v17 = 1;
              goto LABEL_101;
            }
            if ( (*(_DWORD *)(v79[0] + 32LL) & 1) == 0 )
            {
              BLTRECORD::TrgPlg((BLTRECORD *)v79, v14, a3, a4, a5);
              v55 = BLTRECORD::bRotate(
                      (BLTRECORD *)v79,
                      (struct DCOBJ *)v65,
                      (struct DCOBJ *)v68,
                      v52,
                      *(_BYTE *)(*((_QWORD *)v65[0] + 122) + 215LL));
LABEL_92:
              v17 = v55;
              goto LABEL_101;
            }
            v90[0] = v14;
            v90[2] = v14 + a4;
            v90[1] = a3;
            v90[3] = a3 + a5;
            if ( (*(_BYTE *)(v79[0] + 32LL) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v79[0], v90, 2LL) )
            {
              v56 = *(_BYTE *)(*((_QWORD *)v65[0] + 122) + 215LL);
              if ( v56 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v79) )
                v55 = BLTRECORD::bStretch((BLTRECORD *)v79, (struct DCOBJ *)v65, (struct DCOBJ *)v68, v52, v56);
              else
                v55 = BLTRECORD::bBitBlt((BLTRECORD *)v79, (struct DCOBJ *)v65, (struct DCOBJ *)v68, v52);
              goto LABEL_92;
            }
          }
        }
        EngSetLastError(0x57u);
      }
      v17 = 0;
LABEL_101:
      if ( v63 )
        DC::dwSetLayout(v65[0], -1, v67);
      if ( !v47 )
        goto LABEL_128;
      SURFACE::vClearIncludeSprites();
      if ( v21 && (*(_DWORD *)(v68[0] + 36LL) & 0x4000) != 0 )
      {
        v57 = *(SURFACE **)(v68[0] + 496LL);
        v58 = v65[0];
        if ( v57 == *((SURFACE **)v65[0] + 62) )
          goto LABEL_109;
        SURFACE::bUnMap(v57, 0LL, 0LL);
      }
      v58 = v65[0];
LABEL_109:
      if ( (*((_DWORD *)v58 + 9) & 0x4000) != 0 )
        SURFACE::bUnMap(*((SURFACE **)v58 + 62), 0LL, v58);
      UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v72);
      if ( (a13 & 2) == 0 || !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
        GreMovePointer(*((HDEV *)v76 + 6));
      EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v37 + 56));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v37 + 56));
      if ( v21 && (*(_DWORD *)(v68[0] + 36LL) & 0x4000) != 0 )
      {
        v59 = v65[0];
        v60 = *(_QWORD *)(v68[0] + 496LL);
        if ( v60 == *((_QWORD *)v65[0] + 62) )
          goto LABEL_120;
        if ( (unsigned int)SURFACE::Map(v60, 0LL, 0LL) == 2 )
          *(_DWORD *)(v68[0] + 44LL) |= 1u;
      }
      v59 = v65[0];
LABEL_120:
      if ( (*((_DWORD *)v59 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v59 + 62), 0LL, v59) == 2 )
        *((_DWORD *)v65[0] + 11) |= 1u;
      UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v72);
      goto LABEL_128;
    }
    if ( v21 )
    {
      if ( (v39 & 0x4000) != 0 )
      {
        v43 = *(SURFACE **)(v38 + 496);
        if ( v43 != *((SURFACE **)v35 + 62) )
        {
          SURFACE::bUnMap(v43, 0LL, 0LL);
          v35 = v65[0];
        }
      }
    }
    if ( (*((_DWORD *)v35 + 9) & 0x4000) != 0 )
      SURFACE::bUnMap(*((SURFACE **)v35 + 62), 0LL, v35);
    GreAcquireSemaphore(*(_QWORD *)(v37 + 56));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v37 + 56), 4LL);
    v74 = *(_QWORD *)(v37 + 64);
    UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v72);
    if ( (a13 & 2) == 0 || !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
      GreMovePointer(*((HDEV *)v36 + 6));
    SURFACE::vSetIncludeSprites();
    v44 = 0;
    if ( v21 && (*(_DWORD *)(v68[0] + 36LL) & 0x4000) != 0 )
    {
      v45 = v65[0];
      v46 = *(_QWORD *)(v68[0] + 496LL);
      if ( v46 == *((_QWORD *)v65[0] + 62) )
        goto LABEL_65;
      if ( (unsigned int)SURFACE::Map(v46, 0LL, 0LL) == 2 )
      {
        v44 = 1;
        *(_DWORD *)(v68[0] + 44LL) |= 1u;
      }
    }
    v45 = v65[0];
LABEL_65:
    if ( (*((_DWORD *)v45 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v45 + 62), 0LL, v45) == 2 )
    {
      *((_DWORD *)v65[0] + 11) |= 1u;
LABEL_69:
      UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v72);
      v47 = (a11 & 0x40000000) != 0;
      goto LABEL_101;
    }
    if ( v44 )
      goto LABEL_69;
    UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v72);
    goto LABEL_71;
  }
  v17 = NtGdiPatBlt(a1, a2, a3, a4, a5, a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF));
LABEL_133:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v79);
  return v17;
}
