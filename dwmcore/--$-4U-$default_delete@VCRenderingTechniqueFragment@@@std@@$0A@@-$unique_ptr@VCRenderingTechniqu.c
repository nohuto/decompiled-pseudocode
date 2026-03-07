CRenderingTechniqueFragment **__fastcall std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
        CRenderingTechniqueFragment **a1,
        CRenderingTechniqueFragment **a2)
{
  CRenderingTechniqueFragment *v3; // rax
  CRenderingTechniqueFragment *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v4);
      operator delete(v4, 0x80uLL);
    }
  }
  return a1;
}
