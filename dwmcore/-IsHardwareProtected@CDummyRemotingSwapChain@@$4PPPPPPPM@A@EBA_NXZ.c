bool __fastcall CDummyRemotingSwapChain::IsHardwareProtected(__int64 a1)
{
  return CD3DConstantBuffer::IsHardwareProtected((CD3DConstantBuffer *)(a1 - *(int *)(a1 - 4)));
}
