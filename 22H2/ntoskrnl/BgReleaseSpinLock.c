/*
 * XREFs of BgReleaseSpinLock @ 0x1409F4B28
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CC600 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14039BBA8 (BgpFwReleaseLock.c)
 */

void BgReleaseSpinLock()
{
  BgpFwReleaseLock();
}
