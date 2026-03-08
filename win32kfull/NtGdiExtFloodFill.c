/*
 * XREFs of NtGdiExtFloodFill @ 0x1C02D6200
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00057D8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C007FBAC (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007FBDC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008219C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00881C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C008C950 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00E6260 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F7D4 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F858 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C014D92E (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     EngPaint @ 0x1C0291240 (EngPaint.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C02D533C (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C02D539C (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C02D54B8 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02D569C (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02D590C (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C02D5FE4 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C02D60B0 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02D7038 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  DC *v8; // rbx
  char v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // r14d
  DC *v14; // rax
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rcx
  Gre::Base *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v25; // rdx
  ULONG v26; // r12d
  char *v27; // r13
  __int64 v28; // r8
  bool v29; // cf
  int v30; // ecx
  __int64 v31; // rcx
  __m128i v32; // xmm6
  __int64 v33; // rcx
  int v34; // edi
  int v35; // edx
  unsigned int y; // ebx
  LONG x; // r10d
  int v38; // eax
  Gre::Base *v39; // rcx
  struct Gre::Base::SESSION_GLOBALS *v40; // rax
  bool v41; // zf
  int v42; // eax
  BOOL v43; // r13d
  LONG v44; // esi
  LONG v45; // r12d
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  unsigned __int8 *v49; // rsi
  int v50; // ecx
  int v51; // eax
  int v52; // r10d
  int v53; // r11d
  int v54; // r12d
  int v55; // r13d
  unsigned int v56; // ebx
  __int32 v57; // r12d
  __int32 v58; // r13d
  __int64 v59; // rsi
  int v60; // eax
  int v62; // r10d
  BRUSHOBJ *v63; // rdi
  MIX v64; // eax
  __int64 v65; // r10
  MIX mix; // ebx
  struct ECLIPOBJ *v67; // rdx
  POINTL *v68; // r9
  struct ECLIPOBJ *v69; // rdx
  int v70; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v71; // [rsp+70h] [rbp-98h] BYREF
  DC *v72[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v73; // [rsp+88h] [rbp-80h] BYREF
  struct _POINTL v74; // [rsp+90h] [rbp-78h] BYREF
  struct REGION *v75; // [rsp+98h] [rbp-70h] BYREF
  struct REGION *v76; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-60h] BYREF
  char v78; // [rsp+B0h] [rbp-58h]
  int v79; // [rsp+B4h] [rbp-54h]
  ULONG v80; // [rsp+B8h] [rbp-50h]
  int v81; // [rsp+BCh] [rbp-4Ch]
  int v82; // [rsp+C0h] [rbp-48h] BYREF
  int v83; // [rsp+C4h] [rbp-44h] BYREF
  struct REGION *v84; // [rsp+C8h] [rbp-40h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v85; // [rsp+D0h] [rbp-38h]
  __int64 v86; // [rsp+D8h] [rbp-30h]
  FLONG v87; // [rsp+E0h] [rbp-28h]
  _BYTE v88[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v89; // [rsp+ECh] [rbp-1Ch]
  __int64 v90; // [rsp+F0h] [rbp-18h]
  __int64 v91; // [rsp+108h] [rbp+0h]
  BRUSHOBJ *v92; // [rsp+110h] [rbp+8h] BYREF
  int v93; // [rsp+118h] [rbp+10h]
  int v94; // [rsp+11Ch] [rbp+14h]
  _BYTE v95[4]; // [rsp+120h] [rbp+18h] BYREF
  int v96; // [rsp+124h] [rbp+1Ch]
  __int64 v97; // [rsp+128h] [rbp+20h]
  __int64 v98; // [rsp+140h] [rbp+38h]
  __int128 v99; // [rsp+148h] [rbp+40h] BYREF
  __int128 v100; // [rsp+158h] [rbp+50h]
  int v101; // [rsp+168h] [rbp+60h] BYREF
  __m128i v102; // [rsp+16Ch] [rbp+64h]
  ULONG v103; // [rsp+17Ch] [rbp+74h]
  unsigned __int8 *v104; // [rsp+180h] [rbp+78h]
  int v105; // [rsp+188h] [rbp+80h]
  int v106; // [rsp+18Ch] [rbp+84h]
  _BYTE v107[32]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v108[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int16 v109; // [rsp+1C8h] [rbp+C0h]
  _BYTE v110[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  BRUSHOBJ pbo; // [rsp+1F8h] [rbp+F0h] BYREF
  int v112; // [rsp+210h] [rbp+108h]
  int v113; // [rsp+214h] [rbp+10Ch]
  __int64 v114; // [rsp+218h] [rbp+110h]
  __int64 v115; // [rsp+220h] [rbp+118h]
  __int64 v116; // [rsp+250h] [rbp+148h]
  __int128 v117; // [rsp+258h] [rbp+150h]
  int v118; // [rsp+270h] [rbp+168h]
  __m128i v119; // [rsp+288h] [rbp+180h] BYREF
  _QWORD v120[2]; // [rsp+298h] [rbp+190h] BYREF
  CLIPOBJ pco; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v122; // [rsp+2F8h] [rbp+1F0h]
  int v123; // [rsp+300h] [rbp+1F8h]
  int v124; // [rsp+328h] [rbp+220h]
  __int64 v125; // [rsp+338h] [rbp+230h]
  CLIPOBJ v126; // [rsp+348h] [rbp+240h] BYREF
  __int64 v127; // [rsp+398h] [rbp+290h]
  int v128; // [rsp+3A0h] [rbp+298h]
  int v129; // [rsp+3C8h] [rbp+2C0h]
  __int64 v130; // [rsp+3D8h] [rbp+2D0h]

  LODWORD(v86) = a4;
  DCOBJ::DCOBJ((DCOBJ *)v72, a1);
  v8 = v72[0];
  if ( !v72[0] || (*((_DWORD *)v72[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v72);
    return 0LL;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v72) )
  {
    if ( (v9 & 0xE0) != 0 )
    {
      v10 = *((_QWORD *)v8 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v10 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v10 + 48), 11LL);
      v11 = *(_QWORD *)(v10 + 2528);
      if ( v11 )
        v12 = *(_QWORD *)(v11 + 56);
      else
        v12 = *((_QWORD *)v72[0] + 64);
      v73 = v12;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v10 + 48));
      v94 = HIDWORD(v73);
      v92 = 0LL;
      v93 = v12;
      XDCOBJ::vAccumulate((XDCOBJ *)v72, (struct ERECTL *)&v92);
    }
    v13 = 1;
    goto LABEL_110;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v70);
  v14 = v72[0];
  v15 = *((_QWORD *)v72[0] + 122);
  v16 = *(_DWORD *)(v15 + 152);
  if ( (v16 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v72[0], *(_QWORD *)(v15 + 160));
    v14 = v72[0];
  }
  if ( (v16 & 0x2000) != 0 )
  {
    GreDCSelectPen(v14, *(_QWORD *)(*((_QWORD *)v14 + 122) + 168LL));
    v14 = v72[0];
  }
  v17 = *((_QWORD *)v14 + 62);
  if ( v17 && *(_WORD *)(v17 + 100) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v76, (struct XDCOBJ *)v72);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v70);
    v73 = *((_QWORD *)Gre::Base::Globals(v18) + 14);
    GreAcquireSemaphore(v73);
    bConvertDfbDcToDib((struct XDCOBJ *)v72);
    SEMOBJ::vUnlock((SEMOBJ *)&v73);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v70);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v76);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v70);
  v108[0] = 0LL;
  v108[1] = 0LL;
  v109 = 256;
  v13 = 1;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v107, (struct XDCOBJ *)v72, 0);
  v19 = *((_QWORD *)v72[0] + 62);
  v71.x = a2;
  v71.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v110, (struct XDCOBJ *)v72, 516);
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v110, &v71, 1LL) )
    goto LABEL_109;
  v20 = *(_QWORD *)(v19 + 48);
  v21 = *(_QWORD *)(v19 + 128);
  v22 = *((_QWORD *)v72[0] + 11);
  if ( (*(_DWORD *)(*((_QWORD *)v72[0] + 6) + 40LL) & 0x80u) != 0
    || (unsigned int)DC::bIsCMYKColor(v72[0])
    || (*(_DWORD *)(v23 + 120) & 2) != 0 )
  {
    EngSetLastError(0x57u);
    goto LABEL_109;
  }
  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v21, v22, a4, 1LL);
  v25 = v72[0];
  v26 = NearestIndexFromColorref;
  v80 = NearestIndexFromColorref;
  v27 = (char *)v72[0] + 1200;
  v28 = *((_QWORD *)v72[0] + 122);
  v29 = (*((_DWORD *)v72[0] + 30) & 5) != 0;
  v92 = (BRUSHOBJ *)((char *)v72[0] + 1200);
  v30 = *(_DWORD *)(v28 + 152);
  v87 = v29 ? 2 : 0;
  if ( (v30 & 1) != 0 || (*((_DWORD *)v72[0] + 79) & 1) != 0 )
  {
    *(_DWORD *)(v28 + 152) = v30 & 0xFFFFFFFE;
    *((_DWORD *)v72[0] + 79) &= ~1u;
    EBRUSHOBJ::vInitBrush(v27, v72[0], *((_QWORD *)v72[0] + 17), v22, v21, v19, 1);
    v25 = v72[0];
  }
  if ( (*((_DWORD *)v27 + 30) & 0x100) != 0 )
    goto LABEL_25;
  if ( (v107[24] & 1) == 0 )
  {
    v13 = XDCOBJ::bFullScreen((XDCOBJ *)v72);
LABEL_25:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v107);
    goto LABEL_110;
  }
  v31 = *((_DWORD *)v25 + 10) & 1LL;
  v71.x += *((_DWORD *)v25 + 2 * v31 + 254);
  v71.y += *((_DWORD *)v25 + 2 * v31 + 255);
  v84 = XDCOBJ::prgnEffRao(v72);
  if ( RGNOBJ::bInside((RGNOBJ *)&v84, &v71) != 2 )
  {
LABEL_109:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v107);
    v13 = 0;
    goto LABEL_110;
  }
  v83 = 0;
  v82 = 0;
  v99 = 0LL;
  v77 = 0LL;
  v100 = 0LL;
  v78 = 0;
  v79 = 0;
  v73 = *(_QWORD *)(v19 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v73, (struct _SURFOBJ *)(v19 + 24), 0LL, 0);
  v32 = *(__m128i *)((char *)v84 + 56);
  v74 = 0LL;
  v119 = v32;
  LODWORD(v85) = 0;
  if ( !*(_WORD *)(v19 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v84) != 3 )
  {
    v33 = *(_QWORD *)(v19 + 80);
    v34 = *(_DWORD *)(v19 + 88);
    v35 = *(_DWORD *)(v19 + 96);
    y = v71.y;
    x = v71.x;
    goto LABEL_58;
  }
  LODWORD(v99) = *(_DWORD *)(v19 + 96);
  v81 = v99;
  DWORD1(v99) = v119.m128i_i32[2] - v119.m128i_i32[0];
  DWORD2(v99) = v119.m128i_i32[3] - v119.m128i_i32[1];
  v38 = 1;
  DWORD2(v100) = 1;
  *(_QWORD *)&v100 = 0LL;
  if ( (*(_DWORD *)(v19 + 112) & 0x40000) != 0 )
    v38 = 262145;
  DWORD2(v100) = v38;
  SURFMEM::bCreateDIB((SURFMEM *)&v77, (struct _DEVBITMAPINFO *)&v99, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !v77 )
  {
    EngSetLastError(8u);
    SURFMEM::~SURFMEM((SURFMEM *)&v77);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v107);
    v13 = 0;
    goto LABEL_110;
  }
  v120[1] = *(_QWORD *)((char *)&v99 + 4);
  v120[0] = 0LL;
  v40 = Gre::Base::Globals(v39);
  v41 = (*(_DWORD *)(v19 + 112) & 0x400) == 0;
  v85 = v40;
  if ( v41 )
    v42 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, char *, _QWORD *, __m128i *))EngCopyBits)(
            (v77 + 24) & -(__int64)(v77 != 0),
            v19 + 24,
            0LL,
            (char *)v40 + 6896,
            v120,
            &v119);
  else
    v42 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *, __m128i *))(v20 + 2816))(
            (v77 + 24) & -(__int64)(v77 != 0),
            v19 + 24,
            0LL,
            (__int64)v40 + 6896,
            v120,
            &v119);
  v43 = v42;
  v44 = -v119.m128i_i32[0];
  v45 = -v119.m128i_i32[1];
  v74.x = -v119.m128i_i32[0];
  v74.y = -v119.m128i_i32[1];
  if ( !v42 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v84) != 3 )
  {
    ERECTL::bOffsetAdd((ERECTL *)&v119, &v74, 0);
    goto LABEL_55;
  }
  v43 = 0;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v73);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v73);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v76);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v76);
  if ( v73 )
  {
    if ( v76 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v73, (const struct _RECTL *const)&v119);
      if ( RGNOBJ::bMerge((RGNOBJ *)&v76, (struct RGNOBJ *)&v73, (struct RGNOBJ *)&v84, 4u) )
      {
        if ( !RGNOBJ::bOffset((RGNOBJ *)&v76, &v74) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v119, &v74, 1) )
        {
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v76);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v73);
          SURFMEM::~SURFMEM((SURFMEM *)&v77);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v107);
          v13 = 0;
          goto LABEL_110;
        }
        v122 = 0LL;
        v123 = 0;
        v124 = 1;
        v125 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v76, (struct ERECTL *)&v119, 0);
        v113 = -1;
        pbo.flColorType = v87;
        v116 = 0LL;
        v117 = 0LL;
        pbo.pvRbrush = 0LL;
        v46 = *((_DWORD *)v85 + 812);
        v114 = 0LL;
        v115 = 0LL;
        v118 = 0;
        if ( a5 )
        {
          pbo.iSolidColor = (v80 & 1) == 0;
          if ( v46 )
          {
            v47 = ulIndexToRGB(v21, v22, (v80 & 1) == 0);
            goto LABEL_50;
          }
        }
        else
        {
          pbo.iSolidColor = v80;
          if ( v46 )
          {
            v47 = v86;
LABEL_50:
            v113 = v47;
            v112 = v47;
          }
        }
        v43 = EngPaint((SURFOBJ *)((v77 + 24) & -(__int64)(v77 != 0)), &pco, &pbo, 0LL, 0xD0Du);
        EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
      }
    }
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v76);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v73);
  v45 = v74.y;
  v44 = v74.x;
LABEL_55:
  if ( !v43 )
    goto LABEL_56;
  x = v44 + v71.x;
  y = v45 + v71.y;
  v32 = v119;
  v35 = v81;
  v71.x += v44;
  v74.y = -v45;
  v26 = v80;
  v71.y = y;
  v74.x = -v44;
  v34 = *(_DWORD *)(v77 + 88);
  v33 = *(_QWORD *)(v77 + 80);
  LODWORD(v85) = 1;
LABEL_58:
  v106 = -1;
  v86 = v33;
  v101 = v35;
  v102 = v32;
  v103 = v26;
  v48 = *(_QWORD *)(v19 + 128);
  v49 = (unsigned __int8 *)(v33 + (int)(v34 * y));
  v105 = a5;
  v104 = v49;
  if ( v48 )
  {
    v50 = *(_DWORD *)(v48 + 24);
    if ( (v50 & 0xC) != 0 )
    {
      v106 = 0xFFFFFF;
    }
    else if ( (v50 & 2) != 0 )
    {
      v106 = **(_DWORD **)(v48 + 112) | *(_DWORD *)(*(_QWORD *)(v48 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v48 + 112)
                                                                                              + 8LL);
    }
  }
  v51 = FLOODBM::iColorGet((FLOODBM *)&v101, x);
  if ( !v53 && v51 == v26 || v53 == 1 && v51 != v26 )
    goto LABEL_56;
  FLOODBM::vFindExtent((FLOODBM *)&v101, v52, &v83, &v82);
  v54 = v82;
  v55 = v83;
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v95, 0x1B8u, 1LL, y, v83, v82);
  if ( !v98 )
  {
    EngSetLastError(8u);
    goto LABEL_106;
  }
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v88, 0xF8u, 0LL, (unsigned int)v71.y, v55, v54);
  if ( !v91 )
  {
    EngSetLastError(8u);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v88);
LABEL_106:
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v95);
    SURFMEM::~SURFMEM((SURFMEM *)&v77);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v107);
    v13 = 0;
    goto LABEL_110;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v75, 0x12E0u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v75);
  if ( !v75 )
  {
    EngSetLastError(8u);
    goto LABEL_103;
  }
  v56 = 1;
  v57 = v119.m128i_i32[3] - 1;
  v58 = v119.m128i_i32[1];
  if ( v71.y >= v119.m128i_i32[3] - 1 )
  {
    v89 -= *(_DWORD *)(v90 + 8);
    v90 = *(_QWORD *)(v90 + 16);
  }
  else
  {
    v56 = FLOODBM::bExtendScanline(
            (FLOODBM *)&v101,
            (struct STACKOBJ *)v88,
            (struct STACKOBJ *)v95,
            v71.y + 1,
            v49,
            &v49[v34]) & 1;
    if ( !v56 )
      goto LABEL_86;
  }
  v59 = v86;
  while ( 1 )
  {
    while ( v89 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)&v75, (struct STACKOBJ *)v88) )
        goto LABEL_85;
      if ( *(_DWORD *)v90 >= v57 )
      {
        v89 -= *(_DWORD *)(v90 + 8);
        v90 = *(_QWORD *)(v90 + 16);
      }
      else
      {
        v60 = FLOODBM::bExtendScanline(
                (FLOODBM *)&v101,
                (struct STACKOBJ *)v88,
                (struct STACKOBJ *)v95,
                *(_DWORD *)v90 + 1,
                (unsigned __int8 *)(v59 + v34 * *(_DWORD *)v90),
                (unsigned __int8 *)(v59 + v34 * *(_DWORD *)v90 + v34));
LABEL_84:
        if ( !v60 )
        {
LABEL_85:
          v56 = 0;
          goto LABEL_86;
        }
      }
    }
    if ( !v96 )
      break;
    v56 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)&v75, (struct STACKOBJ *)v95);
    if ( *(_DWORD *)v97 > v58 )
    {
      v60 = FLOODBM::bExtendScanline(
              (FLOODBM *)&v101,
              (struct STACKOBJ *)v95,
              (struct STACKOBJ *)v88,
              *(_DWORD *)v97 - 1,
              (unsigned __int8 *)(v59 + v34 * *(_DWORD *)v97),
              (unsigned __int8 *)(v59 + v34 * *(_DWORD *)v97 - v34));
      goto LABEL_84;
    }
    v96 -= *(_DWORD *)(v97 + 8);
    v97 = *(_QWORD *)(v97 + 16);
  }
  if ( !v56 )
    goto LABEL_86;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v75) == 1 )
  {
LABEL_87:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v75);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v88);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v95);
    SURFMEM::~SURFMEM((SURFMEM *)&v77);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v107);
    if ( v108[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v108);
    if ( v72[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v72);
    return v56;
  }
  else
  {
    if ( (_DWORD)v85 == v62
      || RGNOBJ::bOffset((RGNOBJ *)&v75, &v74) && (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v119, &v74, 1) )
    {
      v63 = v92;
      v64 = EBRUSHOBJ::mixBest(
              (EBRUSHOBJ *)v92,
              *(_BYTE *)(*((_QWORD *)v72[0] + 122) + 212LL),
              *(_BYTE *)(*((_QWORD *)v72[0] + 122) + 213LL));
      ++*(_DWORD *)(v19 + 92);
      v127 = v65;
      mix = v64;
      v128 = v65;
      v129 = 1;
      v130 = v65;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&v126, v75, (struct ERECTL *)&v119, 0);
      v68 = (POINTL *)v72[0];
      if ( (*((_DWORD *)v72[0] + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)v72, v67, &v119);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v72, v69, &v119);
        v68 = (POINTL *)v72[0];
      }
      v56 = EngPaint((SURFOBJ *)(v19 + 24), &v126, v63, v68 + 149, mix);
      if ( !v56 )
LABEL_86:
        EngSetLastError(8u);
      goto LABEL_87;
    }
LABEL_103:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v75);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v88);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v95);
LABEL_56:
    SURFMEM::~SURFMEM((SURFMEM *)&v77);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v107);
    v13 = 0;
LABEL_110:
    DCOBJ::~DCOBJ((DCOBJ *)v72);
    return v13;
  }
}
