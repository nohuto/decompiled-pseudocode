void __fastcall CSceneMaterial::PreDrawScene(CSceneMaterial *this)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = **((_QWORD **)this + 9);
  v3 = v2;
  while ( v2 != *((_QWORD *)this + 9) )
  {
    if ( *(_QWORD *)(v2 + 40) )
      (*(void (__fastcall **)(CSceneMaterial *))(*(_QWORD *)this + 200LL))(this);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v3);
    v2 = v3;
  }
}
