/*
 * XREFs of ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02C0610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1C029BCF4 (-ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C029C4BC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z @ 0x1C029C91C (-pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02C136C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02C1674 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v10; // edi
  int v13; // r15d
  UMPDOBJ *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // esi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  void *v23; // [rsp+50h] [rbp-B0h] BYREF
  void *v24; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v26; // [rsp+68h] [rbp-98h]
  struct _XFORMOBJ *v27; // [rsp+70h] [rbp-90h]
  struct _BRUSHOBJ *v28; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v29; // [rsp+80h] [rbp-80h]
  struct _POINTL *v30; // [rsp+88h] [rbp-78h]
  _DWORD v31[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v33; // [rsp+A8h] [rbp-58h] BYREF
  void *v34; // [rsp+B0h] [rbp-50h] BYREF
  void *v35; // [rsp+B8h] [rbp-48h] BYREF
  struct _XFORMOBJ *v36; // [rsp+C0h] [rbp-40h] BYREF
  void *v37; // [rsp+C8h] [rbp-38h] BYREF
  void *v38; // [rsp+D0h] [rbp-30h] BYREF
  struct _LINEATTRS *v39; // [rsp+D8h] [rbp-28h] BYREF
  void *v40; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v41; // [rsp+E8h] [rbp-18h]
  unsigned int v42; // [rsp+ECh] [rbp-14h]

  v10 = 0;
  v28 = a5;
  v29 = a7;
  v13 = 0;
  v30 = a8;
  v27 = a4;
  v26 = a3;
  v20 = 1;
  v22 = 0;
  v21 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  v23 = 0LL;
  v24 = 0LL;
  memset_0(v31, 0, 0x60uLL);
  v14 = v25;
  if ( v25 )
  {
    if ( !*((_DWORD *)v25 + 106)
      || (!a6 ? (v15 = 200) : (v15 = ((4 * a6->cstyle + 7) & 0xFFFFFFF8) + 240),
          v20 = v15,
          v16 = UMPDOBJ::bThunkLargeBitmap(v25, a1, &v23, &v24, &v22, &v21, &v20),
          v13 = v21,
          v17 = v16,
          (v20 = v16) != 0) )
    {
      v31[0] = 96;
      v31[1] = 16;
      v32 = *(_QWORD *)v14;
      v35 = v26;
      v36 = v27;
      v37 = v28;
      v40 = v29;
      v38 = v30;
      v41 = a9;
      v42 = a10;
      v33 = a1;
      v34 = a2;
      v39 = a6;
      if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), &v33)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 224), (const void **)&v34, 8u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&v35, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::pxo(v14, &v36)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 144), (const void **)&v37, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkLINEATTRS((char **)v14, &v39)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 160), (const void **)&v40, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v38, 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, v31, 0x60u, &v20, Size) == -1)
        || (v17 = 1, !v20) )
      {
        v17 = 0;
      }
    }
    if ( v22 )
    {
      if ( v13 )
        UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
      a1->pvBits = v23;
      a1->pvScan0 = v24;
    }
    v10 = v17;
  }
  XUMPDOBJ::~XUMPDOBJ(&v25);
  return v10;
}
