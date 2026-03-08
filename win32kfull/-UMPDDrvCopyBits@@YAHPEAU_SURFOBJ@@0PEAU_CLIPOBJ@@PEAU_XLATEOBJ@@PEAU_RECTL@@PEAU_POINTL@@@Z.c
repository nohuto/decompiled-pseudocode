/*
 * XREFs of ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02BB4C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z @ 0x1C029C2D0 (-bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C029C4BC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C029C850 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?BackPropagateBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1C02BA054 (-BackPropagateBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C02BA8C4 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02C1740 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

_BOOL8 __fastcall UMPDDrvCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  struct _SURFOBJ *v6; // rdi
  int v8; // r15d
  int v9; // r14d
  int v10; // esi
  void *v11; // r12
  struct _SURFOBJ **v12; // r8
  UMPDOBJ *v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  BOOL v16; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v19; // [rsp+90h] [rbp-80h] BYREF
  int v20; // [rsp+94h] [rbp-7Ch] BYREF
  int v21; // [rsp+98h] [rbp-78h] BYREF
  int v22; // [rsp+9Ch] [rbp-74h] BYREF
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  struct _SURFOBJ *v24; // [rsp+A8h] [rbp-68h] BYREF
  void *v25; // [rsp+B0h] [rbp-60h] BYREF
  struct _SURFOBJ *v26; // [rsp+B8h] [rbp-58h]
  void *v27; // [rsp+C0h] [rbp-50h] BYREF
  void *v28; // [rsp+C8h] [rbp-48h] BYREF
  void *v29; // [rsp+D0h] [rbp-40h] BYREF
  UMPDOBJ *v30; // [rsp+D8h] [rbp-38h] BYREF
  struct _CLIPOBJ *v31; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v32; // [rsp+E8h] [rbp-28h]
  struct _POINTL *v33; // [rsp+F0h] [rbp-20h]
  _DWORD v34[4]; // [rsp+100h] [rbp-10h] BYREF
  __int64 v35; // [rsp+110h] [rbp+0h]
  struct _SURFOBJ *v36; // [rsp+118h] [rbp+8h] BYREF
  struct _SURFOBJ *v37; // [rsp+120h] [rbp+10h] BYREF
  void *v38; // [rsp+128h] [rbp+18h] BYREF
  struct _XLATEOBJ *v39; // [rsp+130h] [rbp+20h] BYREF
  void *v40; // [rsp+138h] [rbp+28h] BYREF
  void *v41; // [rsp+140h] [rbp+30h] BYREF

  v32 = a5;
  v6 = a1;
  v26 = a1;
  v8 = 0;
  v33 = a6;
  v31 = a3;
  v9 = 0;
  v24 = a2;
  v10 = 0;
  v19 = 1;
  v20 = 0;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v25 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v11 = 0LL;
  v27 = 0LL;
  memset_0(v34, 0, 0x48uLL);
  v13 = v30;
  if ( !v30 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(0LL, &v24, v12) )
  {
    v16 = 0;
    goto LABEL_22;
  }
  if ( *((_DWORD *)v13 + 106) )
  {
    if ( a4 )
      v14 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 152;
    else
      v14 = 128;
    v19 = v14;
    v15 = UMPDOBJ::bThunkLargeBitmaps(
            v13,
            v6,
            v24,
            0LL,
            &v25,
            &v29,
            &v28,
            &v27,
            0LL,
            0LL,
            &v20,
            &v21,
            &v23,
            &v22,
            0LL,
            0LL,
            &v19);
    v8 = v20;
    v16 = v15;
    v9 = v21;
    v10 = v22;
    v11 = v25;
    v19 = v15;
    if ( !v15 )
      goto LABEL_19;
    v6 = v26;
  }
  v34[0] = 72;
  v34[1] = 19;
  v35 = *(_QWORD *)v13;
  v37 = v24;
  v38 = v31;
  v40 = v32;
  v41 = v33;
  v36 = v6;
  v39 = a4;
  v16 = 0;
  if ( (unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 64), &v36) )
  {
    if ( (unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 80), &v37) )
    {
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 112), (const void **)&v38, 0x18u, 0LL) )
      {
        if ( (unsigned int)UMPDOBJ::pxlo(v13, &v39) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v40, 0x10u) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v41, 8u) )
            {
              LODWORD(Size) = 4;
              if ( (unsigned int)UMPDOBJ::Thunk(v13, v34, 0x48u, &v19, Size) != -1 )
              {
                if ( v19 )
                  v16 = 1;
              }
            }
          }
        }
      }
    }
  }
LABEL_19:
  if ( *((_DWORD *)v13 + 106) )
  {
    UMPDOBJ::BackPropagateBitmapBits((char **)v13, v26, v11, v8);
    UMPDOBJ::RestoreBitmaps(
      v13,
      (unsigned __int64)v26,
      (unsigned __int64)v24,
      0LL,
      v11,
      v29,
      v28,
      v27,
      0LL,
      0LL,
      v8,
      v9,
      v23,
      v10,
      0,
      0);
  }
LABEL_22:
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v16;
}
