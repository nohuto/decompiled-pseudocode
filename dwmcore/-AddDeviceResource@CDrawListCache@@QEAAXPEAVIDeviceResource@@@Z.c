void __fastcall CDrawListCache::AddDeviceResource(CDrawListCache *this, struct IDeviceResource *a2)
{
  _QWORD *v2; // rsi
  __int64 v5; // rdi
  struct IDeviceResource **i; // rbx
  char *v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // rax

  v2 = (_QWORD *)((char *)this + 56);
  v5 = detail::pointer_buffer_impl<IDeviceResource *>::last((char *)this + 56);
  for ( i = (struct IDeviceResource **)detail::pointer_buffer_impl<IDeviceResource *>::first(v2);
        i != (struct IDeviceResource **)v5 && *i != a2;
        ++i )
  {
    ;
  }
  if ( i == (struct IDeviceResource **)detail::pointer_buffer_impl<IDeviceResource *>::last(v2) )
  {
    v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
    (*(void (__fastcall **)(struct IDeviceResource *, unsigned __int64))(*(_QWORD *)a2 + 40LL))(
      a2,
      ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    v8 = detail::pointer_buffer_impl<IDeviceResource *>::last(v2);
    v9 = detail::pointer_buffer_impl<IDeviceResource *>::first(v2);
    *(_QWORD *)detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::reserve_region(
                 v2,
                 (__int64)(v8 - v9) >> 3) = a2;
    detail::pointer_buffer_impl<IDeviceResource *>::first(v2);
  }
}
