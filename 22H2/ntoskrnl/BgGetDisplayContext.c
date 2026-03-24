/*
 * XREFs of BgGetDisplayContext @ 0x1409F1028
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CC600 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
