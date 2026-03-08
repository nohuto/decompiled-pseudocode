/*
 * XREFs of ?TdrIsTimeoutForcedFlip@@YA_NXZ @ 0x1C030A710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool TdrIsTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceTimeout, 0) != 0;
}
