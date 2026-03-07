LONGLONG __fastcall CDummyRemotingSwapChain::GetVBlankDuration(CDummyRemotingSwapChain *this)
{
  return g_qpcFrequency.QuadPart * *((unsigned int *)this + 16) / *((unsigned int *)this + 15);
}
