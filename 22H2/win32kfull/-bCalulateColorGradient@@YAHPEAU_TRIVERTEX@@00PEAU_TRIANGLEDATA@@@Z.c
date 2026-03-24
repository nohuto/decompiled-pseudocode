/*
 * XREFs of ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C014CEB4
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C014C818 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1C014D05C (-bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z.c)
 */

__int64 __fastcall bCalulateColorGradient(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG x; // r10d
  LONG y; // eax
  LONG v10; // ebx
  int v11; // r8d
  int v12; // r11d
  int v13; // ecx
  int v14; // r10d
  int v15; // edx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  int Red; // eax
  int v19; // r10d
  int v20; // r9d
  _DWORD v22[2]; // [rsp+40h] [rbp-30h] BYREF
  int v23; // [rsp+48h] [rbp-28h]
  int v24; // [rsp+4Ch] [rbp-24h]
  int v25; // [rsp+50h] [rbp-20h]
  int v26; // [rsp+54h] [rbp-1Ch]
  __int64 v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]

  x = a3->x;
  y = a1->y;
  v10 = a1->x;
  v12 = a2->x - a1->x;
  v13 = a3->y - y;
  v23 = a2->y - y;
  v11 = v23;
  v14 = x - v10;
  v22[0] = v12;
  v24 = v13;
  *((_DWORD *)a4 + 34) = v10;
  v22[1] = v14;
  v15 = v12 * v13 - v14 * v11;
  v26 = v15;
  if ( v12 >= 0 )
    v12 = 0;
  if ( v11 >= 0 )
    v11 = 0;
  if ( v11 >= v13 )
    v11 = v13;
  if ( v12 >= v14 )
    v12 = v14;
  v25 = v12 + v11;
  v16 = (__int64 *)((char *)a4 + 80);
  v27 = 0x1000000000000LL / (int)abs32(v15);
  v17 = (__int64 *)((char *)a4 + 16);
  *((_DWORD *)a4 + 35) = a1->y;
  Red = a3->Red;
  v19 = a2->Red;
  v20 = a1->Red;
  v28 = 0x1000000000000LL % (int)abs32(v15);
  bDoGradient(v17, (__int64 *)a4 + 6, v16, v20, v19, Red, (struct _GRADSTRUCT *)v22);
  bDoGradient(
    (__int64 *)a4 + 3,
    (__int64 *)a4 + 7,
    (__int64 *)a4 + 11,
    a1->Green,
    a2->Green,
    a3->Green,
    (struct _GRADSTRUCT *)v22);
  bDoGradient(
    (__int64 *)a4 + 4,
    (__int64 *)a4 + 8,
    (__int64 *)a4 + 12,
    a1->Blue,
    a2->Blue,
    a3->Blue,
    (struct _GRADSTRUCT *)v22);
  bDoGradient(
    (__int64 *)a4 + 5,
    (__int64 *)a4 + 9,
    (__int64 *)a4 + 13,
    a1->Alpha,
    a2->Alpha,
    a3->Alpha,
    (struct _GRADSTRUCT *)v22);
  return 1LL;
}
