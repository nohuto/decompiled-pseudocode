/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00D7854
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00D79DC (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00D7AB8 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0191550 (-RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C0191750 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        struct tagSIZE a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        struct tagSIZE *a8)
{
  bool v8; // zf
  struct tagSIZE v13; // rax
  unsigned int cy; // edx
  unsigned int v15; // eax
  DpiInternal *v16; // rcx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+28h] [rbp-10h]
  struct _DPI_INFORMATION *v19; // [rsp+78h] [rbp+40h]

  v8 = a1->cx == 0;
  a8[3] = *a1;
  a8[4] = *this;
  if ( !v8 && a1->cy )
    a8[5] = DpiInternal::CalcDpi((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  v13 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  if ( !v13.cx || !v13.cy )
    v13 = a8[5];
  a8[6] = v13;
  a8[8].cx = 200;
  LODWORD(v19) = 20000 * a8[5].cx / 0x6900u;
  HIDWORD(v19) = 20000 * a8[5].cy / 0x6900u;
  a8[7] = (struct tagSIZE)v19;
  if ( a5 )
  {
    if ( !a6 )
    {
LABEL_8:
      a8[1].cy = (100 * a5 + 48) / 0x60;
      goto LABEL_9;
    }
  }
  else if ( a6 )
  {
    goto LABEL_21;
  }
  WdLogSingleEntry0(1LL);
  if ( a5 )
    goto LABEL_8;
  if ( !a6 )
  {
    v16 = 0LL;
    if ( *(_DWORD *)(*(_QWORD *)&a3 + 8LL) != 1 )
    {
      do
      {
        if ( (unsigned int)(((int)v19 + HIDWORD(v19)) / 2) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a3 + 24LL)
                                                                       + 4LL * (_QWORD)v16) )
          break;
        v16 = (DpiInternal *)(unsigned int)((_DWORD)v16 + 1);
      }
      while ( (unsigned int)v16 < *(_DWORD *)(*(_QWORD *)&a3 + 8LL) - 1 );
    }
    LODWORD(v17) = 0;
    v15 = DpiInternal::SatisfyMinResolutionBarForScaleIdx(v16, 0, (int)*this, a3, v17, v18);
    goto LABEL_27;
  }
LABEL_21:
  v15 = RoundToNearestScaleFactor(a6, *(const struct _DPI_SCALE_FACTOR_COLLECTION **)&a3);
  a8[7].cy = a6;
  a8[7].cx = a6;
LABEL_27:
  a8[1].cy = v15;
LABEL_9:
  if ( !a8[1].cy )
    WdLogSingleEntry0(1LL);
  if ( !a8[4].cx || !a8[4].cy )
    WdLogSingleEntry0(1LL);
  if ( a5 )
  {
    a8[10].cy = 1234569;
    cy = (100 * a5 + 48) / 0x60;
  }
  else
  {
    cy = a8[1].cy;
  }
  a8[1].cx = cy;
}
