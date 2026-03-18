/*
 * XREFs of ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C01211CC
 * Callers:
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1C0011080 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *UmfdCreateRequestContext(void)
{
  _QWORD *result; // rax

  result = EngAllocMem(0, 8u, 0x71724446u);
  if ( result )
    *result = 0LL;
  return result;
}
