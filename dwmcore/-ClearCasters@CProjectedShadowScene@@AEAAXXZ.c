void __fastcall CProjectedShadowScene::ClearCasters(CProjectedShadowScene *this)
{
  CProjectedShadowScene **v2; // rcx
  _QWORD *v3; // r14
  _QWORD *i; // rbx
  __int64 v5; // rsi
  CProjectedShadowScene **v6; // r8
  CProjectedShadowScene **v7; // rdx

  CProjectedShadowScene::ClearShadows(this, 0);
  v3 = (_QWORD *)*((_QWORD *)this + 8);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = i[2];
    v6 = *(CProjectedShadowScene ***)(v5 + 104);
    v2 = *(CProjectedShadowScene ***)(v5 + 96);
    if ( v2 != v6 )
    {
      while ( 1 )
      {
        v7 = v2 + 1;
        if ( *v2 == this )
          break;
        ++v2;
        if ( v7 == v6 )
          goto LABEL_6;
      }
      memmove_0(v2, v7, (char *)v6 - (char *)v7);
      *(_QWORD *)(v5 + 104) -= 8LL;
    }
LABEL_6:
    ;
  }
  std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
    (__int64)v2,
    *((_QWORD *)this + 8));
  **((_QWORD **)this + 8) = *((_QWORD *)this + 8);
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) = *((_QWORD *)this + 8);
  *((_QWORD *)this + 9) = 0LL;
}
