void __fastcall std::unique_ptr<CComputeScribbleScheduler>::~unique_ptr<CComputeScribbleScheduler>(
        CComputeScribbleScheduler **a1)
{
  CComputeScribbleScheduler *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CComputeScribbleScheduler::~CComputeScribbleScheduler(*a1);
    operator delete(v1);
  }
}
