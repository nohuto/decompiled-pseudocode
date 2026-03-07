CVisualTreePath **__fastcall std::unique_ptr<CVisualTreePath>::operator=<std::default_delete<CVisualTreePath>,0>(
        CVisualTreePath **a1,
        CVisualTreePath **a2)
{
  CVisualTreePath *v3; // rax
  CVisualTreePath *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      CVisualTreePath::`scalar deleting destructor'(v4, (unsigned int)a2);
  }
  return a1;
}
