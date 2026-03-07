int __fastcall SimBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *a9,
        POINTL *pptlBrush,
        ROP4 rop4,
        DEVLOCKBLTOBJ *a12)
{
  SURFOBJ *v13; // r15
  char v15; // r11
  int v16; // r11d
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 p_iType; // rax
  SURFOBJ *v20; // rdx
  int (*v21)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r10
  signed __int32 v26; // ett
  int v27; // r14d
  int v28; // edi
  int v29; // r13d
  POINTL v30; // rax
  int v31; // r9d
  LONG v32; // eax
  int v33; // r8d
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  POINTL *v37; // r12
  LONG right; // ecx
  LONG bottom; // edx
  BOOL (__stdcall *v40)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r14
  __int64 v41; // rax
  __int64 p_hdev; // rdi
  __int64 p_hsurf; // r12
  __int64 v44; // rdi
  int v45; // eax
  struct Gre::Base::SESSION_GLOBALS *v46; // rax
  int v47; // eax
  Gre::Base *v48; // rcx
  struct Gre::Base::SESSION_GLOBALS *v49; // rdi
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  SURFOBJ *v51; // r13
  bool v52; // zf
  int v53; // ebx
  POINTL v54; // [rsp+68h] [rbp-98h] BYREF
  int v55; // [rsp+70h] [rbp-90h]
  POINTL v56; // [rsp+78h] [rbp-88h] BYREF
  SURFOBJ *psoMask; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  char v59; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+94h] [rbp-6Ch]
  __int64 v61; // [rsp+98h] [rbp-68h] BYREF
  char v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A4h] [rbp-5Ch]
  __int64 v64; // [rsp+A8h] [rbp-58h] BYREF
  POINTL v65; // [rsp+B0h] [rbp-50h] BYREF
  BRUSHOBJ *pbo; // [rsp+B8h] [rbp-48h]
  XLATEOBJ *v67; // [rsp+C0h] [rbp-40h]
  _DWORD v68[2]; // [rsp+C8h] [rbp-38h] BYREF
  POINTL *v69; // [rsp+D0h] [rbp-30h]
  DEVLOCKBLTOBJ *v70; // [rsp+D8h] [rbp-28h]
  SURFOBJ *v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h] BYREF
  CLIPOBJ *v73; // [rsp+F0h] [rbp-10h]
  _DWORD v74[4]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+110h] [rbp+10h]
  int v77; // [rsp+114h] [rbp+14h]
  _DWORD v78[4]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v79; // [rsp+128h] [rbp+28h]
  int v80; // [rsp+130h] [rbp+30h]
  int v81; // [rsp+134h] [rbp+34h]
  int v82[4]; // [rsp+138h] [rbp+38h] BYREF
  RECTL v83; // [rsp+148h] [rbp+48h] BYREF

  v13 = psoSrc;
  pbo = a9;
  v70 = a12;
  v71 = psoTrg;
  v73 = a4;
  psoMask = a3;
  v15 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  v67 = pxlo;
  v16 = v15 & 0xD4;
  v69 = pptlBrush;
  LODWORD(v64) = v16;
  v17 = (unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL);
  v18 = *(_QWORD *)(v17 + 0x30);
  if ( *(_WORD *)(v17 + 0x64) )
    goto LABEL_10;
  if ( !v16 )
    goto LABEL_6;
  p_iType = (__int64)&psoSrc->iType;
  if ( !psoSrc )
    p_iType = 100LL;
  if ( *(_WORD *)p_iType )
  {
LABEL_10:
    v20 = psoMask;
  }
  else
  {
LABEL_6:
    v20 = psoMask;
    if ( !psoMask )
    {
      if ( (*(_DWORD *)(v18 + 40) & 0x8000) != 0 )
        return EngBitBlt(psoTrg, v13, 0LL, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      v21 = SURFACE::pfnBitBlt((SURFACE *)v17);
      return ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, __int64, __int64, POINTL *, BRUSHOBJ *, __int64, ROP4))v21)(
               psoTrg,
               v13,
               0LL,
               a4,
               pxlo,
               v22,
               v24,
               pptlMask,
               pbo,
               v23,
               rop4);
    }
  }
  if ( v18 )
  {
    _m_prefetchw((const void *)(v18 + 40));
    do
      v26 = *(_DWORD *)(v18 + 40);
    while ( v26 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 40), v26 | 0x40000, v26) );
  }
  if ( *(_WORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x64) == 1
    && v18
    && (*(_DWORD *)(v18 + 40) & 0x20000) != 0 )
  {
    v27 = *(_DWORD *)(v18 + 2564);
    v28 = *(_DWORD *)(v18 + 2560);
    v29 = v28 + *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x38);
    v55 = v27 + *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x3C);
  }
  else
  {
    v28 = 0;
    v29 = *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x38);
    v27 = 0;
    v55 = *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x3C);
  }
  v54 = 0LL;
  v30.y = 0;
  v56 = 0LL;
  *(RECTL *)v82 = *prclTrg;
  if ( v16 )
    v54 = *pptlSrc;
  if ( v20 )
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !pptlMask )
      return 0;
    v30 = *pptlMask;
    v16 = v64;
    v56 = *pptlMask;
  }
  v31 = v82[1];
  if ( v82[1] < v27 )
  {
    v82[1] = v27;
    v54.y += v27 - v31;
    v32 = v27 + v30.y - v31;
    v31 = v27;
    v56.y = v32;
  }
  v33 = v82[0];
  if ( v82[0] < v28 )
  {
    v82[0] = v28;
    v54.x += v28 - v33;
    v34 = v28 - v33;
    v33 = v28;
    v56.x += v34;
  }
  v35 = v82[3];
  v36 = v82[2];
  if ( v82[3] > v55 )
    v35 = v55;
  v82[3] = v35;
  if ( v82[2] > v29 )
    v36 = v29;
  v82[2] = v36;
  if ( v31 >= v35 || v33 >= v36 )
    return 1;
  v37 = &v54;
  right = v36 - v33;
  *(_QWORD *)&v83.left = 0LL;
  bottom = v35 - v31;
  v83.right = right;
  v83.bottom = bottom;
  if ( *(_DWORD *)(v17 + 96) != *(_DWORD *)(v18 + 2076) )
    return 0;
  v61 = 0LL;
  v40 = EngCopyBits;
  v62 = 0;
  v63 = 0;
  if ( v16 )
  {
    v41 = (__int64)&v13->iType;
    if ( !v13 )
      v41 = 100LL;
    if ( *(_WORD *)v41 )
    {
      p_hdev = (__int64)&v13->hdev;
      p_hsurf = (__int64)&v13[1].hsurf;
      v74[1] = right;
      if ( !v13 )
        p_hdev = 48LL;
      v74[2] = bottom;
      v74[0] = *(_DWORD *)(v18 + 2076);
      if ( !v13 )
        p_hsurf = 112LL;
      v44 = *(_QWORD *)p_hdev;
      v74[3] = 0;
      v45 = *(_DWORD *)p_hsurf & 0x40000;
      v77 = 0;
      v76 = v45;
      v75 = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v61, (struct _DEVBITMAPINFO *)v74, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_46;
      if ( (*(_DWORD *)p_hsurf & 0x400) != 0 )
        (*(void (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))(v44 + 2816))(
          (v61 + 24) & -(__int64)(v61 != 0),
          v13,
          0LL,
          v67,
          &v83,
          &v54);
      else
        ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
          (v61 + 24) & -(__int64)(v61 != 0),
          v13,
          0LL,
          v67,
          &v83,
          &v54);
      v37 = (POINTL *)&v64;
      v64 = 0LL;
      v13 = (SURFOBJ *)((v61 + 24) & -(__int64)(v61 != 0));
      v46 = Gre::Base::Globals((Gre::Base *)(v61 + 24));
      bottom = v83.bottom;
      right = v83.right;
      v67 = (XLATEOBJ *)((char *)v46 + 6896);
    }
  }
  v78[3] = 0;
  v81 = 0;
  v78[0] = *(_DWORD *)(v18 + 2076);
  v47 = *(_DWORD *)(v17 + 112) & 0x40000;
  v78[1] = right;
  v78[2] = bottom;
  v80 = v47;
  v79 = 0LL;
  v58 = 0LL;
  v59 = 0;
  v60 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v58, (struct _DEVBITMAPINFO *)v78, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !v58 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v58);
LABEL_46:
    SURFMEM::~SURFMEM((SURFMEM *)&v61);
    return 0;
  }
  v68[0] = v82[0];
  v68[1] = v82[1];
  v65 = 0LL;
  if ( v69 )
  {
    v65.x = v69->x - v82[0];
    v65.y = v69->y - v82[1];
  }
  if ( (*(_DWORD *)(v18 + 40) & 0x80u) != 0 && v70 )
    DEVLOCKBLTOBJ::vUnLock(v70, (unsigned int)v82[0], (unsigned int)v82[1], (__int64)v69);
  v49 = Gre::Base::Globals(v48);
  if ( (*(_DWORD *)(v17 + 112) & 0x400) != 0 )
    v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2816);
  else
    v50 = EngCopyBits;
  v51 = v71;
  ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, char *, RECTL *, _DWORD *))v50)(
    (v58 + 24) & -(__int64)(v58 != 0),
    v71,
    0LL,
    (char *)v49 + 6896,
    &v83,
    v68);
  EngBitBlt((SURFOBJ *)((v58 + 24) & -(__int64)(v58 != 0)), v13, psoMask, 0LL, v67, &v83, v37, &v56, pbo, &v65, rop4);
  ++*(_DWORD *)(v17 + 92);
  v52 = (*(_DWORD *)(v17 + 112) & 0x400) == 0;
  v72 = 0LL;
  if ( !v52 )
    v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2816);
  v53 = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, char *, int *, __int64 *))v40)(
          v51,
          (v58 + 24) & -(__int64)(v58 != 0),
          v73,
          (char *)v49 + 6896,
          v82,
          &v72);
  SURFMEM::~SURFMEM((SURFMEM *)&v58);
  SURFMEM::~SURFMEM((SURFMEM *)&v61);
  return v53;
}
