/*
 * XREFs of ?UMPDDrvAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02BACB0
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

__int64 __fastcall UMPDDrvAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v7; // edi
  int v10; // r14d
  int v11; // esi
  UMPDOBJ *v12; // rcx
  struct _SURFOBJ **v13; // r8
  UMPDOBJ *v14; // rbx
  struct _SURFOBJ *v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v20; // [rsp+90h] [rbp-80h] BYREF
  int v21; // [rsp+94h] [rbp-7Ch] BYREF
  int v22; // [rsp+98h] [rbp-78h] BYREF
  int v23; // [rsp+9Ch] [rbp-74h] BYREF
  int v24; // [rsp+A0h] [rbp-70h] BYREF
  struct _SURFOBJ *v25; // [rsp+A8h] [rbp-68h] BYREF
  void *v26; // [rsp+B0h] [rbp-60h] BYREF
  void *v27; // [rsp+B8h] [rbp-58h] BYREF
  void *v28; // [rsp+C0h] [rbp-50h] BYREF
  void *v29; // [rsp+C8h] [rbp-48h] BYREF
  UMPDOBJ *v30; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v31; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v32; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v33; // [rsp+E8h] [rbp-28h]
  struct _BLENDOBJ *v34; // [rsp+F0h] [rbp-20h]
  _DWORD v35[4]; // [rsp+100h] [rbp-10h] BYREF
  __int64 v36; // [rsp+110h] [rbp+0h]
  struct _SURFOBJ *v37; // [rsp+118h] [rbp+8h] BYREF
  struct _SURFOBJ *v38; // [rsp+120h] [rbp+10h] BYREF
  void *v39; // [rsp+128h] [rbp+18h] BYREF
  struct _XLATEOBJ *v40; // [rsp+130h] [rbp+20h] BYREF
  void *v41; // [rsp+138h] [rbp+28h] BYREF
  void *v42; // [rsp+140h] [rbp+30h] BYREF
  void *v43; // [rsp+148h] [rbp+38h] BYREF

  v7 = 0;
  v32 = a5;
  v33 = a6;
  v10 = 0;
  v34 = a7;
  v11 = 0;
  v31 = a3;
  v25 = a2;
  v20 = 1;
  v24 = 0;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  memset_0(v35, 0, 0x50uLL);
  v14 = v30;
  if ( !v30 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v12, &v25, v13) )
    goto LABEL_21;
  v15 = v25;
  if ( !*((_DWORD *)v14 + 106) )
    goto LABEL_9;
  if ( a4 )
    v16 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 176;
  else
    v16 = 152;
  v20 = v16;
  v17 = UMPDOBJ::bThunkLargeBitmaps(
          v14,
          a1,
          v25,
          0LL,
          &v29,
          &v28,
          &v27,
          &v26,
          0LL,
          0LL,
          &v24,
          &v21,
          &v23,
          &v22,
          0LL,
          0LL,
          &v20);
  v10 = v21;
  v11 = v22;
  v7 = v17;
  v20 = v17;
  if ( v17 )
  {
    v7 = 0;
LABEL_9:
    v35[0] = 80;
    v35[1] = 71;
    v36 = *(_QWORD *)v14;
    v39 = v31;
    v41 = v32;
    v42 = v33;
    v43 = v34;
    v37 = a1;
    v38 = v15;
    v40 = a4;
    if ( (unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), &v37) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 80), &v38) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&v39, 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v14, &v40) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v41, 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v42, 0x10u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                                     v14,
                                     (UMPDOBJ *)((char *)v14 + 304),
                                     (const void **)&v43,
                                     4u,
                                     0LL) )
                {
                  LODWORD(Size) = 4;
                  if ( (unsigned int)UMPDOBJ::Thunk(v14, v35, 0x50u, &v20, Size) != -1 )
                  {
                    if ( v20 )
                      v7 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)v14 + 106) )
    UMPDOBJ::RestoreBitmaps(
      v14,
      (unsigned __int64)a1,
      (unsigned __int64)v15,
      0LL,
      v29,
      v28,
      v27,
      v26,
      0LL,
      0LL,
      v24,
      v10,
      v23,
      v11,
      0,
      0);
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v7;
}
