/*
 * XREFs of ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C00F799C
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F7180 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F77E8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdGetServerPort(unsigned int a1)
{
  if ( a1 > 3 )
    return 0LL;
  else
    return g_pUmfdServerPort[a1];
}
