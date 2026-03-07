__int64 __fastcall detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::size(
        _QWORD *a1)
{
  unsigned __int64 v2; // rbx

  v2 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
  return (__int64)(detail::pointer_buffer_impl<IDeviceResource *>::last(a1) - v2) >> 3;
}
