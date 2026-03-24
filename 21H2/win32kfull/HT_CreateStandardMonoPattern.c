/*
 * XREFs of HT_CreateStandardMonoPattern @ 0x1C001965C
 * Callers:
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0019A70 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     GetCachedSMP @ 0x1C0019708 (GetCachedSMP.c)
 *     ComputeBytesPerScanLine @ 0x1C0019884 (ComputeBytesPerScanLine.c)
 *     pDCIAdjClr @ 0x1C001C210 (pDCIAdjClr.c)
 *     HT_CreateHalftoneBrush @ 0x1C0261318 (HT_CreateHalftoneBrush.c)
 */

__int64 __fastcall HT_CreateStandardMonoPattern(int a1, __int16 *a2)
{
  unsigned __int8 v2; // si
  __int64 v5; // rax
  __int64 v6; // rdi
  int HalftoneBrush; // eax
  int v8; // ecx
  __int16 v10; // r8
  __int16 v11; // r10
  unsigned __int16 v12; // ax
  int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // rdx
  char v16; // cl
  __int16 v17; // ax
  _DWORD v18[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  int *v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+A8h] [rbp+48h] BYREF
  int v22; // [rsp+B0h] [rbp+50h]
  unsigned int v23; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *((_BYTE *)a2 + 3);
  v22 = 0;
  v23 = 0;
  if ( v2 <= 0x76u )
  {
    v21 = 0;
    v5 = pDCIAdjClr(a1, 0, 0, 0, 0, 0, (__int64)&v23);
    v6 = v5;
    if ( !v5 )
      return v23;
    if ( v2 >= 0x12u )
    {
      v10 = *(_WORD *)(v5 + 166);
      v11 = *(_WORD *)(v5 + 170);
      BYTE2(v22) = *((_BYTE *)a2 + 2);
      a2[4] = v10;
      a2[5] = v11;
      v12 = ComputeBytesPerScanLine(1LL);
      v15 = *((_QWORD *)a2 + 2);
      a2[3] = v12;
      if ( !v15 )
      {
        v8 = v13 * v12;
        goto LABEL_6;
      }
      v16 = v14;
      v19 = v14;
      v20 = &v21;
      v17 = *a2;
      BYTE1(v21) = 118 - v2;
      LOBYTE(v21) = 118 - v2;
      if ( (v17 & 2) != 0 )
        v16 = v14 + 2;
      v18[0] = 196864;
      LOBYTE(v22) = v16;
      v18[1] = 100;
      if ( ((unsigned __int8)v17 & (unsigned __int8)v14) == 0 )
        LOBYTE(v22) = v16 | 8;
      BYTE1(v22) = v14;
      HIBYTE(v22) = 0;
      HalftoneBrush = HT_CreateHalftoneBrush(a1, 0, (unsigned int)v18, v22, v15);
    }
    else
    {
      HalftoneBrush = GetCachedSMP(v5, a2);
    }
    v8 = HalftoneBrush;
LABEL_6:
    v23 = v8;
    EngReleaseSemaphore(*(HSEMAPHORE *)(v6 + 8));
    return v23;
  }
  return 4294967269LL;
}
