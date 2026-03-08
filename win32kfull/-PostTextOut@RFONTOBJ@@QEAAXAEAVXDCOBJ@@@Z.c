/*
 * XREFs of ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B88AC
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C02A2214 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::PostTextOut(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v3; // rbx
  __int64 i; // rdx
  int v5; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8080) == 0x80 && !*(_DWORD *)(*(_QWORD *)this + 92LL) )
  {
    v3 = *(_QWORD *)(SGDGetSessionState(this) + 32);
    v6 = *(_QWORD *)(v3 + 23400);
    GreAcquireSemaphore(v6);
    for ( i = *(_QWORD *)(v3 + 23392); i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 80LL) )
      {
        v5 = *(_DWORD *)(i + 12);
        if ( v5 )
          *(_DWORD *)(i + 12) = v5 - 1;
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v6);
  }
}
