__int64 __fastcall CProjectedShadow::OnChanged(_QWORD *a1, int a2, _QWORD *a3)
{
  if ( a3 && (!a2 || (unsigned int)(a2 - 5) <= 1) )
  {
    detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(a1 + 32);
    if ( a3 == a1 || a3 == (_QWORD *)a1[10] )
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(a1 + 46);
  }
  return 0LL;
}
