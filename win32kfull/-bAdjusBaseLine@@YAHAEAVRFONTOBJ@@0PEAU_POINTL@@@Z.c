/*
 * XREFs of ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C02A1BC4
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C02A2214 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02DBEC4 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bAdjusBaseLine(struct RFONTOBJ *a1, struct RFONTOBJ *a2, struct _POINTL *a3)
{
  __int64 v3; // r10
  unsigned int v4; // r9d
  _DWORD *v5; // r11
  LONG v6; // edx
  LONG v7; // ecx

  v3 = *(_QWORD *)a2;
  v4 = 0;
  v5 = *(_DWORD **)a1;
  if ( v5[79] - v5[80] == *(_DWORD *)(*(_QWORD *)a2 + 316LL) - *(_DWORD *)(*(_QWORD *)a2 + 320LL) )
  {
    v6 = (v5[82] - *(_DWORD *)(v3 + 328)) >> 4;
    v7 = (v5[83] - *(_DWORD *)(v3 + 332)) >> 4;
    a3->x = v6;
    a3->y = v7;
    if ( v7 || v6 )
      return 1;
  }
  return v4;
}
