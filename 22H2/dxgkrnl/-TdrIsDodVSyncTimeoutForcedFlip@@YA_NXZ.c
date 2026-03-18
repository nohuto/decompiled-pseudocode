/*
 * XREFs of ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C030F2F0
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01D38A0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool TdrIsDodVSyncTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceDodVSyncTimeout, 0) != 0;
}
