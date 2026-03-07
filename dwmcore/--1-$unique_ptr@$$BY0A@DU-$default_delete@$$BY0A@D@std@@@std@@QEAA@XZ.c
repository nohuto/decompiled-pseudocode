void __fastcall std::unique_ptr<char [0]>::~unique_ptr<char [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
