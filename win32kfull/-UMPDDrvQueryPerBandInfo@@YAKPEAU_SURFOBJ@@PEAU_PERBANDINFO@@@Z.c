/*
 * XREFs of ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C02BF120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C029B708 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C029BE78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C029C4BC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02C136C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02C1674 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvQueryPerBandInfo(struct _SURFOBJ *a1, struct _PERBANDINFO *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // r14d
  UMPDOBJ *v7; // rbx
  unsigned int v8; // eax
  char *v9; // rax
  char *KernelPtr; // rax
  char *v11; // rax
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v14; // [rsp+40h] [rbp-29h] BYREF
  int v15; // [rsp+44h] [rbp-25h] BYREF
  int v16; // [rsp+48h] [rbp-21h] BYREF
  void *v17; // [rsp+50h] [rbp-19h] BYREF
  void *v18; // [rsp+58h] [rbp-11h] BYREF
  UMPDOBJ *v19; // [rsp+60h] [rbp-9h] BYREF
  __int128 v20; // [rsp+68h] [rbp-1h] BYREF
  struct _SURFOBJ *v21[2]; // [rsp+78h] [rbp+Fh] BYREF
  void *v22; // [rsp+88h] [rbp+1Fh]

  v2 = 0;
  v4 = 1;
  v16 = 0;
  v14 = 1;
  v5 = 0;
  v15 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v19);
  v7 = v19;
  v17 = 0LL;
  v18 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  *(_OWORD *)v21 = 0LL;
  if ( v19 )
  {
    if ( !*((_DWORD *)v19 + 106)
      || (v14 = 72,
          v8 = UMPDOBJ::bThunkLargeBitmap(v19, a1, &v17, &v18, &v16, &v15, &v14),
          v5 = v15,
          v4 = v8,
          (v14 = v8) != 0) )
    {
      *(_QWORD *)&v20 = 0x4B00000028LL;
      v21[0] = *(struct _SURFOBJ **)v7;
      v21[1] = a1;
      if ( (unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), &v21[1]) )
      {
        v9 = UMPDOBJ::_AllocUserMem(v7, 0x14u, 0);
        v22 = v9;
        if ( v9 )
        {
          if ( a2 )
          {
            KernelPtr = UMPDOBJ::GetKernelPtr((char **)v7, v9);
            *(_OWORD *)KernelPtr = *(_OWORD *)&a2->bRepeatThisBand;
            *((_DWORD *)KernelPtr + 4) = a2->ulVertRes;
          }
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v7, &v20, 0x28u, &v14, Size) != -1 && a2 )
          {
            v11 = UMPDOBJ::GetKernelPtr((char **)v7, (char *)v22);
            *(_OWORD *)&a2->bRepeatThisBand = *(_OWORD *)v11;
            a2->ulVertRes = *((_DWORD *)v11 + 4);
          }
          v4 = v14;
        }
      }
    }
    if ( v16 )
    {
      if ( v5 )
        UMPDOBJ::bDeleteLargeBitmaps(v7, a1, 0LL, 0LL);
      a1->pvBits = v17;
      a1->pvScan0 = v18;
    }
    v2 = v4;
  }
  XUMPDOBJ::~XUMPDOBJ(&v19);
  return v2;
}
