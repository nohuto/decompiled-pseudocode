void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CSwapChainBuffer>>>(
        CSwapChainBuffer **a1,
        CSwapChainBuffer **a2)
{
  CSwapChainBuffer **v3; // rbx
  CSwapChainBuffer *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        CSwapChainBuffer::~CSwapChainBuffer(*v3);
        operator delete(v4, 0xB0uLL);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
