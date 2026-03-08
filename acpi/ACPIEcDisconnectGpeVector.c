/*
 * XREFs of ACPIEcDisconnectGpeVector @ 0x1C00834E8
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C00251B0 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcDisconnectInterrupt @ 0x1C0083564 (ACPIEcDisconnectInterrupt.c)
 * Callees:
 *     ACPIVectorDisconnect @ 0x1C0044040 (ACPIVectorDisconnect.c)
 */

__int64 __fastcall ACPIEcDisconnectGpeVector(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)(a1 + 72);
  if ( !v2 )
    return 0LL;
  result = ACPIVectorDisconnect(v2);
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}
