__int64 __fastcall CLegacySwapChain::EnsureComputeScribbleResources(CLegacySwapChain *this)
{
  CSwapChainBuffer **v1; // rbx
  struct CLegacySwapChain *v2; // r14
  CSwapChainBuffer **v3; // rbp
  int v5; // eax
  unsigned int v6; // esi
  struct CComputeScribbleRenderer **v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CSwapChainBuffer **)*((_QWORD *)this - 23);
  v2 = (CLegacySwapChain *)((char *)this - 432);
  v3 = (CSwapChainBuffer **)*((_QWORD *)this - 22);
  while ( v1 != v3 )
  {
    v5 = CSwapChainBuffer::EnsureComputeScribbleResources(*v1, v2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x460,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    ++v1;
  }
  v7 = (struct CComputeScribbleRenderer **)((char *)this - 80);
  if ( *((_QWORD *)this - 10) )
    return 0LL;
  *v7 = 0LL;
  v8 = CComputeScribbleRenderer::Create(v2, v7);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x466,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
