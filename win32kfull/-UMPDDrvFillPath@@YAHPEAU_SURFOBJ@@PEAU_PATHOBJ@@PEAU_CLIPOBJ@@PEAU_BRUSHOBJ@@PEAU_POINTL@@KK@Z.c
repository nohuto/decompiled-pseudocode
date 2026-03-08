/*
 * XREFs of ?UMPDDrvFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02BCE40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C029C4BC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02C136C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02C1674 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  int v9; // r15d
  UMPDOBJ *v12; // rbx
  unsigned int v13; // eax
  int v14; // esi
  size_t Size; // [rsp+20h] [rbp-D1h]
  unsigned int v17; // [rsp+40h] [rbp-B1h] BYREF
  int v18; // [rsp+44h] [rbp-ADh] BYREF
  int v19; // [rsp+48h] [rbp-A9h] BYREF
  void *v20; // [rsp+50h] [rbp-A1h] BYREF
  void *v21; // [rsp+58h] [rbp-99h] BYREF
  UMPDOBJ *v22; // [rsp+60h] [rbp-91h] BYREF
  struct _BRUSHOBJ *v23; // [rsp+68h] [rbp-89h]
  struct _POINTL *v24; // [rsp+70h] [rbp-81h]
  _DWORD v25[4]; // [rsp+80h] [rbp-71h] BYREF
  __int64 v26; // [rsp+90h] [rbp-61h]
  struct _SURFOBJ *v27; // [rsp+98h] [rbp-59h] BYREF
  void *v28; // [rsp+A0h] [rbp-51h] BYREF
  void *v29; // [rsp+A8h] [rbp-49h] BYREF
  void *v30; // [rsp+B8h] [rbp-39h] BYREF
  void *v31; // [rsp+C0h] [rbp-31h] BYREF
  unsigned int v32; // [rsp+D8h] [rbp-19h]
  unsigned int v33; // [rsp+DCh] [rbp-15h]

  v7 = 0;
  v24 = a5;
  v19 = 0;
  v9 = 0;
  v18 = 0;
  v23 = a4;
  v17 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v22);
  v20 = 0LL;
  v21 = 0LL;
  memset_0(v25, 0, 0x60uLL);
  v12 = v22;
  if ( v22 )
  {
    if ( !*((_DWORD *)v22 + 106)
      || (v17 = 168,
          v13 = UMPDOBJ::bThunkLargeBitmap(v22, a1, &v20, &v21, &v19, &v18, &v17),
          v9 = v18,
          v14 = v13,
          (v17 = v13) != 0) )
    {
      v25[0] = 96;
      v25[1] = 15;
      v26 = *(_QWORD *)v12;
      v30 = v23;
      v31 = v24;
      v32 = a6;
      v33 = a7;
      v27 = a1;
      v28 = a2;
      v29 = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), &v27)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 224), (const void **)&v28, 8u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), (const void **)&v29, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 144), (const void **)&v30, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v31, 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v25, 0x60u, &v17, Size) == -1)
        || (v14 = 1, !v17) )
      {
        v14 = 0;
      }
    }
    if ( v19 )
    {
      if ( v9 )
        UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
      a1->pvBits = v20;
      a1->pvScan0 = v21;
    }
    v7 = v14;
  }
  XUMPDOBJ::~XUMPDOBJ(&v22);
  return v7;
}
