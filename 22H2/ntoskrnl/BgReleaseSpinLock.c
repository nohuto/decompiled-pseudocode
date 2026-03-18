/*
 * XREFs of BgReleaseSpinLock @ 0x140AF237C
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B5FA0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 */

char BgReleaseSpinLock()
{
  return BgpFwReleaseLock();
}
