/*
 * XREFs of ?UMPDDrvNextBand@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1C02BDDD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C029B708 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C029C4BC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02C136C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02C1674 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvNextBand(struct _SURFOBJ *a1, struct _POINTL *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // r14d
  UMPDOBJ *v7; // rbx
  unsigned int v8; // eax
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v11; // [rsp+40h] [rbp-29h] BYREF
  int v12; // [rsp+44h] [rbp-25h] BYREF
  int v13; // [rsp+48h] [rbp-21h] BYREF
  void *v14; // [rsp+50h] [rbp-19h] BYREF
  void *v15; // [rsp+58h] [rbp-11h] BYREF
  UMPDOBJ *v16; // [rsp+60h] [rbp-9h] BYREF
  __int128 v17; // [rsp+68h] [rbp-1h] BYREF
  struct _SURFOBJ *v18[2]; // [rsp+78h] [rbp+Fh] BYREF
  void *v19; // [rsp+88h] [rbp+1Fh] BYREF

  v2 = 0;
  v4 = 1;
  v13 = 0;
  v11 = 1;
  v5 = 0;
  v12 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v16);
  v7 = v16;
  v14 = 0LL;
  v15 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  *(_OWORD *)v18 = 0LL;
  if ( v16 )
  {
    if ( !*((_DWORD *)v16 + 106)
      || (v11 = 56,
          v8 = UMPDOBJ::bThunkLargeBitmap(v16, a1, &v14, &v15, &v13, &v12, &v11),
          v5 = v12,
          v4 = v8,
          (v11 = v8) != 0) )
    {
      *(_QWORD *)&v17 = 0x3A00000028LL;
      v18[0] = *(struct _SURFOBJ **)v7;
      v18[1] = a1;
      v19 = a2;
      if ( (unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), &v18[1]) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v7, (const void **)&v19, 8u) )
        {
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v7, &v17, 0x28u, &v11, Size) != -1 && a2 )
            *a2 = *(struct _POINTL *)UMPDOBJ::GetKernelPtr((char **)v7, (char *)v19);
          v4 = v11;
        }
      }
    }
    if ( v13 )
    {
      if ( v5 )
        UMPDOBJ::bDeleteLargeBitmaps(v7, a1, 0LL, 0LL);
      a1->pvBits = v14;
      a1->pvScan0 = v15;
    }
    v2 = v4;
  }
  XUMPDOBJ::~XUMPDOBJ(&v16);
  return v2;
}
