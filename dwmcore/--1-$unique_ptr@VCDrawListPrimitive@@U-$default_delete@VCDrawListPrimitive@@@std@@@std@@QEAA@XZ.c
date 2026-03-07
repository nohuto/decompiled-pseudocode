void __fastcall std::unique_ptr<CDrawListPrimitive>::~unique_ptr<CDrawListPrimitive>(_QWORD *a1)
{
  if ( *a1 )
    std::default_delete<CDrawListPrimitive>::operator()(a1, *a1);
}
