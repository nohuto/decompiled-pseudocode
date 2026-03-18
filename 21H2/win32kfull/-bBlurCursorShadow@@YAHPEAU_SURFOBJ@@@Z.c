/*
 * XREFs of ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01526A4
 * Callers:
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01524D0 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall bBlurCursorShadow(struct _SURFOBJ *a1)
{
  LONG cx; // eax
  _BYTE *v3; // r8
  char *pvScan0; // r10
  __int64 *v5; // r11
  __int64 v6; // rdi
  _WORD *v7; // r9
  unsigned __int64 v8; // r14
  char *v9; // rsi
  __int16 v10; // ax
  __int16 v11; // cx
  __int64 lDelta; // rcx
  unsigned int *v13; // r9
  unsigned int v14; // r14d
  int v15; // r11d
  unsigned int *v16; // r15
  char *v17; // r12
  _WORD *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned __int16 v21; // cx
  __int64 v22; // rcx
  _WORD *v23; // rdi
  _WORD *v24; // r15
  char *v25; // rsi
  __int16 v26; // ax
  __int16 v27; // cx
  __int64 v29; // r8
  __int64 i; // rdx
  __int64 v31; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v32; // [rsp+28h] [rbp-D8h]
  _BYTE v33[128]; // [rsp+40h] [rbp-C0h] BYREF
  char v34; // [rsp+C0h] [rbp-40h] BYREF
  char v35; // [rsp+140h] [rbp+40h] BYREF

  cx = a1->sizlBitmap.cx;
  v32 = 0LL;
  if ( cx < 3 || a1->sizlBitmap.cy < 3 )
    return 0LL;
  if ( cx <= 64 )
  {
    *(_QWORD *)&v32 = &v34;
    v3 = v33;
    *((_QWORD *)&v32 + 1) = &v35;
LABEL_5:
    v31 = (__int64)v3;
    goto LABEL_6;
  }
  if ( !(6 * cx) )
  {
    v3 = 0LL;
    goto LABEL_5;
  }
  v31 = Win32AllocPoolZInit((unsigned int)(6 * cx), 1886221383LL);
  v3 = (_BYTE *)v31;
  if ( v31 )
  {
    v29 = a1->sizlBitmap.cx;
    for ( i = 0LL; i < 2; ++i )
      *(_QWORD *)&v33[8 * i - 8] = *(&v31 + i) + 2 * v29;
    v3 = (_BYTE *)v31;
  }
LABEL_6:
  if ( !v3 )
    return 0LL;
  pvScan0 = (char *)a1->pvScan0;
  v5 = &v31;
  v6 = 3LL;
  do
  {
    v7 = (_WORD *)*v5;
    v8 = *v5 + 2LL * (a1->sizlBitmap.cx - 2);
    if ( *v5 < v8 )
    {
      v9 = pvScan0 + 4;
      do
      {
        v10 = (unsigned __int8)v9[7];
        v11 = (unsigned __int8)*(v9 - 1);
        v9 += 4;
        *v7++ = (unsigned __int8)*(v9 - 1) + v10 + v11;
      }
      while ( (unsigned __int64)v7 < v8 );
    }
    lDelta = a1->lDelta;
    ++v5;
    pvScan0 += lDelta;
    --v6;
  }
  while ( v6 );
  v13 = (unsigned int *)((char *)a1->pvScan0 + lDelta + 4);
  v14 = 0;
  v15 = a1->sizlBitmap.cy - 2;
  if ( a1->sizlBitmap.cy != 2 )
  {
    while ( 1 )
    {
      --v15;
      v16 = v13;
      v17 = (char *)&v13[a1->sizlBitmap.cx - 2];
      if ( v13 < (unsigned int *)v17 )
      {
        v18 = v3;
        v19 = *((_QWORD *)&v32 + 1) - (_QWORD)v3;
        v20 = v32 - (_QWORD)v3;
        do
        {
          v21 = *v18 + *(_WORD *)((char *)v18 + v19) + *(_WORD *)((char *)v18 + v20);
          ++v18;
          *v16++ = (v21 << 21) & 0xFF000000;
        }
        while ( v16 < (unsigned int *)v17 );
      }
      v22 = a1->lDelta;
      v13 = (unsigned int *)((char *)v13 + v22);
      if ( !v15 )
        break;
      v23 = (_WORD *)*(&v31 + v14);
      v24 = &v23[a1->sizlBitmap.cx - 2];
      if ( v23 < v24 )
      {
        v25 = pvScan0 + 4;
        do
        {
          v26 = (unsigned __int8)v25[7];
          v27 = (unsigned __int8)*(v25 - 1);
          v25 += 4;
          *v23++ = (unsigned __int8)*(v25 - 1) + v26 + v27;
        }
        while ( v23 < v24 );
        LODWORD(v22) = a1->lDelta;
      }
      pvScan0 += (int)v22;
      v14 = v14 + 1 < 3 ? v14 + 1 : 0;
    }
  }
  if ( v3 != v33 )
    Win32FreePool(v3);
  return 1LL;
}
