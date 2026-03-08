/*
 * XREFs of HT_CreateStandardMonoPattern @ 0x1C0252C14
 * Callers:
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C028E978 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     GetCachedSMP @ 0x1C0252734 (GetCachedSMP.c)
 *     HT_CreateHalftoneBrush @ 0x1C0252A88 (HT_CreateHalftoneBrush.c)
 *     ComputeBytesPerScanLine @ 0x1C0253E3C (ComputeBytesPerScanLine.c)
 *     pDCIAdjClr @ 0x1C02583A8 (pDCIAdjClr.c)
 */

__int64 __fastcall HT_CreateStandardMonoPattern(int a1, __int64 a2)
{
  unsigned __int8 v2; // si
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int16 v9; // r8
  __int16 v10; // r10
  unsigned __int16 v11; // ax
  int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // r8
  __int16 v15; // cx
  char v16; // al
  int CachedSMP; // eax
  int v18; // ecx
  _DWORD v19[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  int *v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+A8h] [rbp+48h] BYREF
  int v23; // [rsp+B0h] [rbp+50h]
  unsigned int v24; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *(_BYTE *)(a2 + 3);
  v23 = 0;
  v24 = 0;
  if ( v2 > 0x76u )
    return 4294967269LL;
  v22 = 0;
  v6 = pDCIAdjClr(a1, 0, 0, 0, 0, 0, (__int64)&v24);
  v7 = v6;
  if ( v6 )
  {
    if ( v2 < 0x12u )
    {
      CachedSMP = GetCachedSMP(v6, (__int16 *)a2);
    }
    else
    {
      v9 = *(_WORD *)(v6 + 166);
      v10 = *(_WORD *)(v6 + 170);
      BYTE2(v23) = *(_BYTE *)(a2 + 2);
      v8 = BYTE2(v23);
      *(_WORD *)(a2 + 8) = v9;
      *(_WORD *)(a2 + 10) = v10;
      v11 = ComputeBytesPerScanLine(1LL, v8);
      v14 = *(_QWORD *)(a2 + 16);
      *(_WORD *)(a2 + 6) = v11;
      if ( !v14 )
      {
        v18 = v12 * v11;
LABEL_14:
        v24 = v18;
        EngReleaseSemaphore(*(HSEMAPHORE *)(v7 + 8));
        return v24;
      }
      v15 = *(_WORD *)a2;
      v21 = &v22;
      v20 = v13;
      BYTE1(v22) = 118 - v2;
      LOBYTE(v22) = 118 - v2;
      v16 = v13;
      v19[0] = 196864;
      if ( (v15 & 2) != 0 )
        v16 = v13 + 2;
      v19[1] = 100;
      LOBYTE(v23) = v16;
      if ( ((unsigned __int8)v15 & (unsigned __int8)v13) == 0 )
        LOBYTE(v23) = (v15 & 2) != 0 ? 11 : 9;
      BYTE1(v23) = v13;
      HIBYTE(v23) = 0;
      CachedSMP = HT_CreateHalftoneBrush(a1, 0, (__int64)v19, v23, v14);
    }
    v18 = CachedSMP;
    goto LABEL_14;
  }
  return v24;
}
