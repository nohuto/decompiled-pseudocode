/*
 * XREFs of BgGetDisplayContext @ 0x140AED028
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B5FA0 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
