/*
 * XREFs of ?UMPDDrvEndDoc@@YAHPEAU_SURFOBJ@@K@Z @ 0x1C02BC940
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C029C4BC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02C136C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02C1674 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvEndDoc(struct _SURFOBJ *a1, int a2)
{
  unsigned int v2; // edi
  int v4; // r14d
  UMPDOBJ *v6; // rbx
  unsigned int v7; // eax
  int v8; // esi
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v11; // [rsp+40h] [rbp-29h] BYREF
  int v12; // [rsp+44h] [rbp-25h] BYREF
  int v13; // [rsp+48h] [rbp-21h] BYREF
  void *v14; // [rsp+50h] [rbp-19h] BYREF
  void *v15; // [rsp+58h] [rbp-11h] BYREF
  UMPDOBJ *v16; // [rsp+60h] [rbp-9h] BYREF
  __int128 v17; // [rsp+68h] [rbp-1h] BYREF
  struct _SURFOBJ *v18[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+88h] [rbp+1Fh]

  v2 = 0;
  v11 = 1;
  v13 = 0;
  v12 = 0;
  v4 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v16);
  v6 = v16;
  v14 = 0LL;
  v15 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  *(_OWORD *)v18 = 0LL;
  if ( v16 )
  {
    if ( !*((_DWORD *)v16 + 106)
      || (v11 = 48,
          v7 = UMPDOBJ::bThunkLargeBitmap(v16, a1, &v14, &v15, &v13, &v12, &v11),
          v4 = v12,
          v8 = v7,
          (v11 = v7) != 0) )
    {
      *(_QWORD *)&v17 = 0x2200000028LL;
      v18[0] = *(struct _SURFOBJ **)v6;
      v18[1] = a1;
      LODWORD(v19) = a2;
      if ( !(unsigned int)UMPDOBJ::pso(v6, (UMPDOBJ *)((char *)v6 + 64), &v18[1])
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v6, &v17, 0x28u, &v11, Size) == -1)
        || (v8 = 1, !v11) )
      {
        v8 = 0;
      }
    }
    if ( v13 )
    {
      if ( v4 )
        UMPDOBJ::bDeleteLargeBitmaps(v6, a1, 0LL, 0LL);
      a1->pvBits = v14;
      a1->pvScan0 = v15;
    }
    v2 = v8;
  }
  XUMPDOBJ::~XUMPDOBJ(&v16);
  return v2;
}
