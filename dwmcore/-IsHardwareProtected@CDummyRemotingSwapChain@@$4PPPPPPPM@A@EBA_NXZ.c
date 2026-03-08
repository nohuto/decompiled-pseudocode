/*
 * XREFs of ?IsHardwareProtected@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011B3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDummyRemotingSwapChain::IsHardwareProtected(__int64 a1)
{
  return CD3DConstantBuffer::IsHardwareProtected((CD3DConstantBuffer *)(a1 - *(int *)(a1 - 4)));
}
