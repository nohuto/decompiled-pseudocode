/*
 * XREFs of ?UMPDDrvStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C02C01B0
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

_BOOL8 __fastcall UMPDDrvStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        struct _BRUSHOBJ *a12,
        unsigned int a13)
{
  struct _SURFOBJ *v13; // rdi
  int v14; // r15d
  int v15; // esi
  int v16; // r14d
  UMPDOBJ *v17; // rcx
  struct _SURFOBJ **v18; // r8
  UMPDOBJ *v19; // rbx
  struct _SURFOBJ *v20; // r12
  unsigned int v21; // eax
  unsigned int v22; // eax
  BOOL v23; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v26; // [rsp+90h] [rbp-80h] BYREF
  int v27; // [rsp+94h] [rbp-7Ch] BYREF
  int v28; // [rsp+98h] [rbp-78h] BYREF
  int v29; // [rsp+9Ch] [rbp-74h] BYREF
  int v30; // [rsp+A0h] [rbp-70h] BYREF
  int v31; // [rsp+A4h] [rbp-6Ch] BYREF
  int v32; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v33; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v34; // [rsp+B8h] [rbp-58h] BYREF
  void *v35; // [rsp+C0h] [rbp-50h] BYREF
  void *v36; // [rsp+C8h] [rbp-48h] BYREF
  void *v37; // [rsp+D0h] [rbp-40h] BYREF
  void *v38; // [rsp+D8h] [rbp-38h] BYREF
  void *v39; // [rsp+E0h] [rbp-30h] BYREF
  void *v40; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v41; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v42; // [rsp+F8h] [rbp-18h] BYREF
  struct _CLIPOBJ *v43; // [rsp+100h] [rbp-10h]
  struct tagCOLORADJUSTMENT *v44; // [rsp+108h] [rbp-8h]
  struct _POINTL *v45; // [rsp+110h] [rbp+0h]
  struct _RECTL *v46; // [rsp+118h] [rbp+8h]
  struct _RECTL *v47; // [rsp+120h] [rbp+10h]
  struct _POINTL *v48; // [rsp+128h] [rbp+18h]
  struct _BRUSHOBJ *v49; // [rsp+130h] [rbp+20h]
  _DWORD v50[4]; // [rsp+140h] [rbp+30h] BYREF
  __int64 v51; // [rsp+150h] [rbp+40h]
  struct _SURFOBJ *v52; // [rsp+158h] [rbp+48h] BYREF
  struct _SURFOBJ *v53; // [rsp+160h] [rbp+50h] BYREF
  struct _SURFOBJ *v54; // [rsp+168h] [rbp+58h] BYREF
  void *v55; // [rsp+170h] [rbp+60h] BYREF
  struct _XLATEOBJ *v56; // [rsp+178h] [rbp+68h] BYREF
  void *v57; // [rsp+180h] [rbp+70h] BYREF
  void *v58; // [rsp+188h] [rbp+78h] BYREF
  void *v59; // [rsp+190h] [rbp+80h] BYREF
  void *v60; // [rsp+198h] [rbp+88h] BYREF
  void *v61; // [rsp+1A0h] [rbp+90h] BYREF
  unsigned int v62; // [rsp+1A8h] [rbp+98h]
  void *v63; // [rsp+1B0h] [rbp+A0h] BYREF
  unsigned int v64; // [rsp+1B8h] [rbp+A8h]

  v13 = a1;
  v44 = a6;
  v14 = 0;
  v15 = 0;
  v45 = a7;
  v16 = 0;
  v46 = a8;
  v47 = a9;
  v48 = a10;
  v41 = a1;
  v49 = a12;
  v43 = a4;
  v33 = a3;
  v34 = a2;
  v26 = 1;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v42);
  v40 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v39 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  memset_0(v50, 0, 0x80uLL);
  v19 = v42;
  if ( !v42 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v17, &v34, v18) )
  {
    v23 = 0;
    goto LABEL_25;
  }
  v20 = v34;
  if ( !*((_DWORD *)v19 + 106) )
    goto LABEL_9;
  if ( a5 )
    v21 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 280;
  else
    v21 = 256;
  v26 = v21;
  v22 = UMPDOBJ::bThunkLargeBitmaps(
          v19,
          v13,
          v34,
          v33,
          &v40,
          &v39,
          &v38,
          &v37,
          &v36,
          &v35,
          &v32,
          &v27,
          &v31,
          &v28,
          &v30,
          &v29,
          &v26);
  v14 = v27;
  v23 = v22;
  v15 = v28;
  v16 = v29;
  v26 = v22;
  if ( v22 )
  {
    v13 = v41;
LABEL_9:
    v50[0] = 128;
    v50[1] = 69;
    v51 = *(_QWORD *)v19;
    v54 = v33;
    v55 = v43;
    v57 = v44;
    v58 = v45;
    v59 = v46;
    v60 = v47;
    v61 = v48;
    v62 = a11;
    v63 = v49;
    v64 = a13;
    v52 = v13;
    v53 = v20;
    v56 = a5;
    v23 = 0;
    if ( (unsigned int)UMPDOBJ::pso(v19, (UMPDOBJ *)((char *)v19 + 64), &v52) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v19, (UMPDOBJ *)((char *)v19 + 80), &v53) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v19, (UMPDOBJ *)((char *)v19 + 96), &v54) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v19, (UMPDOBJ *)((char *)v19 + 112), (const void **)&v55, 0x18u, 0LL) )
          {
            if ( (unsigned int)UMPDOBJ::pxlo(v19, &v56) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v19, (const void **)&v57, 0x18u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v19, (const void **)&v58, 8u) )
                {
                  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v19, (const void **)&v59, 0x10u) )
                  {
                    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v19, (const void **)&v60, 0x10u) )
                    {
                      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v19, (const void **)&v61, 8u) )
                      {
                        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                                             v19,
                                             (UMPDOBJ *)((char *)v19 + 144),
                                             (const void **)&v63,
                                             0x18u,
                                             0LL) )
                        {
                          LODWORD(Size) = 4;
                          if ( (unsigned int)UMPDOBJ::Thunk(v19, v50, 0x80u, &v26, Size) != -1 )
                            v23 = v26 != 0;
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
  }
  if ( *((_DWORD *)v19 + 106) )
    UMPDOBJ::RestoreBitmaps(
      v19,
      (unsigned __int64)v41,
      (unsigned __int64)v20,
      (unsigned __int64)v33,
      v40,
      v39,
      v38,
      v37,
      v36,
      v35,
      v32,
      v14,
      v31,
      v15,
      v30,
      v16);
LABEL_25:
  XUMPDOBJ::~XUMPDOBJ(&v42);
  return v23;
}
