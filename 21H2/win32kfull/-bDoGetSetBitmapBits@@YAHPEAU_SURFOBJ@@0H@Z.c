/*
 * XREFs of ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00E6F5C
 * Callers:
 *     GreGetBitmapBits @ 0x1C00E67A4 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00E6BE0 (GreSetBitmapBits.c)
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall bDoGetSetBitmapBits(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int a3)
{
  char *pvBits; // rsi
  char *pvScan0; // rdi
  LONG lDelta; // r12d
  unsigned int v8; // r14d
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int cjBits; // ebx
  unsigned int v12; // edx
  char *v13; // rdi
  int v14; // r15d
  unsigned int v15; // ebx
  __int64 iBitmapFormat; // rax
  LONG cx; // r8d
  LONG cy; // edx
  char *v21; // rsi
  LONG v22; // r12d
  unsigned int v23; // r14d
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  int v28; // r15d
  unsigned int v30; // r15d
  unsigned int v31; // r15d
  _QWORD v32[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( !a3 )
  {
    v32[0] = a1->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v32, a1, 0LL, 0);
    pvBits = (char *)a2->pvBits;
    pvScan0 = (char *)a1->pvScan0;
    lDelta = a1->lDelta;
    v8 = ((unsigned int)(a1->sizlBitmap.cx * *((_DWORD *)&galBitsPerPixel + a1->iBitmapFormat) + 15) >> 3) & 0x1FFFFFFE;
    v9 = v8 * a1->sizlBitmap.cy;
    v10 = a2->lDelta;
    if ( (v10 & 0x80000000) != 0 || v10 >= v9 )
    {
      a2->cjBits = 0;
      return 1LL;
    }
    cjBits = v9 - v10;
    if ( a2->cjBits + v10 <= v9 )
      cjBits = a2->cjBits;
    a2->cjBits = cjBits;
    v12 = v10 % v8;
    v13 = &pvScan0[lDelta * (v10 / v8)];
    if ( v10 % v8 )
    {
      v31 = cjBits;
      if ( v8 - v12 < cjBits )
        v31 = v8 - v12;
      memmove(&v13[v12], pvBits, v31);
      pvBits += v31;
      v13 += lDelta;
      cjBits -= v31;
    }
    v14 = cjBits / v8;
    v15 = cjBits % v8;
    while ( v14-- )
    {
      memmove(v13, pvBits, v8);
      pvBits += v8;
      v13 += lDelta;
    }
    if ( !v15 )
      return 1LL;
    goto LABEL_11;
  }
  v32[0] = a2->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)v32, a2, 0LL, 0);
  v13 = (char *)a1->pvBits;
  iBitmapFormat = a2->iBitmapFormat;
  cx = a2->sizlBitmap.cx;
  cy = a2->sizlBitmap.cy;
  if ( !v13 )
  {
    a1->cjBits = cy * (((unsigned int)(cx * *((_DWORD *)&galBitsPerPixel + iBitmapFormat) + 15) >> 3) & 0x1FFFFFFE);
    return 1LL;
  }
  v21 = (char *)a2->pvScan0;
  v22 = a2->lDelta;
  v23 = ((unsigned int)(cx * *((_DWORD *)&galBitsPerPixel + iBitmapFormat) + 15) >> 3) & 0x1FFFFFFE;
  v24 = v23 * cy;
  v25 = a1->lDelta;
  if ( (v25 & 0x80000000) == 0 && v25 < v24 )
  {
    v26 = v24 - v25;
    if ( a1->cjBits + v25 <= v24 )
      v26 = a1->cjBits;
    a1->cjBits = v26;
    v27 = v25 % v23;
    pvBits = &v21[v22 * (v25 / v23)];
    if ( v25 % v23 )
    {
      v30 = v26;
      if ( v23 - (unsigned int)v27 < v26 )
        v30 = v23 - v27;
      memmove(v13, &pvBits[v27], v30);
      v13 += v30;
      pvBits += v22;
      v26 -= v30;
    }
    v28 = v26 / v23;
    v15 = v26 % v23;
    while ( v28-- )
    {
      memmove(v13, pvBits, v23);
      v13 += v23;
      pvBits += v22;
    }
    if ( !v15 )
      return 1LL;
LABEL_11:
    memmove(v13, pvBits, v15);
    return 1LL;
  }
  a1->cjBits = 0;
  return 0LL;
}
