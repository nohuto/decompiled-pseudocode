/*
 * XREFs of DrawFrame @ 0x1C024F2F8
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C0021730 (xxxDrawCaptionBar.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C012E4C8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxMNDrawFullNC @ 0x1C0237FB4 (xxxMNDrawFullNC.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0088258 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall DrawFrame(HDC a1, int *a2, int a3, int a4)
{
  int v4; // r14d
  int v5; // r10d
  int v6; // r15d
  int v7; // r11d
  int v8; // ebx
  __int64 v9; // rdx
  int v11; // [rsp+20h] [rbp-49h]
  _DWORD v12[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h]
  int v14; // [rsp+48h] [rbp-21h]
  int v15; // [rsp+4Ch] [rbp-1Dh]
  int v16; // [rsp+50h] [rbp-19h]
  int v17; // [rsp+54h] [rbp-15h]
  __int64 v18; // [rsp+58h] [rbp-11h]
  int v19; // [rsp+60h] [rbp-9h]
  int v20; // [rsp+64h] [rbp-5h]
  int v21; // [rsp+68h] [rbp-1h]
  int v22; // [rsp+6Ch] [rbp+3h]
  __int64 v23; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+78h] [rbp+Fh]
  int v25; // [rsp+7Ch] [rbp+13h]
  int v26; // [rsp+80h] [rbp+17h]
  int v27; // [rsp+84h] [rbp+1Bh]
  __int64 v28; // [rsp+88h] [rbp+1Fh]

  v4 = a2[2] - a3;
  v5 = *a2;
  v6 = a2[3] - a3;
  v7 = a2[1];
  v8 = v4 - *a2;
  if ( (a4 & 0xFFFFFFF8) == 0xF8 )
    v9 = *(_QWORD *)(gpsi + 4944LL);
  else
    v9 = *(_QWORD *)(gpsi + 8 * ((__int64)a4 >> 3) + 4696);
  v12[2] = a3;
  v14 = v5 + a3;
  v12[3] = v6 - v7;
  v13 = v9;
  v17 = a3;
  v18 = v9;
  v22 = a3;
  v23 = v9;
  v26 = a3;
  v27 = v6 - v7;
  v28 = v9;
  v25 = v7 + a3;
  v12[0] = v5;
  v12[1] = v7;
  v15 = v7;
  v16 = v8;
  v19 = v5;
  v20 = v6;
  v21 = v8;
  v24 = v4;
  GrePolyPatBlt(a1, (a4 & 4) != 0 ? 5898313 : 15728673, (struct _POLYPATBLT *)v12, 4u, v11);
  return 1LL;
}
