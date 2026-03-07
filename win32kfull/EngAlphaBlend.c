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
  BOOL v10; // r15d
  PVOID *p_pvScan0; // rsi
  struct SURFACE *v12; // r14
  struct XLATE *v13; // r12
  __int64 v14; // rax
  RECTL v15; // xmm1
  _DWORD *v16; // rcx
  signed __int32 v17; // ett
  struct SURFACE *v18; // r10
  LONG left; // r12d
  LONG right; // r13d
  SURFACE *v21; // r15
  struct _RECTL v22; // xmm6
  bool v23; // zf
  _QWORD *v24; // rbx
  __int64 *v25; // rax
  Gre::Base *v26; // rcx
  struct Gre::Base::SESSION_GLOBALS *v27; // r9
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  char *v29; // rcx
  ULONG *pulXlate; // rax
  __int64 v31; // rbx
  XCLIPOBJ *v32; // r14
  unsigned __int64 v33; // rcx
  int v34; // eax
  struct _RECTL v35; // xmm0
  XCLIPOBJ *v36; // rsi
  LONG v37; // r10d
  LONG v38; // r11d
  unsigned int v39; // r14d
  struct SURFACE *v40; // rsi
  struct XLATE *v41; // rdi
  LONG *v42; // rdx
  int v43; // r9d
  LONG v44; // eax
  LONG v45; // r8d
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // rcx
  int v49; // eax
  PVOID *v50; // rsi
  PVOID v52; // rbx
  struct Gre::Base::SESSION_GLOBALS *v53; // rax
  int *v54; // [rsp+28h] [rbp-D8h]
  int v55; // [rsp+38h] [rbp-C8h]
  ULONG *v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  LONG v58; // [rsp+70h] [rbp-90h]
  LONG bottom; // [rsp+74h] [rbp-8Ch]
  HDEV hdev; // [rsp+78h] [rbp-88h] BYREF
  PVOID *v61; // [rsp+80h] [rbp-80h] BYREF
  XLATEOBJ *v62; // [rsp+88h] [rbp-78h] BYREF
  HDEV v63; // [rsp+90h] [rbp-70h] BYREF
  SURFACE *v64; // [rsp+98h] [rbp-68h] BYREF
  char v65; // [rsp+A0h] [rbp-60h]
  int v66; // [rsp+A4h] [rbp-5Ch]
  LONG v67; // [rsp+A8h] [rbp-58h]
  LONG top; // [rsp+ACh] [rbp-54h]
  XCLIPOBJ *v69; // [rsp+B0h] [rbp-50h]
  int v70[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct SURFACE *v71; // [rsp+C0h] [rbp-40h]
  struct XLATE *v72; // [rsp+C8h] [rbp-38h]
  __int64 v73; // [rsp+D0h] [rbp-30h] BYREF
  char v74; // [rsp+D8h] [rbp-28h]
  int v75; // [rsp+DCh] [rbp-24h]
  _DWORD v76[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v77; // [rsp+F0h] [rbp-10h]
  int v78; // [rsp+F8h] [rbp-8h]
  int v79; // [rsp+FCh] [rbp-4h]
  __int64 v80; // [rsp+100h] [rbp+0h]
  __int64 v81; // [rsp+108h] [rbp+8h]
  _OWORD v82[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v83; // [rsp+130h] [rbp+30h]
  struct _RECTL v84; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTL v85; // [rsp+150h] [rbp+50h] BYREF
  struct _RECTL v86; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v87; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v88; // [rsp+180h] [rbp+80h] BYREF
  struct _RECTL v89; // [rsp+184h] [rbp+84h] BYREF
  char v90[316]; // [rsp+194h] [rbp+94h] BYREF

  v7 = 0;
  v62 = pxlo;
  v69 = (XCLIPOBJ *)pco;
  v10 = 1;
  if ( psoDest )
    p_pvScan0 = &psoDest[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  v61 = p_pvScan0;
  if ( psoSrc )
    v12 = (struct SURFACE *)&psoSrc[-1].pvScan0;
  else
    v12 = 0LL;
  v13 = *(struct XLATE **)&pBlendObj[2].BlendFunction.BlendOp;
  v81 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v14 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v72 = v13;
  v80 = v14;
  v15 = *prclSrc;
  v84 = *prclDest;
  memset(v82, 0, sizeof(v82));
  v83 = 0LL;
  v85 = v15;
  if ( !p_pvScan0 )
    return 0;
  v16 = p_pvScan0[6];
  DWORD2(v83) = *pBlendObj;
  v64 = 0LL;
  v65 = 0;
  v66 = 0;
  v73 = 0LL;
  v74 = 0;
  v75 = 0;
  if ( v16 )
  {
    _m_prefetchw(v16 + 10);
    do
      v17 = v16[10];
    while ( v17 != _InterlockedCompareExchange(v16 + 10, v17 | 0x40000, v17) );
    pco = (CLIPOBJ *)v69;
  }
  if ( (pBlendObj->BlendFunction.BlendFlags & 1) == 0
    || (hdev = 0LL, v84.right - v84.left == v85.right - v85.left) && v84.bottom - v84.top == v85.bottom - v85.top )
  {
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v63 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v63, psoSrc, 0LL, 0);
    v71 = psSetupTransparentSrcSurface(
            v12,
            (struct SURFACE *)p_pvScan0,
            &v84,
            (struct _XLATEOBJ *)v13,
            &v85,
            (struct SURFMEM *)&v73,
            0,
            0);
    v18 = v71;
    if ( !v71 )
      goto LABEL_58;
    left = v84.left;
    right = v84.right;
    if ( v84.left == v84.right )
      goto LABEL_58;
    v67 = v85.left;
    v21 = (SURFACE *)p_pvScan0;
    top = v85.top;
    v22 = v84;
    v87 = v84;
    bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v84, 12));
    v58 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v84, 4));
    hdev = (HDEV)EngCopyBits;
    LODWORD(v56) = bottom - v58;
    if ( *((_WORD *)p_pvScan0 + 50) )
    {
      v23 = ((_DWORD)p_pvScan0[14] & 0x40000) == 0;
      v24 = p_pvScan0[6];
      v25 = (__int64 *)p_pvScan0[16];
      v76[2] = bottom - v58;
      v76[0] = *((_DWORD *)p_pvScan0 + 24);
      v76[3] = 0;
      v79 = 0;
      v76[1] = v84.right - v84.left;
      if ( v23 )
        v78 = 0;
      else
        v78 = 0x40000;
      v77 = 0LL;
      if ( v25 )
        v77 = *v25;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v64, (struct _DEVBITMAPINFO *)v76, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_79;
      SURFACE::hdev(v64, (HDEV)p_pvScan0[6]);
      v86.bottom = (int)v56;
      v70[0] = v84.left;
      v70[1] = v84.top;
      *(_QWORD *)&v86.left = 0LL;
      v86.right = right - left;
      v27 = Gre::Base::Globals(v26);
      v28 = ((_DWORD)p_pvScan0[14] & 0x400) != 0
          ? (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v24[352]
          : EngCopyBits;
      v29 = v64 ? (char *)v64 + 24 : 0LL;
      v54 = v70;
      if ( ((unsigned int (__fastcall *)(char *, PVOID *, _QWORD, char *, struct _RECTL *))v28)(
             v29,
             p_pvScan0 + 3,
             0LL,
             (char *)v27 + 6896,
             &v86) )
      {
        v22 = v86;
        v21 = v64;
        v84 = v86;
      }
      else
      {
        v22 = v84;
        v21 = 0LL;
      }
      if ( !v21 )
      {
LABEL_79:
        v10 = 0;
LABEL_58:
        SURFMEM::~SURFMEM((SURFMEM *)&v73);
        SURFMEM::~SURFMEM((SURFMEM *)&v64);
        return v10;
      }
      right = v84.right;
      left = v84.left;
      v18 = v71;
      bottom = v84.bottom;
      v58 = v84.top;
    }
    pulXlate = (ULONG *)*((_QWORD *)v18 + 16);
    v31 = *((_QWORD *)v21 + 16);
    v56 = pulXlate;
    v57 = v31;
    if ( !pulXlate )
    {
      if ( !v62 || (pulXlate = v62[1].pulXlate) == 0LL )
        pulXlate = *(ULONG **)(*((_QWORD *)v18 + 6) + 1776LL);
      v56 = pulXlate;
    }
    if ( !v31 )
    {
      v31 = *(_QWORD *)(*((_QWORD *)v21 + 6) + 1776LL);
      v57 = v31;
    }
    if ( pulXlate && v31 )
    {
      v32 = 0LL;
      if ( v21 == (SURFACE *)p_pvScan0 )
        v32 = v69;
      v63 = (HDEV)v32;
      LODWORD(v56) = bDetermineAlphaBlendFunction(
                       v21,
                       v18,
                       (struct XEPALOBJ *)&v57,
                       (struct XEPALOBJ *)&v56,
                       v72,
                       (int)v54,
                       (struct _ALPHA_DISPATCH_FORMAT *)v82,
                       v55);
      if ( (_DWORD)v56 )
      {
        memset_0(v90, 0, 0x130uLL);
        v88 = 1;
        v34 = 0;
        LODWORD(v57) = 0;
        v89 = v22;
        if ( v32 )
        {
          v33 = (unsigned int)*((unsigned __int8 *)v32 + 20) - 1;
          if ( *((_BYTE *)v32 + 20) == 1 )
          {
            v35 = *(struct _RECTL *)((char *)v32 + 4);
            LODWORD(v57) = 0;
            v89 = v35;
          }
          else if ( *((_BYTE *)v32 + 20) == 3 )
          {
            LODWORD(v57) = 1;
            XCLIPOBJ::cEnumStart(v32, 0, 0, 1u, 0x14u);
            v34 = v57;
          }
        }
        v36 = v32;
        if ( v34 )
          goto LABEL_61;
        v37 = bottom;
        v38 = v58;
        while ( 1 )
        {
          v39 = 0;
          if ( v88 )
          {
            v40 = v71;
            v41 = v72;
            do
            {
              v42 = &v89.left + 4 * v39;
              v33 = (unsigned int)*v42;
              if ( (int)v33 < left )
              {
                *v42 = left;
                v33 = (unsigned int)left;
              }
              v43 = v42[2];
              if ( v43 > right )
              {
                v42[2] = right;
                v43 = right;
              }
              v44 = v42[1];
              if ( v44 < v38 )
              {
                v42[1] = v38;
                v44 = v38;
              }
              v45 = v42[3];
              if ( v45 > v37 )
              {
                v42[3] = v37;
                v45 = v37;
              }
              if ( v44 < v45 && (int)v33 < v43 )
              {
                v46 = *((_QWORD *)v40 + 10);
                v47 = *((unsigned int *)v21 + 22);
                LODWORD(v62) = v67 + v33 - left;
                v48 = *((_QWORD *)v21 + 10);
                HIDWORD(v62) = top + v44 - v38;
                v49 = AlphaScanLineBlend(v48, v42, v47, v46, *((_DWORD *)v40 + 22), &v62, v41, v81, v80, v31);
                v37 = v84.bottom;
                v38 = v84.top;
                right = v84.right;
                left = v84.left;
                LODWORD(v56) = v49;
              }
              ++v39;
            }
            while ( v39 < v88 );
            v34 = v57;
            v36 = (XCLIPOBJ *)v63;
            v58 = v38;
            bottom = v37;
          }
          if ( !v34 )
            break;
LABEL_61:
          v34 = XCLIPOBJ::bEnum(v36, 0x144u, (char *)&v88, 0LL);
          v37 = v84.bottom;
          v38 = v84.top;
          right = v84.right;
          left = v84.left;
          bottom = v84.bottom;
          v58 = v84.top;
          LODWORD(v57) = v34;
        }
        v50 = v61;
        if ( v21 != (SURFACE *)v61 )
        {
          v52 = v61[6];
          v61 = 0LL;
          v53 = Gre::Base::Globals((Gre::Base *)v33);
          if ( ((_DWORD)v50[14] & 0x400) != 0 )
            hdev = (HDEV)*((_QWORD *)v52 + 352);
          ((void (__fastcall *)(PVOID *, char *, XCLIPOBJ *, char *, struct _RECTL *, PVOID **))hdev)(
            v50 + 3,
            (char *)v21 + 24,
            v69,
            (char *)v53 + 6896,
            &v87,
            &v61);
        }
        v10 = (int)v56;
      }
      else
      {
        v10 = 0;
      }
      goto LABEL_58;
    }
    goto LABEL_79;
  }
  LOBYTE(v7) = (unsigned int)EngHTBlt(
                               psoDest,
                               psoSrc,
                               0LL,
                               pco,
                               pxlo,
                               0LL,
                               &hdev,
                               prclDest,
                               prclSrc,
                               0LL,
                               512,
                               pBlendObj) == 1;
  SURFMEM::~SURFMEM((SURFMEM *)&v73);
  SURFMEM::~SURFMEM((SURFMEM *)&v64);
  return v7;
}
