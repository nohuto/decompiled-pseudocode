/*
 * XREFs of ?UMPDDrvLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02BDBA0
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

__int64 __fastcall UMPDDrvLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  unsigned int v9; // edi
  int v11; // r15d
  UMPDOBJ *v14; // rbx
  unsigned int v15; // eax
  int v16; // esi
  size_t Size; // [rsp+20h] [rbp-B1h]
  unsigned int v19; // [rsp+40h] [rbp-91h] BYREF
  int v20; // [rsp+44h] [rbp-8Dh] BYREF
  int v21; // [rsp+48h] [rbp-89h] BYREF
  int v22; // [rsp+4Ch] [rbp-85h]
  void *v23; // [rsp+50h] [rbp-81h] BYREF
  void *v24; // [rsp+58h] [rbp-79h] BYREF
  UMPDOBJ *v25; // [rsp+60h] [rbp-71h] BYREF
  struct _RECTL *v26; // [rsp+68h] [rbp-69h]
  _DWORD v27[4]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v28; // [rsp+80h] [rbp-51h]
  struct _SURFOBJ *v29; // [rsp+88h] [rbp-49h] BYREF
  void *v30; // [rsp+90h] [rbp-41h] BYREF
  void *v31; // [rsp+98h] [rbp-39h] BYREF
  int v32; // [rsp+A0h] [rbp-31h]
  int v33; // [rsp+A4h] [rbp-2Dh]
  int v34; // [rsp+A8h] [rbp-29h]
  int v35; // [rsp+ACh] [rbp-25h]
  void *v36; // [rsp+B0h] [rbp-21h] BYREF
  unsigned int v37; // [rsp+B8h] [rbp-19h]

  v9 = 0;
  v26 = a8;
  v21 = 0;
  v11 = 0;
  v20 = 0;
  v22 = a4;
  v19 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  v23 = 0LL;
  v24 = 0LL;
  memset_0(v27, 0, 0x50uLL);
  v14 = v25;
  if ( v25 )
  {
    if ( !*((_DWORD *)v25 + 106)
      || (v19 = 152,
          v15 = UMPDOBJ::bThunkLargeBitmap(v25, a1, &v23, &v24, &v21, &v20, &v19),
          v11 = v20,
          v16 = v15,
          (v19 = v15) != 0) )
    {
      v27[0] = 80;
      v27[1] = 31;
      v28 = *(_QWORD *)v14;
      v32 = v22;
      v33 = a5;
      v34 = a6;
      v35 = a7;
      v36 = v26;
      v37 = a9;
      v29 = a1;
      v30 = a2;
      v31 = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), &v29)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&v30, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 144), (const void **)&v31, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v36, 0x10u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, v27, 0x50u, &v19, Size) == -1)
        || (v16 = 1, !v19) )
      {
        v16 = 0;
      }
    }
    if ( v21 )
    {
      if ( v11 )
        UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
      a1->pvBits = v23;
      a1->pvScan0 = v24;
    }
    v9 = v16;
  }
  XUMPDOBJ::~XUMPDOBJ(&v25);
  return v9;
}
