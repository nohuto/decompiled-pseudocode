/*
 * XREFs of BgReleaseSpinLock @ 0x140AEE37C
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B1310 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 */

char BgReleaseSpinLock()
{
  return BgpFwReleaseLock();
}
