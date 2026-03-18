/*
 * XREFs of ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0006B30
 * Callers:
 *     EngTextOut @ 0x1C0006070 (EngTextOut.c)
 * Callees:
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0007458 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015E008 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015E084 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vExpandAndCopyText(
        struct SURFACE *a1,
        struct _FONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTL **a8,
        struct SURFACE *a9,
        struct _RECTL *a10,
        struct _RECTL *a11,
        int a12,
        int a13,
        unsigned int a14,
        struct _RECTL *a15,
        struct _RECTL *a16,
        unsigned int a17,
        struct _BRUSHOBJ *a18,
        struct _POINTL *a19)
{
  unsigned int v22; // eax
  GLYPHDEF **p_pgdf; // rdx
  LONG top; // edx
  struct SURFACE *v25; // rax
  int v26; // ecx
  unsigned int v27; // esi
  struct _RECTL *v28; // r13
  struct _RECTL *v29; // r11
  int v30; // eax
  int v31; // r10d
  __int64 (__fastcall *v32)(int, int, int, int, int, int, int, int); // r13
  LONG *i; // rbx
  LONG v34; // edx
  LONG v35; // ecx
  LONG v36; // r14d
  LONG v37; // r15d
  LONG v38; // r8d
  LONG v39; // r12d
  LONG v40; // edi
  int v41; // r9d
  LONG v42; // edx
  struct _SURFOBJ *v43; // rdx
  void (__fastcall *v44)(struct BLTINFO *); // rbx
  LONG left; // r8d
  LONG right; // edx
  signed int v47; // r8d
  signed int v48; // edx
  LONG v49; // r9d
  LONG v50; // ecx
  int v51; // r9d
  LONG bottom; // r10d
  int v53; // r10d
  __int64 v54; // rcx
  int v55; // [rsp+74h] [rbp-3F4h]
  LONG v56; // [rsp+A0h] [rbp-3C8h]
  int v57; // [rsp+B4h] [rbp-3B4h]
  struct _POINTL v58; // [rsp+B8h] [rbp-3B0h] BYREF
  struct SURFACE *v59; // [rsp+C0h] [rbp-3A8h]
  __int64 v60; // [rsp+C8h] [rbp-3A0h] BYREF
  struct _RECTL *v61; // [rsp+D0h] [rbp-398h] BYREF
  struct SURFACE *v62; // [rsp+D8h] [rbp-390h]
  struct _POINTL *v63; // [rsp+E0h] [rbp-388h]
  struct _BRUSHOBJ *v64; // [rsp+E8h] [rbp-380h]
  struct SURFACE *v65; // [rsp+F0h] [rbp-378h]
  _QWORD v66[2]; // [rsp+F8h] [rbp-370h]
  void (__fastcall *v67)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG); // [rsp+108h] [rbp-360h]
  struct _RECTL v68; // [rsp+110h] [rbp-358h] BYREF
  _BYTE v69[80]; // [rsp+120h] [rbp-348h] BYREF
  char v70[56]; // [rsp+170h] [rbp-2F8h] BYREF
  unsigned int v71; // [rsp+1A8h] [rbp-2C0h]
  int v72; // [rsp+1ACh] [rbp-2BCh]
  unsigned __int8 *v73; // [rsp+1C0h] [rbp-2A8h]
  unsigned int v74; // [rsp+1C8h] [rbp-2A0h]
  int v75; // [rsp+1D0h] [rbp-298h]
  __int16 v76; // [rsp+1D4h] [rbp-294h]

  v59 = (struct SURFACE *)a8;
  v62 = (struct SURFACE *)a8;
  v61 = a15;
  v64 = a18;
  v63 = a19;
  v22 = 0;
  v60 = 0LL;
  p_pgdf = &a3->pgdf;
  while ( v22 < a4 )
  {
    if ( !(*p_pgdf)->pgb )
      goto LABEL_51;
    ++v22;
    p_pgdf += 3;
  }
  if ( (a14 & 1) == 0 && a4 > 1 && (unsigned int)(a3->ptl.x - a3[a4 - 1].ptl.x + 0x8000000) > 0x10000000 )
  {
LABEL_51:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
    return;
  }
  UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v69, a1, a2, 1);
  top = a10->top;
  v25 = (struct SURFACE *)a8;
  if ( a9 )
    v25 = a9;
  v65 = v25;
  v58.x = a14 & 8;
  if ( (a14 & 8) != 0 )
  {
    v26 = 3;
    if ( (a14 & 0x20) == 0 )
      v26 = 7;
  }
  else
  {
    v26 = 31;
  }
  v57 = v26 & a10->left;
  v27 = a10->left - v57;
  if ( (a14 & 0x20) != 0 )
  {
    v66[0] = draw_clrt_nf_ntb_o_to_temp_start;
    v66[1] = draw_clrt_f_ntb_o_to_temp_start;
    v67 = (void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v66[a14 & 1];
    v67(a3, a4, a5, v27, a6, a7, top);
  }
  else
  {
    ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))(&MastertextTypeTabel)[a14 & 0xFFFFFF4F])(
      a3,
      a4,
      a5,
      v27,
      a6,
      a7,
      top);
  }
  v28 = a16;
  v29 = a10;
  if ( a16 )
  {
    if ( v58.x )
    {
      v44 = vSrcCopyDummy;
      if ( (a14 & 0x20) == 0 )
        v44 = vSrcCopyDummy;
    }
    else
    {
      v44 = (void (__fastcall *)(struct BLTINFO *))vRectBlt;
    }
    while ( 1 )
    {
      left = v28->left;
      right = v28->right;
      if ( v28->left == right )
        break;
      if ( left <= v29->left )
        left = v29->left;
      v47 = left - v27;
      if ( right >= v29->right )
        right = v29->right;
      v48 = right - v27;
      v49 = v28->top;
      v50 = v29->top;
      if ( v49 <= v50 )
        v49 = v29->top;
      v51 = v49 - v50;
      bottom = v28->bottom;
      if ( bottom >= v29->bottom )
        bottom = v29->bottom;
      v53 = bottom - v50;
      if ( v47 < v48 && v51 < v53 )
      {
        ((void (__fastcall *)(unsigned __int8 *, _QWORD))v44)(a5, a6);
        v29 = a10;
      }
      ++v28;
    }
  }
  if ( *((_DWORD *)a8 + 24) > 6u )
  {
    if ( (unsigned int)bUMPDSecurityGateEx() )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:vExpandAndCopyText:Invalid pSurf->iFormat().\n",
          1836);
      goto LABEL_41;
    }
    v29 = a10;
  }
  v30 = *((_DWORD *)a8 + 24);
  v31 = a13;
  if ( a13 == -1 )
    v30 += 8;
  if ( (a14 & 0x80u) != 0 )
  {
    if ( (a14 & 0x20) != 0 )
      v32 = vSrcAlphaCopyS8D32;
    else
      v32 = vSrcAlphaCopyS4D32;
  }
  else
  {
    if ( (a14 & 8) != 0 )
    {
      v30 += 16;
      if ( (a14 & 0x20) != 0 )
        v30 += 16;
    }
    v32 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int))(&SrcCopyTextFunctionTable)[v30];
  }
  for ( i = &v61->left; ; i += 4 )
  {
    v34 = i[3];
    if ( !v34 )
      break;
    v35 = v29->left;
    v36 = v29->left;
    if ( v29->left <= *i )
      v36 = *i;
    v37 = v29->right;
    if ( v37 >= i[2] )
      v37 = i[2];
    v38 = v29->top;
    v39 = v38;
    if ( v38 <= i[1] )
      v39 = i[1];
    v40 = v29->bottom;
    if ( v40 >= v34 )
      v40 = i[3];
    v41 = v36 - v35;
    v55 = v36 - v35;
    v42 = v39 - v38;
    v56 = v39 - v38;
    if ( (a14 & 0x10) != 0 )
    {
      v36 -= v27;
      v37 -= v27;
      v39 -= v38;
      v40 -= v38;
    }
    else
    {
      v61 = a8[6];
      v43 = (struct _SURFOBJ *)((char *)v62 + 24);
      if ( !v62 )
        v43 = 0LL;
      PDEVOBJ::vSync((PDEVOBJ *)&v61, v43, 0LL, 0);
      v31 = a13;
      v42 = v56;
      v41 = v55;
      v29 = a10;
    }
    if ( v36 < v37 && v39 < v40 )
    {
      if ( a12 == -1 )
      {
        v68.left = v36;
        v68.top = v39;
        v68.right = v37;
        v68.bottom = v40;
        v75 = 1;
        v76 = 0;
        v73 = a5;
        v74 = a6;
        v71 = 8 * a6;
        v72 = a10->bottom - a10->top;
        v58.x = v41 + v57;
        v58.y = v42;
        BltLnk((struct SURFACE *)a8, 0LL, (struct SURFACE *)v70, 0LL, 0LL, &v68, 0LL, &v58, v64, v63, 0xAAF0u);
      }
      else
      {
        ((void (__fastcall *)(unsigned __int8 *, _QWORD, _QWORD, char *, LONG, LONG, _DWORD, int, int, int, struct SURFACE *))v32)(
          &a5[v42 * a6],
          (unsigned int)(v57 + v55),
          a6,
          (char *)a8[10] + v39 * *((_DWORD *)a8 + 22),
          v36,
          v37,
          *((_DWORD *)a8 + 22),
          v40 - v39,
          a12,
          v31,
          v65);
      }
      v29 = a10;
    }
    v31 = a13;
  }
LABEL_41:
  UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v69);
  if ( v60 )
  {
    v54 = *(int *)(v60 + 36);
    if ( (int)v54 < 0 )
    {
      if ( (_DWORD)v54 == -1 )
        FreeThreadBufferWithTag(v60);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v54);
    }
  }
}
