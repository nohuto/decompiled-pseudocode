/*
 * XREFs of GreStretchBltInternal @ 0x1C00B4D10
 * Callers:
 *     BltIcon @ 0x1C004438C (BltIcon.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0066AF8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00851E0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     BitBltSysBmp @ 0x1C010723C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0107390 (NtUserBitBltSysBmp.c)
 *     NtGdiStretchBlt @ 0x1C010B230 (NtGdiStretchBlt.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C023DEF0 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0276D30 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GreMovePointer @ 0x1C0016B30 (GreMovePointer.c)
 *     bCvtPts1 @ 0x1C0084CF0 (bCvtPts1.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087D58 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AFC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C890 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiPatBlt @ 0x1C00B42B0 (NtGdiPatBlt.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00B4A34 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00B4C9C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00B5924 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C00B5954 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00B5A00 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C00B6190 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00B6E98 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B79F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00B7A24 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00B7CA8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00B889C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C01291A0 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C012BC14 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0278324 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028B878 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028FDB0 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreStretchBltInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        LONG a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  unsigned int v15; // ebx
  unsigned int v16; // r14d
  unsigned int v17; // r10d
  int v18; // eax
  char v19; // r12
  int v20; // r12d
  DC *v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
  ULONG v24; // ecx
  int valid; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // r9
  struct SURFACE *v30; // rbx
  struct SURFACE *v31; // rcx
  DC *v32; // r9
  __int64 v33; // rbx
  __int64 v34; // r13
  unsigned int v35; // eax
  int v36; // r13d
  __int64 v37; // r15
  SURFACE *v38; // r10
  struct SURFACE *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdi
  int v42; // r11d
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  DC *v46; // r8
  __int64 v47; // rcx
  struct SURFACE *v48; // rax
  struct SURFACE *v49; // rax
  int v50; // edx
  __int64 v51; // r9
  __int64 v52; // r11
  unsigned int v53; // r14d
  __int64 v54; // r8
  int v55; // edx
  LONG v56; // r9d
  LONG v57; // r10d
  unsigned int v58; // eax
  unsigned __int8 v59; // r9
  SURFACE *v60; // rax
  DC *v61; // rcx
  DC *v62; // r8
  __int64 v63; // rcx
  BOOL v65; // [rsp+60h] [rbp-A0h]
  struct SURFACE *v69; // [rsp+70h] [rbp-90h]
  DC *v70[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v71[32]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+A8h] [rbp-58h]
  unsigned int v73; // [rsp+ACh] [rbp-54h]
  _QWORD v74[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v75[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v76; // [rsp+E0h] [rbp-20h]
  unsigned int v77; // [rsp+E4h] [rbp-1Ch]
  _BYTE v78[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-8h]
  _BYTE v80[288]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v81; // [rsp+220h] [rbp+120h] BYREF
  int v82; // [rsp+228h] [rbp+128h]
  int v83; // [rsp+22Ch] [rbp+12Ch]
  unsigned __int64 v84[2]; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 v85; // [rsp+240h] [rbp+140h] BYREF
  __int64 v86; // [rsp+250h] [rbp+150h]
  __int64 v87; // [rsp+258h] [rbp+158h]
  __int64 v88; // [rsp+260h] [rbp+160h]
  __int64 v89; // [rsp+268h] [rbp+168h]
  struct SURFACE *v90; // [rsp+270h] [rbp+170h]
  struct SURFACE *v91; // [rsp+278h] [rbp+178h]
  __int64 v92; // [rsp+280h] [rbp+180h]
  __int64 v93; // [rsp+288h] [rbp+188h] BYREF
  char *v94; // [rsp+290h] [rbp+190h]
  _DWORD v95[6]; // [rsp+2C8h] [rbp+1C8h] BYREF
  LONG v96; // [rsp+2E0h] [rbp+1E0h] BYREF
  LONG v97; // [rsp+2E4h] [rbp+1E4h]
  unsigned int v98; // [rsp+2E8h] [rbp+1E8h]
  unsigned int v99; // [rsp+2ECh] [rbp+1ECh]
  __int64 v100; // [rsp+300h] [rbp+200h]
  unsigned int v101; // [rsp+308h] [rbp+208h]
  int v102; // [rsp+30Ch] [rbp+20Ch]

  v76 = a11 & 0x40000000;
  v92 = 0LL;
  v102 = 0;
  v73 = 0;
  v15 = a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF);
  v16 = 0;
  v65 = (a11 & 0x40000000) != 0;
  v101 = ((v15 >> 8) | v15 & 0xFF0000) >> 8;
  v18 = (unsigned __int8)gajRop3[(unsigned __int16)(v15 >> 8) >> 8];
  v19 = v18 | gajRop3[(unsigned __int64)v101 >> 8];
  v77 = v18 | (unsigned __int8)gajRop3[(unsigned __int64)v101 >> 8];
  v20 = v19 & 0xD4;
  if ( v20
    || (v17 = (((unsigned int)(a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF)) >> 8) | a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF) & 0xFF0000) >> 8,
        (unsigned __int8)v17 != v17 >> 8) )
  {
    v70[0] = 0LL;
    v70[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v71);
    XDCOBJ::vLock((XDCOBJ *)v70, a1);
    if ( ((gajRop3[(unsigned __int8)v15] | gajRop3[BYTE1(v15)]) & 2) != 0 && v15 != 16711778 && v15 != 66 )
      bSpDwmValidateSurface((struct XDCOBJ *)v70, a2, a3, a4, a5);
    v74[0] = 0LL;
    v74[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v75);
    XDCOBJ::vLock((XDCOBJ *)v74, a6);
    bSpDwmValidateSurface((struct XDCOBJ *)v74, a7, a8, a9, a10);
    v21 = v70[0];
    if ( !v70[0] )
      goto LABEL_140;
    if ( (*((_DWORD *)v70[0] + 9) & 0x10000) == 0 )
    {
      v22 = *((_QWORD *)v70[0] + 122);
      if ( (*(_DWORD *)(v22 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v70[0], *(_QWORD *)(v22 + 160));
        v21 = v70[0];
      }
    }
    if ( !v21 || (*((_DWORD *)v21 + 9) & 0x10000) != 0 || !v74[0] && v20 )
    {
LABEL_140:
      EngSetLastError(6u);
      if ( !v20 || v74[0] )
        v16 = 1;
      goto LABEL_143;
    }
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v80);
    if ( v20 )
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v80, (struct XDCOBJ *)v70, (struct XDCOBJ *)v74);
    else
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v80, (struct XDCOBJ *)v70, v23);
    if ( (v80[112] & 1) == 0 )
    {
      v24 = 8;
LABEL_40:
      EngSetLastError(v24);
      goto LABEL_139;
    }
    valid = XDCOBJ::bValidSurf((XDCOBJ *)v70);
    v27 = (__int64)v70[0];
    v28 = v74[0];
    if ( !valid
      || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v74)
      || (*(_DWORD *)(*(_QWORD *)(v28 + 496) + 112LL) & 0x10000000) != 0 )
    {
      if ( !*(_QWORD *)(v27 + 496) || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v74) )
      {
        if ( (*(_DWORD *)(v27 + 36) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v78, (struct XDCOBJ *)v70, 0x204u);
          v81 = __PAIR64__(a3, a2);
          v82 = a2 + a4;
          v83 = a3 + a5;
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v78, (struct ERECTL *)&v81) )
          {
            ERECTL::vOrder((ERECTL *)&v81);
            XDCOBJ::vAccumulate((XDCOBJ *)v70, (struct ERECTL *)&v81);
          }
        }
        v16 = 1;
        goto LABEL_139;
      }
      if ( (*(_DWORD *)(v28 + 36) & 1) == 0 )
      {
LABEL_139:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v80, v26, (SURFACE **)v27);
LABEL_143:
        MDCOBJ::~MDCOBJ((MDCOBJ *)v74);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v75);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v70);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v71);
        goto LABEL_144;
      }
    }
    if ( v20 )
    {
      v30 = *(struct SURFACE **)(v28 + 496);
      if ( !v30 )
        v30 = SURFACE::pdibDefault;
      if ( *((_DWORD *)v30 + 164) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v30 + 164)
        || !(unsigned int)_SurfaceAccessCheck(v30, v26, v27, v29) )
      {
        goto LABEL_37;
      }
      v27 = (__int64)v70[0];
    }
    v31 = *(struct SURFACE **)(v27 + 496);
    if ( !v31 )
      v31 = SURFACE::pdibDefault;
    if ( !(unsigned int)DestSurfaceAccessCheck(v31, v26, v27, v29) )
    {
LABEL_37:
      v24 = 5;
      goto LABEL_40;
    }
    if ( (unsigned __int8)v101 != BYTE1(v101) )
    {
      v24 = 87;
      goto LABEL_40;
    }
    v32 = v70[0];
    if ( (a11 < 0 && (v33 = *((_QWORD *)v70[0] + 122), (*(_DWORD *)(v33 + 108) & 1) != 0)
       || (v33 = *((_QWORD *)v70[0] + 122), (*(_BYTE *)(v33 + 108) & 9) == 9))
      && a6 != a1 )
    {
      v34 = *(_QWORD *)(v33 + 308);
      v35 = DC::dwSetLayout(v70[0], -1, 0);
      v36 = v34 - a4 - a2;
      v32 = v70[0];
      v73 = v35;
      v72 = 0x80000000;
    }
    else
    {
      v72 = 0;
      v36 = a2;
    }
    v37 = 0LL;
    v81 = 0LL;
    v38 = *(SURFACE **)(v74[0] + 496LL);
    if ( v38 )
      v39 = *(struct SURFACE **)(v74[0] + 496LL);
    else
      v39 = SURFACE::pdibDefault;
    v40 = *((_QWORD *)v39 + 6);
    LODWORD(v41) = 0;
    v69 = v39;
    v79 = 0LL;
    if ( !v76 )
      goto LABEL_78;
    v42 = *(_DWORD *)(v74[0] + 36LL);
    if ( (v42 & 1) == 0
      || (v43 = *(_QWORD *)(v74[0] + 48LL), (*(_DWORD *)(v43 + 40) & 0x80u) != 0)
      || v43 != *((_QWORD *)v32 + 6)
      && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v70) || v44 != *(_QWORD *)(v45 + 3520))
      || !v40 )
    {
      v65 = 0;
      goto LABEL_78;
    }
    if ( v20 && (v42 & 0x4000) != 0 && v38 != *((SURFACE **)v32 + 62) )
    {
      SURFACE::bUnMap(v38, 0LL, 0LL);
      v32 = v70[0];
    }
    if ( (*((_DWORD *)v32 + 9) & 0x4000) != 0 )
      SURFACE::bUnMap(*((SURFACE **)v32 + 62), 0LL, v32);
    GreAcquireSemaphore(*(_QWORD *)(v40 + 64));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v40 + 64), 4LL);
    v41 = *(_QWORD *)(v40 + 72);
    v79 = v41;
    UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v78);
    if ( (a13 & 2) == 0 || !*((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) )
      GreMovePointer(*((_DWORD **)v69 + 6), -1, -1, 0);
    SURFACE::vSetIncludeSprites();
    if ( v20 && (*(_DWORD *)(v74[0] + 36LL) & 0x4000) != 0 )
    {
      v46 = v70[0];
      v47 = *(_QWORD *)(v74[0] + 496LL);
      if ( v47 == *((_QWORD *)v70[0] + 62) )
        goto LABEL_72;
      if ( (unsigned int)SURFACE::Map(v47, 0LL) == 2 )
      {
        LODWORD(v37) = 1;
        *(_DWORD *)(v74[0] + 44LL) |= 1u;
      }
    }
    v46 = v70[0];
LABEL_72:
    if ( (*((_DWORD *)v46 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v46 + 62), 0LL) == 2 )
    {
      LODWORD(v37) = 1;
      *((_DWORD *)v70[0] + 11) |= 1u;
    }
    UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v78);
    if ( (_DWORD)v37 )
    {
LABEL_112:
      if ( v72 )
        DC::dwSetLayout(v70[0], -1, v73);
      if ( !v65 )
        goto LABEL_139;
      SURFACE::vClearIncludeSprites();
      if ( v20 && (*(_DWORD *)(v74[0] + 36LL) & 0x4000) != 0 )
      {
        v60 = *(SURFACE **)(v74[0] + 496LL);
        v61 = v70[0];
        if ( v60 == *((SURFACE **)v70[0] + 62) )
          goto LABEL_120;
        SURFACE::bUnMap(v60, 0LL, 0LL);
      }
      v61 = v70[0];
LABEL_120:
      if ( (*((_DWORD *)v61 + 9) & 0x4000) != 0 )
        SURFACE::bUnMap(*((SURFACE **)v61 + 62), 0LL, v61);
      UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v78);
      if ( (a13 & 2) == 0 || !*((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) )
        GreMovePointer(*((_DWORD **)v69 + 6), v41, SHIDWORD(v79), 0);
      EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v40 + 64));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v40 + 64));
      if ( v20 && (*(_DWORD *)(v74[0] + 36LL) & 0x4000) != 0 )
      {
        v62 = v70[0];
        v63 = *(_QWORD *)(v74[0] + 496LL);
        if ( v63 == *((_QWORD *)v70[0] + 62) )
          goto LABEL_131;
        if ( (unsigned int)SURFACE::Map(v63, 0LL) == 2 )
          *(_DWORD *)(v74[0] + 44LL) |= 1u;
      }
      v62 = v70[0];
LABEL_131:
      if ( (*((_DWORD *)v62 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v62 + 62), 0LL) == 2 )
        *((_DWORD *)v70[0] + 11) |= 1u;
      UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v78);
      goto LABEL_139;
    }
    v37 = v81;
LABEL_78:
    EXFORMOBJ::vInit((EXFORMOBJ *)v84, (struct XDCOBJ *)v70, 0x204u, 0);
    v48 = (struct SURFACE *)*((_QWORD *)v70[0] + 62);
    if ( !v48 )
      v48 = SURFACE::pdibDefault;
    v90 = v48;
    v86 = *((_QWORD *)v48 + 16);
    v87 = *((_QWORD *)v70[0] + 11);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v85, (struct XDCOBJ *)v74, 0x204u, 0);
    v49 = *(struct SURFACE **)(v74[0] + 496LL);
    if ( !v49 )
      v49 = SURFACE::pdibDefault;
    v50 = a12;
    v91 = v49;
    v51 = *((_QWORD *)v49 + 16);
    v88 = v51;
    v52 = *(_QWORD *)(v74[0] + 88LL);
    v89 = v52;
    if ( a12 == -1 )
      v50 = *(_DWORD *)(*(_QWORD *)(v74[0] + 976LL) + 180LL);
    if ( (a13 & 1) != 0 )
      v37 = *(_QWORD *)(*((_QWORD *)v70[0] + 122) + 248LL);
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &v93,
                          v37,
                          *((_DWORD *)v70[0] + 30),
                          v51,
                          v86,
                          v52,
                          v87,
                          *(_DWORD *)(*((_QWORD *)v70[0] + 122) + 184LL),
                          *(_DWORD *)(*((_QWORD *)v70[0] + 122) + 176LL),
                          v50,
                          0) )
      goto LABEL_111;
    v53 = v77;
    v102 |= 2u;
    if ( (v77 & 0xE8) != 0 )
    {
      v94 = (char *)v70[0] + 1208;
      v54 = *((_QWORD *)v70[0] + 122);
      v55 = *(_DWORD *)(v54 + 152);
      if ( (v55 & 1) != 0 || (*((_DWORD *)v70[0] + 79) & 1) != 0 )
      {
        *(_DWORD *)(v54 + 152) = v55 & 0xFFFFFFFE;
        *((_DWORD *)v70[0] + 79) &= ~1u;
        EBRUSHOBJ::vInitBrush(v94, v70[0], *((_QWORD *)v70[0] + 17), v87, v86, v90, 1);
      }
      v100 = *((_QWORD *)v70[0] + 150);
    }
    else
    {
      v94 = 0LL;
    }
    v92 = 0LL;
    if ( (*(_DWORD *)(v85 + 32) & 1) != 0 )
    {
      v56 = a7;
      v57 = a8;
      v26 = (unsigned int)(a7 + a9);
      v27 = (unsigned int)(a8 + a10);
      v98 = a7 + a9;
      v99 = a8 + a10;
      v96 = a7;
      v97 = a8;
      if ( (*(_BYTE *)(v85 + 32) & 0x43) == 0x43 )
        goto LABEL_97;
      if ( (unsigned int)bCvtPts1(v85, &v96, 2LL) )
      {
        v27 = v99;
        v26 = v98;
        v57 = v97;
        v56 = v96;
LABEL_97:
        if ( v20 && (v56 == (_DWORD)v26 || v57 == (_DWORD)v27) )
        {
          v16 = 1;
          goto LABEL_112;
        }
        if ( (*(_DWORD *)(v84[0] + 32) & 1) == 0 )
        {
          BLTRECORD::TrgPlg((BLTRECORD *)v84, v36, a3, a4, a5);
          v58 = BLTRECORD::bRotate(
                  (BLTRECORD *)v84,
                  (struct DCOBJ *)v70,
                  (struct DCOBJ *)v74,
                  v53,
                  *(_BYTE *)(*((_QWORD *)v70[0] + 122) + 215LL));
LABEL_103:
          v16 = v58;
          goto LABEL_112;
        }
        v95[0] = v36;
        v95[2] = v36 + a4;
        v95[1] = a3;
        v95[3] = a3 + a5;
        if ( (*(_BYTE *)(v84[0] + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v84[0], v95, 2LL) )
        {
          v59 = *(_BYTE *)(*((_QWORD *)v70[0] + 122) + 215LL);
          if ( v59 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v84) )
            v58 = BLTRECORD::bStretch((BLTRECORD *)v84, (struct DCOBJ *)v70, (struct DCOBJ *)v74, v53, v59);
          else
            v58 = BLTRECORD::bBitBlt((BLTRECORD *)v84, (struct DCOBJ *)v70, (struct DCOBJ *)v74, v53);
          goto LABEL_103;
        }
      }
    }
    EngSetLastError(0x57u);
LABEL_111:
    v16 = 0;
    goto LABEL_112;
  }
  v16 = NtGdiPatBlt(a1, a2, a3, a4, a5, a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF));
LABEL_144:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v84);
  return v16;
}
