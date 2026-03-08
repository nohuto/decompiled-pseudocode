/*
 * XREFs of ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0236338
 * Callers:
 *     MNDrawEdge @ 0x1C0237488 (MNDrawEdge.c)
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0088258 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall DrawOutline(HDC a1, int a2, int a3, int a4, int a5, int a6, HBRUSH a7)
{
  int v7; // [rsp+20h] [rbp-41h]
  _DWORD v8[4]; // [rsp+30h] [rbp-31h] BYREF
  HBRUSH v9; // [rsp+40h] [rbp-21h]
  int v10; // [rsp+48h] [rbp-19h]
  int v11; // [rsp+4Ch] [rbp-15h]
  int v12; // [rsp+50h] [rbp-11h]
  int v13; // [rsp+54h] [rbp-Dh]
  HBRUSH v14; // [rsp+58h] [rbp-9h]
  int v15; // [rsp+60h] [rbp-1h]
  int v16; // [rsp+64h] [rbp+3h]
  int v17; // [rsp+68h] [rbp+7h]
  int v18; // [rsp+6Ch] [rbp+Bh]
  HBRUSH v19; // [rsp+70h] [rbp+Fh]
  int v20; // [rsp+78h] [rbp+17h]
  int v21; // [rsp+7Ch] [rbp+1Bh]
  int v22; // [rsp+80h] [rbp+1Fh]
  int v23; // [rsp+84h] [rbp+23h]
  HBRUSH v24; // [rsp+88h] [rbp+27h]

  v8[1] = a3;
  v11 = a3;
  v16 = a3;
  v8[0] = a2;
  v21 = a5 + a3 - a6;
  v10 = a2;
  v12 = a4;
  v20 = a2;
  v22 = a4;
  v8[2] = a6;
  v8[3] = a5;
  v9 = a7;
  v13 = a6;
  v14 = a7;
  v15 = a4 + a2 - a6;
  v17 = a6;
  v18 = a5;
  v19 = a7;
  v23 = a6;
  v24 = a7;
  GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v8, 4u, v7);
}
