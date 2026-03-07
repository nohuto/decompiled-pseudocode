void **__fastcall std::unique_ptr<CMILMatrix>::operator=<std::default_delete<CMILMatrix>,0>(void **a1, void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      operator delete(v4, 0x44uLL);
  }
  return a1;
}
