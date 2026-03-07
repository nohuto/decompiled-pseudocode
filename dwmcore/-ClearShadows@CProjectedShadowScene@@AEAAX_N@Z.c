void __fastcall CProjectedShadowScene::ClearShadows(CProjectedShadowScene *this, char a2)
{
  _QWORD **v3; // rdi
  _QWORD *i; // rbx

  if ( !a2 )
    CProjectedShadowScene::RequestRedrawAll(this);
  v3 = (_QWORD **)*((_QWORD *)this + 10);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(i + 3);
}
