void __fastcall std::unique_ptr<CComputeScribbleSynchronizer>::~unique_ptr<CComputeScribbleSynchronizer>(
        CComputeScribbleSynchronizer **a1)
{
  CComputeScribbleSynchronizer *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CComputeScribbleSynchronizer::~CComputeScribbleSynchronizer(*a1);
    operator delete(v1);
  }
}
