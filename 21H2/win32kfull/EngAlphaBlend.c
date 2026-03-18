/*
 * XREFs of EngAlphaBlend @ 0x1C002D3E0
 * Callers:
 *     GrePtInSprite @ 0x1C0021164 (GrePtInSprite.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C00D7460 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01524D0 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02925A0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029A060 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02A00C0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B0FA0 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C002DA50 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C002DC68 (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C002DE88 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  RECTL v8; // xmm1
  unsigned __int64 v9; // rsi
  RECTL v10; // xmm0
  struct SURFACE *v11; // r14
  BOOL v12; // edi
  int v14; // r13d
  __int64 v15; // rcx
  signed __int32 v16; // ett
  struct SURFACE *v17; // rdx
  struct _RECTL v18; // xmm6
  int v19; // r15d
  unsigned __int64 v20; // r14
  int v21; // eax
  int v22; // r12d
  __int64 *v23; // rax
  __int64 v24; // rbx
  int v25; // ecx
  bool v26; // zf
  BOOL (__stdcall *v27)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  ULONG *pulXlate; // rax
  HDEV v29; // rbx
  XCLIPOBJ *v30; // r15
  int v31; // eax
  LONG right; // esi
  LONG v33; // r9d
  LONG v34; // r10d
  unsigned int v35; // r12d
  LONG v36; // r8d
  struct SURFACE *v37; // r15
  struct _XLATEOBJ *v38; // rdi
  LONG *v39; // rdx
  LONG v40; // eax
  LONG v41; // ecx
  int v42; // ecx
  int v43; // eax
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // rcx
  int v47; // eax
  __int128 v49; // xmm0
  int *v50; // [rsp+30h] [rbp-D8h]
  int v51; // [rsp+40h] [rbp-C8h]
  ULONG *v52; // [rsp+68h] [rbp-A0h] BYREF
  LONG bottom; // [rsp+70h] [rbp-98h]
  LONG v54; // [rsp+74h] [rbp-94h]
  struct _XLATEOBJ *v55; // [rsp+78h] [rbp-90h] BYREF
  HDEV v56; // [rsp+80h] [rbp-88h] BYREF
  struct SURFACE *hdev; // [rsp+88h] [rbp-80h] BYREF
  XLATEOBJ *v58; // [rsp+90h] [rbp-78h] BYREF
  LONG left; // [rsp+98h] [rbp-70h]
  LONG top; // [rsp+9Ch] [rbp-6Ch]
  unsigned __int64 v61; // [rsp+A0h] [rbp-68h] BYREF
  char v62; // [rsp+A8h] [rbp-60h]
  int v63; // [rsp+ACh] [rbp-5Ch]
  int v64[2]; // [rsp+B0h] [rbp-58h] BYREF
  XCLIPOBJ *v65; // [rsp+B8h] [rbp-50h]
  __int64 v66; // [rsp+C0h] [rbp-48h] BYREF
  char v67; // [rsp+C8h] [rbp-40h]
  int v68; // [rsp+CCh] [rbp-3Ch]
  _DWORD v69[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v70; // [rsp+E0h] [rbp-28h]
  int v71; // [rsp+E8h] [rbp-20h]
  int v72; // [rsp+ECh] [rbp-1Ch]
  __int64 v73; // [rsp+F0h] [rbp-18h]
  __int64 v74; // [rsp+F8h] [rbp-10h]
  XCLIPOBJ *v75; // [rsp+100h] [rbp-8h]
  unsigned __int64 v76; // [rsp+108h] [rbp+0h]
  _OWORD v77[2]; // [rsp+110h] [rbp+8h] BYREF
  __int128 v78; // [rsp+130h] [rbp+28h]
  struct _RECTL v79; // [rsp+148h] [rbp+40h] BYREF
  RECTL v80; // [rsp+158h] [rbp+50h] BYREF
  struct _RECTL v81; // [rsp+168h] [rbp+60h] BYREF
  struct _RECTL v82; // [rsp+178h] [rbp+70h] BYREF
  unsigned int v83; // [rsp+188h] [rbp+80h] BYREF
  _OWORD v84[20]; // [rsp+18Ch] [rbp+84h] BYREF

  v65 = (XCLIPOBJ *)pco;
  v58 = pxlo;
  v8 = *prclSrc;
  v9 = (unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL);
  v76 = v9;
  v10 = *prclDest;
  v55 = *(struct _XLATEOBJ **)&pBlendObj[2].BlendFunction.BlendOp;
  v11 = (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL));
  v74 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v12 = 0;
  v73 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v14 = 1;
  v79 = v10;
  v80 = v8;
  memset(v77, 0, sizeof(v77));
  v78 = 0LL;
  if ( v9 )
  {
    v15 = *(_QWORD *)(((unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL)) + 0x30);
    DWORD2(v78) = *pBlendObj;
    v61 = 0LL;
    v62 = 0;
    v63 = 0;
    v66 = 0LL;
    v67 = 0;
    v68 = 0;
    if ( v15 )
    {
      _m_prefetchw((const void *)(v15 + 40));
      do
        v16 = *(_DWORD *)(v15 + 40);
      while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 40), v16 | 0x40000, v16) );
    }
    if ( (pBlendObj->BlendFunction.BlendFlags & 1) != 0
      && (v79.right - v79.left != v80.right - v80.left || v79.bottom - v79.top != v80.bottom - v80.top) )
    {
      LOBYTE(v12) = (unsigned int)EngHTBlt(
                                    psoDest,
                                    psoSrc,
                                    0LL,
                                    pco,
                                    pxlo,
                                    0LL,
                                    &gptlZero,
                                    prclDest,
                                    prclSrc,
                                    0LL,
                                    512,
                                    pBlendObj) == 1;
      goto LABEL_50;
    }
    hdev = (struct SURFACE *)psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v56 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v56, psoSrc, 0LL, 0);
    hdev = psSetupTransparentSrcSurface(v11, (struct SURFACE *)v9, &v79, v55, &v80, (struct SURFMEM *)&v66, 0, 0);
    v17 = hdev;
    if ( !hdev || v79.left == v79.right )
    {
LABEL_49:
      v12 = v14;
LABEL_50:
      SURFMEM::~SURFMEM((SURFMEM *)&v66);
      SURFMEM::~SURFMEM((SURFMEM *)&v61);
      return v12;
    }
    v18 = v79;
    v19 = v79.right - v79.left;
    left = v80.left;
    v20 = v9;
    top = v80.top;
    v21 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v79, 4));
    bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v79, 12));
    v82 = v79;
    v22 = bottom - v21;
    v54 = v21;
    if ( *(_WORD *)(v9 + 100) )
    {
      v23 = *(__int64 **)(v9 + 128);
      v24 = *(_QWORD *)(v9 + 48);
      v69[0] = *(_DWORD *)(v9 + 96);
      v25 = *(_DWORD *)(v9 + 112) & 0x40000;
      v69[3] = 0;
      v72 = 0;
      v69[1] = v79.right - v79.left;
      v69[2] = v22;
      v71 = v25;
      v70 = 0LL;
      if ( v23 )
        v70 = *v23;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v61, (struct _DEVBITMAPINFO *)v69, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_66;
      *(_QWORD *)(v61 + 48) = *(_QWORD *)(v9 + 48);
      v26 = (*(_DWORD *)(v9 + 112) & 0x400) == 0;
      v64[0] = v79.left;
      v64[1] = v79.top;
      *(_QWORD *)&v81.left = 0LL;
      *(_QWORD *)&v81.right = __PAIR64__(v22, v19);
      v27 = v26
          ? EngCopyBits
          : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v24 + 2816);
      v50 = v64;
      if ( ((unsigned int (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *const, struct _RECTL *))v27)(
             (v61 + 24) & -(__int64)(v61 != 0),
             v9 + 24,
             0LL,
             xloIdent,
             &v81) )
      {
        v18 = v81;
        v20 = v61;
        v79 = v81;
      }
      else
      {
        v18 = v79;
        v20 = 0LL;
      }
      if ( !v20 )
      {
LABEL_66:
        v14 = 0;
        goto LABEL_49;
      }
      v17 = hdev;
      bottom = v79.bottom;
      v54 = v79.top;
    }
    pulXlate = (ULONG *)*((_QWORD *)v17 + 16);
    v29 = *(HDEV *)(v20 + 128);
    v52 = pulXlate;
    v56 = v29;
    if ( !pulXlate )
    {
      if ( !v58 || (pulXlate = v58[1].pulXlate) == 0LL )
        pulXlate = *(ULONG **)(*((_QWORD *)v17 + 6) + 1776LL);
      v52 = pulXlate;
    }
    if ( !v29 )
    {
      v29 = *(HDEV *)(*(_QWORD *)(v20 + 48) + 1776LL);
      v56 = v29;
    }
    if ( pulXlate && v29 )
    {
      v30 = 0LL;
      if ( v20 == v9 )
        v30 = v65;
      v75 = v30;
      v14 = bDetermineAlphaBlendFunction(
              (struct SURFACE *)v20,
              v17,
              (struct XEPALOBJ *)&v56,
              (struct XEPALOBJ *)&v52,
              (struct XLATE *)v55,
              (int)v50,
              (struct _ALPHA_DISPATCH_FORMAT *)v77,
              v51);
      if ( v14 )
      {
        memset(&v84[1], 0, 0x130uLL);
        v31 = 0;
        LODWORD(v52) = 0;
        v83 = 1;
        v84[0] = v18;
        if ( v30 )
        {
          if ( *((_BYTE *)v30 + 20) == 1 )
          {
            v49 = *(_OWORD *)((char *)v30 + 4);
            LODWORD(v52) = 0;
            v84[0] = v49;
          }
          else if ( *((_BYTE *)v30 + 20) == 3 )
          {
            LODWORD(v52) = 1;
            XCLIPOBJ::cEnumStart(v30, 0, 0, 1u, 0x14u);
            v31 = (int)v52;
          }
        }
        right = v79.right;
        if ( v31 )
          goto LABEL_52;
        v33 = v54;
        v34 = bottom;
        while ( 1 )
        {
          v35 = 0;
          if ( v83 )
          {
            v36 = v79.left;
            v37 = hdev;
            v38 = v55;
            do
            {
              v39 = (LONG *)&v84[v35];
              if ( *v39 < v36 )
                *v39 = v36;
              if ( v39[2] > right )
                v39[2] = right;
              v40 = v39[1];
              if ( v40 < v33 )
              {
                v39[1] = v33;
                v40 = v33;
              }
              v41 = v39[3];
              if ( v41 > v34 )
              {
                v39[3] = v34;
                v41 = v34;
              }
              if ( v40 < v41 && *v39 < v39[2] )
              {
                v42 = left + *v39 - v36;
                v43 = v40 - v33;
                v44 = *((_QWORD *)v37 + 10);
                v45 = *(unsigned int *)(v20 + 88);
                LODWORD(v58) = v42;
                v46 = *(_QWORD *)(v20 + 80);
                HIDWORD(v58) = top + v43;
                v47 = AlphaScanLineBlend(v46, v39, v45, v44, *((_DWORD *)v37 + 22), &v58, v38, v74, v73, v29);
                v34 = v79.bottom;
                v14 = v47;
                v33 = v79.top;
                v36 = v79.left;
                right = v79.right;
              }
              ++v35;
            }
            while ( v35 < v83 );
            v30 = v75;
            v31 = (int)v52;
            bottom = v34;
            v54 = v33;
          }
          if ( !v31 )
            break;
LABEL_52:
          v31 = XCLIPOBJ::bEnum(v30, 0x144u, (char *)&v83, 0LL);
          v34 = v79.bottom;
          v33 = v79.top;
          right = v79.right;
          bottom = v79.bottom;
          LODWORD(v52) = v31;
          v54 = v79.top;
        }
        if ( v20 != v76 )
        {
          v55 = 0LL;
          if ( (*(_DWORD *)(v76 + 112) & 0x400) != 0 )
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, struct _XLATEOBJ **))(*(_QWORD *)(v76 + 48) + 2816LL))(
              v76 + 24,
              v20 + 24,
              v65,
              xloIdent,
              &v82,
              &v55);
          else
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, struct _XLATEOBJ **))EngCopyBits)(
              v76 + 24,
              v20 + 24,
              v65,
              xloIdent,
              &v82,
              &v55);
        }
      }
      goto LABEL_49;
    }
    goto LABEL_66;
  }
  return 0;
}
