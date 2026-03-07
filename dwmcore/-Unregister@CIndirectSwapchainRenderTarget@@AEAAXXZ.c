void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  _QWORD *v2; // rsi
  char *v3; // r14
  __int64 *j; // rbx
  __int64 v5; // rcx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *v8; // rcx
  _QWORD *v9; // rbx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  COffScreenRenderTarget::ReleaseRenderTargets(this);
  v2 = (_QWORD *)((char *)this + 1936);
  if ( *((_QWORD *)this + 243) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v11, &v10);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(*(_QWORD *)*v2 + 64LL))(*v2, v10, v11);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 243) + 16LL))(*((_QWORD *)this + 243));
    *((_QWORD *)this + 243) = 0LL;
  }
  v3 = (char *)this + 1880;
  j = (__int64 *)**((_QWORD **)this + 235);
  while ( !*((_BYTE *)j + 25) )
  {
    v5 = j[5] + 8 + *(int *)(*(_QWORD *)(j[5] + 8) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(
      v5,
      ((unsigned __int64)this + 1872) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v8 = *v6;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
  v9 = *(_QWORD **)v3;
  std::_Tree_val<std::_Tree_simple_types<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>,void *>>>(
    (__int64)this + 1880,
    (__int64)this + 1880,
    *(_QWORD *)(*(_QWORD *)v3 + 8LL));
  v9[1] = v9;
  *v9 = v9;
  v9[2] = v9;
  *((_QWORD *)this + 236) = 0LL;
  if ( *v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    *v2 = 0LL;
  }
  *((_BYTE *)this + 1756) = 0;
  *((_WORD *)this + 964) = 0;
  *((_BYTE *)this + 1930) = 0;
  *((_DWORD *)this + 480) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1896, 1u);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 216LL), this);
}
