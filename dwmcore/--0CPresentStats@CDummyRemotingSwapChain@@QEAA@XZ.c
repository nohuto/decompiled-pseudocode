CDummyRemotingSwapChain::CPresentStats *__fastcall CDummyRemotingSwapChain::CPresentStats::CPresentStats(
        CDummyRemotingSwapChain::CPresentStats *this)
{
  CDummyRemotingSwapChain::CPresentStats *result; // rax

  *(_QWORD *)this = 0LL;
  result = this;
  *((_BYTE *)this + 56) = 1;
  return result;
}
