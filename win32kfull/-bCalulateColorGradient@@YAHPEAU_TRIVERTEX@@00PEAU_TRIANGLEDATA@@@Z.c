/*
 * XREFs of ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C028EE1C
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C028EC08 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1C028EFD4 (-bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z.c)
 */

__int64 __fastcall bCalulateColorGradient(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG y; // eax
  LONG x; // ebx
  int v9; // r10d
  int v10; // r11d
  int v12; // r8d
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  int Red; // eax
  int v17; // r10d
  int v18; // r9d
  _DWORD v20[2]; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  int v22; // [rsp+4Ch] [rbp-24h]
  int v23; // [rsp+50h] [rbp-20h]
  int v24; // [rsp+54h] [rbp-1Ch]
  __int64 v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]

  y = a1->y;
  x = a1->x;
  v10 = a3->x - a1->x;
  v20[0] = a2->x - a1->x;
  v9 = v20[0];
  v20[1] = v10;
  v21 = a2->y - y;
  v12 = v21;
  v13 = a3->y - y;
  *((_DWORD *)a4 + 34) = x;
  v22 = v13;
  v14 = v9 * v13 - v10 * v12;
  v24 = v14;
  if ( v9 >= 0 )
    v9 = 0;
  if ( v12 >= 0 )
    v12 = 0;
  if ( v9 < v10 )
    v10 = v9;
  if ( v12 < v13 )
    v13 = v12;
  v23 = v10 + v13;
  v25 = 0x1000000000000LL / (int)abs32(v14);
  v15 = 0x1000000000000LL % (int)abs32(v14);
  *((_DWORD *)a4 + 35) = a1->y;
  Red = a3->Red;
  v17 = a2->Red;
  v18 = a1->Red;
  v26 = v15;
  bDoGradient((__int64 *)a4 + 2, (__int64 *)a4 + 6, (__int64 *)a4 + 10, v18, v17, Red, (struct _GRADSTRUCT *)v20);
  bDoGradient(
    (__int64 *)a4 + 3,
    (__int64 *)a4 + 7,
    (__int64 *)a4 + 11,
    a1->Green,
    a2->Green,
    a3->Green,
    (struct _GRADSTRUCT *)v20);
  bDoGradient(
    (__int64 *)a4 + 4,
    (__int64 *)a4 + 8,
    (__int64 *)a4 + 12,
    a1->Blue,
    a2->Blue,
    a3->Blue,
    (struct _GRADSTRUCT *)v20);
  bDoGradient(
    (__int64 *)a4 + 5,
    (__int64 *)a4 + 9,
    (__int64 *)a4 + 13,
    a1->Alpha,
    a2->Alpha,
    a3->Alpha,
    (struct _GRADSTRUCT *)v20);
  return 1LL;
}
