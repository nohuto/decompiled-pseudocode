__int64 __fastcall bDoGetSetBitmapBits(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int a3)
{
  char *pvBits; // rsi
  char *pvScan0; // rdi
  LONG lDelta; // r8d
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned int cjBits; // ebx
  char *v12; // rdi
  unsigned int v13; // edx
  int v14; // r14d
  unsigned int v15; // ebx
  char *v18; // rsi
  LONG cy; // ecx
  size_t v20; // rbx
  char *v21; // r14
  LONG v22; // r12d
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // edi
  char *v26; // r14
  __int64 v27; // rdx
  unsigned int v28; // r15d
  unsigned int v29; // r15d
  unsigned int v30; // edi
  unsigned int v32; // r14d
  _QWORD v33[3]; // [rsp+48h] [rbp-40h] BYREF
  LONG v34; // [rsp+A0h] [rbp+18h]

  if ( !a3 )
  {
    v33[0] = a1->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v33, a1, 0LL, 0);
    pvBits = (char *)a2->pvBits;
    pvScan0 = (char *)a1->pvScan0;
    lDelta = a1->lDelta;
    v34 = lDelta;
    v8 = ((unsigned int)(a1->sizlBitmap.cx * *(_DWORD *)&gaulConvert[2 * a1->iBitmapFormat] + 15) >> 3) & 0x1FFFFFFE;
    v9 = a1->sizlBitmap.cy * v8;
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
      v12 = &pvScan0[lDelta * (v10 / v8)];
      v13 = v10 % v8;
      if ( v10 % v8 )
      {
        v32 = cjBits;
        if ( v8 - v13 < cjBits )
          v32 = v8 - v13;
        memmove(&v12[v13], pvBits, v32);
        pvBits += v32;
        v12 += v34;
        cjBits -= v32;
      }
      v14 = cjBits / v8;
      v15 = cjBits % v8;
      while ( 1 )
      {
        v33[1] = v8;
        if ( !v14-- )
          break;
        memmove(v12, pvBits, v8);
        pvBits += v8;
        v12 += v34;
      }
      if ( v15 )
        memmove(v12, pvBits, v15);
    }
    return 1LL;
  }
  v33[0] = a2->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)v33, a2, 0LL, 0);
  v18 = (char *)a1->pvBits;
  cy = a2->sizlBitmap.cy;
  v20 = ((unsigned int)(*(_DWORD *)&gaulConvert[2 * a2->iBitmapFormat] * a2->sizlBitmap.cx + 15) >> 3) & 0x1FFFFFFE;
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
    v26 = &v21[v22 * (v24 / (unsigned int)v20)];
    v27 = v24 % (unsigned int)v20;
    if ( v24 % (unsigned int)v20 )
    {
      v28 = v25;
      if ( (int)v20 - (int)v27 < v25 )
        v28 = v20 - v27;
      memmove(v18, &v26[v27], v28);
      v18 += v28;
      v26 += v22;
      v25 -= v28;
    }
    v29 = v25 / (unsigned int)v20;
    v30 = v25 % (unsigned int)v20;
    while ( v29-- )
    {
      memmove(v18, v26, v20);
      v18 += v20;
      v26 += v22;
    }
    if ( v30 )
      memmove(v18, v26, v30);
    return 1LL;
  }
  a1->cjBits = 0;
  return 0LL;
}
