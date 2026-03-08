/*
 * XREFs of ClientFrame @ 0x1C024F1DC
 * Callers:
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0225190 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0088258 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?GetSignFromMappingMode@@YAHPEAUHDC__@@PEAUtagPOINT@@@Z @ 0x1C024F148 (-GetSignFromMappingMode@@YAHPEAUHDC__@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall ClientFrame(HDC a1, int *a2, __int64 a3)
{
  int v6; // r10d
  int v7; // r11d
  int v8; // edx
  int v9; // edi
  int v10; // ebx
  int v12; // [rsp+20h] [rbp-59h]
  struct tagPOINT v13; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v14[4]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v15; // [rsp+50h] [rbp-29h]
  int v16; // [rsp+58h] [rbp-21h]
  int v17; // [rsp+5Ch] [rbp-1Dh]
  int v18; // [rsp+60h] [rbp-19h]
  LONG y; // [rsp+64h] [rbp-15h]
  __int64 v20; // [rsp+68h] [rbp-11h]
  int v21; // [rsp+70h] [rbp-9h]
  int v22; // [rsp+74h] [rbp-5h]
  LONG x; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  __int64 v25; // [rsp+80h] [rbp+7h]
  int v26; // [rsp+88h] [rbp+Fh]
  int v27; // [rsp+8Ch] [rbp+13h]
  LONG v28; // [rsp+90h] [rbp+17h]
  int v29; // [rsp+94h] [rbp+1Bh]
  __int64 v30; // [rsp+98h] [rbp+1Fh]

  v13 = 0LL;
  if ( !(unsigned int)GetSignFromMappingMode(a1, &v13) )
    return 0LL;
  v6 = a2[3];
  v7 = a2[1];
  v8 = v6 - v7;
  if ( v6 - v7 < 0 )
    return 0LL;
  v9 = *a2;
  v10 = a2[2];
  if ( ((v10 - v9) ^ v13.x) < 0 || (v8 ^ v13.y) < 0 )
    return 0LL;
  v14[2] = v10 - v9;
  v18 = v10 - v9;
  v14[3] = v13.y;
  y = v13.y;
  v22 = v7 + v13.y;
  v27 = v7 + v13.y;
  v14[0] = v9;
  v14[1] = v7;
  v15 = a3;
  v24 = v8 - 2 * v13.y;
  v29 = v24;
  v16 = v9;
  v17 = v6 - v13.y;
  v20 = a3;
  v21 = v9;
  x = v13.x;
  v25 = a3;
  v26 = v10 - v13.x;
  v28 = v13.x;
  v30 = a3;
  return GrePolyPatBlt(a1, 0x5A0049u, (struct _POLYPATBLT *)v14, 4u, v12);
}
