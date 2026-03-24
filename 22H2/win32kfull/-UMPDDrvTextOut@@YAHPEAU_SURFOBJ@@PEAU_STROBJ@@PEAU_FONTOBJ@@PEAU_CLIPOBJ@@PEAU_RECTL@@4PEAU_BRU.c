/*
 * XREFs of ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C013C160
 * Callers:
 *     <none>
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C001ECD8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C001ED70 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C001F008 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C001F0E8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C001F424 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00A16C0 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00A190C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C013C6B4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C013C88C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C013CA98 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1C013CC44 (-pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02AC618 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

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
  int v13; // r12d
  struct UMPDOBJ *v14; // rbx
  unsigned int v15; // esi
  struct _FONTOBJ *v16; // r13
  int v17; // eax
  int v19; // esi
  struct _RECTL *i; // rcx
  unsigned int v21; // ecx
  __int64 cGlyphs; // rax
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  unsigned int v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  void *v33; // [rsp+58h] [rbp-A8h] BYREF
  void *v34; // [rsp+60h] [rbp-A0h] BYREF
  struct UMPDOBJ *v35; // [rsp+68h] [rbp-98h] BYREF
  struct _FONTOBJ *v36; // [rsp+70h] [rbp-90h]
  struct _CLIPOBJ *v37; // [rsp+78h] [rbp-88h]
  struct _RECTL *v38; // [rsp+80h] [rbp-80h]
  struct _BRUSHOBJ *v39; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v40; // [rsp+90h] [rbp-70h]
  struct _POINTL *v41; // [rsp+98h] [rbp-68h]
  _QWORD v42[14]; // [rsp+A0h] [rbp-60h] BYREF

  v38 = a6;
  v11 = 1;
  v39 = a7;
  v13 = 0;
  v40 = a8;
  v41 = a9;
  v37 = a4;
  v36 = a3;
  v30 = 1;
  v32 = 0;
  v31[0] = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v35);
  v33 = 0LL;
  v34 = 0LL;
  memset(v42, 0, 0x68uLL);
  v14 = v35;
  if ( !v35 )
    goto LABEL_20;
  if ( a5 )
  {
    v19 = 1;
    for ( i = a5; i->left != i->right; ++v19 )
      ++i;
    v15 = 16 * v19;
  }
  else
  {
    v15 = 0;
  }
  if ( !*((_DWORD *)v35 + 106) )
    goto LABEL_5;
  v21 = 272;
  if ( a2 )
  {
    cGlyphs = a2->cGlyphs;
    v23 = 2 * cGlyphs;
    if ( (unsigned __int64)(2 * cGlyphs) > 0xFFFFFFFF )
      goto LABEL_20;
    v24 = 24 * cGlyphs;
    if ( v24 > 0xFFFFFFFF )
      goto LABEL_20;
    if ( v23 + 7 < v23 )
      goto LABEL_20;
    v25 = (v23 + 7) & 0xFFFFFFF8;
    if ( (int)v24 + 7 < (unsigned int)v24 )
      goto LABEL_20;
    v26 = (v24 + 7) & 0xFFFFFFF8;
    v27 = v25 + 320;
    if ( v25 >= 0xFFFFFEC0 )
      goto LABEL_20;
    v21 = v27 + v26;
    if ( v27 + v26 < v27 )
      goto LABEL_20;
  }
  if ( v15 + 7 < v15 || v21 + ((v15 + 7) & 0xFFFFFFF8) < v21 )
  {
LABEL_20:
    v11 = 0;
    goto LABEL_19;
  }
  v30 = v21 + ((v15 + 7) & 0xFFFFFFF8);
  v28 = UMPDOBJ::bThunkLargeBitmap(v35, a1, &v33, &v34, &v32, v31, &v30);
  v13 = v31[0];
  v11 = v28;
  v30 = v28;
LABEL_5:
  v42[0] = 0x1700000068LL;
  v42[2] = *(_QWORD *)v14;
  v42[6] = v37;
  v42[8] = v38;
  v42[9] = v39;
  v42[10] = v40;
  v42[7] = a5;
  v42[4] = a2;
  v16 = v36;
  v42[11] = v41;
  LODWORD(v42[12]) = a10;
  v42[3] = a1;
  v42[5] = v36;
  if ( v11
    && (unsigned int)UMPDOBJ::pso(v14, (struct UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&v42[3])
    && (unsigned int)UMPDOBJ::pstro(v14, (struct _STROBJ **)&v42[4])
    && (unsigned int)UMPDOBJ::pfo(v14, (struct _FONTOBJ **)&v42[5])
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                       v14,
                       (struct UMPDOBJ *)((char *)v14 + 112),
                       (const void **)&v42[6],
                       0x18u,
                       0LL)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v42[7], v15)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v42[8], 0x10u)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                       v14,
                       (struct UMPDOBJ *)((char *)v14 + 144),
                       (const void **)&v42[9],
                       0x18u,
                       0LL)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                       v14,
                       (struct UMPDOBJ *)((char *)v14 + 160),
                       (const void **)&v42[10],
                       0x18u,
                       0LL)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v42[11], 8u) )
  {
    *(_QWORD *)v31 = v16;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v31, v14, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v17 = UMPDOBJ::Thunk(v14, v42, 0x68u, &v30, Size);
    v11 = v30;
    if ( v17 == -1 )
      v11 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v31, v14, 0, 0, 0LL);
    *(_QWORD *)v31 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v31);
  }
  if ( v32 )
  {
    if ( v13 )
      UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
    a1->pvBits = v33;
    a1->pvScan0 = v34;
  }
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ(&v35);
  return v11;
}
