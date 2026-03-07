void __fastcall vSpUpdatePerPixelAlphaFromColorKey(
        struct _SURFOBJ *a1,
        int a2,
        struct _RECTL *a3,
        unsigned __int8 **a4)
{
  unsigned __int8 *v5; // rdi
  LONG cy; // esi
  LONG cx; // r15d
  int v8; // r13d
  int v9; // r12d
  __int64 lDelta; // r9
  int v11; // r15d
  int v12; // esi
  __int64 v13; // r8
  signed int v14; // ecx
  __int64 v15; // rcx
  char *v16; // r8
  int v17; // r10d
  int v18; // r9d
  char *v19; // rdx
  int v20; // eax
  int v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  LONG v23; // [rsp+38h] [rbp-60h]
  LONG v24; // [rsp+3Ch] [rbp-5Ch]
  LONG v25; // [rsp+40h] [rbp-58h]
  int v26; // [rsp+44h] [rbp-54h]
  unsigned __int8 *v27; // [rsp+48h] [rbp-50h]
  unsigned __int8 *v28; // [rsp+50h] [rbp-48h]
  char *v29; // [rsp+58h] [rbp-40h]
  char *v30; // [rsp+60h] [rbp-38h]
  LONG v31; // [rsp+A0h] [rbp+8h]

  v5 = 0LL;
  v27 = 0LL;
  if ( a1->iBitmapFormat == 6 && !a1->iType )
  {
    v21 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
    cy = a1->sizlBitmap.cy;
    cx = a1->sizlBitmap.cx;
    v8 = 0;
    v22 = 0LL;
    v9 = 0;
    v23 = cx;
    v24 = cy;
    if ( a3 )
    {
      ERECTL::operator*=((int *)&v22, &a3->left);
      cy = v24;
      cx = v23;
      v9 = HIDWORD(v22);
      v8 = v22;
    }
    lDelta = (unsigned int)a1->lDelta;
    v31 = a1->lDelta;
    v25 = v31;
    v11 = cx - v8;
    v26 = v11;
    v12 = cy - v9;
    if ( a4 )
    {
      v13 = abs32(v11);
      v14 = abs32(v12);
      if ( (_DWORD)v13 )
      {
        if ( v14 && (int)v13 < 0x7FFFFFFF / v14 )
        {
          v15 = (unsigned int)(v13 * v14);
          if ( (_DWORD)v15 )
          {
            v5 = (unsigned __int8 *)Win32AllocPool(v15, 1886221383LL, v13, lDelta);
            LODWORD(lDelta) = v31;
          }
          v27 = v5;
          *a4 = v5;
        }
      }
    }
    v28 = v5;
    v16 = (char *)a1->pvScan0 + 4 * v8 + (int)lDelta * v9;
    v17 = 0;
    while ( 1 )
    {
      v30 = v16;
      if ( !v12 )
        break;
      v18 = v11;
      v19 = v16;
      while ( 1 )
      {
        v29 = v19;
        if ( !v18 )
          break;
        if ( v5 )
          v5[v17] = v19[3];
        if ( *(_DWORD *)v19 == v21 )
          *(_DWORD *)v19 = 0;
        else
          v19[3] = -1;
        --v18;
        v19 += 4;
        v20 = v17 + 1;
        if ( !v5 )
          v20 = v17;
        v17 = v20;
      }
      --v12;
      v16 += v31;
    }
  }
}
