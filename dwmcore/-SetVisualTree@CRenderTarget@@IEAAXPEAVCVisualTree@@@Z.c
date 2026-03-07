void __fastcall CRenderTarget::SetVisualTree(CRenderTarget *this, struct CVisualTree *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi

  if ( a2 != *((struct CVisualTree **)this + 12) )
  {
    CRenderTarget::ReleaseVisualTree(this);
    v4 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = *((_QWORD *)this + 12);
    if ( v5 )
    {
      *(_QWORD *)detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   v5 + 4536,
                   (__int64)(*(_QWORD *)(v5 + 4544) - *(_QWORD *)(v5 + 4536)) >> 3) = ((unsigned __int64)this + 72) & -(__int64)(this != 0LL);
      *(_BYTE *)(v5 + 4712) = 1;
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(
        (char *)this + 88,
        *(_QWORD *)(*((_QWORD *)this + 12) + 64LL));
    }
    *((_BYTE *)this + 141) = 1;
  }
}
