void __fastcall CSceneComponent::AddDirtySceneObject(CSceneComponent *this, struct CSceneObject *a2)
{
  __int64 v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v3 = **((_QWORD **)this + 8);
  v4 = v3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    CSceneWorld::AddDirtySceneObject(*(CSceneWorld **)(*(_QWORD *)(v3 + 32) + 120LL), a2);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v4);
    v3 = v4;
  }
}
