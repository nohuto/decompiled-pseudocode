void __fastcall CTreeData::SetBackdropVisualImage(
        CTreeData *this,
        const struct CVisualTreePath *a2,
        struct CBackdropVisualImage *a3)
{
  __int64 *v3; // r14
  CResource **i; // rbx
  char *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rbp
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  void **v15; // rbx
  void **v16; // rax
  __int64 v17; // rdi
  char *v18; // [rsp+50h] [rbp+8h] BYREF
  char *v19; // [rsp+68h] [rbp+20h] BYREF

  v3 = (__int64 *)((char *)this + 168);
  for ( i = (CResource **)*((_QWORD *)this + 21); ; ++i )
  {
    if ( i == (CResource **)v3[1] )
    {
      wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>(
        &v18,
        a3);
      v8 = v18;
      *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                   v3,
                   (v3[1] - *v3) >> 3) = v8;
      *((_QWORD *)a3 + 248) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 16LL) + 496LL);
      v9 = *v3;
      if ( ((v3[1] - *v3) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 16LL) + 496LL);
        while ( v9 != *((_QWORD *)this + 22) )
        {
          v11 = *(_QWORD *)v9;
          if ( (unsigned __int64)(v10 - *(_QWORD *)(*(_QWORD *)v9 + 1984LL)) > 0xA )
          {
            v15 = (void **)DwmDbg::DbgString::DbgString(&v18, word_180338FC0);
            v16 = (void **)DwmDbg::DbgString::DbgString(&v19, "BVI-StaleDelete");
            CBackdropVisualImage::LogEtwEvent(v11, v16, v15);
            v17 = (v9 - *v3) >> 3;
            detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
              v3,
              v17,
              1LL);
            v9 = *v3 + 8 * v17;
          }
          else
          {
            v9 += 8LL;
          }
        }
      }
      return;
    }
    v12 = *(_QWORD **)a2;
    v13 = *((_QWORD *)*i + 224);
    if ( (((*((_QWORD *)a2 + 1) - *(_QWORD *)a2) ^ (*((_QWORD *)*i + 225) - v13)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      break;
LABEL_15:
    ;
  }
  v14 = v13 - (_QWORD)v12;
  while ( (_QWORD *)((char *)v12 + v14) != *((_QWORD **)*i + 225) )
  {
    if ( *(_QWORD *)((char *)v12 + v14) != *v12 || *(_QWORD *)((char *)v12 + v14 + 8) != v12[1] )
      goto LABEL_15;
    v12 += 2;
  }
  wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::operator=(i, (__int64)a3);
  *((_QWORD *)*i + 248) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 16LL) + 496LL);
}
