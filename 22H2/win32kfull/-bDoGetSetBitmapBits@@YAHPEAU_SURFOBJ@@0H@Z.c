/*
 * XREFs of ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0018BA4
 * Callers:
 *     GreGetBitmapBits @ 0x1C00183C4 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00187F0 (GreSetBitmapBits.c)
 * Callees:
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall bDoGetSetBitmapBits(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int a3)
{
  char *pvBits; // r14
  char *pvScan0; // rdi
  LONG lDelta; // r8d
  unsigned int v8; // r15d
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int cjBits; // ebx
  unsigned int v12; // edx
  char *v13; // rdi
  int v14; // esi
  unsigned int v15; // ebx
  char *v18; // rsi
  LONG cy; // edx
  unsigned int v20; // ebx
  char *v21; // r14
  LONG v22; // r13d
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rdx
  char *v27; // r14
  int v28; // r15d
  unsigned int v29; // edi
  unsigned int v31; // r15d
  unsigned int v32; // esi
  HDEV v33; // [rsp+40h] [rbp-38h] BYREF
  HDEV hdev; // [rsp+48h] [rbp-30h] BYREF
  LONG v35; // [rsp+90h] [rbp+18h]

  if ( !a3 )
  {
    hdev = a1->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, a1, 0LL, 0);
    pvBits = (char *)a2->pvBits;
    pvScan0 = (char *)a1->pvScan0;
    lDelta = a1->lDelta;
    v35 = lDelta;
    v8 = ((unsigned int)(a1->sizlBitmap.cx * *((_DWORD *)&galBitsPerPixel + a1->iBitmapFormat) + 15) >> 3) & 0x1FFFFFFE;
    v9 = v8 * a1->sizlBitmap.cy;
    v10 = a2->lDelta;
    if ( (v10 & 0x80000000) != 0 || v10 >= v9 )
    {
      a2->cjBits = 0;
    }
    else
    {
      cjBits = v9 - v10;
      if ( a2->cjBits + v10 <= v9 )
        cjBits = a2->cjBits;
      a2->cjBits = cjBits;
      v12 = v10 % v8;
      v13 = &pvScan0[lDelta * (v10 / v8)];
      if ( v10 % v8 )
      {
        v32 = v8 - v12;
        if ( v8 - v12 >= cjBits )
          v32 = cjBits;
        memmove(&v13[v12], pvBits, v32);
        pvBits += v32;
        v13 += v35;
        cjBits -= v32;
      }
      v14 = cjBits / v8;
      v15 = cjBits % v8;
      while ( v14-- )
      {
        memmove(v13, pvBits, v8);
        pvBits += v8;
        v13 += v35;
      }
      if ( v15 )
        memmove(v13, pvBits, v15);
    }
    return 1LL;
  }
  v33 = a2->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&v33, a2, 0LL, 0);
  v18 = (char *)a1->pvBits;
  cy = a2->sizlBitmap.cy;
  v20 = ((unsigned int)(*((_DWORD *)&galBitsPerPixel + a2->iBitmapFormat) * a2->sizlBitmap.cx + 15) >> 3) & 0x1FFFFFFE;
  if ( !v18 )
  {
    a1->cjBits = cy * v20;
    return 1LL;
  }
  v21 = (char *)a2->pvScan0;
  v22 = a2->lDelta;
  v23 = v20 * cy;
  v24 = a1->lDelta;
  if ( (v24 & 0x80000000) == 0 && v24 < v23 )
  {
    v25 = v23 - v24;
    if ( a1->cjBits + v24 <= v23 )
      v25 = a1->cjBits;
    a1->cjBits = v25;
    v26 = v24 % v20;
    v27 = &v21[v22 * (v24 / v20)];
    if ( v24 % v20 )
    {
      v31 = v20 - v26;
      if ( v20 - (unsigned int)v26 >= v25 )
        v31 = v25;
      memmove(v18, &v27[v26], v31);
      v18 += v31;
      v27 += v22;
      v25 -= v31;
    }
    v28 = v25 / v20;
    v29 = v25 % v20;
    while ( v28-- )
    {
      memmove(v18, v27, v20);
      v18 += v20;
      v27 += v22;
    }
    if ( v29 )
      memmove(v18, v27, v29);
    return 1LL;
  }
  a1->cjBits = 0;
  return 0LL;
}
