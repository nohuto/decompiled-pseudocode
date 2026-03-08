/*
 * XREFs of ?UMPDDrvBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02BAFF0
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
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C02BA8C4 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02C1740 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

_BOOL8 __fastcall UMPDDrvBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _SURFOBJ *v11; // rdi
  int v12; // r15d
  int v13; // esi
  int v14; // r14d
  UMPDOBJ *v15; // rcx
  struct _SURFOBJ **v16; // r8
  UMPDOBJ *v17; // rbx
  struct _SURFOBJ *v18; // r12
  unsigned int v19; // eax
  unsigned int v20; // eax
  BOOL v21; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v24; // [rsp+90h] [rbp-80h] BYREF
  int v25; // [rsp+94h] [rbp-7Ch] BYREF
  int v26; // [rsp+98h] [rbp-78h] BYREF
  int v27; // [rsp+9Ch] [rbp-74h] BYREF
  int v28; // [rsp+A0h] [rbp-70h] BYREF
  int v29; // [rsp+A4h] [rbp-6Ch] BYREF
  int v30; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v31; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v32; // [rsp+B8h] [rbp-58h] BYREF
  void *v33; // [rsp+C0h] [rbp-50h] BYREF
  void *v34; // [rsp+C8h] [rbp-48h] BYREF
  void *v35; // [rsp+D0h] [rbp-40h] BYREF
  void *v36; // [rsp+D8h] [rbp-38h] BYREF
  void *v37; // [rsp+E0h] [rbp-30h] BYREF
  void *v38; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v39; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v40; // [rsp+F8h] [rbp-18h] BYREF
  struct _CLIPOBJ *v41; // [rsp+100h] [rbp-10h]
  struct _RECTL *v42; // [rsp+108h] [rbp-8h]
  struct _POINTL *v43; // [rsp+110h] [rbp+0h]
  struct _POINTL *v44; // [rsp+118h] [rbp+8h]
  struct _BRUSHOBJ *v45; // [rsp+120h] [rbp+10h]
  struct _POINTL *v46; // [rsp+128h] [rbp+18h]
  _DWORD v47[4]; // [rsp+130h] [rbp+20h] BYREF
  __int64 v48; // [rsp+140h] [rbp+30h]
  struct _SURFOBJ *v49; // [rsp+148h] [rbp+38h] BYREF
  struct _SURFOBJ *v50; // [rsp+150h] [rbp+40h] BYREF
  struct _SURFOBJ *v51; // [rsp+158h] [rbp+48h] BYREF
  void *v52; // [rsp+160h] [rbp+50h] BYREF
  struct _XLATEOBJ *v53; // [rsp+168h] [rbp+58h] BYREF
  void *v54; // [rsp+170h] [rbp+60h] BYREF
  void *v55; // [rsp+178h] [rbp+68h] BYREF
  void *v56; // [rsp+180h] [rbp+70h] BYREF
  void *v57; // [rsp+188h] [rbp+78h] BYREF
  void *v58; // [rsp+190h] [rbp+80h] BYREF
  unsigned int v59; // [rsp+198h] [rbp+88h]

  v11 = a1;
  v42 = a6;
  v12 = 0;
  v13 = 0;
  v43 = a7;
  v14 = 0;
  v44 = a8;
  v45 = a9;
  v39 = a1;
  v46 = a10;
  v41 = a4;
  v31 = a3;
  v32 = a2;
  v24 = 1;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v40);
  v38 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  memset_0(v47, 0, 0x70uLL);
  v17 = v40;
  if ( !v40 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v15, &v32, v16) )
  {
    v21 = 0;
    goto LABEL_24;
  }
  v18 = v32;
  if ( !*((_DWORD *)v17 + 106) )
    goto LABEL_9;
  if ( a5 )
    v19 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 232;
  else
    v19 = 208;
  v24 = v19;
  v20 = UMPDOBJ::bThunkLargeBitmaps(
          v17,
          v11,
          v32,
          v31,
          &v38,
          &v37,
          &v36,
          &v35,
          &v34,
          &v33,
          &v30,
          &v25,
          &v29,
          &v26,
          &v28,
          &v27,
          &v24);
  v12 = v25;
  v21 = v20;
  v13 = v26;
  v14 = v27;
  v24 = v20;
  if ( v20 )
  {
    v11 = v39;
LABEL_9:
    v47[0] = 112;
    v47[1] = 18;
    v48 = *(_QWORD *)v17;
    v51 = v31;
    v52 = v41;
    v54 = v42;
    v55 = v43;
    v56 = v44;
    v57 = v45;
    v58 = v46;
    v59 = a11;
    v49 = v11;
    v50 = v18;
    v53 = a5;
    v21 = 0;
    if ( (unsigned int)UMPDOBJ::pso(v17, (UMPDOBJ *)((char *)v17 + 64), &v49) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v17, (UMPDOBJ *)((char *)v17 + 80), &v50) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v17, (UMPDOBJ *)((char *)v17 + 96), &v51) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v17, (UMPDOBJ *)((char *)v17 + 112), (const void **)&v52, 0x18u, 0LL) )
          {
            if ( (unsigned int)UMPDOBJ::pxlo(v17, &v53) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (const void **)&v54, 0x10u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (const void **)&v55, 8u) )
                {
                  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (const void **)&v56, 8u) )
                  {
                    if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                                         v17,
                                         (UMPDOBJ *)((char *)v17 + 144),
                                         (const void **)&v57,
                                         0x18u,
                                         0LL) )
                    {
                      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (const void **)&v58, 8u) )
                      {
                        LODWORD(Size) = 4;
                        if ( (unsigned int)UMPDOBJ::Thunk(v17, v47, 0x70u, &v24, Size) != -1 )
                          v21 = v24 != 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)v17 + 106) )
    UMPDOBJ::RestoreBitmaps(
      v17,
      (unsigned __int64)v39,
      (unsigned __int64)v18,
      (unsigned __int64)v31,
      v38,
      v37,
      v36,
      v35,
      v34,
      v33,
      v30,
      v12,
      v29,
      v13,
      v28,
      v14);
LABEL_24:
  XUMPDOBJ::~XUMPDOBJ(&v40);
  return v21;
}
