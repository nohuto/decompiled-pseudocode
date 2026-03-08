/*
 * XREFs of ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C02D988C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C00AB7D0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02D9820 (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 */

__int64 __fastcall bAddRectToPath(struct EPATHOBJ *a1, struct _RECTL *a2)
{
  struct _POINTL v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+28h] [rbp-30h]
  LONG y; // [rsp+2Ch] [rbp-2Ch]
  int v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+34h] [rbp-24h]
  LONG x; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  v3.x = 16 * a2->left;
  x = v3.x;
  v3.y = 16 * a2->top;
  y = v3.y;
  v4 = 16 * a2->right;
  v6 = v4;
  v7 = 16 * a2->bottom;
  v9 = v7;
  return EPATHOBJ::bAddPolygon(a1, (struct EXFORMOBJ *)a2, &v3);
}
