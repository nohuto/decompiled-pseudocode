__int64 __fastcall CCursorManager::EnsureCursorState(
        CCursorManager *this,
        unsigned __int64 a2,
        struct CCursorState **a3)
{
  __int64 v6; // rdx
  struct CCursorState *v7; // rbx
  CCursorState *v8; // rax
  const char *v9; // r9
  unsigned __int64 v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+28h] BYREF

  v15 = a2;
  v14 = 0LL;
  if ( a2 )
  {
    std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Find_lower_bound<unsigned __int64>(
      (__int64 *)&xmmword_1803E3268,
      (__int64)v11,
      &v15);
    v6 = v12;
    if ( *(_BYTE *)(v12 + 25) || a2 < *(_QWORD *)(v12 + 32) )
      v6 = xmmword_1803E3268;
    if ( v6 == (_QWORD)xmmword_1803E3268 )
    {
      v8 = (CCursorState *)DefaultHeap::AllocClear(0x110uLL);
      if ( v8 )
        v8 = CCursorState::CCursorState(v8);
      wil::com_ptr_t<CCursorState,wil::err_returncode_policy>::operator=((__int64 *)&v14, (__int64)v8);
      v7 = (struct CCursorState *)v14;
      if ( !v14 )
        wil::details::in1diag3::_FailFast_NullAlloc(
          retaddr,
          43LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursormanager.cpp",
          v9);
      v10[0] = a2;
      v10[1] = v14;
      std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Emplace<std::pair<unsigned __int64,CCursorState *>>(
        (__int64 *)&xmmword_1803E3268,
        (__int64)v11,
        v10);
    }
    else
    {
      wil::com_ptr_t<CCursorState,wil::err_returncode_policy>::operator=((__int64 *)&v14, *(_QWORD *)(v6 + 40));
      v7 = (struct CCursorState *)v14;
    }
    v14 = 0LL;
    *a3 = v7;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursormanager.cpp",
      (const char *)0x80070057LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    return 2147942487LL;
  }
}
