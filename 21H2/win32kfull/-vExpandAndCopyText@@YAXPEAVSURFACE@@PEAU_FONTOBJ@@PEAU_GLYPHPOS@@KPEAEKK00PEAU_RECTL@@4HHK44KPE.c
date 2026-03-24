/*
 * XREFs of ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C00CC570
 * Callers:
 *     EngTextOut @ 0x1C00CBA80 (EngTextOut.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00CD260 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CFBA8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C016B9CC (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C016BA4C (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vExpandAndCopyText(
        struct SURFACE *a1,
        struct _FONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned int a6,
        unsigned int a7,
        struct SURFACE *a8,
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
  struct SURFACE *v22; // rdi
  unsigned int v23; // eax
  GLYPHDEF **p_pgdf; // rdx
  LONG top; // edx
  int v26; // ecx
  unsigned int v27; // esi
  struct _RECTL *v28; // r13
  struct _RECTL *v29; // r10
  int v30; // eax
  int v31; // r11d
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
  void (__fastcall *v43)(struct BLTINFO *); // rbx
  LONG left; // r8d
  LONG right; // edx
  signed int v46; // r8d
  signed int v47; // edx
  LONG v48; // r9d
  LONG v49; // ecx
  int v50; // r9d
  LONG bottom; // r10d
  int v52; // r10d
  int v53; // [rsp+74h] [rbp-404h]
  LONG v54; // [rsp+A0h] [rbp-3D8h]
  int v55; // [rsp+B4h] [rbp-3C4h]
  __int64 v56; // [rsp+C0h] [rbp-3B8h] BYREF
  struct _POINTL v57; // [rsp+C8h] [rbp-3B0h] BYREF
  int v58; // [rsp+D0h] [rbp-3A8h]
  void * near *v59; // [rsp+D8h] [rbp-3A0h]
  struct _RECTL *v60; // [rsp+E0h] [rbp-398h]
  __int64 v61; // [rsp+E8h] [rbp-390h] BYREF
  struct _POINTL *v62; // [rsp+F0h] [rbp-388h]
  struct _BRUSHOBJ *v63; // [rsp+F8h] [rbp-380h]
  struct SURFACE *v64; // [rsp+100h] [rbp-378h]
  _QWORD v65[2]; // [rsp+108h] [rbp-370h]
  __int64 v66; // [rsp+118h] [rbp-360h]
  struct _RECTL v67; // [rsp+120h] [rbp-358h] BYREF
  _BYTE v68[80]; // [rsp+130h] [rbp-348h] BYREF
  char v69[56]; // [rsp+180h] [rbp-2F8h] BYREF
  unsigned int v70; // [rsp+1B8h] [rbp-2C0h]
  int v71; // [rsp+1BCh] [rbp-2BCh]
  unsigned __int8 *v72; // [rsp+1D0h] [rbp-2A8h]
  unsigned int v73; // [rsp+1D8h] [rbp-2A0h]
  int v74; // [rsp+1E0h] [rbp-298h]
  __int16 v75; // [rsp+1E4h] [rbp-294h]

  v22 = a9;
  v60 = a15;
  v63 = a18;
  v62 = a19;
  v23 = 0;
  v56 = 0LL;
  p_pgdf = &a3->pgdf;
  while ( v23 < a4 )
  {
    if ( !(*p_pgdf)->pgb )
      goto LABEL_48;
    ++v23;
    p_pgdf += 3;
  }
  if ( (a14 & 1) != 0 || a4 <= 1 || (unsigned int)(a3->ptl.x - a3[a4 - 1].ptl.x + 0x8000000) <= 0x10000000 )
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v68, a1, a2, 1);
    top = a10->top;
    if ( !a9 )
      v22 = a8;
    v64 = v22;
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
    v55 = v26 & a10->left;
    v27 = a10->left - v55;
    if ( (a14 & 0x20) != 0 )
    {
      v65[0] = draw_clrt_nf_ntb_o_to_temp_start;
      v65[1] = draw_clrt_f_ntb_o_to_temp_start;
      v59 = (void * near *)v65[a14 & 1];
      ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v59)(
        a3,
        a4,
        a5,
        v27,
        a6,
        a7,
        top);
    }
    else
    {
      v59 = (&MastertextTypeTabel)[a14 & 0xFFFFFF4F];
      ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v59)(
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
      if ( (a14 & 8) != 0 )
      {
        v43 = vSrcCopyDummy;
        if ( (a14 & 0x20) == 0 )
          v43 = vSrcCopyDummy;
      }
      else
      {
        v43 = (void (__fastcall *)(struct BLTINFO *))vRectBlt;
      }
      while ( 1 )
      {
        left = v28->left;
        right = v28->right;
        if ( v28->left == right )
          break;
        if ( left <= v29->left )
          left = v29->left;
        v46 = left - v27;
        if ( right >= v29->right )
          right = v29->right;
        v47 = right - v27;
        v48 = v28->top;
        v49 = v29->top;
        if ( v48 <= v49 )
          v48 = v29->top;
        v50 = v48 - v49;
        bottom = v28->bottom;
        if ( bottom >= a10->bottom )
          bottom = a10->bottom;
        v52 = bottom - v49;
        if ( v46 >= v47 || v50 >= v52 )
        {
          v29 = a10;
        }
        else
        {
          ((void (__fastcall *)(unsigned __int8 *, _QWORD))v43)(a5, a6);
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
        goto LABEL_39;
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
    for ( i = &v60->left; ; i += 4 )
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
      v53 = v36 - v35;
      v42 = v39 - v38;
      v54 = v39 - v38;
      if ( (a14 & 0x10) != 0 )
      {
        v36 -= v27;
        v37 -= v27;
        v39 -= v38;
        v40 -= v38;
      }
      else
      {
        v61 = *((_QWORD *)a8 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v61, (struct _SURFOBJ *)((char *)a8 + 24), 0LL, 0);
        v31 = a13;
        v42 = v54;
        v41 = v53;
        v29 = a10;
      }
      if ( v36 < v37 && v39 < v40 )
      {
        if ( a12 == -1 )
        {
          v67.left = v36;
          v67.top = v39;
          v67.right = v37;
          v67.bottom = v40;
          v74 = 1;
          v75 = 0;
          v72 = a5;
          v73 = a6;
          v70 = 8 * a6;
          v71 = v29->bottom - v29->top;
          v57.x = v41 + v55;
          v57.y = v42;
          BltLnk(a8, 0LL, (struct SURFACE *)v69, 0LL, 0LL, &v67, 0LL, &v57, v63, v62, 0xAAF0u);
        }
        else
        {
          v66 = *((_QWORD *)a8 + 10);
          v58 = *((_DWORD *)a8 + 22);
          ((void (__fastcall *)(unsigned __int8 *, _QWORD, _QWORD, __int64, LONG, LONG, int, int, int, int, struct SURFACE *))v32)(
            &a5[v42 * a6],
            (unsigned int)(v55 + v53),
            a6,
            v66 + v39 * v58,
            v36,
            v37,
            v58,
            v40 - v39,
            a12,
            v31,
            v64);
        }
        v29 = a10;
      }
      v31 = a13;
    }
LABEL_39:
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v68);
    return;
  }
LABEL_48:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v56, (__int64)p_pgdf);
}
