void __fastcall detail::destruct_range<CScopedClipStack::CpuClipStackState>(CShapePtr *this, CShapePtr *a2)
{
  CShapePtr *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CShapePtr::Release(v3);
      v3 = (CShapePtr *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
}
