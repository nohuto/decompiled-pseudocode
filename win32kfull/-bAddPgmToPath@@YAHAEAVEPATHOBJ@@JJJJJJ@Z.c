/*
 * XREFs of ?bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z @ 0x1C02DB984
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02DBA10 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02D9820 (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 */

__int64 __fastcall bAddPgmToPath(struct EPATHOBJ *a1, LONG a2, LONG a3, int a4, int a5, int a6, struct EXFORMOBJ *a7)
{
  int v7; // r9d
  struct _POINTL v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+2Ch] [rbp-2Ch]
  int v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+34h] [rbp-24h]
  int v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+3Ch] [rbp-1Ch]

  v7 = a2 + a4;
  v9.x = a2;
  v9.y = a3;
  v12 = v7 + a6;
  v10 = v7;
  v11 = a3 + a5;
  v13 = a3 + a5 + (_DWORD)a7;
  v14 = a2 + a6;
  v15 = a3 + (_DWORD)a7;
  return EPATHOBJ::bAddPolygon(a1, (struct EXFORMOBJ *)(unsigned int)a7, &v9);
}
