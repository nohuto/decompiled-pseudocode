void __fastcall CPreComputeContext::AddVisualToBVIPreRenderList(CPreComputeContext *this, struct CVisual *a2)
{
  const struct CVisualTree *v3; // rbx
  const struct CVisualTreePath *v4; // rax
  struct CBackdropVisualImage *BackdropVisualImage; // rax
  char *v6; // rcx
  struct CBackdropVisualImage *v7; // rdi
  struct CTreeData *TreeData; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-58h] BYREF
  char v10; // [rsp+38h] [rbp-40h] BYREF

  v3 = *(const struct CVisualTree **)(*(_QWORD *)this + 432LL);
  v4 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)v9, v3);
  BackdropVisualImage = CVisual::GetBackdropVisualImage(a2, v4);
  v6 = (char *)v9[0];
  v7 = BackdropVisualImage;
  if ( (__int64)(v9[1] - v9[0]) >> 4 )
  {
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      v9,
      0LL);
    v6 = (char *)v9[0];
  }
  v9[0] = 0LL;
  if ( v6 == &v10 )
    v6 = 0LL;
  operator delete(v6);
  if ( v7 )
  {
    if ( *((_QWORD *)v7 + 18) != *((_QWORD *)v3 + 8) )
    {
      TreeData = CVisual::FindTreeData(a2, v3);
      if ( TreeData )
      {
        if ( (__int64)(*((_QWORD *)TreeData + 22) - *((_QWORD *)TreeData + 21)) >> 3 )
          detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
            (char *)TreeData + 168,
            0LL);
      }
    }
  }
  *(_QWORD *)detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::reserve_region(
               (char *)v3 + 5480,
               (__int64)(*((_QWORD *)v3 + 686) - *((_QWORD *)v3 + 685)) >> 3) = a2;
}
