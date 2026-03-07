__int64 __fastcall CPreComputeContext::UpdateBVIForVisual(
        __int64 a1,
        struct CVisual *a2,
        float *a3,
        char a4,
        __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r9
  int updated; // eax
  unsigned int v11; // ebx
  char *v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-78h]
  __int64 v16[3]; // [rsp+30h] [rbp-68h] BYREF
  char v17; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a3) )
    return 0LL;
  CVisualTreePath::CVisualTreePath((CVisualTreePath *)v16, *(const struct CVisualTree **)(*(_QWORD *)v8 + 432LL));
  LOBYTE(v9) = a4;
  updated = CVisual::CreateOrUpdateBVI(a2, (struct CVisualTreePath *)v16, (__int64)a3, v9, a5);
  v11 = updated;
  if ( updated >= 0 )
  {
    v12 = (char *)v16[0];
    v13 = (v16[1] - v16[0]) >> 4;
    if ( v13 )
    {
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        v16,
        0LL,
        v13);
      v12 = (char *)v16[0];
    }
    v16[0] = 0LL;
    if ( v12 == &v17 )
      v12 = 0LL;
    operator delete(v12);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x883,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)updated,
    v15);
  detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::~vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>(v16);
  return v11;
}
