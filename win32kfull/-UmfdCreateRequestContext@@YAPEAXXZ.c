/*
 * XREFs of ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C011F1FC
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB490 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     UmfdQueryFontData @ 0x1C011EFA0 (UmfdQueryFontData.c)
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
