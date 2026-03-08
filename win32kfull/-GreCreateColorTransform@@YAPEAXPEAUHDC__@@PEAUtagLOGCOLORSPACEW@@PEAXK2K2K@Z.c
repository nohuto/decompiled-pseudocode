/*
 * XREFs of ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02D0580
 * Callers:
 *     NtGdiCreateColorTransform @ 0x1C02D0F90 (NtGdiCreateColorTransform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C029D0EC (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 */

struct HOBJ__ *__fastcall GreCreateColorTransform(
        HDC a1,
        struct tagLOGCOLORSPACEW *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned int a8)
{
  struct HOBJ__ *v8; // rdi
  _QWORD v13[2]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( *(_QWORD *)&a2->lcsSignature == 0x40050534F43LL && a2->lcsSize == 588 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v13, a1);
    if ( !v13[0] || (*(_DWORD *)(v13[0] + 36LL) & 0x5000) == 0x1000 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      v14 = 0LL;
      v8 = COLORTRANSFORMOBJ::hCreate((COLORTRANSFORMOBJ *)&v14, (struct XDCOBJ *)v13, a2, a3, a4, a5, a6, a7, a8);
      if ( !v8 )
        EngSetLastError(8u);
      if ( v14 )
        DEC_SHARE_REF_CNT(v14);
    }
    if ( v13[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
    return v8;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
