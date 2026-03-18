/*
 * XREFs of ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02CE604
 * Callers:
 *     NtGdiCreateColorTransform @ 0x1C02CF080 (NtGdiCreateColorTransform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013DFC4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C029A94C (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
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
  _OWORD v13[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v14; // [rsp+70h] [rbp-48h]
  _QWORD v15[2]; // [rsp+78h] [rbp-40h] BYREF
  _BYTE v16[40]; // [rsp+88h] [rbp-30h] BYREF

  v8 = 0LL;
  if ( *(_QWORD *)&a2->lcsSignature == 0x40050534F43LL && a2->lcsSize == 588 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v15, a1);
    if ( !v15[0] || (*(_DWORD *)(v15[0] + 36LL) & 0x5000) == 0x1000 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v13);
      v14 = 0LL;
      v8 = COLORTRANSFORMOBJ::hCreate((COLORTRANSFORMOBJ *)v13, (struct XDCOBJ *)v15, a2, a3, a4, a5, a6, a7, a8);
      if ( !v8 )
        EngSetLastError(8u);
      if ( v14 )
        DEC_SHARE_REF_CNT(v14);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
    }
    if ( v15[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v15);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v16);
    return v8;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
