/*
 * XREFs of ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C027B610
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C016A198 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall XFERDCOBJ::ThreadCleanup(XDCOBJ *a1)
{
  XDCOBJ::vUnlock(a1);
}
