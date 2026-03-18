/*
 * XREFs of ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C0279790
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015D9B0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall XFERDCOBJ::ThreadCleanup(XDCOBJ *a1)
{
  XDCOBJ::vUnlock(a1);
}
