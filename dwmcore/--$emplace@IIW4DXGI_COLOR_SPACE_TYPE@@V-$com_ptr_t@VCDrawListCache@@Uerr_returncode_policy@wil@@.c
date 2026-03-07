_QWORD *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,enum DXGI_COLOR_SPACE_TYPE,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        int a5,
        int a6,
        volatile signed __int32 **a7)
{
  __int64 v9; // rdi
  CDrawListCacheSet::ContentEntry *v11; // rax
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rcx

  v9 = 0xAAAAAAAAAAAAAAABuLL * ((*a3 - *a1) >> 3);
  v11 = detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
          a1,
          v9);
  *(_DWORD *)v11 = a4;
  *((_DWORD *)v11 + 1) = a5;
  *((_DWORD *)v11 + 2) = a6;
  v12 = *a7;
  *((_QWORD *)v11 + 2) = *a7;
  if ( v12 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v12 + 2));
  v13 = *a7;
  *a2 = *a1 + 24 * v9;
  if ( v13 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v13);
  return a2;
}
