/*
 * XREFs of ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00CA98C
 * Callers:
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00CA7B8 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall bBlurCursorShadow(struct _SURFOBJ *a1)
{
  LONG cx; // eax
  unsigned __int64 v3; // r13
  _BYTE *v4; // r8
  char *pvScan0; // r9
  __int128 *v6; // r11
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  _WORD *v9; // rsi
  unsigned __int64 v10; // r10
  _WORD *v11; // rax
  unsigned __int64 v12; // r10
  char *v13; // rdi
  __int16 v14; // ax
  __int16 v15; // cx
  __int64 lDelta; // rcx
  unsigned int v17; // edi
  unsigned int *v18; // rsi
  int v19; // r11d
  unsigned int *v20; // r12
  unsigned __int64 v21; // rdx
  char *v22; // rax
  unsigned __int64 v23; // rdx
  _WORD *v24; // r10
  __int64 v25; // r14
  __int64 v26; // r15
  unsigned __int16 v27; // cx
  __int64 v28; // rcx
  unsigned __int64 v29; // r12
  _WORD *v30; // r14
  unsigned __int64 v31; // r15
  _WORD *v32; // rax
  unsigned __int64 v33; // r15
  char *v34; // r10
  __int16 v35; // ax
  __int16 v36; // cx
  __int64 v38; // r8
  __int64 i; // rdx
  __int128 v40; // [rsp+28h] [rbp-E0h] BYREF
  char *v41; // [rsp+38h] [rbp-D0h]
  _BYTE v42[128]; // [rsp+48h] [rbp-C0h] BYREF
  char v43; // [rsp+C8h] [rbp-40h] BYREF
  char v44; // [rsp+148h] [rbp+40h] BYREF

  v41 = 0LL;
  cx = a1->sizlBitmap.cx;
  v40 = 0LL;
  if ( cx < 3 || a1->sizlBitmap.cy < 3 )
    return 0LL;
  v3 = 0LL;
  if ( cx > 64 )
  {
    *(_QWORD *)&v40 = PALLOCMEM2((unsigned int)(6 * cx), 1886221383LL, 1);
    if ( !(_QWORD)v40 )
      return 0LL;
    v38 = a1->sizlBitmap.cx;
    for ( i = 0LL; i < 2; ++i )
      *((_QWORD *)&v40 + i + 1) = *((_QWORD *)&v40 + i) + 2 * v38;
    v4 = (_BYTE *)v40;
  }
  else
  {
    *((_QWORD *)&v40 + 1) = &v43;
    v4 = v42;
    *(_QWORD *)&v40 = v42;
    v41 = &v44;
  }
  if ( !v4 )
    return 0LL;
  pvScan0 = (char *)a1->pvScan0;
  v6 = &v40;
  v7 = 3LL;
  do
  {
    v8 = 0LL;
    v9 = *(_WORD **)v6;
    v10 = 2LL * (a1->sizlBitmap.cx - 2);
    v11 = (_WORD *)(*(_QWORD *)v6 + v10);
    v12 = v10 >> 1;
    if ( *(_QWORD *)v6 > (unsigned __int64)v11 )
      v12 = 0LL;
    if ( v12 )
    {
      v13 = pvScan0 + 4;
      do
      {
        v14 = (unsigned __int8)v13[7];
        ++v8;
        v15 = (unsigned __int8)*(v13 - 1);
        v13 += 4;
        *v9++ = (unsigned __int8)*(v13 - 1) + v14 + v15;
      }
      while ( v8 < v12 );
    }
    lDelta = a1->lDelta;
    v6 = (__int128 *)((char *)v6 + 8);
    pvScan0 += lDelta;
    --v7;
  }
  while ( v7 );
  v17 = 0;
  v18 = (unsigned int *)((char *)a1->pvScan0 + lDelta + 4);
  v19 = a1->sizlBitmap.cy - 2;
  if ( a1->sizlBitmap.cy != 2 )
  {
    while ( 1 )
    {
      --v19;
      v20 = v18;
      v21 = a1->sizlBitmap.cx - 2;
      v22 = (char *)&v18[v21];
      v23 = (v21 * 4) >> 2;
      if ( v18 > (unsigned int *)v22 )
        v23 = 0LL;
      if ( v23 )
      {
        v24 = v4;
        v25 = v41 - v4;
        v26 = *((_QWORD *)&v40 + 1) - (_QWORD)v4;
        do
        {
          ++v3;
          v27 = *v24 + *(_WORD *)((char *)v24 + v25) + *(_WORD *)((char *)v24 + v26);
          ++v24;
          *v20++ = (v27 << 21) & 0xFF000000;
        }
        while ( v3 < v23 );
      }
      v28 = a1->lDelta;
      v3 = 0LL;
      v18 = (unsigned int *)((char *)v18 + v28);
      if ( !v19 )
        break;
      v29 = 0LL;
      v30 = (_WORD *)*((_QWORD *)&v40 + v17);
      v31 = a1->sizlBitmap.cx - 2;
      v32 = &v30[v31];
      v33 = (v31 * 2) >> 1;
      if ( v30 > v32 )
        v33 = 0LL;
      if ( v33 )
      {
        v34 = pvScan0 + 4;
        do
        {
          v35 = (unsigned __int8)v34[7];
          ++v29;
          v36 = (unsigned __int8)*(v34 - 1);
          v34 += 4;
          *v30++ = (unsigned __int8)*(v34 - 1) + v35 + v36;
        }
        while ( v29 < v33 );
        LODWORD(v28) = a1->lDelta;
      }
      pvScan0 += (int)v28;
      v17 = v17 + 1 < 3 ? v17 + 1 : 0;
    }
  }
  if ( v4 != v42 )
    Win32FreePool(v4);
  return 1LL;
}
