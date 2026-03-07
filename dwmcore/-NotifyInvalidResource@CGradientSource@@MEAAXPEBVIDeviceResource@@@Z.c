void __fastcall CGradientSource::NotifyInvalidResource(unsigned __int64 this, const struct IDeviceResource *a2)
{
  __int64 *v2; // rdi
  __int64 *i; // rbx
  __int64 v6; // rdx
  const struct IDeviceResource *v7; // rax
  __int64 v8; // rcx

  v2 = (__int64 *)(this + 16);
  for ( i = *(__int64 **)(this + 16); i != *(__int64 **)(this + 24); ++i )
  {
    v6 = *i;
    if ( *i )
      v7 = (const struct IDeviceResource *)(*(int *)(*(_QWORD *)(v6 + 16) + 8LL) + v6 + 16);
    else
      v7 = 0LL;
    if ( v7 == a2 )
    {
      v8 = v6 + 16 + *(int *)(*(_QWORD *)(v6 + 16) + 8LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(
        v8,
        this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
      detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        v2,
        ((__int64)i - *v2) >> 3,
        1LL);
      return;
    }
  }
}
