__int64 __fastcall bProxyDrvTextOut(
        struct XDCOBJ *a1,
        struct SURFACE *this,
        struct ESTROBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        struct RFONTOBJ *a10,
        struct PDEVOBJ *a11,
        char a12,
        struct _RECTL *a13)
{
  struct XDCOBJ *v13; // r12
  struct RFONTOBJ *v14; // rbx
  struct SURFACE *v15; // r15
  _WORD *v16; // r11
  CLIPOBJ *v17; // rsi
  _WORD *v18; // r10
  struct _RECTL *v20; // r13
  __int64 v21; // rax
  _BOOL8 v22; // r8
  _DWORD *v23; // rdx
  POINTL *v24; // r9
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  RFONTOBJ *v30; // rsi
  int v31; // eax
  struct _SURFOBJ *v32; // r8
  __int64 v33; // r10
  int *v34; // rcx
  int v35; // edx
  LONG left; // ecx
  LONG right; // ecx
  LONG top; // ecx
  LONG bottom; // ecx
  struct _BRUSHOBJ *v40; // rax
  _DWORD *v41; // rdx
  _WORD *v42; // r8
  _WORD *v43; // rcx
  _DWORD *v44; // r9
  __int64 v45; // rcx
  __int128 v46; // xmm0
  __int64 v47; // rbx
  int *v48; // r14
  unsigned int v49; // r15d
  unsigned int v50; // r12d
  int v51; // r13d
  bool v52; // zf
  int v53; // eax
  BOOL v54; // eax
  BOOL (__stdcall *v55)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // r14
  int v56; // edx
  __int64 v57; // rax
  __int64 ThreadWin32Thread; // rax
  int *v59; // rbx
  unsigned int v60; // r15d
  unsigned int v61; // r12d
  int v62; // eax
  struct _RECTL *v63; // r9
  __int64 v64; // rax
  __int64 result; // rax
  struct _XLATEOBJ *pbo; // [rsp+28h] [rbp-D8h]
  POINTL *v67; // [rsp+38h] [rbp-C8h]
  POINTL *v68; // [rsp+40h] [rbp-C0h]
  unsigned int v69; // [rsp+58h] [rbp-A8h]
  int v70; // [rsp+60h] [rbp-A0h]
  unsigned int v71; // [rsp+64h] [rbp-9Ch]
  __int64 v72; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v73; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v74; // [rsp+74h] [rbp-8Ch] BYREF
  struct SURFACE *v75; // [rsp+78h] [rbp-88h]
  struct _RECTL *v76; // [rsp+80h] [rbp-80h]
  int v77; // [rsp+88h] [rbp-78h]
  int v78; // [rsp+8Ch] [rbp-74h]
  struct XDCOBJ *v79; // [rsp+90h] [rbp-70h]
  struct RFONTOBJ *v80; // [rsp+98h] [rbp-68h]
  POINTL *v81; // [rsp+A0h] [rbp-60h]
  int *v82; // [rsp+A8h] [rbp-58h] BYREF
  CLIPOBJ *pco; // [rsp+B0h] [rbp-50h]
  BRUSHOBJ *v84; // [rsp+B8h] [rbp-48h]
  _BOOL8 v85; // [rsp+C0h] [rbp-40h]
  _WORD *v86; // [rsp+C8h] [rbp-38h]
  struct _POINTL v87; // [rsp+D0h] [rbp-30h] BYREF
  struct PDEVOBJ *v88; // [rsp+D8h] [rbp-28h]
  struct _BRUSHOBJ *v89; // [rsp+E0h] [rbp-20h]
  struct _RECTL *v90; // [rsp+E8h] [rbp-18h]
  _WORD *v91; // [rsp+F0h] [rbp-10h]
  __int64 v92; // [rsp+F8h] [rbp-8h]
  LINEATTRS v93; // [rsp+100h] [rbp+0h] BYREF
  PATHOBJ ppo; // [rsp+130h] [rbp+30h] BYREF
  __int64 v95; // [rsp+138h] [rbp+38h]
  int v96[10]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v97[10]; // [rsp+1D8h] [rbp+D8h] BYREF

  v13 = a1;
  v14 = a10;
  v15 = this;
  v16 = (_WORD *)*((_QWORD *)a3 + 25);
  v17 = a4;
  v18 = (_WORD *)*((_QWORD *)a3 + 5);
  v20 = a6;
  v90 = a5;
  v84 = a7;
  v89 = a8;
  v88 = a11;
  v78 = *(_DWORD *)a3;
  v21 = *((_QWORD *)a3 + 7);
  v79 = a1;
  *((_QWORD *)a3 + 4) = 0LL;
  v22 = 0LL;
  v75 = this;
  v23 = *(_DWORD **)a10;
  v92 = v21;
  pco = a4;
  v24 = a9;
  LODWORD(v21) = v23[179];
  v76 = a6;
  v81 = a9;
  v80 = a10;
  v77 = 0;
  v87 = 0LL;
  v71 = 1;
  v91 = v16;
  v86 = v18;
  v85 = 0LL;
  if ( (v21 & 4) != 0 )
  {
    v85 = 0LL;
    if ( v23[52] == 1 )
    {
      v22 = *(_DWORD *)(*(_QWORD *)a1 + 1756LL) != v23[98];
      v85 = v22;
    }
  }
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v25 = 0;
  v26 = *(_QWORD *)a10;
  v70 = 0;
  if ( *(_DWORD *)(*(_QWORD *)a10 + 840LL) + 4 > 0 )
  {
    while ( 1 )
    {
      v72 = 0LL;
      if ( v25 )
        break;
      v31 = *((_DWORD *)a3 + 62) + *((_DWORD *)a3 + 63) + *((_DWORD *)a3 + 64);
      v32 = (struct _SURFOBJ *)*(unsigned int *)(v26 + 840);
      if ( (_DWORD)v32 )
      {
        v33 = (unsigned int)v32;
        v34 = (int *)*((_QWORD *)a3 + 33);
        do
        {
          if ( *((_QWORD *)a3 + 33) )
            v35 = *v34;
          else
            v35 = 0;
          v31 += v35;
          ++v34;
          --v33;
        }
        while ( v33 );
        v13 = v79;
        v18 = v86;
        v24 = v81;
      }
      if ( v31 == v78 )
      {
        if ( v20 )
        {
          left = a13->left;
          if ( a13->left <= v20->left )
            left = v20->left;
          v17->rclBounds.left = left;
          right = a13->right;
          if ( right >= v20->right )
            right = v20->right;
          v17->rclBounds.right = right;
          top = a13->top;
          if ( top <= v20->top )
            top = v20->top;
          v17->rclBounds.top = top;
          bottom = a13->bottom;
          if ( bottom >= v20->bottom )
            bottom = v20->bottom;
          v17->rclBounds.bottom = bottom;
        }
        if ( v17->rclBounds.left < v17->rclBounds.right && v17->rclBounds.top < v17->rclBounds.bottom && v20 )
        {
          v40 = v89;
          ++*((_DWORD *)v15 + 23);
          TextOutBitBlt(v15, v14, v32, (struct _SURFOBJ *)v24, v17, pbo, v20, v67, v68, v40, v24, v69);
        }
        v17->rclBounds = *a13;
        v20 = 0LL;
        v76 = 0LL;
        goto LABEL_101;
      }
      v30 = v14;
LABEL_48:
      v41 = (_DWORD *)*((_QWORD *)a3 + 26);
      v42 = v18;
      v43 = v16;
      v44 = &v41[v78];
      while ( v41 < v44 )
      {
        if ( *v41 == v25 )
          *v43++ = *v42;
        ++v42;
        ++v41;
      }
      *((_QWORD *)a3 + 5) = v16;
      v45 = v43 - v16;
      v77 += v45;
      *(_DWORD *)a3 = v45;
      *((_DWORD *)a3 + 59) = v25;
      *((_DWORD *)a3 + 12) = 0;
      if ( v25 && (unsigned int)bAdjusBaseLine(v14, (struct RFONTOBJ *)&v72, &v87) )
        ESTROBJ::ptlBaseLineAdjustSet(a3, &v87);
      v46 = *(_OWORD *)((char *)a3 + 12);
      *((_QWORD *)a3 + 7) = v30;
      *(_OWORD *)((char *)a3 + 180) = v46;
      if ( (*(_DWORD *)(*(_QWORD *)v30 + 88LL) & 2) == 0 )
      {
        v20 = 0LL;
        if ( !(unsigned int)bOutOfBounds((STROBJ *)a3, (__int64 *)v30) )
        {
          v55 = SURFACE::pfnTextOut(v15);
          if ( (char *)v55 == (char *)SpTextOut
            || (char *)v55 == (char *)MulTextOut
            || (char *)v55 == (char *)BmpDevTextOut )
          {
            if ( (*(_DWORD *)(*(_QWORD *)v30 + 12LL) & 0x10010000) != 0 )
            {
              *((_QWORD *)v15 + 13) = v13;
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              if ( ThreadWin32Thread )
                *(_QWORD *)(ThreadWin32Thread + 304) = v13;
            }
          }
          else
          {
            v56 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
            if ( (v56 & 0x10000) != 0
              && ((*(_DWORD *)(*(_QWORD *)v13 + 72LL) & 0x1000000) == 0 || (v56 & 0x10000000) != 0) )
            {
              if ( v55 != EngTextOut )
              {
                *((_QWORD *)v15 + 13) = v13;
                v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                if ( v57 )
                  *(_QWORD *)(v57 + 304) = v13;
              }
              v55 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
            }
          }
          RFONTOBJ::PreTextOut(v30, v13);
          v59 = v97;
          v74 = 0;
          v60 = 0;
          v73 = 0;
          v61 = 0;
          v82 = v97;
          if ( v30 != v80 && (*(_DWORD *)(*((_QWORD *)v75 + 6) + 40LL) & 0x8080) == 0x8080 )
          {
            v62 = UMPDReleaseRFONTSem(v80, 0LL, &v74, &v73, &v82);
            v60 = v74;
            LODWORD(v20) = v62;
            v61 = v73;
            v59 = v82;
          }
          v63 = v90;
          if ( v77 != v78 )
            v63 = 0LL;
          v68 = v81;
          v67 = (POINTL *)v89;
          pbo = (struct _XLATEOBJ *)v76;
          v71 &= -(((unsigned int (__fastcall *)(unsigned __int64, struct ESTROBJ *, _QWORD, CLIPOBJ *, struct _RECTL *))v55)(
                     ((unsigned __int64)v75 + 24) & -(__int64)(v75 != 0LL),
                     a3,
                     *(_QWORD *)v30,
                     pco,
                     v63) != 0);
          if ( (_DWORD)v20 )
          {
            UMPDAcquireRFONTSem(v80, 0LL, v60, v61, v59);
            v20 = 0LL;
            if ( v59 && v59 != v97 )
              Win32FreePool(v59);
          }
          else
          {
            v20 = 0LL;
          }
          v13 = v79;
          RFONTOBJ::PostTextOut(v30, v79);
          v15 = v75;
          *((_QWORD *)v75 + 13) = 0LL;
          v64 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v14 = v80;
          v25 = v70;
          if ( v64 )
            *(_QWORD *)(v64 + 304) = 0LL;
        }
        v76 = 0LL;
        goto LABEL_100;
      }
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
      if ( v95 )
      {
        v47 = *((_QWORD *)v15 + 6);
        v48 = v96;
        v82 = v96;
        v73 = 0;
        v49 = 0;
        v74 = 0;
        v50 = 0;
        v51 = 0;
        v71 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a3, (struct EPATHOBJ *)&ppo);
        if ( v71 )
        {
          v52 = (*(_DWORD *)(v47 + 40) & 0x8000) == 0;
          v14 = v80;
          if ( !v52 )
          {
            v53 = UMPDReleaseRFONTSem(v80, 0LL, &v73, &v74, &v82);
            v49 = v73;
            v51 = v53;
            v50 = v74;
            v48 = v82;
          }
          if ( (*(_DWORD *)(*(_QWORD *)v30 + 716LL) & 0x8000) == 0 )
          {
            *(_OWORD *)&v93.fl = glaSimpleStroke;
            memset(&v93.eMiterLimit, 0, 24);
            v54 = EPATHOBJ::bSimpleStroke(&ppo, a12, v88, v75, pco, 0LL, v84, v81, &v93, 0xD0Du);
            goto LABEL_65;
          }
          if ( ppo.cCurves > 1 )
          {
            v54 = EPATHOBJ::bSimpleFill(&ppo, a12, v88, v75, pco, v84, v81, 0xD0Du, 2u);
LABEL_65:
            v71 = v54;
          }
          if ( v51 )
          {
            UMPDAcquireRFONTSem(v14, 0LL, v49, v50, v48);
            if ( v48 )
            {
              if ( v48 != v96 )
                Win32FreePool(v48);
            }
          }
        }
        else
        {
          v14 = v80;
        }
        v15 = v75;
        v25 = v70;
        v13 = v79;
        v20 = v76;
        goto LABEL_73;
      }
      EngSetLastError(8u);
      v71 = 0;
LABEL_73:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
LABEL_100:
      v17 = pco;
      *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)((char *)a3 + 180);
LABEL_101:
      v72 = 0LL;
LABEL_102:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v72);
      v26 = *(_QWORD *)v14;
      ++v25;
      v22 = v85;
      v18 = v86;
      v24 = v81;
      v16 = v91;
      v70 = v25;
      if ( v25 >= *(_DWORD *)(*(_QWORD *)v14 + 840LL) + 4 )
        goto LABEL_103;
    }
    switch ( v25 )
    {
      case 1:
        if ( v22 || !*((_DWORD *)a3 + 62) )
          goto LABEL_102;
        v29 = *(_QWORD *)(v26 + 720);
        break;
      case 2:
        if ( v22 || !*((_DWORD *)a3 + 63) )
          goto LABEL_102;
        v29 = *(_QWORD *)(v26 + 728);
        break;
      case 3:
        if ( v22 || !*((_DWORD *)a3 + 64) )
          goto LABEL_102;
        v29 = *(_QWORD *)(v26 + 736);
        break;
      default:
        if ( v22 )
          goto LABEL_102;
        v27 = *((_QWORD *)a3 + 33);
        if ( !v27 )
          goto LABEL_102;
        v28 = (unsigned int)(v25 - 4);
        if ( !*(_DWORD *)(v27 + 4 * v28) )
          goto LABEL_102;
        v72 = *(_QWORD *)(*(_QWORD *)(v26 + 744) + 8 * v28);
        goto LABEL_23;
    }
    v72 = v29;
LABEL_23:
    v30 = (RFONTOBJ *)&v72;
    goto LABEL_48;
  }
LABEL_103:
  *((_QWORD *)a3 + 7) = v92;
  result = v71;
  *((_QWORD *)a3 + 5) = v18;
  return result;
}
