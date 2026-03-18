/*
 * XREFs of ?UMPDDrvStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0129680
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0129B98 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0129C10 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0129D50 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0129FAC (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C012A154 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C012A484 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C012A700 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z @ 0x1C015E308 (-bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C02A7BAC (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02AB6B0 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

_BOOL8 __fastcall UMPDDrvStretchBlt(
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
  struct tagCOLORADJUSTMENT *v42; // [rsp+108h] [rbp-8h]
  struct _POINTL *v43; // [rsp+110h] [rbp+0h]
  struct _RECTL *v44; // [rsp+118h] [rbp+8h]
  struct _RECTL *v45; // [rsp+120h] [rbp+10h]
  struct _POINTL *v46; // [rsp+128h] [rbp+18h]
  _QWORD v47[16]; // [rsp+130h] [rbp+20h] BYREF

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
  memset(v47, 0, sizeof(v47));
  v17 = v40;
  if ( !v40 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v15, &v32, v16) )
  {
    v21 = 0;
    goto LABEL_26;
  }
  v18 = v32;
  if ( *((_DWORD *)v17 + 106) )
  {
    if ( a5 )
      v19 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 256;
    else
      v19 = 232;
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
    if ( !v20 )
      goto LABEL_23;
    v11 = v39;
  }
  v47[0] = 0x1400000080LL;
  v47[2] = *(_QWORD *)v17;
  v47[5] = v31;
  v47[6] = v41;
  v47[8] = v42;
  v47[9] = v43;
  v47[10] = v44;
  v47[11] = v45;
  v47[12] = v46;
  LODWORD(v47[13]) = a11;
  v47[3] = v11;
  v47[4] = v18;
  v47[7] = a5;
  v21 = 0;
  if ( (unsigned int)UMPDOBJ::pso(v17, (UMPDOBJ *)((char *)v17 + 64), (struct _SURFOBJ **)&v47[3], v12) )
  {
    if ( (unsigned int)UMPDOBJ::pso(v17, (UMPDOBJ *)((char *)v17 + 80), (struct _SURFOBJ **)&v47[4], v13) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v17, (UMPDOBJ *)((char *)v17 + 96), (struct _SURFOBJ **)&v47[5], v14) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v17, (UMPDOBJ *)((char *)v17 + 112), (void **)&v47[6], 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v17, (struct _XLATEOBJ **)&v47[7]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (void **)&v47[8], 0x18u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (void **)&v47[9], 8u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (void **)&v47[10], 0x10u) )
                {
                  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (void **)&v47[11], 0x10u) )
                  {
                    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (void **)&v47[12], 8u) )
                    {
                      LODWORD(Size) = 4;
                      if ( UMPDOBJ::Thunk(v17, v47, 0x80u, &v24, Size) != -1 )
                      {
                        if ( v24 )
                          v21 = 1;
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
LABEL_23:
  if ( *((_DWORD *)v17 + 106) )
    UMPDOBJ::RestoreBitmaps(v17, v39, v18, v31, v38, v37, v36, v35, v34, v33, v30, v12, v29, v13, v28, v14);
LABEL_26:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v40);
  return v21;
}
