/*
 * XREFs of HT_CreateHalftoneBrush @ 0x1C0261318
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x1C001965C (HT_CreateStandardMonoPattern.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CFD3C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     ComputeBytesPerScanLine @ 0x1C0019884 (ComputeBytesPerScanLine.c)
 *     pDCIAdjClr @ 0x1C001C210 (pDCIAdjClr.c)
 *     CreateHalftoneBrushPat @ 0x1C02629E4 (CreateHalftoneBrushPat.c)
 */

__int64 __fastcall HT_CreateHalftoneBrush(__int64 a1, __m128i *a2, __int64 a3, int a4, __int64 a5)
{
  char v5; // bl
  __int16 v9; // dx
  __int64 v10; // rsi
  __int16 v11; // cx
  __int16 v12; // dx
  __int16 v13; // cx
  __int64 v14; // rax
  int v16; // r10d
  __int64 v17; // r11
  int v18; // eax
  int HalftoneBrushPat; // eax
  int v20; // ecx
  int v21; // [rsp+40h] [rbp-10h]
  PVOID pv; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+30h] BYREF
  int v24; // [rsp+88h] [rbp+38h]

  v24 = a4;
  pv = 0LL;
  v5 = a4;
  v23 = 0;
  if ( !a3 || *(_DWORD *)(a3 + 8) != 1 || !*(_QWORD *)(a3 + 16) )
    return 4294967262LL;
  BYTE1(v21) = *(_BYTE *)(a3 + 3);
  v9 = 16;
  LOBYTE(v21) = 0;
  HIBYTE(v21) = BYTE1(a4);
  BYTE2(v21) = HIBYTE(a4);
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
  v14 = pDCIAdjClr(a1, a2, (char **)((unsigned __int64)&pv & -(__int64)(a5 != 0)), 0, v13, v21, &v23);
  if ( v14 )
  {
    v16 = ComputeBytesPerScanLine(BYTE1(v24), BYTE2(v24), *(unsigned __int16 *)(v14 + 166));
    v18 = v16 * *(unsigned __int16 *)(v17 + 170);
    v23 = v18;
    if ( v10 )
    {
      if ( (v5 & 8) != 0 )
      {
        v10 += v18 - v16;
        v16 = -v16;
      }
      HalftoneBrushPat = CreateHalftoneBrushPat(v17, a3, pv, v10, v16);
      v20 = v23;
      if ( HalftoneBrushPat <= 0 )
        v20 = HalftoneBrushPat;
      v23 = v20;
      EngFreeMem(pv);
    }
    else
    {
      EngReleaseSemaphore(*(HSEMAPHORE *)(v17 + 8));
    }
  }
  return v23;
}
