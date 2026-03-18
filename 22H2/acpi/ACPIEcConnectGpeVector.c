/*
 * XREFs of ACPIEcConnectGpeVector @ 0x1C00833C8
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C00251D0 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcConnectInterrupt @ 0x1C00834D0 (ACPIEcConnectInterrupt.c)
 * Callees:
 *     ACPIVectorConnect @ 0x1C0043E60 (ACPIVectorConnect.c)
 */

__int64 __fastcall ACPIEcConnectGpeVector(__int64 a1)
{
  return ACPIVectorConnect(0LL, *(_DWORD *)(a1 + 48), 1, 0, (__int64)ACPIEcGpeServiceRoutine, a1, (char **)(a1 + 72));
}
