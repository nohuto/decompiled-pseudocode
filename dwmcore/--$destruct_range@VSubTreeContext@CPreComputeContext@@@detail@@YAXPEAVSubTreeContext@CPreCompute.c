void __fastcall detail::destruct_range<CPreComputeContext::SubTreeContext>(
        CPreComputeContext::SubTreeContext *this,
        CPreComputeContext::SubTreeContext *a2)
{
  CPreComputeContext::SubTreeContext *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CPreComputeContext::SubTreeContext::~SubTreeContext(v3);
      v3 = (CPreComputeContext::SubTreeContext *)((char *)v3 + 456);
    }
    while ( v3 != a2 );
  }
}
