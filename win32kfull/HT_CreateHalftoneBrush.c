/*
 * XREFs of HT_CreateHalftoneBrush @ 0x1C0252A88
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     HT_CreateStandardMonoPattern @ 0x1C0252C14 (HT_CreateStandardMonoPattern.c)
 * Callees:
 *     ComputeBytesPerScanLine @ 0x1C0253E3C (ComputeBytesPerScanLine.c)
 *     pDCIAdjClr @ 0x1C02583A8 (pDCIAdjClr.c)
 *     CreateHalftoneBrushPat @ 0x1C02591B0 (CreateHalftoneBrushPat.c)
 */

__int64 __fastcall HT_CreateHalftoneBrush(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  char v5; // bl
  __int16 v9; // dx
  __int64 v10; // rsi
  __int16 v11; // cx
  __int16 v12; // dx
  __int16 v13; // cx
  int v15; // r10d
  __int64 v16; // r11
  int v17; // eax
  int HalftoneBrushPat; // eax
  int v19; // ecx
  int v20; // [rsp+40h] [rbp-10h]
  PVOID pv; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+30h] BYREF
  int v23; // [rsp+88h] [rbp+38h]

  v23 = a4;
  pv = 0LL;
  v5 = a4;
  v22 = 0;
  if ( !a3 || *(_DWORD *)(a3 + 8) != 1 || !*(_QWORD *)(a3 + 16) )
    return 4294967262LL;
  BYTE1(v20) = *(_BYTE *)(a3 + 3);
  v9 = 16;
  LOBYTE(v20) = 0;
  HIBYTE(v20) = BYTE1(a4);
  BYTE2(v20) = HIBYTE(a4);
  if ( (a4 & 1) != 0 || BYTE1(a4) == 1 )
    v9 = 17;
  v10 = a5;
  v11 = v9 | 2;
  if ( (a4 & 4) == 0 )
    v11 = v9;
  v12 = v11 | 4;
  if ( (a4 & 2) == 0 )
    v12 = v11;
  v13 = v12 | 8;
  if ( (a4 & 0x10) == 0 )
    v13 = v12;
  if ( pDCIAdjClr(a1, a2, (unsigned __int64)&pv & -(__int64)(a5 != 0), 0, v13, v20, (__int64)&v22) )
  {
    v15 = ComputeBytesPerScanLine(BYTE1(v23), BYTE2(v23));
    v17 = v15 * *(unsigned __int16 *)(v16 + 170);
    v22 = v17;
    if ( v10 )
    {
      if ( (v5 & 8) != 0 )
      {
        v10 += v17 - v15;
        v15 = -v15;
      }
      HalftoneBrushPat = CreateHalftoneBrushPat(v16, a3, pv, v10, v15);
      v19 = v22;
      if ( HalftoneBrushPat <= 0 )
        v19 = HalftoneBrushPat;
      v22 = v19;
      EngFreeMem(pv);
    }
    else
    {
      EngReleaseSemaphore(*(HSEMAPHORE *)(v16 + 8));
    }
  }
  return v22;
}
