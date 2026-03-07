__int64 __fastcall GreTransparentBltPS(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7)
{
  struct _RECTL *v9; // r14
  unsigned __int64 iDComplexity; // rcx
  int v12; // ebx
  RECTL rclBounds; // xmm0
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  unsigned int i; // esi
  LONG v16; // r15d
  LONG left; // edx
  LONG v18; // r8d
  LONG right; // ecx
  LONG v20; // ecx
  LONG top; // r9d
  LONG v22; // edi
  LONG bottom; // r10d
  unsigned int v24; // r15d
  unsigned int v25; // r14d
  int v26; // edi
  int v27; // eax
  struct _RECTL v28; // [rsp+50h] [rbp-208h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-1F8h]
  int v30; // [rsp+64h] [rbp-1F4h]
  struct _XLATEOBJ *v31; // [rsp+68h] [rbp-1F0h]
  struct _SURFOBJ *v32; // [rsp+70h] [rbp-1E8h]
  struct _SURFOBJ *v33; // [rsp+78h] [rbp-1E0h]
  struct _XLATEOBJ *v34; // [rsp+80h] [rbp-1D8h]
  struct _RECTL *v35; // [rsp+88h] [rbp-1D0h]
  __int64 v36; // [rsp+90h] [rbp-1C8h] BYREF
  char v37; // [rsp+98h] [rbp-1C0h]
  int v38; // [rsp+9Ch] [rbp-1BCh]
  struct _SURFOBJ *v39; // [rsp+A0h] [rbp-1B8h]
  struct _SURFOBJ *v40; // [rsp+A8h] [rbp-1B0h]
  struct _CLIPOBJ *v41; // [rsp+B0h] [rbp-1A8h]
  struct _RECTL *v42; // [rsp+B8h] [rbp-1A0h]
  unsigned int v43; // [rsp+C0h] [rbp-198h] BYREF
  _OWORD v44[20]; // [rsp+C4h] [rbp-194h]

  v31 = a4;
  v33 = a2;
  v32 = a1;
  v39 = a1;
  v40 = a2;
  v41 = a3;
  v34 = a4;
  v42 = a5;
  v9 = a6;
  v35 = a6;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  memset_0(&v43, 0, 0x144uLL);
  if ( !a3 || (iDComplexity = a3->iDComplexity) == 0 )
  {
    rclBounds = *a5;
    goto LABEL_9;
  }
  iDComplexity = (unsigned int)(iDComplexity - 1);
  if ( !(_DWORD)iDComplexity )
  {
    rclBounds = a3->rclBounds;
LABEL_9:
    v12 = 0;
    v43 = 1;
    v44[0] = rclBounds;
    goto LABEL_10;
  }
  if ( (_DWORD)iDComplexity != 2 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v36);
    return 0LL;
  }
  v12 = 1;
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
LABEL_10:
  v14 = Gre::Base::Globals((Gre::Base *)iDComplexity);
  if ( !a4 )
  {
    v31 = (struct _XLATEOBJ *)((char *)v14 + 6896);
    v34 = (struct _XLATEOBJ *)((char *)v14 + 6896);
  }
  if ( !v12 )
    goto LABEL_14;
  do
  {
    v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, (char *)&v43, 0LL);
LABEL_14:
    for ( i = 0; i < v43; ++i )
    {
      v16 = v44[i];
      left = a5->left;
      if ( v16 < a5->left )
      {
        LODWORD(v44[i]) = left;
        v16 = left;
      }
      v18 = DWORD2(v44[i]);
      right = a5->right;
      if ( v18 > right )
      {
        DWORD2(v44[i]) = right;
        v18 = right;
      }
      v20 = DWORD1(v44[i]);
      top = a5->top;
      if ( v20 < top )
      {
        DWORD1(v44[i]) = top;
        v20 = top;
      }
      v22 = HIDWORD(v44[i]);
      bottom = a5->bottom;
      if ( v22 > bottom )
      {
        HIDWORD(v44[i]) = bottom;
        v22 = bottom;
      }
      if ( v20 < v22 && v16 < v18 )
      {
        v28.left = v16;
        v28.top = v20;
        v28.right = v18;
        v28.bottom = v20 + 1;
        v24 = v9->left + v16 - left;
        v29 = v24;
        v25 = v20 + v9->top - top;
        v26 = v22 - v20;
        while ( 1 )
        {
          v27 = v26--;
          v30 = v26;
          if ( !v27 )
            break;
          vTransparentScan(v32, v33, v24, v25++, v31, &v28, a7);
          ++v28.top;
          ++v28.bottom;
        }
        v9 = v35;
      }
    }
  }
  while ( v12 );
  SURFMEM::~SURFMEM((SURFMEM *)&v36);
  return 1LL;
}
