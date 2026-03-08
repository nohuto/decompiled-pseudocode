/*
 * XREFs of ?UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02BD4A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C029C4BC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C029C850 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02C136C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02C1674 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

_BOOL8 __fastcall UMPDDrvGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  int v14; // r14d
  UMPDOBJ *v15; // rbx
  int v16; // esi
  unsigned int v17; // esi
  ULONG v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  unsigned int v23; // eax
  BOOL v24; // edi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  void *v30; // [rsp+50h] [rbp-B0h] BYREF
  void *v31; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v32; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL *v33; // [rsp+68h] [rbp-98h]
  struct _POINTL *v34; // [rsp+70h] [rbp-90h]
  _DWORD v35[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v38; // [rsp+98h] [rbp-68h] BYREF
  void *v39; // [rsp+A0h] [rbp-60h] BYREF
  struct _XLATEOBJ *v40; // [rsp+A8h] [rbp-58h] BYREF
  void *v41; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  void *v44; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+CCh] [rbp-34h]
  void *v47; // [rsp+D0h] [rbp-30h] BYREF
  void *v48; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E4h] [rbp-1Ch]

  v33 = a8;
  v34 = a9;
  v27 = 1;
  v29 = 0;
  v14 = 0;
  v28 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v30 = 0LL;
  v31 = 0LL;
  v15 = v32;
  v36 = 0LL;
  v43 = 0;
  v46 = 0;
  v50 = 0;
  if ( !v32 )
    goto LABEL_31;
  v35[0] = 104;
  v35[1] = 68;
  v37 = *(_QWORD *)v32;
  v47 = v33;
  v48 = v34;
  v41 = a4;
  v38 = a1;
  v39 = a2;
  v40 = a3;
  v42 = a5;
  v44 = a6;
  v45 = a7;
  v49 = a10;
  if ( a10 < 2 )
  {
    v16 = 8;
  }
  else
  {
    if ( a10 != 2 )
      goto LABEL_31;
    v16 = 12;
  }
  v17 = a7 * v16;
  if ( *((_DWORD *)v32 + 106) )
  {
    if ( a3 )
      v18 = ((4 * a3->cEntries + 7) & 0xFFFFFFF8) + 184;
    else
      v18 = 160;
    v19 = 16 * a5;
    if ( 16 * (unsigned __int64)a5 <= 0xFFFFFFFF && v19 + 7 >= v19 )
    {
      v20 = (v19 + 7) & 0xFFFFFFF8;
      if ( v17 + 7 >= v17 )
      {
        v21 = (v17 + 7) & 0xFFFFFFF8;
        v22 = v18 + v20;
        if ( v18 + v20 >= v18 && v22 + v21 >= v22 )
        {
          v27 = v22 + v21;
          v23 = UMPDOBJ::bThunkLargeBitmap(v32, a1, &v30, &v31, &v29, &v28, &v27);
          v14 = v28;
          v24 = v23;
          v27 = v23;
          if ( !v23 )
            goto LABEL_27;
          goto LABEL_16;
        }
      }
    }
LABEL_31:
    v24 = 0;
    goto LABEL_32;
  }
LABEL_16:
  v24 = 0;
  if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), &v38) )
  {
    if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), (const void **)&v39, 0x18u, 0LL) )
    {
      if ( (unsigned int)UMPDOBJ::pxlo(v15, &v40) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v41, 16 * a5) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v44, v17) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v47, 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v48, 8u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v15, v35, 0x68u, &v27, Size) != -1 )
                {
                  if ( v27 )
                    v24 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_27:
  if ( v29 )
  {
    if ( v14 )
      UMPDOBJ::bDeleteLargeBitmaps(v15, a1, 0LL, 0LL);
    a1->pvBits = v30;
    a1->pvScan0 = v31;
  }
LABEL_32:
  XUMPDOBJ::~XUMPDOBJ(&v32);
  return v24;
}
