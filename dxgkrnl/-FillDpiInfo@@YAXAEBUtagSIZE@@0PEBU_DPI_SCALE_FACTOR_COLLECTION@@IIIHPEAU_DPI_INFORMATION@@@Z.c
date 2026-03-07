void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        struct tagSIZE *a3,
        int a4,
        DpiInternal *a5,
        unsigned int a6,
        unsigned int a7,
        struct _DPI_INFORMATION *a8)
{
  int v8; // ebx
  struct tagSIZE v14; // rax
  __int64 v15; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v16; // rdx
  unsigned int PlateauIndexForScaleFactor; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  bool v20; // zf
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  struct _DPI_SCALE_FACTOR_COLLECTION *v24; // [rsp+20h] [rbp-68h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v25; // [rsp+C8h] [rbp+40h]

  v8 = 0;
  *((struct tagSIZE *)a8 + 3) = *a1;
  *((struct tagSIZE *)a8 + 4) = *this;
  if ( a1->cx && a1->cy )
    *((struct tagSIZE *)a8 + 5) = DpiInternal::CalcDpi((DpiInternal *)this, a1, a3);
  v14 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, a3);
  if ( !v14.cx || !v14.cy )
    v14 = (struct tagSIZE)*((_QWORD *)a8 + 5);
  *((struct tagSIZE *)a8 + 6) = v14;
  *((_DWORD *)a8 + 16) = a4;
  if ( a4 == 0xFFFF )
  {
    v15 = (unsigned int)(a3[1].cx - 1);
    if ( a3[1].cx != 1 )
    {
      do
      {
        if ( (unsigned int)(100 * *((_DWORD *)a8 + 9)) / *(_DWORD *)(*(_QWORD *)&a3[2] + 4 * v15) >= 0x2D0 )
          break;
        v20 = (_DWORD)v15 == 1;
        v15 = (unsigned int)(v15 - 1);
      }
      while ( !v20 );
    }
    v21 = 100;
    if ( (_DWORD)v15 )
      v21 = *(_DWORD *)(*(_QWORD *)&a3[3] + 4LL * (unsigned int)(v15 - 1)) + 1;
    LODWORD(v25) = v21;
    HIDWORD(v25) = v21;
  }
  else
  {
    v15 = 940802361LL;
    LODWORD(v25) = 100 * *((_DWORD *)a8 + 10) * a4 / 0x6900u;
    HIDWORD(v25) = 100 * *((_DWORD *)a8 + 11) * a4 / 0x6900u;
  }
  *((_QWORD *)a8 + 7) = v25;
  if ( a7 )
  {
    if ( (_DWORD)a5 )
    {
      if ( !a6 )
      {
LABEL_24:
        v19 = (100 * (int)a5 + 48) / 0x60u;
        goto LABEL_10;
      }
    }
    else if ( a6 )
    {
      goto LABEL_32;
    }
    WdLogSingleEntry1(1LL, 885LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v23,
        v22,
        v15,
        0,
        2,
        -1,
        (__int64)L"((Win8StyleDpiOverride != 0) && (PreferredScaleFactor == 0)) || ((Win8StyleDpiOverride == 0) && (Prefer"
                  "redScaleFactor != 0))",
        117,
        0,
        0,
        0,
        0);
    if ( (_DWORD)a5 )
      goto LABEL_24;
    if ( !a6 )
    {
      v16 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)a3;
      goto LABEL_8;
    }
LABEL_32:
    v18 = RoundToNearestScaleFactor(a6, (const struct _DPI_SCALE_FACTOR_COLLECTION *)a3);
    *((_DWORD *)a8 + 15) = a6;
    *((_DWORD *)a8 + 14) = a6;
    goto LABEL_9;
  }
  v16 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)a3;
  if ( a6 )
  {
    v18 = RoundToNearestScaleFactor(a6, (const struct _DPI_SCALE_FACTOR_COLLECTION *)a3);
    goto LABEL_9;
  }
LABEL_8:
  PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                 (DpiInternal *)(unsigned int)((HIDWORD(v25) + (int)v25) / 2),
                                 (__int64)v16,
                                 (const struct _DPI_SCALE_FACTOR_COLLECTION *)v15);
  LODWORD(v24) = 0;
  v18 = DpiInternal::SatisfyMinResolutionBarForScaleIdx(
          (DpiInternal *)PlateauIndexForScaleFactor,
          0,
          (__int64)*this,
          (struct tagSIZE)a3,
          v24);
LABEL_9:
  v19 = v18;
LABEL_10:
  LOBYTE(v8) = a6 != 0;
  *((_DWORD *)a8 + 3) = v19;
  LODWORD(v24) = v8;
  DpiInternal::FillOverridesAndAdjustedScaleFactor((DpiInternal *)(unsigned int)a5, a7, (int *)a3, a8, v24);
}
