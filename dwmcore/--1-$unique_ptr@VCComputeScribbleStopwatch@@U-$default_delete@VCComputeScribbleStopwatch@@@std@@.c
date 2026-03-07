void __fastcall std::unique_ptr<CComputeScribbleStopwatch>::~unique_ptr<CComputeScribbleStopwatch>(
        CComputeScribbleStopwatch **a1)
{
  CComputeScribbleStopwatch *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CComputeScribbleStopwatch::~CComputeScribbleStopwatch(*a1);
    operator delete(v1);
  }
}
