void __fastcall CSceneComponent::DehydrateSpectreResources(CSceneComponent *this, struct CSceneNode *a2)
{
  _QWORD *v2; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, __int64); // rbx
  __int64 v8; // rax
  __int64 *v9; // rax
  struct CSceneNode *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (_QWORD *)((char *)this + 64);
  v5 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find<CSceneNode *>(
         (__int64)this + 64,
         (__int64)&v10);
  if ( v5 != *v2 )
  {
    v6 = *((_QWORD *)a2 + 17);
    v7 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL);
    v8 = (*(__int64 (__fastcall **)(CSceneComponent *))(*(_QWORD *)this + 192LL))(this);
    v7(v6, v8);
    v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
           v2,
           v5);
    std::_Deallocate<16,0>(v9, 0x30uLL);
  }
}
