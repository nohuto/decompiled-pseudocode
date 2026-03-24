/*
 * XREFs of EngAlphaBlend @ 0x1C00ACD70
 * Callers:
 *     GrePtInSprite @ 0x1C0016F2C (GrePtInSprite.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00CAB18 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C010F140 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0294B90 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029B790 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02A1710 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B2650 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     EngHTBlt @ 0x1C0019F38 (EngHTBlt.c)
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00AD410 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C00AD628 (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00AD848 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CE750 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEEF0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

BOOL __stdcall EngAlphaBlend(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  BOOL v7; // edi
  int v10; // r12d
  PVOID *p_pvScan0; // rsi
  struct SURFACE *v12; // r14
  struct XLATE *v13; // r13
  __int64 v14; // rax
  RECTL v15; // xmm1
  _DWORD *v16; // rcx
  BLENDOBJ v17; // eax
  signed __int32 v18; // ett
  unsigned int v19; // eax
  struct SURFACE *v20; // rdx
  LONG right; // r13d
  int v22; // r14d
  PVOID *v23; // r15
  struct _RECTL v24; // xmm6
  int v25; // eax
  int v26; // r12d
  ULONG *pulXlate; // rax
  PVOID v28; // rbx
  XCLIPOBJ *v29; // r14
  int v30; // r12d
  XCLIPOBJ *v31; // rsi
  LONG v32; // r10d
  LONG v33; // r11d
  unsigned int v34; // r14d
  LONG v35; // r8d
  HDEV v36; // rsi
  struct XLATE *v37; // rdi
  LONG v38; // r12d
  LONG *v39; // rdx
  LONG v40; // eax
  LONG v41; // r9d
  LONG v42; // ecx
  PVOID v43; // rcx
  int v44; // eax
  __int64 v45; // r8
  int v46; // eax
  int v47; // eax
  __int128 v49; // xmm0
  int v50; // eax
  bool v51; // zf
  _QWORD *v52; // rbx
  __int64 *v53; // rax
  BOOL (__stdcall *v54)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v55; // rcx
  struct SURFMEM *v56; // [rsp+28h] [rbp-D8h]
  int v57; // [rsp+38h] [rbp-C8h]
  int bottom; // [rsp+60h] [rbp-A0h]
  LONG v59; // [rsp+64h] [rbp-9Ch]
  PVOID v60; // [rsp+68h] [rbp-98h] BYREF
  ULONG *v61; // [rsp+70h] [rbp-90h] BYREF
  HDEV v62; // [rsp+78h] [rbp-88h] BYREF
  HDEV hdev; // [rsp+80h] [rbp-80h] BYREF
  LONG left; // [rsp+88h] [rbp-78h]
  LONG top; // [rsp+8Ch] [rbp-74h]
  XCLIPOBJ *v66; // [rsp+90h] [rbp-70h]
  char *v67; // [rsp+98h] [rbp-68h] BYREF
  char v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+A4h] [rbp-5Ch]
  _DWORD v70[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct XLATE *v71; // [rsp+B0h] [rbp-50h]
  _DWORD v72[2]; // [rsp+B8h] [rbp-48h] BYREF
  PVOID *v73; // [rsp+C0h] [rbp-40h]
  __int64 v74; // [rsp+C8h] [rbp-38h] BYREF
  int v75[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v76; // [rsp+D8h] [rbp-28h]
  int v77; // [rsp+DCh] [rbp-24h]
  _DWORD v78[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v79; // [rsp+F0h] [rbp-10h]
  int v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+FCh] [rbp-4h]
  XLATEOBJ *v82; // [rsp+100h] [rbp+0h]
  __int64 v83; // [rsp+108h] [rbp+8h]
  __int64 v84; // [rsp+110h] [rbp+10h]
  _OWORD v85[2]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v86; // [rsp+138h] [rbp+38h]
  struct _RECTL v87; // [rsp+150h] [rbp+50h] BYREF
  RECTL v88; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v89; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v90; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v91; // [rsp+190h] [rbp+90h] BYREF
  _OWORD v92[20]; // [rsp+194h] [rbp+94h] BYREF

  v7 = 0;
  v82 = pxlo;
  v66 = (XCLIPOBJ *)pco;
  v10 = 1;
  if ( psoDest )
    p_pvScan0 = &psoDest[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  v73 = p_pvScan0;
  if ( psoSrc )
    v12 = (struct SURFACE *)&psoSrc[-1].pvScan0;
  else
    v12 = 0LL;
  v13 = *(struct XLATE **)&pBlendObj[2].BlendFunction.BlendOp;
  v84 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v14 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v71 = v13;
  v83 = v14;
  v15 = *prclSrc;
  v87 = *prclDest;
  memset(v85, 0, sizeof(v85));
  v86 = 0LL;
  v88 = v15;
  if ( p_pvScan0 )
  {
    v16 = p_pvScan0[6];
    v17 = *pBlendObj;
    DWORD2(v86) = *pBlendObj;
    v67 = 0LL;
    v68 = 0;
    v69 = 0;
    *(_QWORD *)v75 = 0LL;
    v76 = 0;
    v77 = 0;
    if ( v16 )
    {
      _m_prefetchw(v16 + 10);
      do
        v18 = v16[10];
      while ( v18 != _InterlockedCompareExchange(v16 + 10, v18 | 0x40000, v18) );
      LOBYTE(v19) = pBlendObj->BlendFunction.BlendFlags;
    }
    else
    {
      v19 = *(unsigned int *)&v17 >> 8;
    }
    if ( (v19 & 1) != 0
      && (v87.right - v87.left != v88.right - v88.left || v87.bottom - v87.top != v88.bottom - v88.top) )
    {
      LOBYTE(v7) = (unsigned int)EngHTBlt(
                                   psoDest,
                                   psoSrc,
                                   0LL,
                                   (CLIPOBJ *)v66,
                                   (struct XLATE *)pxlo,
                                   0LL,
                                   (POINTL)&gptlZero,
                                   prclDest,
                                   (struct SURFACE *)prclSrc,
                                   0LL,
                                   512,
                                   (XLATEOBJ *)pBlendObj) == 1;
      goto LABEL_48;
    }
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v62 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v62, psoSrc, 0LL, 0);
    v62 = (HDEV)psSetupTransparentSrcSurface(
                  v12,
                  (struct SURFACE *)p_pvScan0,
                  &v87,
                  (struct _XLATEOBJ *)v13,
                  &v88,
                  (struct SURFMEM *)v75,
                  0,
                  0);
    v20 = (struct SURFACE *)v62;
    if ( !v62 || (right = v87.right, v87.left == v87.right) )
    {
LABEL_47:
      v7 = v10;
LABEL_48:
      SURFMEM::~SURFMEM((SURFMEM *)v75);
      SURFMEM::~SURFMEM((SURFMEM *)&v67);
      return v7;
    }
    left = v88.left;
    v22 = v87.right - v87.left;
    v23 = p_pvScan0;
    v24 = v87;
    top = v88.top;
    v25 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v87, 4));
    bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v87, 12));
    v90 = v87;
    v26 = bottom - v25;
    v59 = v25;
    if ( *((_WORD *)p_pvScan0 + 50) )
    {
      v51 = ((_DWORD)p_pvScan0[14] & 0x40000) == 0;
      v52 = p_pvScan0[6];
      v53 = (__int64 *)p_pvScan0[16];
      v78[0] = *((_DWORD *)p_pvScan0 + 24);
      v78[3] = 0;
      v81 = 0;
      v78[1] = v87.right - v87.left;
      v78[2] = v26;
      if ( v51 )
        v80 = 0;
      else
        v80 = 0x40000;
      v79 = 0LL;
      if ( v53 )
        v79 = *v53;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v67, (struct _DEVBITMAPINFO *)v78, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_80;
      *((_QWORD *)v67 + 6) = p_pvScan0[6];
      v51 = ((_DWORD)p_pvScan0[14] & 0x400) == 0;
      v70[0] = v87.left;
      v70[1] = v87.top;
      *(_QWORD *)&v89.left = 0LL;
      *(_QWORD *)&v89.right = __PAIR64__(v26, v22);
      v54 = v51
          ? EngCopyBits
          : (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v52[355];
      v55 = v67 ? (__int64)(v67 + 24) : 0LL;
      v56 = (struct SURFMEM *)v70;
      if ( !((unsigned int (__fastcall *)(__int64, PVOID *, _QWORD, XLATEOBJ *const, struct _RECTL *))v54)(
              v55,
              p_pvScan0 + 3,
              0LL,
              xloIdent,
              &v89) )
      {
LABEL_80:
        v10 = 0;
        goto LABEL_47;
      }
      v24 = v89;
      v23 = (PVOID *)v67;
      v20 = (struct SURFACE *)v62;
      v87 = v89;
      right = v89.right;
      bottom = v89.bottom;
      v59 = v89.top;
    }
    if ( v23 )
    {
      pulXlate = (ULONG *)*((_QWORD *)v20 + 16);
      v28 = v23[16];
      v61 = pulXlate;
      v60 = v28;
      if ( !pulXlate )
      {
        if ( !v82 || (pulXlate = v82[1].pulXlate) == 0LL )
          pulXlate = *(ULONG **)(*((_QWORD *)v20 + 6) + 1808LL);
        v61 = pulXlate;
      }
      if ( !v28 )
      {
        v28 = (PVOID)*((_QWORD *)v23[6] + 226);
        v60 = v28;
      }
      if ( pulXlate && v28 )
      {
        v29 = 0LL;
        if ( v23 == p_pvScan0 )
          v29 = v66;
        hdev = (HDEV)v29;
        LODWORD(v61) = bDetermineAlphaBlendFunction(
                         (struct SURFACE *)v23,
                         v20,
                         (struct XEPALOBJ *)&v60,
                         (struct XEPALOBJ *)&v61,
                         v71,
                         (int)v56,
                         (struct _ALPHA_DISPATCH_FORMAT *)v85,
                         v57);
        v10 = (int)v61;
        if ( (_DWORD)v61 )
        {
          memset(&v92[1], 0, 0x130uLL);
          LODWORD(v60) = 0;
          v30 = 0;
          v91 = 1;
          v92[0] = v24;
          if ( v29 )
          {
            if ( *((_BYTE *)v29 + 20) == 1 )
            {
              v49 = *(_OWORD *)((char *)v29 + 4);
              LODWORD(v60) = 0;
              v92[0] = v49;
            }
            else if ( *((_BYTE *)v29 + 20) == 3 )
            {
              v30 = 1;
              LODWORD(v60) = 1;
              XCLIPOBJ::cEnumStart(v29, 0, 0, 1u, 0x14u);
            }
          }
          v31 = v29;
          if ( v30 )
            goto LABEL_50;
          v32 = v59;
          v33 = bottom;
          while ( 1 )
          {
            v34 = 0;
            if ( v91 )
            {
              v35 = v87.left;
              v36 = v62;
              v37 = v71;
              v38 = left;
              do
              {
                v39 = (LONG *)&v92[v34];
                if ( *v39 < v35 )
                  *v39 = v35;
                if ( v39[2] > right )
                  v39[2] = right;
                v40 = v39[1];
                if ( v40 < v32 )
                {
                  v39[1] = v32;
                  v40 = v32;
                  v41 = v32;
                }
                else
                {
                  v41 = v39[1];
                }
                v42 = v39[3];
                if ( v42 > v33 )
                {
                  v39[3] = v33;
                  v42 = v33;
                }
                if ( v40 < v42 && *v39 < v39[2] )
                {
                  v43 = v23[10];
                  v44 = *v39 - v35;
                  v45 = *((unsigned int *)v23 + 22);
                  v72[0] = v38 + v44;
                  v46 = *((_DWORD *)v36 + 22);
                  v72[1] = top + v41 - v32;
                  v47 = AlphaScanLineBlend(v43, v39, v45, *((_QWORD *)v36 + 10), v46, v72, v37, v84, v83, v28);
                  v33 = v87.bottom;
                  v32 = v87.top;
                  v35 = v87.left;
                  right = v87.right;
                  LODWORD(v61) = v47;
                }
                ++v34;
              }
              while ( v34 < v91 );
              v30 = (int)v60;
              v31 = (XCLIPOBJ *)hdev;
            }
            if ( !v30 )
              break;
LABEL_50:
            v50 = XCLIPOBJ::bEnum(v31, 0x144u, &v91, 0LL);
            v33 = v87.bottom;
            v30 = v50;
            v32 = v87.top;
            right = v87.right;
            LODWORD(v60) = v50;
          }
          if ( v23 != v73 )
          {
            v51 = ((_DWORD)v73[14] & 0x400) == 0;
            v74 = 0LL;
            if ( v51 )
              ((void (__fastcall *)(PVOID *, PVOID *, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, __int64 *))EngCopyBits)(
                v73 + 3,
                v23 + 3,
                v66,
                xloIdent,
                &v90,
                &v74);
            else
              (*((void (__fastcall **)(PVOID *, char *, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, __int64 *))v73[6]
               + 355))(
                v73 + 3,
                (char *)v23 + 24,
                v66,
                xloIdent,
                &v90,
                &v74);
          }
          v10 = (int)v61;
        }
        goto LABEL_47;
      }
    }
    goto LABEL_80;
  }
  return 0;
}
