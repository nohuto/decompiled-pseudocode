CPreComputeContext **__fastcall std::make_unique<CPreComputeContext,,0>(CPreComputeContext **a1)
{
  void *v2; // rdi
  CPreComputeContext *v3; // rax

  v2 = operator new(0x7B0uLL);
  v3 = 0LL;
  if ( v2 )
  {
    memset_0(v2, 0, 0x7B0uLL);
    v3 = CPreComputeContext::CPreComputeContext((CPreComputeContext *)v2);
  }
  *a1 = v3;
  return a1;
}
