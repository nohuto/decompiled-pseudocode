/*
 * XREFs of NtGdiExtFloodFill @ 0x1C02BA3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008BAA8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008BAEC (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00B2CDC (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B30BC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00B5924 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B61E0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00B63B0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0109700 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0145DBC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C0147690 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     EngPaint @ 0x1C0147E40 (EngPaint.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0156F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0159080 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C02B9590 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C02B9690 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02B9858 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02B9AC8 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C02BA170 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C02BA238 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02BB110 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  DC *v8; // rbx
  char v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // r14d
  DC *v15; // rax
  __int64 v16; // rdx
  int v17; // ebx
  DYNAMICMODECHANGESHARELOCK *v18; // rcx
  DCVISRGNSHARELOCK *v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v26; // rcx
  ULONG v27; // r12d
  int v28; // edx
  __int64 v29; // r8
  char *v30; // r13
  int v31; // edx
  unsigned int v32; // ebx
  bool v33; // zf
  _DWORD *v34; // rax
  _DWORD *v35; // rcx
  void *v36; // r8
  struct _RECTL v37; // xmm6
  __int64 v38; // rcx
  int v39; // edi
  int v40; // edx
  LONG y; // ebx
  LONG x; // r10d
  int v43; // eax
  int v44; // eax
  BOOL v45; // r13d
  int v46; // esi
  int v47; // r12d
  int v48; // eax
  __int64 v49; // rax
  unsigned __int8 *v50; // rsi
  int v51; // ecx
  int v52; // eax
  int v53; // r10d
  int v54; // r11d
  int v55; // r12d
  int v56; // r13d
  int v57; // r12d
  LONG top; // r13d
  __int64 v59; // rsi
  BRUSHOBJ *v60; // rdi
  MIX v61; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v63; // rdx
  POINTL *v64; // r9
  struct ECLIPOBJ *v65; // rdx
  int v67; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v68; // [rsp+70h] [rbp-98h] BYREF
  struct _POINTL v69; // [rsp+78h] [rbp-90h] BYREF
  __int64 v70; // [rsp+80h] [rbp-88h] BYREF
  ULONG v71; // [rsp+88h] [rbp-80h]
  struct REGION *v72[2]; // [rsp+90h] [rbp-78h] BYREF
  FLONG v73; // [rsp+A0h] [rbp-68h]
  int v74; // [rsp+A4h] [rbp-64h] BYREF
  int v75; // [rsp+A8h] [rbp-60h] BYREF
  struct REGION *v76; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v77[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-40h]
  struct REGION *v79[2]; // [rsp+D0h] [rbp-38h] BYREF
  DC *v80[2]; // [rsp+E0h] [rbp-28h] BYREF
  char v81[32]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v82; // [rsp+110h] [rbp+8h] BYREF
  char v83; // [rsp+118h] [rbp+10h]
  int v84; // [rsp+11Ch] [rbp+14h]
  _BYTE v85[4]; // [rsp+120h] [rbp+18h] BYREF
  int v86; // [rsp+124h] [rbp+1Ch]
  __int64 v87; // [rsp+128h] [rbp+20h]
  __int64 v88; // [rsp+140h] [rbp+38h]
  __int128 v89; // [rsp+148h] [rbp+40h] BYREF
  __int128 v90; // [rsp+158h] [rbp+50h]
  int v91; // [rsp+168h] [rbp+60h] BYREF
  struct _RECTL v92; // [rsp+16Ch] [rbp+64h]
  ULONG v93; // [rsp+17Ch] [rbp+74h]
  unsigned __int8 *v94; // [rsp+180h] [rbp+78h]
  int v95; // [rsp+188h] [rbp+80h]
  int v96; // [rsp+18Ch] [rbp+84h]
  _BYTE v97[4]; // [rsp+190h] [rbp+88h] BYREF
  int v98; // [rsp+194h] [rbp+8Ch]
  __int64 v99; // [rsp+198h] [rbp+90h]
  __int64 v100; // [rsp+1B0h] [rbp+A8h]
  BRUSHOBJ *v101; // [rsp+1B8h] [rbp+B0h]
  _BYTE v102[24]; // [rsp+1C0h] [rbp+B8h] BYREF
  BRUSHOBJ pbo; // [rsp+1D8h] [rbp+D0h] BYREF
  int v104; // [rsp+1F0h] [rbp+E8h]
  int v105; // [rsp+1F4h] [rbp+ECh]
  __int64 v106; // [rsp+1F8h] [rbp+F0h]
  __int64 v107; // [rsp+200h] [rbp+F8h]
  __int64 v108; // [rsp+230h] [rbp+128h]
  __int128 v109; // [rsp+238h] [rbp+130h]
  int v110; // [rsp+250h] [rbp+148h]
  _BYTE v111[32]; // [rsp+268h] [rbp+160h] BYREF
  _QWORD v112[2]; // [rsp+288h] [rbp+180h] BYREF
  char v113[64]; // [rsp+298h] [rbp+190h] BYREF
  struct _RECTL v114; // [rsp+2D8h] [rbp+1D0h] BYREF
  _DWORD v115[2]; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v116; // [rsp+2F0h] [rbp+1E8h]
  CLIPOBJ pco; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 v118; // [rsp+330h] [rbp+228h]
  __int64 v119; // [rsp+348h] [rbp+240h]
  int v120; // [rsp+350h] [rbp+248h]
  int v121; // [rsp+378h] [rbp+270h]
  __int64 v122; // [rsp+388h] [rbp+280h]

  LODWORD(v78) = a4;
  DCOBJ::DCOBJ((DCOBJ *)v80, a1);
  v8 = v80[0];
  if ( !v80[0] || (*((_DWORD *)v80[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v14 = 0;
LABEL_116:
    v32 = v14;
    goto LABEL_117;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v80) )
  {
    if ( (v9 & 0xE0) != 0 )
    {
      v10 = *((_QWORD *)v8 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v10 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v10 + 48), 11LL);
      v11 = *(_QWORD *)(v10 + 2552);
      if ( v11 )
        v12 = *(_QWORD *)(v11 + 56);
      else
        v12 = *((_QWORD *)v80[0] + 64);
      v13 = *(_QWORD *)(v10 + 48);
      v70 = v12;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v13);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v10 + 48));
      v77[0] = 0LL;
      v77[1] = v12;
      XDCOBJ::vAccumulate((XDCOBJ *)v80, (struct ERECTL *)v77);
    }
    v14 = 1;
    goto LABEL_116;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v67);
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
  v18 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)v15 + 62);
  if ( v18 && *((_WORD *)v18 + 50) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v72, (struct XDCOBJ *)v80);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v67);
    v70 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    bConvertDfbDcToDib((struct XDCOBJ *)v80);
    SEMOBJ::vUnlock((SEMOBJ *)&v70);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v19);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v72);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v18);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v112);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v111, (struct XDCOBJ *)v80, 0);
  v20 = *((_QWORD *)v80[0] + 62);
  v68.x = a2;
  v68.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v102, (struct XDCOBJ *)v80, 516);
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v102, &v68, 1LL) )
    goto LABEL_34;
  v21 = *(_QWORD *)(v20 + 48);
  v22 = *(_QWORD *)(v20 + 128);
  v23 = *((_QWORD *)v80[0] + 11);
  if ( (*(_DWORD *)(*((_QWORD *)v80[0] + 6) + 40LL) & 0x80u) != 0
    || (unsigned int)DC::bIsCMYKColor(v80[0])
    || (*(_DWORD *)(v24 + 120) & 2) != 0 )
  {
    EngSetLastError(0x57u);
    v32 = 0;
    goto LABEL_112;
  }
  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v22, v23, a4, 1LL);
  v26 = v80[0];
  v27 = NearestIndexFromColorref;
  v71 = NearestIndexFromColorref;
  v28 = *((_DWORD *)v80[0] + 30);
  if ( (v28 & 4) != 0 || (v73 = 0, (v28 & 1) != 0) )
    v73 = 2;
  v29 = *((_QWORD *)v80[0] + 122);
  v30 = (char *)v80[0] + 1208;
  v101 = (BRUSHOBJ *)((char *)v80[0] + 1208);
  v31 = *(_DWORD *)(v29 + 152);
  if ( (v31 & 1) != 0 || (*((_DWORD *)v80[0] + 79) & 1) != 0 )
  {
    *(_DWORD *)(v29 + 152) = v31 & 0xFFFFFFFE;
    *((_DWORD *)v80[0] + 79) &= ~1u;
    EBRUSHOBJ::vInitBrush((char *)v26 + 1208, v80[0], *((_QWORD *)v80[0] + 17), v23, v22, v20, 1);
    v26 = v80[0];
  }
  if ( (*((_DWORD *)v30 + 30) & 0x100) == 0 )
  {
    if ( (v111[24] & 1) == 0 )
    {
      v32 = XDCOBJ::bFullScreen((XDCOBJ *)v80);
      goto LABEL_112;
    }
    v33 = (*((_DWORD *)v26 + 10) & 1) == 0;
    v34 = (_DWORD *)((char *)v26 + 1016);
    v35 = (_DWORD *)((char *)v26 + 1024);
    if ( v33 )
      v35 = v34;
    v68.x += *v35;
    v68.y += v35[1];
    v76 = XDCOBJ::prgnEffRao(v80);
    if ( RGNOBJ::bInside((RGNOBJ *)&v76, &v68) != 2 )
    {
LABEL_34:
      v32 = 0;
      goto LABEL_112;
    }
    v75 = 0;
    v74 = 0;
    v89 = 0LL;
    v82 = 0LL;
    v90 = 0LL;
    v83 = 0;
    v84 = 0;
    v70 = *(_QWORD *)(v20 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v70, (struct _SURFOBJ *)(v20 + 24), 0LL, 0);
    v36 = 0LL;
    LODWORD(v72[0]) = 0;
    v37 = (struct _RECTL)*((_OWORD *)v76 + 6);
    v69 = 0LL;
    v114 = v37;
    if ( !*(_WORD *)(v20 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v76) != 3 )
    {
      v38 = *(_QWORD *)(v20 + 80);
      v39 = *(_DWORD *)(v20 + 88);
      v40 = *(_DWORD *)(v20 + 96);
      y = v68.y;
      x = v68.x;
      goto LABEL_64;
    }
    LODWORD(v89) = *(_DWORD *)(v20 + 96);
    LODWORD(v70) = v89;
    DWORD1(v89) = v114.right - v114.left;
    DWORD2(v89) = v114.bottom - v114.top;
    v43 = 1;
    DWORD2(v90) = 1;
    *(_QWORD *)&v90 = v36;
    if ( (*(_DWORD *)(v20 + 112) & 0x40000) != 0 )
      v43 = 262145;
    DWORD2(v90) = v43;
    SURFMEM::bCreateDIB(
      (SURFMEM *)&v82,
      (struct _DEVBITMAPINFO *)&v89,
      v36,
      0LL,
      (unsigned int)v36,
      v36,
      (unsigned __int64)v36,
      (_DWORD)v36,
      1,
      (_DWORD)v36,
      (_DWORD)v36);
    if ( !v82 )
    {
      EngSetLastError(8u);
      goto LABEL_73;
    }
    v115[0] = 0;
    v115[1] = 0;
    v33 = (*(_DWORD *)(v20 + 112) & 0x400) == 0;
    v116 = *(_QWORD *)((char *)&v89 + 4);
    if ( v33 )
      v44 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, struct _RECTL *))EngCopyBits)(
              v82 + 24,
              v20 + 24,
              0LL,
              xloIdent,
              v115,
              &v114);
    else
      v44 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, struct _RECTL *))(v21 + 2840))(
              v82 + 24,
              v20 + 24,
              0LL,
              xloIdent,
              v115,
              &v114);
    v45 = v44;
    v46 = -v114.left;
    v47 = -v114.top;
    v69.x = -v114.left;
    v69.y = -v114.top;
    if ( !v44 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v76) != 3 )
    {
      ERECTL::bOffsetAdd((ERECTL *)&v114, &v69, 0);
LABEL_62:
      if ( v45 )
      {
        x = v46 + v68.x;
        y = v47 + v68.y;
        v37 = v114;
        v40 = v70;
        v68.x += v46;
        v69.y = -v47;
        v27 = v71;
        v68.y = y;
        v69.x = -v46;
        v39 = *(_DWORD *)(v82 + 88);
        v38 = *(_QWORD *)(v82 + 80);
        LODWORD(v72[0]) = 1;
LABEL_64:
        v96 = -1;
        v78 = v38;
        v91 = v40;
        v92 = v37;
        v93 = v27;
        v49 = *(_QWORD *)(v20 + 128);
        v50 = (unsigned __int8 *)(v38 + v39 * y);
        v95 = a5;
        v94 = v50;
        if ( v49 )
        {
          v51 = *(_DWORD *)(v49 + 24);
          if ( (v51 & 0xC) != 0 )
          {
            v96 = 0xFFFFFF;
          }
          else if ( (v51 & 2) != 0 )
          {
            v96 = **(_DWORD **)(v49 + 112) | *(_DWORD *)(*(_QWORD *)(v49 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v49 + 112) + 8LL);
          }
        }
        v52 = FLOODBM::iColorGet((FLOODBM *)&v91, x);
        if ( !v54 && v52 == v27 || v54 == 1 && v52 != v27 )
          goto LABEL_73;
        FLOODBM::vFindExtent((FLOODBM *)&v91, v53, &v75, &v74);
        v55 = v74;
        v56 = v75;
        STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v97, 0x1B8u, 1, y, v75, v74);
        if ( !v100 )
        {
          EngSetLastError(8u);
          v32 = 0;
LABEL_109:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v97);
          goto LABEL_110;
        }
        STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v85, 0xF8u, 0, v68.y, v56, v55);
        if ( !v88 )
        {
          EngSetLastError(8u);
          v32 = 0;
LABEL_108:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v85);
          goto LABEL_109;
        }
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v79, 0x12E0u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v79);
        if ( !v79[0] )
        {
          EngSetLastError(8u);
LABEL_101:
          v32 = 0;
LABEL_107:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v79);
          goto LABEL_108;
        }
        v32 = 1;
        v57 = v114.bottom - 1;
        top = v114.top;
        if ( v68.y >= v114.bottom - 1 )
        {
          v86 -= *(_DWORD *)(v87 + 8);
          v87 = *(_QWORD *)(v87 + 16);
        }
        else
        {
          v32 = FLOODBM::bExtendScanline(
                  (FLOODBM *)&v91,
                  (struct STACKOBJ *)v85,
                  (struct STACKOBJ *)v97,
                  v68.y + 1,
                  v50,
                  &v50[v39]) & 1;
        }
        if ( v32 )
        {
          v59 = v78;
          do
          {
            while ( 1 )
            {
              while ( v86 )
              {
                if ( !(unsigned int)RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v79, (struct STACKOBJ *)v85) )
                  goto LABEL_94;
                if ( *(_DWORD *)v87 >= v57 )
                {
                  v86 -= *(_DWORD *)(v87 + 8);
                  v87 = *(_QWORD *)(v87 + 16);
                }
                else if ( !(unsigned int)FLOODBM::bExtendScanline(
                                           (FLOODBM *)&v91,
                                           (struct STACKOBJ *)v85,
                                           (struct STACKOBJ *)v97,
                                           *(_DWORD *)v87 + 1,
                                           (unsigned __int8 *)(v59 + v39 * *(_DWORD *)v87),
                                           (unsigned __int8 *)(v59 + v39 * *(_DWORD *)v87 + v39)) )
                {
LABEL_94:
                  v32 = 0;
                  goto LABEL_106;
                }
              }
              if ( !v98 )
                goto LABEL_96;
              v32 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v79, (struct STACKOBJ *)v97);
              if ( *(_DWORD *)v99 > top )
                break;
              v98 -= *(_DWORD *)(v99 + 8);
              v99 = *(_QWORD *)(v99 + 16);
            }
          }
          while ( (unsigned int)FLOODBM::bExtendScanline(
                                  (FLOODBM *)&v91,
                                  (struct STACKOBJ *)v97,
                                  (struct STACKOBJ *)v85,
                                  *(_DWORD *)v99 - 1,
                                  (unsigned __int8 *)(v59 + v39 * *(_DWORD *)v99),
                                  (unsigned __int8 *)(v59 + v39 * *(_DWORD *)v99 - v39)) );
          v32 = 0;
LABEL_96:
          if ( v32 )
          {
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v79) != 1 )
            {
              if ( LODWORD(v72[0])
                && (!RGNOBJ::bOffset((RGNOBJ *)v79, &v69) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v114, &v69, 1)) )
              {
                goto LABEL_101;
              }
              v60 = v101;
              v61 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)v101,
                      *(_BYTE *)(*((_QWORD *)v80[0] + 122) + 212LL),
                      *(_BYTE *)(*((_QWORD *)v80[0] + 122) + 213LL));
              ++*(_DWORD *)(v20 + 92);
              v118 = 0LL;
              mix = v61;
              v119 = 0LL;
              v120 = 0;
              v121 = 1;
              v122 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v79[0], (struct ERECTL *)&v114, 0);
              v64 = (POINTL *)v80[0];
              if ( (*((_DWORD *)v80[0] + 9) & 0xE0) != 0 )
              {
                XDCOBJ::vAccumulate((XDCOBJ *)v80, v63, (__m128i *)&v114);
                XDCOBJ::vAccumulateTight((XDCOBJ *)v80, v65, (__m128i *)&v114);
                v64 = (POINTL *)v80[0];
              }
              v32 = EngPaint((SURFOBJ *)(v20 + 24), &pco, v60, v64 + 150, mix);
            }
            if ( v32 )
              goto LABEL_107;
          }
        }
LABEL_106:
        EngSetLastError(8u);
        goto LABEL_107;
      }
LABEL_73:
      v32 = 0;
LABEL_110:
      SURFMEM::~SURFMEM((SURFMEM *)&v82);
      goto LABEL_112;
    }
    v45 = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v77);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v77);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v72);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v72);
    if ( !v77[0]
      || !v72[0]
      || (RGNOBJ::vSet((RGNOBJ *)v77, &v114),
          !RGNOBJ::bMerge((RGNOBJ *)v72, (struct RGNOBJ *)v77, (struct RGNOBJ *)&v76, 4u)) )
    {
LABEL_59:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v72);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v77);
      v47 = v69.y;
      v46 = v69.x;
      goto LABEL_62;
    }
    if ( !RGNOBJ::bOffset((RGNOBJ *)v72, &v69) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v114, &v69, 1) )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v72);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v77);
      goto LABEL_73;
    }
    v118 = 0LL;
    v119 = 0LL;
    v120 = 0;
    v121 = 1;
    v122 = 0LL;
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
      pbo.iSolidColor = (v71 & 1) == 0;
      if ( gbMultiMonMismatchColor )
      {
        v48 = ulIndexToRGB(v22, v23, (v71 & 1) == 0);
        goto LABEL_57;
      }
    }
    else
    {
      pbo.iSolidColor = v71;
      if ( gbMultiMonMismatchColor )
      {
        v48 = v78;
LABEL_57:
        v105 = v48;
        v104 = v48;
      }
    }
    v45 = EngPaint((SURFOBJ *)((v82 + 24) & -(__int64)(v82 != 0)), &pco, &pbo, 0LL, 0xD0Du);
    EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
    goto LABEL_59;
  }
  v32 = 1;
LABEL_112:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v111);
  if ( v112[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v112);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v113);
LABEL_117:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v80);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v81);
  return v32;
}
