/*
 * XREFs of IsDwmActive @ 0x1C0022920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsDwmActive()
{
  return g_pDwmState != 0LL;
}
