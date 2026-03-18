/*
 * XREFs of ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C029647C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00EB7A0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C012AA04 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C012ABD8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0133FC4 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0134AA8 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C029613C (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     bOutOfBounds @ 0x1C0296398 (bOutOfBounds.c)
 *     ?pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@ZXZ @ 0x1C0296DB4 (-pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02A5B1C (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A618C (-PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A6214 (-PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BCA2C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall bProxyDrvTextOut(
        struct XDCOBJ *a1,
        struct SURFACE *a2,
        struct ESTROBJ *this,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        struct RFONTOBJ *a10,
        struct PDEVOBJ *a11,
        unsigned int a12,
        struct _RECTL *a13)
{
  struct RFONTOBJ *v14; // r14
  struct XDCOBJ *v15; // r12
  _WORD *v16; // r10
  struct SURFACE *v17; // r13
  unsigned __int64 v18; // r9
  struct _RECTL *v20; // rsi
  POINTL *v21; // r11
  _WORD *v22; // rax
  _BOOL8 v23; // r8
  _DWORD *v24; // rdx
  int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // r8
  RFONTOBJ *v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // r8d
  __int64 v32; // r10
  int *v33; // rcx
  int v34; // edx
  unsigned __int64 left; // r8
  int right; // edx
  LONG top; // ecx
  LONG bottom; // ecx
  struct _BRUSHOBJ *v39; // rax
  _DWORD *v40; // rdx
  _WORD *v41; // r8
  _WORD *v42; // r10
  _WORD *v43; // rcx
  _DWORD *v44; // r9
  __int64 v45; // rcx
  __int128 v46; // xmm0
  __int64 v47; // rbx
  int *v48; // r14
  unsigned int v49; // r15d
  unsigned int v50; // r12d
  int v51; // r13d
  int v52; // eax
  int v53; // eax
  BOOL (__stdcall *v54)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // r14
  int v55; // edx
  __int64 v56; // rax
  __int64 ThreadWin32Thread; // rax
  int *v58; // rbx
  unsigned int v59; // r15d
  unsigned int v60; // r12d
  int v61; // r13d
  int v62; // eax
  struct _RECTL *v63; // r9
  int v64; // eax
  __int64 v65; // rax
  __int64 result; // rax
  BRUSHOBJ *pbo; // [rsp+28h] [rbp-D8h]
  POINTL *v68; // [rsp+38h] [rbp-C8h]
  POINTL *v69; // [rsp+40h] [rbp-C0h]
  int v70; // [rsp+60h] [rbp-A0h]
  unsigned int v71; // [rsp+64h] [rbp-9Ch]
  __int64 v72; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v73; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v74; // [rsp+74h] [rbp-8Ch] BYREF
  struct RFONTOBJ *v75; // [rsp+78h] [rbp-88h]
  struct SURFACE *v76; // [rsp+80h] [rbp-80h]
  int v77; // [rsp+88h] [rbp-78h]
  _DWORD v78[3]; // [rsp+8Ch] [rbp-74h]
  CLIPOBJ *pco; // [rsp+98h] [rbp-68h]
  int *v80; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL *v81; // [rsp+A8h] [rbp-58h]
  POINTL *v82; // [rsp+B0h] [rbp-50h]
  BRUSHOBJ *v83; // [rsp+B8h] [rbp-48h]
  _BOOL8 v84; // [rsp+C0h] [rbp-40h]
  _WORD *v85; // [rsp+C8h] [rbp-38h]
  struct _POINTL v86; // [rsp+D0h] [rbp-30h] BYREF
  struct PDEVOBJ *v87; // [rsp+D8h] [rbp-28h]
  struct _BRUSHOBJ *v88; // [rsp+E0h] [rbp-20h]
  _WORD *v89; // [rsp+E8h] [rbp-18h]
  struct _RECTL *v90; // [rsp+F0h] [rbp-10h]
  __int64 v91; // [rsp+F8h] [rbp-8h]
  LINEATTRS v92; // [rsp+100h] [rbp+0h] BYREF
  PATHOBJ ppo; // [rsp+130h] [rbp+30h] BYREF
  __int64 v94; // [rsp+138h] [rbp+38h]
  int v95[10]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v96[10]; // [rsp+1D8h] [rbp+D8h] BYREF

  v14 = a10;
  v15 = a1;
  v16 = (_WORD *)*((_QWORD *)this + 5);
  v17 = a2;
  v18 = *(unsigned int *)this;
  v20 = a6;
  v21 = a9;
  v90 = a5;
  v83 = a7;
  v88 = a8;
  v87 = a11;
  v91 = *((_QWORD *)this + 7);
  v22 = (_WORD *)*((_QWORD *)this + 25);
  *(_QWORD *)&v78[1] = a1;
  *((_QWORD *)this + 4) = 0LL;
  v23 = 0LL;
  v76 = a2;
  v24 = *(_DWORD **)a10;
  v89 = v22;
  pco = a4;
  v81 = a6;
  LODWORD(v22) = v24[179];
  v82 = a9;
  v75 = a10;
  v77 = 0;
  v78[0] = v18;
  v86 = 0LL;
  v71 = 1;
  v85 = v16;
  v84 = 0LL;
  if ( ((unsigned __int8)v22 & 4) != 0 )
  {
    v84 = 0LL;
    if ( v24[52] == 1 )
    {
      v23 = *(_DWORD *)(*(_QWORD *)a1 + 1756LL) != v24[98];
      v84 = v23;
    }
  }
  *(_QWORD *)((char *)this + 4) = 0LL;
  v25 = 0;
  v26 = *(_QWORD *)a10;
  v70 = 0;
  if ( *(_DWORD *)(*(_QWORD *)a10 + 840LL) + 4 > 0 )
  {
    do
    {
      v72 = 0LL;
      if ( v25 )
      {
        switch ( v25 )
        {
          case 1:
            if ( v23 || !*((_DWORD *)this + 62) )
              goto LABEL_102;
            v29 = *(_QWORD *)(v26 + 720);
LABEL_16:
            v72 = v29;
            v28 = (RFONTOBJ *)&v72;
            goto LABEL_48;
          case 2:
            if ( v23 || !*((_DWORD *)this + 63) )
              goto LABEL_102;
            v29 = *(_QWORD *)(v26 + 728);
            goto LABEL_16;
          case 3:
            if ( v23 || !*((_DWORD *)this + 64) )
              goto LABEL_102;
            v29 = *(_QWORD *)(v26 + 736);
            goto LABEL_16;
        }
        if ( v23 )
          goto LABEL_102;
        v27 = *((_QWORD *)this + 33);
        if ( !v27 || !*(_DWORD *)(v27 + 4LL * (unsigned int)(v25 - 4)) )
          goto LABEL_102;
        v28 = (RFONTOBJ *)&v72;
        v72 = *(_QWORD *)(*(_QWORD *)(v26 + 744) + 8LL * (unsigned int)(v25 - 4));
      }
      else
      {
        v30 = *((_DWORD *)this + 62) + *((_DWORD *)this + 63) + *((_DWORD *)this + 64);
        v31 = *(_DWORD *)(v26 + 840);
        if ( v31 )
        {
          v32 = v31;
          v33 = (int *)*((_QWORD *)this + 33);
          do
          {
            if ( *((_QWORD *)this + 33) )
              v34 = *v33;
            else
              v34 = 0;
            v30 += v34;
            ++v33;
            --v32;
          }
          while ( v32 );
          v15 = *(struct XDCOBJ **)&v78[1];
          v16 = v85;
          v18 = v78[0];
        }
        if ( v30 == (_DWORD)v18 )
        {
          if ( v20 )
          {
            v18 = (unsigned __int64)a13;
            left = (unsigned int)a13->left;
            if ( (int)left <= v20->left )
              left = (unsigned int)v20->left;
            a4->rclBounds.left = left;
            right = a13->right;
            if ( right >= v20->right )
              right = v20->right;
            a4->rclBounds.right = right;
            top = a13->top;
            if ( top <= v20->top )
              top = v20->top;
            a4->rclBounds.top = top;
            bottom = a13->bottom;
            if ( bottom >= v20->bottom )
              bottom = v20->bottom;
            a4->rclBounds.bottom = bottom;
          }
          else
          {
            right = a4->rclBounds.right;
            left = (unsigned int)a4->rclBounds.left;
          }
          if ( (int)left < right && a4->rclBounds.top < a4->rclBounds.bottom && v20 )
          {
            v39 = v88;
            ++*((_DWORD *)v17 + 23);
            TextOutBitBlt(
              v17,
              v14,
              (struct _SURFOBJ *)left,
              (struct _SURFOBJ *)v18,
              a4,
              (struct _XLATEOBJ *)pbo,
              v20,
              v68,
              v69,
              v39,
              v21);
          }
          a4->rclBounds = *a13;
          v20 = 0LL;
          v81 = 0LL;
          goto LABEL_101;
        }
        v28 = v14;
      }
LABEL_48:
      v40 = (_DWORD *)*((_QWORD *)this + 26);
      v41 = v16;
      v42 = v89;
      v43 = v89;
      v44 = &v40[(unsigned int)v18];
      while ( v40 < v44 )
      {
        if ( *v40 == v25 )
          *v43++ = *v41;
        ++v41;
        ++v40;
      }
      *((_QWORD *)this + 5) = v42;
      v45 = v43 - v42;
      v77 += v45;
      *(_DWORD *)this = v45;
      *((_DWORD *)this + 59) = v25;
      *((_DWORD *)this + 12) = 0;
      if ( v25 && (unsigned int)bAdjusBaseLine(v14, (struct RFONTOBJ *)&v72, &v86) )
        ESTROBJ::ptlBaseLineAdjustSet(this, &v86);
      v46 = *(_OWORD *)((char *)this + 12);
      *((_QWORD *)this + 7) = v28;
      *(_OWORD *)((char *)this + 180) = v46;
      if ( (*(_DWORD *)(*(_QWORD *)v28 + 88LL) & 2) == 0 )
      {
        if ( !(unsigned int)bOutOfBounds((STROBJ *)this, (__int64 *)v28) )
        {
          v54 = SURFACE::pfnTextOut(v17);
          if ( (char *)v54 == (char *)SpTextOut
            || (char *)v54 == (char *)MulTextOut
            || (char *)v54 == (char *)BmpDevTextOut )
          {
            if ( (*(_DWORD *)(*(_QWORD *)v28 + 12LL) & 0x10010000) != 0 )
            {
              *((_QWORD *)v17 + 13) = v15;
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              if ( ThreadWin32Thread )
                *(_QWORD *)(ThreadWin32Thread + 304) = v15;
            }
          }
          else
          {
            v55 = *(_DWORD *)(*(_QWORD *)v28 + 12LL);
            if ( (v55 & 0x10000) != 0
              && ((*(_DWORD *)(*(_QWORD *)v15 + 72LL) & 0x1000000) == 0 || (v55 & 0x10000000) != 0) )
            {
              if ( v54 != EngTextOut )
              {
                *((_QWORD *)v17 + 13) = v15;
                v56 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                if ( v56 )
                  *(_QWORD *)(v56 + 304) = v15;
              }
              v54 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
            }
          }
          RFONTOBJ::PreTextOut(v28, v15);
          v58 = v96;
          v80 = v96;
          v74 = 0;
          v59 = 0;
          v73 = 0;
          v60 = 0;
          v61 = 0;
          if ( v28 != v75 && (*(_DWORD *)(*((_QWORD *)v76 + 6) + 40LL) & 0x8080) == 0x8080 )
          {
            v62 = UMPDReleaseRFONTSem(v75, 0LL, &v74, &v73, (void **)&v80);
            v59 = v74;
            v61 = v62;
            v60 = v73;
            v58 = v80;
          }
          v63 = v90;
          if ( v77 != v78[0] )
            v63 = 0LL;
          v69 = v82;
          v68 = (POINTL *)v88;
          pbo = (BRUSHOBJ *)v81;
          v64 = ((__int64 (__fastcall *)(unsigned __int64, struct ESTROBJ *, _QWORD, CLIPOBJ *, struct _RECTL *))v54)(
                  ((unsigned __int64)v76 + 24) & -(__int64)(v76 != 0LL),
                  this,
                  *(_QWORD *)v28,
                  pco,
                  v63);
          v14 = v75;
          v71 &= -(v64 != 0);
          if ( v61 )
          {
            UMPDAcquireRFONTSem(v75, 0LL, v59, v60, v58);
            if ( v58 )
            {
              if ( v58 != v96 )
                Win32FreePool(v58);
            }
          }
          v15 = *(struct XDCOBJ **)&v78[1];
          RFONTOBJ::PostTextOut(v28, *(struct XDCOBJ **)&v78[1]);
          v17 = v76;
          *((_QWORD *)v76 + 13) = 0LL;
          v65 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v25 = v70;
          if ( v65 )
            *(_QWORD *)(v65 + 304) = 0LL;
          a4 = pco;
        }
        v20 = 0LL;
        v81 = 0LL;
        goto LABEL_100;
      }
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
      if ( v94 )
      {
        v47 = *((_QWORD *)v17 + 6);
        v48 = v95;
        v80 = v95;
        v73 = 0;
        v49 = 0;
        v74 = 0;
        v50 = 0;
        v51 = 0;
        v71 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)this, (struct EPATHOBJ *)&ppo);
        if ( v71 )
        {
          if ( _bittest((const signed __int32 *)(v47 + 40), 0xFu) )
          {
            v52 = UMPDReleaseRFONTSem(v75, 0LL, &v73, &v74, (void **)&v80);
            v49 = v73;
            v51 = v52;
            v50 = v74;
            v48 = v80;
          }
          a4 = pco;
          if ( !_bittest((const signed __int32 *)(*(_QWORD *)v28 + 716LL), 0xFu) )
          {
            v92 = glaSimpleStroke;
            v53 = EPATHOBJ::bSimpleStroke(&ppo, a12, v87, v76, pco, 0LL, v83, v82, &v92, 0xD0Du);
            goto LABEL_65;
          }
          if ( ppo.cCurves > 1 )
          {
            v53 = EPATHOBJ::bSimpleFill(&ppo, a12, v87, v76, pco, v83, v82, 0xD0Du, 2u);
LABEL_65:
            v71 = v53;
          }
          if ( v51 )
          {
            UMPDAcquireRFONTSem(v75, 0LL, v49, v50, v48);
            if ( v48 )
            {
              if ( v48 != v95 )
                Win32FreePool(v48);
            }
          }
        }
        else
        {
          a4 = pco;
        }
        v14 = v75;
        v25 = v70;
        v17 = v76;
        v15 = *(struct XDCOBJ **)&v78[1];
        goto LABEL_73;
      }
      EngSetLastError(8u);
      v71 = 0;
LABEL_73:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
      v20 = v81;
LABEL_100:
      *(_OWORD *)((char *)this + 12) = *(_OWORD *)((char *)this + 180);
LABEL_101:
      v72 = 0LL;
LABEL_102:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v72);
      v26 = *(_QWORD *)v14;
      ++v25;
      v23 = v84;
      v16 = v85;
      v21 = v82;
      v18 = v78[0];
      v70 = v25;
    }
    while ( v25 < *(_DWORD *)(*(_QWORD *)v14 + 840LL) + 4 );
  }
  *((_QWORD *)this + 7) = v91;
  result = v71;
  *((_QWORD *)this + 5) = v16;
  return result;
}
