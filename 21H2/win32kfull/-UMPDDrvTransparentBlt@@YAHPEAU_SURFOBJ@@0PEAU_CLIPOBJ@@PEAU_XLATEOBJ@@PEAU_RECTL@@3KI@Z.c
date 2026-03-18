/*
 * XREFs of ?UMPDDrvTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KI@Z @ 0x1C02AB020
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

__int64 __fastcall UMPDDrvTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v11; // r14d
  int v12; // esi
  UMPDOBJ *v13; // rcx
  struct _SURFOBJ **v14; // r8
  UMPDOBJ *v15; // rbx
  struct _SURFOBJ *v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v21; // [rsp+90h] [rbp-80h] BYREF
  int v22; // [rsp+94h] [rbp-7Ch] BYREF
  int v23; // [rsp+98h] [rbp-78h] BYREF
  int v24; // [rsp+9Ch] [rbp-74h] BYREF
  int v25; // [rsp+A0h] [rbp-70h] BYREF
  struct _SURFOBJ *v26; // [rsp+A8h] [rbp-68h] BYREF
  void *v27; // [rsp+B0h] [rbp-60h] BYREF
  void *v28; // [rsp+B8h] [rbp-58h] BYREF
  void *v29; // [rsp+C0h] [rbp-50h] BYREF
  void *v30; // [rsp+C8h] [rbp-48h] BYREF
  UMPDOBJ *v31; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v32; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v33; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v34; // [rsp+E8h] [rbp-28h]
  _QWORD v35[10]; // [rsp+F0h] [rbp-20h] BYREF

  v8 = 0;
  v33 = a5;
  v34 = a6;
  v32 = a3;
  v11 = 0;
  v26 = a2;
  v12 = 0;
  v21 = 1;
  v25 = 0;
  v24 = 0;
  v22 = 0;
  v23 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v31);
  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  memset(v35, 0, sizeof(v35));
  v15 = v31;
  if ( !v31 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v13, &v26, v14) )
    goto LABEL_20;
  v16 = v26;
  if ( !*((_DWORD *)v15 + 106) )
    goto LABEL_9;
  if ( a4 )
    v17 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 168;
  else
    v17 = 144;
  v21 = v17;
  v18 = UMPDOBJ::bThunkLargeBitmaps(
          v15,
          a1,
          v26,
          0LL,
          &v30,
          &v29,
          &v28,
          &v27,
          0LL,
          0LL,
          &v25,
          &v22,
          &v24,
          &v23,
          0LL,
          0LL,
          &v21);
  v11 = v22;
  v12 = v23;
  v8 = v18;
  v21 = v18;
  if ( v18 )
  {
    v8 = 0;
LABEL_9:
    v35[0] = 0x4A00000050LL;
    v35[2] = *(_QWORD *)v15;
    v35[5] = v32;
    v35[7] = v33;
    v35[8] = v34;
    v35[9] = __PAIR64__(a8, a7);
    v35[3] = a1;
    v35[4] = v16;
    v35[6] = a4;
    if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), (struct _SURFOBJ **)&v35[3]) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 80), (struct _SURFOBJ **)&v35[4]) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), (const void **)&v35[5], 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v15, (struct _XLATEOBJ **)&v35[6]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v35[7], 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v35[8], 0x10u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v15, v35, 0x50u, &v21, Size) != -1 )
                {
                  if ( v21 )
                    v8 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)v15 + 106) )
    UMPDOBJ::RestoreBitmaps(
      v15,
      (unsigned __int64)a1,
      (unsigned __int64)v16,
      0LL,
      v30,
      v29,
      v28,
      v27,
      0LL,
      0LL,
      v25,
      v11,
      v24,
      v12,
      0,
      0);
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v31);
  return v8;
}
