struct CD3DDevice *__fastcall CDummyRemotingSwapChain::GetDevice(CDummyRemotingSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 27);
}
