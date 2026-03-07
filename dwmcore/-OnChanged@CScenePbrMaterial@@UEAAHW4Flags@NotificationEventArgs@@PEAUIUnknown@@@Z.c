__int64 __fastcall CScenePbrMaterial::OnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && (a3 == *(_QWORD *)(a1 + 120) || a3 == *(_QWORD *)(a1 + 128) || a3 == *(_QWORD *)(a1 + 136)) )
  {
    v4 = **(_QWORD **)(a1 + 72);
    v6 = v4;
    while ( v4 != *(_QWORD *)(a1 + 72) )
    {
      CSceneComponent::AddDirtySceneObject(*(CSceneComponent **)(v4 + 32), (struct CSceneObject *)a1);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v6);
      v4 = v6;
    }
  }
  return 1LL;
}
