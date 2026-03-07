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
  unsigned int v22; // eax
  GLYPHDEF **p_pgdf; // rdx
  LONG *p_top; // r12
  LONG top; // edx
  struct SURFACE *v26; // rax
  int v27; // ecx
  LONG left; // esi
  unsigned int v29; // esi
  struct _RECTL *v30; // r9
  int v31; // eax
  int v32; // r11d
  void (__fastcall *v33)(const unsigned __int8 *, int, int, unsigned __int8 *, int, int, int, int); // r13
  LONG *j; // rbx
  LONG v35; // edx
  LONG v36; // ecx
  LONG v37; // r14d
  LONG v38; // r15d
  LONG v39; // r8d
  LONG v40; // r12d
  LONG v41; // edi
  int v42; // r9d
  LONG v43; // edx
  Gre::Base *v44; // rcx
  void (__fastcall *v45)(struct BLTINFO *); // rbx
  struct _RECTL *i; // rdi
  LONG v47; // r8d
  LONG right; // edx
  signed int v49; // r8d
  signed int v50; // edx
  LONG v51; // r9d
  LONG v52; // ecx
  int v53; // r9d
  LONG bottom; // r10d
  int v55; // r10d
  int v56; // eax
  int v57; // [rsp+74h] [rbp-4A4h]
  LONG v58; // [rsp+A8h] [rbp-470h]
  struct _POINTL v59; // [rsp+B8h] [rbp-460h] BYREF
  int v60; // [rsp+C0h] [rbp-458h]
  void (__fastcall *v61)(struct BLTINFO *); // [rsp+C8h] [rbp-450h]
  struct SURFACE *v62; // [rsp+D0h] [rbp-448h]
  __int64 v63; // [rsp+D8h] [rbp-440h] BYREF
  struct _RECTL *v64; // [rsp+E0h] [rbp-438h] BYREF
  struct _GLYPHPOS *v65; // [rsp+E8h] [rbp-430h]
  struct _POINTL *v66; // [rsp+F0h] [rbp-428h]
  struct _BRUSHOBJ *v67; // [rsp+F8h] [rbp-420h]
  struct SURFACE *v68; // [rsp+100h] [rbp-418h]
  _QWORD v69[2]; // [rsp+108h] [rbp-410h]
  struct _RECTL v70; // [rsp+118h] [rbp-400h] BYREF
  _BYTE v71[80]; // [rsp+130h] [rbp-3E8h] BYREF
  char v72[56]; // [rsp+180h] [rbp-398h] BYREF
  unsigned int v73; // [rsp+1B8h] [rbp-360h]
  int v74; // [rsp+1BCh] [rbp-35Ch]
  unsigned __int8 *v75; // [rsp+1D0h] [rbp-348h]
  unsigned int v76; // [rsp+1D8h] [rbp-340h]
  int v77; // [rsp+1E0h] [rbp-338h]
  __int16 v78; // [rsp+1E4h] [rbp-334h]

  v65 = a3;
  v62 = a8;
  v64 = a15;
  v67 = a18;
  v66 = a19;
  v22 = 0;
  v63 = 0LL;
  p_pgdf = &a3->pgdf;
  while ( v22 < a4 )
  {
    if ( !(*p_pgdf)->pgb )
      goto LABEL_48;
    ++v22;
    p_pgdf += 3;
  }
  if ( (a14 & 1) == 0 && a4 > 1 && (unsigned int)(a3->ptl.x - a3[a4 - 1].ptl.x + 0x8000000) > 0x10000000 )
  {
LABEL_48:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v63);
    return;
  }
  UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v71, a1, a2, 1);
  p_top = &a10->top;
  top = a10->top;
  v26 = a8;
  if ( a9 )
    v26 = a9;
  v68 = v26;
  LODWORD(v61) = a14 & 8;
  v59.x = a14 & 0x20;
  if ( (a14 & 8) != 0 )
  {
    if ( (a14 & 0x20) != 0 )
      v27 = 3;
    else
      v27 = 7;
  }
  else
  {
    v27 = 31;
  }
  left = a10->left;
  v60 = v27 & a10->left;
  v29 = left - (v27 & left);
  if ( (a14 & 0x20) != 0 )
  {
    v69[0] = draw_clrt_nf_ntb_o_to_temp_start;
    v69[1] = draw_clrt_f_ntb_o_to_temp_start;
    v65 = (struct _GLYPHPOS *)v69[a14 & 1];
    ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v65)(
      a3,
      a4,
      a5,
      v29,
      a6,
      a7,
      top);
  }
  else
  {
    off_1C030C060[a14 & 0xFFFFFF4F](v65, a4, a5, v29, a6, a7, top);
  }
  v30 = a10;
  if ( a16 )
  {
    if ( (_DWORD)v61 )
    {
      v45 = vSrcCopyDummy;
      if ( (a14 & 0x20) == 0 )
        v45 = vSrcCopyDummy;
    }
    else
    {
      v45 = (void (__fastcall *)(struct BLTINFO *))vRectBlt;
    }
    v61 = v45;
    for ( i = a16; ; ++i )
    {
      v47 = i->left;
      right = i->right;
      if ( i->left == right )
        break;
      if ( v47 <= v30->left )
        v47 = v30->left;
      v49 = v47 - v29;
      if ( right >= v30->right )
        right = v30->right;
      v50 = right - v29;
      v51 = i->top;
      v52 = *p_top;
      if ( v51 <= *p_top )
        v51 = *p_top;
      v53 = v51 - v52;
      bottom = i->bottom;
      if ( bottom >= a10->bottom )
        bottom = a10->bottom;
      v55 = bottom - v52;
      if ( v49 >= v50 || v53 >= v55 )
      {
        v30 = a10;
      }
      else
      {
        ((void (__fastcall *)(unsigned __int8 *, _QWORD))v45)(a5, a6);
        v30 = a10;
      }
    }
  }
  if ( *((_DWORD *)a8 + 24) <= 6u )
    goto LABEL_16;
  if ( !(unsigned int)bUMPDSecurityGateEx() )
  {
    v30 = a10;
LABEL_16:
    v31 = *((_DWORD *)a8 + 24);
    v32 = a13;
    if ( a13 == -1 )
      v31 += 8;
    if ( (a14 & 0x80u) != 0 )
    {
      if ( (a14 & 0x20) != 0 )
        v33 = vSrcAlphaCopyS8D32;
      else
        v33 = (void (__fastcall *)(const unsigned __int8 *, int, int, unsigned __int8 *, int, int, int, int))vSrcAlphaCopyS4D32;
    }
    else
    {
      if ( (a14 & 8) != 0 )
      {
        v31 += 16;
        if ( (a14 & 0x20) != 0 )
          v31 += 16;
      }
      v33 = (void (__fastcall *)(const unsigned __int8 *, int, int, unsigned __int8 *, int, int, int, int))*(&off_1C030BEE0 + v31);
    }
    for ( j = &v64->left; ; j += 4 )
    {
      v35 = j[3];
      if ( !v35 )
        break;
      v36 = v30->left;
      v37 = v30->left;
      if ( v30->left <= *j )
        v37 = *j;
      v38 = v30->right;
      if ( v38 >= j[2] )
        v38 = j[2];
      v40 = *p_top;
      v39 = v40;
      if ( v40 <= j[1] )
        v40 = j[1];
      v41 = v30->bottom;
      if ( v41 >= v35 )
        v41 = j[3];
      v42 = v37 - v36;
      v57 = v37 - v36;
      v43 = v40 - v39;
      v58 = v40 - v39;
      if ( (a14 & 0x10) != 0 )
      {
        v37 -= v29;
        v38 -= v29;
        v40 -= v39;
        v41 -= v39;
      }
      else
      {
        v64 = (struct _RECTL *)*((_QWORD *)a8 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v64, (struct _SURFOBJ *)((char *)a8 + 24), 0LL, 0);
        v32 = a13;
        v43 = v58;
        v42 = v57;
      }
      if ( v37 >= v38 || v40 >= v41 )
      {
        p_top = &a10->top;
      }
      else
      {
        if ( a12 != -1 )
        {
          ((void (__fastcall *)(unsigned __int8 *, _QWORD, _QWORD, _QWORD, LONG, LONG, _DWORD, int, int, int, struct SURFACE *))v33)(
            &a5[v43 * a6],
            (unsigned int)(v60 + v57),
            a6,
            *((_QWORD *)a8 + 10) + v40 * *((_DWORD *)a8 + 22),
            v37,
            v38,
            *((_DWORD *)a8 + 22),
            v41 - v40,
            a12,
            v32,
            v68);
          p_top = &a10->top;
          v30 = a10;
          goto LABEL_39;
        }
        v70.left = v37;
        v70.top = v40;
        v70.right = v38;
        v70.bottom = v41;
        v77 = 1;
        v78 = 0;
        v75 = a5;
        v76 = a6;
        v73 = 8 * a6;
        p_top = &a10->top;
        v74 = a10->bottom - a10->top;
        v59.x = v42 + v60;
        v59.y = v43;
        BltLnk(a8, 0LL, (struct SURFACE *)v72, 0LL, 0LL, &v70, 0LL, &v59, v67, v66, 0xAAF0u);
      }
      v30 = a10;
LABEL_39:
      v32 = a13;
    }
  }
  UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v71);
  if ( v63 )
  {
    v56 = *(_DWORD *)(v63 + 36);
    if ( v56 < 0 )
    {
      if ( v56 == -1 )
        FreeThreadBufferWithTag(v63);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v44) + 8 * *(int *)(v63 + 36) + 1658);
    }
  }
}
