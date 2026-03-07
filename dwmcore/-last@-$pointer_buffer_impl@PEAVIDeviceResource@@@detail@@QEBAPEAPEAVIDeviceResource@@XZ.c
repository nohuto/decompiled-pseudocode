unsigned __int64 __fastcall detail::pointer_buffer_impl<IDeviceResource *>::last(_QWORD *a1)
{
  __int64 v2; // rbx

  v2 = 8 * detail::pointer_buffer_impl<IDeviceResource *>::size(a1);
  return v2 + detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
}
