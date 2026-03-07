__int64 __fastcall CSceneMetallicRoughnessMaterial::OnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && (a3 == *(_QWORD *)(a1 + 168) || a3 == *(_QWORD *)(a1 + 176)) )
  {
    v6 = **(_QWORD **)(a1 + 72);
    v8 = v6;
    while ( v6 != *(_QWORD *)(a1 + 72) )
    {
      CSceneComponent::AddDirtySceneObject(*(CSceneComponent **)(v6 + 32), (struct CSceneObject *)a1);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v8);
      v6 = v8;
    }
  }
  return CScenePbrMaterial::OnChanged(a1, a2, a3);
}
