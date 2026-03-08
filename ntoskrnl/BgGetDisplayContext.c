/*
 * XREFs of BgGetDisplayContext @ 0x140AE9028
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B1310 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
