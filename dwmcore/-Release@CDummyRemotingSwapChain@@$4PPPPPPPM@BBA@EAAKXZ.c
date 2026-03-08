/*
 * XREFs of ?Release@CDummyRemotingSwapChain@@$4PPPPPPPM@BBA@EAAKXZ @ 0x18011B430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyRemotingSwapChain::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((volatile signed __int32 *)(a1 - *(int *)(a1 - 4) - 272));
}
