void __fastcall CProjectedShadowScene::DiscardCachesForCaster(
        CProjectedShadowScene *this,
        struct CProjectedShadowCaster *a2)
{
  __int64 v2; // rcx
  _QWORD **v3; // rdi
  _QWORD *i; // rbx
  struct CProjectedShadowCaster *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  *((_QWORD *)CProjectedShadowScene::FindCasterEntry(this, a2) + 1) = 0LL;
  v3 = *(_QWORD ***)(v2 + 80);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
      i + 3,
      &v5);
}
