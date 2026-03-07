void __fastcall CLegacySwapChain::HandleTransientDirtyRegion(
        CLegacySwapChain *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  CSwapChainBuffer::AddTransientRegion(
    *(CSwapChainBuffer **)(*((_QWORD *)this - 23) + 8LL * *((unsigned int *)this - 40)),
    a2);
}
