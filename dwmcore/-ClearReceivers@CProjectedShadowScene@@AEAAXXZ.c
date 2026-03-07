void __fastcall CProjectedShadowScene::ClearReceivers(CProjectedShadowScene *this)
{
  char *v2; // rdi
  _QWORD *v3; // r14
  _QWORD *i; // rbx
  __int64 v5; // rsi
  CProjectedShadowScene **v6; // r8
  CProjectedShadowScene **v7; // rcx
  CProjectedShadowScene **v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  char v13; // [rsp+20h] [rbp-18h] BYREF

  CProjectedShadowScene::ClearShadows(this, 0);
  v2 = (char *)this + 80;
  v3 = (_QWORD *)*((_QWORD *)this + 10);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = i[2];
    v6 = *(CProjectedShadowScene ***)(v5 + 80);
    v7 = *(CProjectedShadowScene ***)(v5 + 72);
    if ( v7 != v6 )
    {
      while ( 1 )
      {
        v8 = v7 + 1;
        if ( *v7 == this )
          break;
        ++v7;
        if ( v8 == v6 )
          goto LABEL_6;
      }
      memmove_0(v7, v8, (char *)v6 - (char *)v8);
      *(_QWORD *)(v5 + 80) -= 8LL;
    }
LABEL_6:
    ;
  }
  v10 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x78uLL);
  *v10 = v10;
  v10[1] = v10;
  if ( v2 != &v13 )
  {
    v11 = *(_QWORD **)v2;
    *((_QWORD *)this + 11) = 0LL;
    *(_QWORD *)v2 = v10;
    v10 = v11;
  }
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v9,
    v10);
  *v10 = v10;
  v10[1] = v10;
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v12,
    v10);
  std::_Deallocate<16,0>(v10, 120LL);
}
