unsigned __int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::last(_QWORD *a1)
{
  __int64 v2; // rbx

  v2 = 8 * detail::pointer_buffer_impl<CDrawListEntry *>::size(a1);
  return v2 + detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
}
