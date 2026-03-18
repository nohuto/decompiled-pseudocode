/*
 * XREFs of NtGdiExtFloodFill @ 0x1C02B8670
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C002F5F0 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C004033C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0088D80 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C008A518 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00F4808 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C010B4E4 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C0134A78 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     EngPaint @ 0x1C0135200 (EngPaint.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C02B7800 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C02B7854 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C02B7970 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02B7B54 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02B7DC4 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C02B8450 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C02B851C (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02B9380 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  DC *v8; // rbx
  int v9; // r14d
  char v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  DC *v15; // rax
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v25; // rcx
  ULONG v26; // r12d
  int v27; // eax
  __int64 v28; // r8
  char *v29; // r13
  int v30; // edx
  unsigned int v31; // ebx
  bool v32; // zf
  _DWORD *v33; // rax
  _DWORD *v34; // rcx
  void *v35; // r11
  struct _RECTL v36; // xmm6
  __int64 v37; // rcx
  int v38; // edi
  int v39; // edx
  LONG y; // ebx
  LONG x; // r10d
  int v42; // eax
  int v43; // eax
  LONG left; // r10d
  LONG top; // r11d
  BOOL v46; // esi
  LONG v47; // r8d
  LONG v48; // r9d
  int v49; // eax
  __int64 v50; // rax
  unsigned __int8 *v51; // rsi
  int v52; // ecx
  int v53; // eax
  int v54; // r10d
  int v55; // r12d
  int v56; // r13d
  int v57; // r12d
  LONG v58; // r13d
  __int64 v59; // rsi
  int v60; // eax
  BRUSHOBJ *v61; // rdi
  MIX v62; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v64; // rdx
  POINTL *v65; // r9
  struct ECLIPOBJ *v66; // rdx
  int v68; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v69; // [rsp+70h] [rbp-98h] BYREF
  struct _POINTL v70; // [rsp+78h] [rbp-90h] BYREF
  __int64 v71; // [rsp+80h] [rbp-88h] BYREF
  struct REGION *v72[2]; // [rsp+88h] [rbp-80h] BYREF
  FLONG v73; // [rsp+98h] [rbp-70h]
  int v74; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v75; // [rsp+A0h] [rbp-68h] BYREF
  struct REGION *v76; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v77[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-48h]
  struct REGION *v79[2]; // [rsp+C8h] [rbp-40h] BYREF
  DC *v80[2]; // [rsp+D8h] [rbp-30h] BYREF
  char v81[32]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v82; // [rsp+108h] [rbp+0h] BYREF
  char v83; // [rsp+110h] [rbp+8h]
  int v84; // [rsp+114h] [rbp+Ch]
  _BYTE v85[4]; // [rsp+118h] [rbp+10h] BYREF
  int v86; // [rsp+11Ch] [rbp+14h]
  __int64 v87; // [rsp+120h] [rbp+18h]
  __int64 v88; // [rsp+138h] [rbp+30h]
  __int128 v89; // [rsp+140h] [rbp+38h] BYREF
  __int128 v90; // [rsp+150h] [rbp+48h]
  int v91; // [rsp+160h] [rbp+58h] BYREF
  struct _RECTL v92; // [rsp+164h] [rbp+5Ch]
  ULONG v93; // [rsp+174h] [rbp+6Ch]
  unsigned __int8 *v94; // [rsp+178h] [rbp+70h]
  int v95; // [rsp+180h] [rbp+78h]
  int v96; // [rsp+184h] [rbp+7Ch]
  _BYTE v97[4]; // [rsp+188h] [rbp+80h] BYREF
  int v98; // [rsp+18Ch] [rbp+84h]
  __int64 v99; // [rsp+190h] [rbp+88h]
  __int64 v100; // [rsp+1A8h] [rbp+A0h]
  BRUSHOBJ *v101; // [rsp+1B0h] [rbp+A8h]
  _BYTE v102[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  BRUSHOBJ pbo; // [rsp+1C8h] [rbp+C0h] BYREF
  int v104; // [rsp+1E0h] [rbp+D8h]
  int v105; // [rsp+1E4h] [rbp+DCh]
  __int64 v106; // [rsp+1E8h] [rbp+E0h]
  __int64 v107; // [rsp+1F0h] [rbp+E8h]
  __int64 v108; // [rsp+220h] [rbp+118h]
  __int128 v109; // [rsp+228h] [rbp+120h]
  int v110; // [rsp+240h] [rbp+138h]
  _BYTE v111[32]; // [rsp+258h] [rbp+150h] BYREF
  _QWORD v112[2]; // [rsp+278h] [rbp+170h] BYREF
  char v113[64]; // [rsp+288h] [rbp+180h] BYREF
  struct _RECTL v114; // [rsp+2C8h] [rbp+1C0h] BYREF
  _QWORD v115[2]; // [rsp+2D8h] [rbp+1D0h] BYREF
  CLIPOBJ pco; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v117; // [rsp+338h] [rbp+230h]
  int v118; // [rsp+340h] [rbp+238h]
  int v119; // [rsp+368h] [rbp+260h]
  __int64 v120; // [rsp+378h] [rbp+270h]

  LODWORD(v78) = a4;
  DCOBJ::DCOBJ((DCOBJ *)v80, a1);
  v8 = v80[0];
  v9 = 0;
  if ( !v80[0] || (*((_DWORD *)v80[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_115:
    v31 = v9;
    goto LABEL_116;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v80) )
  {
    if ( (v10 & 0xE0) != 0 )
    {
      v11 = *((_QWORD *)v8 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v11 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v11 + 48), 11LL);
      v12 = *(_QWORD *)(v11 + 2528);
      if ( v12 )
        v13 = *(_QWORD *)(v12 + 56);
      else
        v13 = *((_QWORD *)v80[0] + 64);
      v14 = *(_QWORD *)(v11 + 48);
      v71 = v13;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v14);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v11 + 48));
      v77[0] = 0LL;
      v77[1] = v13;
      XDCOBJ::vAccumulate((XDCOBJ *)v80, (struct ERECTL *)v77);
    }
    v9 = 1;
    goto LABEL_115;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v68);
  v15 = v80[0];
  v16 = *((_QWORD *)v80[0] + 122);
  v17 = *(_DWORD *)(v16 + 152);
  if ( (v17 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v80[0], *(_QWORD *)(v16 + 160));
    v15 = v80[0];
  }
  if ( (v17 & 0x2000) != 0 )
  {
    GreDCSelectPen(v15, *(_QWORD *)(*((_QWORD *)v15 + 122) + 168LL));
    v15 = v80[0];
  }
  v18 = *((_QWORD *)v15 + 62);
  if ( v18 && *(_WORD *)(v18 + 100) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v72, (struct XDCOBJ *)v80);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v68);
    v71 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    bConvertDfbDcToDib((struct XDCOBJ *)v80);
    SEMOBJ::vUnlock((SEMOBJ *)&v71);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v68);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v72);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v68);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v112);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v111, (struct XDCOBJ *)v80, 0);
  v19 = *((_QWORD *)v80[0] + 62);
  v69.x = a2;
  v69.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v102, (struct XDCOBJ *)v80, 516);
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v102, &v69, 1LL) )
    goto LABEL_34;
  v20 = *(_QWORD *)(v19 + 48);
  v21 = *(_QWORD *)(v19 + 128);
  v22 = *((_QWORD *)v80[0] + 11);
  if ( (*(_DWORD *)(*((_QWORD *)v80[0] + 6) + 40LL) & 0x80u) != 0
    || (unsigned int)DC::bIsCMYKColor(v80[0])
    || (*(_DWORD *)(v23 + 120) & 2) != 0 )
  {
    EngSetLastError(0x57u);
    v31 = 0;
    goto LABEL_111;
  }
  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v21, v22, a4, 1LL);
  v25 = v80[0];
  v26 = NearestIndexFromColorref;
  v27 = *((_DWORD *)v80[0] + 30);
  if ( (v27 & 4) != 0 || (v73 = 0, (v27 & 1) != 0) )
    v73 = 2;
  v28 = *((_QWORD *)v80[0] + 122);
  v29 = (char *)v80[0] + 1200;
  v101 = (BRUSHOBJ *)((char *)v80[0] + 1200);
  v30 = *(_DWORD *)(v28 + 152);
  if ( (v30 & 1) != 0 || (*((_DWORD *)v80[0] + 79) & 1) != 0 )
  {
    *(_DWORD *)(v28 + 152) = v30 & 0xFFFFFFFE;
    *((_DWORD *)v80[0] + 79) &= ~1u;
    EBRUSHOBJ::vInitBrush((char *)v25 + 1200, v80[0], *((_QWORD *)v80[0] + 17), v22, v21, v19, 1);
    v25 = v80[0];
  }
  if ( (*((_DWORD *)v29 + 30) & 0x100) != 0 )
  {
    v31 = 1;
    goto LABEL_111;
  }
  if ( (v111[24] & 1) == 0 )
  {
    v31 = XDCOBJ::bFullScreen((XDCOBJ *)v80);
    goto LABEL_111;
  }
  v32 = (*((_DWORD *)v25 + 10) & 1) == 0;
  v33 = (_DWORD *)((char *)v25 + 1016);
  v34 = (_DWORD *)((char *)v25 + 1024);
  if ( v32 )
    v34 = v33;
  v69.x += *v34;
  v69.y += v34[1];
  v76 = XDCOBJ::prgnEffRao(v80);
  if ( RGNOBJ::bInside((RGNOBJ *)&v76, &v69) != 2 )
  {
LABEL_34:
    v31 = 0;
    goto LABEL_111;
  }
  v75 = 0;
  v74 = 0;
  v89 = 0LL;
  v82 = 0LL;
  v90 = 0LL;
  v83 = 0;
  v84 = 0;
  v71 = *(_QWORD *)(v19 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v71, (struct _SURFOBJ *)(v19 + 24), 0LL, 0);
  v35 = 0LL;
  LODWORD(v72[0]) = 0;
  v36 = (struct _RECTL)*((_OWORD *)v76 + 6);
  v70 = 0LL;
  v114 = v36;
  if ( !*(_WORD *)(v19 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v76) != 3 )
  {
    v37 = *(_QWORD *)(v19 + 80);
    v38 = *(_DWORD *)(v19 + 88);
    v39 = *(_DWORD *)(v19 + 96);
    y = v69.y;
    x = v69.x;
    goto LABEL_63;
  }
  LODWORD(v89) = *(_DWORD *)(v19 + 96);
  LODWORD(v71) = v89;
  DWORD1(v89) = v114.right - v114.left;
  DWORD2(v89) = v114.bottom - v114.top;
  v42 = 1;
  DWORD2(v90) = 1;
  *(_QWORD *)&v90 = v35;
  if ( (*(_DWORD *)(v19 + 112) & 0x40000) != 0 )
    v42 = 262145;
  DWORD2(v90) = v42;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v82,
    (struct _DEVBITMAPINFO *)&v89,
    0LL,
    0LL,
    (unsigned int)v35,
    v35,
    (unsigned __int64)v35,
    (_DWORD)v35,
    1,
    (_DWORD)v35,
    (_DWORD)v35);
  if ( !v82 )
  {
    EngSetLastError(8u);
    goto LABEL_108;
  }
  v32 = (*(_DWORD *)(v19 + 112) & 0x400) == 0;
  v115[0] = 0LL;
  v115[1] = *(_QWORD *)((char *)&v89 + 4);
  if ( v32 )
    v43 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _QWORD *, struct _RECTL *))EngCopyBits)(
            v82 + 24,
            v19 + 24,
            0LL,
            xloIdent,
            v115,
            &v114);
  else
    v43 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, _QWORD *, struct _RECTL *))(v20 + 2816))(
            v82 + 24,
            v19 + 24,
            0LL,
            xloIdent,
            v115,
            &v114);
  left = v114.left;
  top = v114.top;
  v46 = v43;
  v47 = -v114.left;
  v48 = -v114.top;
  v70.x = -v114.left;
  v70.y = -v114.top;
  if ( v43 && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v76) == 3 )
  {
    v46 = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v77);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v77);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v72);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v72);
    if ( !v77[0] )
      goto LABEL_58;
    if ( !v72[0] )
      goto LABEL_58;
    RGNOBJ::vSet((RGNOBJ *)v77, &v114);
    if ( !RGNOBJ::bMerge((RGNOBJ *)v72, (struct RGNOBJ *)v77, (struct RGNOBJ *)&v76, 4u) )
      goto LABEL_58;
    if ( !RGNOBJ::bOffset((RGNOBJ *)v72, &v70) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v114, &v70, 1) )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v72);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v77);
LABEL_108:
      v31 = 0;
      goto LABEL_109;
    }
    v117 = 0LL;
    v118 = 0;
    v119 = 1;
    v120 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v72[0], (struct ERECTL *)&v114, 0);
    v105 = -1;
    pbo.flColorType = v73;
    v109 = 0LL;
    v108 = 0LL;
    pbo.pvRbrush = 0LL;
    v106 = 0LL;
    v107 = 0LL;
    v110 = 0;
    if ( a5 )
    {
      pbo.iSolidColor = (v26 & 1) == 0;
      if ( gbMultiMonMismatchColor )
      {
        v49 = ulIndexToRGB(v21, v22, (v26 & 1) == 0);
        goto LABEL_56;
      }
    }
    else
    {
      pbo.iSolidColor = v26;
      if ( gbMultiMonMismatchColor )
      {
        v49 = v78;
LABEL_56:
        v105 = v49;
        v104 = v49;
      }
    }
    v46 = EngPaint((SURFOBJ *)((v82 + 24) & -(__int64)(v82 != 0)), &pco, &pbo, 0LL, 0xD0Du);
    EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
LABEL_58:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v72);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v77);
    v48 = v70.y;
    v47 = v70.x;
    goto LABEL_61;
  }
  v114.right += v47;
  v114.left = v47 + left;
  v114.bottom += v48;
  v114.top = v48 + top;
LABEL_61:
  if ( !v46 )
    goto LABEL_108;
  x = v47 + v69.x;
  v36 = v114;
  v39 = v71;
  y = v48 + v69.y;
  v69.x += v47;
  v70.y = -v48;
  v69.y += v48;
  v70.x = -v47;
  v38 = *(_DWORD *)(v82 + 88);
  v37 = *(_QWORD *)(v82 + 80);
  LODWORD(v72[0]) = 1;
LABEL_63:
  v96 = -1;
  v78 = v37;
  v91 = v39;
  v92 = v36;
  v93 = v26;
  v50 = *(_QWORD *)(v19 + 128);
  v51 = (unsigned __int8 *)(v37 + v38 * y);
  v95 = a5;
  v94 = v51;
  if ( v50 )
  {
    v52 = *(_DWORD *)(v50 + 24);
    if ( (v52 & 0xC) != 0 )
    {
      v96 = 0xFFFFFF;
    }
    else if ( (v52 & 2) != 0 )
    {
      v96 = **(_DWORD **)(v50 + 112) | *(_DWORD *)(*(_QWORD *)(v50 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v50 + 112)
                                                                                             + 8LL);
    }
  }
  v53 = FLOODBM::iColorGet((FLOODBM *)&v91, x);
  if ( !a5 && v53 == v26 || a5 == 1 && v53 != v26 )
    goto LABEL_108;
  FLOODBM::vFindExtent((FLOODBM *)&v91, v54, &v75, &v74);
  v55 = v74;
  v56 = v75;
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v97, 0x1B8u, 1, y, v75, v74);
  v31 = 0;
  if ( !v100 )
  {
    EngSetLastError(8u);
    goto LABEL_106;
  }
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v85, 0xF8u, 0, v69.y, v56, v55);
  if ( !v88 )
  {
    EngSetLastError(8u);
    goto LABEL_104;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v79, 0x12E0u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v79);
  if ( !v79[0] )
  {
    EngSetLastError(8u);
    goto LABEL_101;
  }
  v31 = 1;
  v57 = v114.bottom - 1;
  v58 = v114.top;
  if ( v69.y >= v114.bottom - 1 )
  {
    v86 -= *(_DWORD *)(v87 + 8);
    v87 = *(_QWORD *)(v87 + 16);
  }
  else
  {
    v31 = FLOODBM::bExtendScanline(
            (FLOODBM *)&v91,
            (struct STACKOBJ *)v85,
            (struct STACKOBJ *)v97,
            v69.y + 1,
            v51,
            &v51[v38]) & 1;
    if ( !v31 )
      goto LABEL_99;
  }
  v59 = v78;
  while ( 1 )
  {
    while ( v86 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v79, (struct STACKOBJ *)v85) )
        goto LABEL_89;
      if ( *(_DWORD *)v87 >= v57 )
      {
        v86 -= *(_DWORD *)(v87 + 8);
        v87 = *(_QWORD *)(v87 + 16);
      }
      else
      {
        v60 = FLOODBM::bExtendScanline(
                (FLOODBM *)&v91,
                (struct STACKOBJ *)v85,
                (struct STACKOBJ *)v97,
                *(_DWORD *)v87 + 1,
                (unsigned __int8 *)(v59 + v38 * *(_DWORD *)v87),
                (unsigned __int8 *)(v59 + v38 * *(_DWORD *)v87 + v38));
LABEL_88:
        if ( !v60 )
        {
LABEL_89:
          v31 = 0;
          goto LABEL_99;
        }
      }
    }
    if ( !v98 )
      break;
    v31 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v79, (struct STACKOBJ *)v97);
    if ( *(_DWORD *)v99 > v58 )
    {
      v60 = FLOODBM::bExtendScanline(
              (FLOODBM *)&v91,
              (struct STACKOBJ *)v97,
              (struct STACKOBJ *)v85,
              *(_DWORD *)v99 - 1,
              (unsigned __int8 *)(v59 + v38 * *(_DWORD *)v99),
              (unsigned __int8 *)(v59 + v38 * *(_DWORD *)v99 - v38));
      goto LABEL_88;
    }
    v98 -= *(_DWORD *)(v99 + 8);
    v99 = *(_QWORD *)(v99 + 16);
  }
  if ( !v31 )
    goto LABEL_99;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v79) != 1 )
  {
    if ( !LODWORD(v72[0])
      || RGNOBJ::bOffset((RGNOBJ *)v79, &v70) && (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v114, &v70, 1) )
    {
      v61 = v101;
      v62 = EBRUSHOBJ::mixBest(
              (EBRUSHOBJ *)v101,
              *(_BYTE *)(*((_QWORD *)v80[0] + 122) + 212LL),
              *(_BYTE *)(*((_QWORD *)v80[0] + 122) + 213LL));
      ++*(_DWORD *)(v19 + 92);
      v117 = 0LL;
      mix = v62;
      v118 = 0;
      v119 = 1;
      v120 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v79[0], (struct ERECTL *)&v114, 0);
      v65 = (POINTL *)v80[0];
      if ( (*((_DWORD *)v80[0] + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)v80, v64, (__m128i *)&v114);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v80, v66, (__m128i *)&v114);
        v65 = (POINTL *)v80[0];
      }
      v31 = EngPaint((SURFOBJ *)(v19 + 24), &pco, v61, v65 + 149, mix);
      if ( !v31 )
LABEL_99:
        EngSetLastError(8u);
      goto LABEL_102;
    }
LABEL_101:
    v31 = 0;
  }
LABEL_102:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v79);
LABEL_104:
  STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v85);
LABEL_106:
  STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v97);
LABEL_109:
  SURFMEM::~SURFMEM((SURFMEM *)&v82);
LABEL_111:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v111);
  if ( v112[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v112);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v113);
LABEL_116:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v80);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v81);
  return v31;
}
