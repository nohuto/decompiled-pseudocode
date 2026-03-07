void __fastcall CProjectedShadowCaster::EnsureNoInvalidIntermediates(CProjectedShadowCaster *this)
{
  __int64 *v1; // r10
  __int64 *v3; // rax
  __int64 v4; // rdx
  int (__fastcall ***v5)(_QWORD); // rcx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 10);
  v3 = (__int64 *)*v1;
  v6 = (__int64 *)*v1;
  while ( v3 != v1 )
  {
    v4 = v3[10];
    if ( v4 )
    {
      v5 = (int (__fastcall ***)(_QWORD))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 8LL));
      if ( (**v5)(v5) < 0 )
      {
        CProjectedShadowCaster::InvalidateMaskContent(this);
        return;
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>,std::_Iterator_base0>::operator++(&v6);
    v3 = v6;
  }
}
