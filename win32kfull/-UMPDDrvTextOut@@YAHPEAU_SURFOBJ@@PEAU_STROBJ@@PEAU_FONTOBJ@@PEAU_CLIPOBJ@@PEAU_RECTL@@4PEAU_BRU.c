__int64 __fastcall UMPDDrvTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  unsigned int v11; // edi
  int v12; // r12d
  struct UMPDOBJ *v14; // rbx
  int v15; // esi
  struct _RECTL *i; // rcx
  unsigned int v17; // esi
  int v18; // eax
  unsigned int v19; // edx
  __int64 cGlyphs; // rax
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rcx
  struct _FONTOBJ *v28; // r13
  int v29; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  void *v35; // [rsp+58h] [rbp-A8h] BYREF
  void *v36; // [rsp+60h] [rbp-A0h] BYREF
  struct UMPDOBJ *v37; // [rsp+68h] [rbp-98h] BYREF
  struct _FONTOBJ *v38; // [rsp+70h] [rbp-90h]
  struct _CLIPOBJ *v39; // [rsp+78h] [rbp-88h]
  struct _RECTL *v40; // [rsp+80h] [rbp-80h]
  struct _BRUSHOBJ *v41; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v42; // [rsp+90h] [rbp-70h]
  struct _POINTL *v43; // [rsp+98h] [rbp-68h]
  _DWORD v44[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  struct _SURFOBJ *v47; // [rsp+B8h] [rbp-48h] BYREF
  struct _STROBJ *v48; // [rsp+C0h] [rbp-40h] BYREF
  struct _FONTOBJ *v49; // [rsp+C8h] [rbp-38h] BYREF
  void *v50; // [rsp+D0h] [rbp-30h] BYREF
  void *v51; // [rsp+D8h] [rbp-28h] BYREF
  void *v52; // [rsp+E0h] [rbp-20h] BYREF
  void *v53; // [rsp+E8h] [rbp-18h] BYREF
  void *v54; // [rsp+F0h] [rbp-10h] BYREF
  void *v55; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v56; // [rsp+100h] [rbp+0h]
  int v57; // [rsp+104h] [rbp+4h]

  v34 = 0;
  v11 = 1;
  v40 = a6;
  v12 = 0;
  v41 = a7;
  v42 = a8;
  v43 = a9;
  v39 = a4;
  v38 = a3;
  v32 = 1;
  v33[0] = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v37);
  v14 = v37;
  v35 = 0LL;
  v36 = 0LL;
  v45 = 0LL;
  v57 = 0;
  if ( !v37 )
    goto LABEL_36;
  if ( a5 )
  {
    v15 = 1;
    for ( i = a5; i->left != i->right; ++v15 )
      ++i;
    v17 = 16 * v15;
  }
  else
  {
    v17 = 0;
  }
  if ( !*((_DWORD *)v37 + 106) )
    goto LABEL_19;
  v18 = 272;
  v19 = 272;
  if ( a2 )
  {
    cGlyphs = a2->cGlyphs;
    v21 = 2 * cGlyphs;
    if ( (unsigned __int64)(2 * cGlyphs) > 0xFFFFFFFF )
      goto LABEL_36;
    v22 = 24 * cGlyphs;
    if ( v22 > 0xFFFFFFFF )
      goto LABEL_36;
    if ( v21 + 7 < v21 )
      goto LABEL_36;
    v23 = (v21 + 7) & 0xFFFFFFF8;
    if ( (int)v22 + 7 < (unsigned int)v22 )
      goto LABEL_36;
    v24 = (v22 + 7) & 0xFFFFFFF8;
    v25 = v23 + 320;
    if ( v25 < 0x140 )
      goto LABEL_36;
    v18 = v25 + v24;
    if ( v25 + v24 < v25 )
      goto LABEL_36;
    v19 = v25 + v24;
  }
  if ( v17 + 7 < v17 || v18 + ((v17 + 7) & 0xFFFFFFF8) < v19 )
  {
LABEL_36:
    v11 = 0;
    goto LABEL_37;
  }
  v32 = v18 + ((v17 + 7) & 0xFFFFFFF8);
  v26 = UMPDOBJ::bThunkLargeBitmap(v37, a1, &v35, &v36, &v34, v33, &v32);
  v12 = v33[0];
  v11 = v26;
  v32 = v26;
LABEL_19:
  v44[0] = 104;
  v44[1] = 23;
  v27 = *(_QWORD *)v14;
  v50 = v39;
  v52 = v40;
  v53 = v41;
  v54 = v42;
  v51 = a5;
  v48 = a2;
  v28 = v38;
  v55 = v43;
  v56 = a10;
  v46 = v27;
  v47 = a1;
  v49 = v38;
  if ( v11
    && (unsigned int)UMPDOBJ::pso(v14, (struct UMPDOBJ *)((char *)v14 + 64), &v47)
    && (unsigned int)UMPDOBJ::pstro(v14, &v48)
    && (unsigned int)UMPDOBJ::pfo(v14, (__m128i **)&v49)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 112), (const void **)&v50, 0x18u, 0LL)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v51, v17)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v52, 0x10u)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 144), (const void **)&v53, 0x18u, 0LL)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 160), (const void **)&v54, 0x18u, 0LL)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v55, 8u) )
  {
    *(_QWORD *)v33 = v28;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v33, v14, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v29 = UMPDOBJ::Thunk(v14, v44, 0x68u, &v32, Size);
    v11 = v32;
    if ( v29 == -1 )
      v11 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v33, v14, 0, 0, 0LL);
    *(_QWORD *)v33 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v33);
  }
  if ( v34 )
  {
    if ( v12 )
      UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
    a1->pvBits = v35;
    a1->pvScan0 = v36;
  }
LABEL_37:
  XUMPDOBJ::~XUMPDOBJ(&v37);
  return v11;
}
